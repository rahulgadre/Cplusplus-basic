#ifndef BOX_H
#define BOX_H


class Box
{
    private:
        double m_height; //!< Member variable "m_height"
        double m_width; //!< Member variable "m_width"
        double m_length; //!< Member variable "m_length"

    public:
        /** Default constructor */
        Box();

        /** Initializing constructor */
        Box(double height, double width, double length);

        /** Default destructor */
        virtual ~Box();

        /** Access m_height
         * \return The current value of m_height
         */
        double getHeight();

        /** Set m_height
         * \param val New value to set
         */
        void setHeight(double val);

        /** Access m_width
         * \return The current value of m_width
         */
        double getWidth();

        /** Set m_width
         * \param val New value to set
         */
        void setWidth(double val);

        /** Access m_length
         * \return The current value of m_length
         */
        double getLength();

        /** Set m_length
         * \param val New value to set
         */
        void setLength(double val);

        /** Access volume (derived attribute)
         * \return The volume of the box
         */
        double getVolume();

        void display();
};

#endif // BOX_H
