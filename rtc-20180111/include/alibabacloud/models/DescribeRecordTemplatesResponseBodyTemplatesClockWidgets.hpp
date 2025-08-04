// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATESCLOCKWIDGETS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDTEMPLATESRESPONSEBODYTEMPLATESCLOCKWIDGETS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRecordTemplatesResponseBodyTemplatesClockWidgets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& obj) { 
      DARABONBA_PTR_TO_JSON(FontColor, fontColor_);
      DARABONBA_PTR_TO_JSON(FontSize, fontSize_);
      DARABONBA_PTR_TO_JSON(FontType, fontType_);
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
      DARABONBA_PTR_TO_JSON(ZOrder, ZOrder_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& obj) { 
      DARABONBA_PTR_FROM_JSON(FontColor, fontColor_);
      DARABONBA_PTR_FROM_JSON(FontSize, fontSize_);
      DARABONBA_PTR_FROM_JSON(FontType, fontType_);
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
      DARABONBA_PTR_FROM_JSON(ZOrder, ZOrder_);
    };
    DescribeRecordTemplatesResponseBodyTemplatesClockWidgets() = default ;
    DescribeRecordTemplatesResponseBodyTemplatesClockWidgets(const DescribeRecordTemplatesResponseBodyTemplatesClockWidgets &) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesClockWidgets(DescribeRecordTemplatesResponseBodyTemplatesClockWidgets &&) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesClockWidgets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordTemplatesResponseBodyTemplatesClockWidgets() = default ;
    DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& operator=(const DescribeRecordTemplatesResponseBodyTemplatesClockWidgets &) = default ;
    DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& operator=(DescribeRecordTemplatesResponseBodyTemplatesClockWidgets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fontColor_ != nullptr
        && this->fontSize_ != nullptr && this->fontType_ != nullptr && this->x_ != nullptr && this->y_ != nullptr && this->ZOrder_ != nullptr; };
    // fontColor Field Functions 
    bool hasFontColor() const { return this->fontColor_ != nullptr;};
    void deleteFontColor() { this->fontColor_ = nullptr;};
    inline int32_t fontColor() const { DARABONBA_PTR_GET_DEFAULT(fontColor_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& setFontColor(int32_t fontColor) { DARABONBA_PTR_SET_VALUE(fontColor_, fontColor) };


    // fontSize Field Functions 
    bool hasFontSize() const { return this->fontSize_ != nullptr;};
    void deleteFontSize() { this->fontSize_ = nullptr;};
    inline int32_t fontSize() const { DARABONBA_PTR_GET_DEFAULT(fontSize_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& setFontSize(int32_t fontSize) { DARABONBA_PTR_SET_VALUE(fontSize_, fontSize) };


    // fontType Field Functions 
    bool hasFontType() const { return this->fontType_ != nullptr;};
    void deleteFontType() { this->fontType_ = nullptr;};
    inline int32_t fontType() const { DARABONBA_PTR_GET_DEFAULT(fontType_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& setFontType(int32_t fontType) { DARABONBA_PTR_SET_VALUE(fontType_, fontType) };


    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline float x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& setX(float x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline float y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0.0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& setY(float y) { DARABONBA_PTR_SET_VALUE(y_, y) };


    // ZOrder Field Functions 
    bool hasZOrder() const { return this->ZOrder_ != nullptr;};
    void deleteZOrder() { this->ZOrder_ = nullptr;};
    inline int32_t ZOrder() const { DARABONBA_PTR_GET_DEFAULT(ZOrder_, 0) };
    inline DescribeRecordTemplatesResponseBodyTemplatesClockWidgets& setZOrder(int32_t ZOrder) { DARABONBA_PTR_SET_VALUE(ZOrder_, ZOrder) };


  protected:
    std::shared_ptr<int32_t> fontColor_ = nullptr;
    std::shared_ptr<int32_t> fontSize_ = nullptr;
    std::shared_ptr<int32_t> fontType_ = nullptr;
    std::shared_ptr<float> x_ = nullptr;
    std::shared_ptr<float> y_ = nullptr;
    std::shared_ptr<int32_t> ZOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
