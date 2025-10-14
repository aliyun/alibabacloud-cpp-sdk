// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRANGERESPONSEBODYBACKGROUNDCOLORS_HPP_
#define ALIBABACLOUD_MODELS_GETRANGERESPONSEBODYBACKGROUNDCOLORS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetRangeResponseBodyBackgroundColors : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRangeResponseBodyBackgroundColors& obj) { 
      DARABONBA_PTR_TO_JSON(Red, red_);
      DARABONBA_PTR_TO_JSON(Green, green_);
      DARABONBA_PTR_TO_JSON(Blue, blue_);
      DARABONBA_PTR_TO_JSON(HexString, hexString_);
    };
    friend void from_json(const Darabonba::Json& j, GetRangeResponseBodyBackgroundColors& obj) { 
      DARABONBA_PTR_FROM_JSON(Red, red_);
      DARABONBA_PTR_FROM_JSON(Green, green_);
      DARABONBA_PTR_FROM_JSON(Blue, blue_);
      DARABONBA_PTR_FROM_JSON(HexString, hexString_);
    };
    GetRangeResponseBodyBackgroundColors() = default ;
    GetRangeResponseBodyBackgroundColors(const GetRangeResponseBodyBackgroundColors &) = default ;
    GetRangeResponseBodyBackgroundColors(GetRangeResponseBodyBackgroundColors &&) = default ;
    GetRangeResponseBodyBackgroundColors(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRangeResponseBodyBackgroundColors() = default ;
    GetRangeResponseBodyBackgroundColors& operator=(const GetRangeResponseBodyBackgroundColors &) = default ;
    GetRangeResponseBodyBackgroundColors& operator=(GetRangeResponseBodyBackgroundColors &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->red_ == nullptr
        && return this->green_ == nullptr && return this->blue_ == nullptr && return this->hexString_ == nullptr; };
    // red Field Functions 
    bool hasRed() const { return this->red_ != nullptr;};
    void deleteRed() { this->red_ = nullptr;};
    inline int32_t red() const { DARABONBA_PTR_GET_DEFAULT(red_, 0) };
    inline GetRangeResponseBodyBackgroundColors& setRed(int32_t red) { DARABONBA_PTR_SET_VALUE(red_, red) };


    // green Field Functions 
    bool hasGreen() const { return this->green_ != nullptr;};
    void deleteGreen() { this->green_ = nullptr;};
    inline int32_t green() const { DARABONBA_PTR_GET_DEFAULT(green_, 0) };
    inline GetRangeResponseBodyBackgroundColors& setGreen(int32_t green) { DARABONBA_PTR_SET_VALUE(green_, green) };


    // blue Field Functions 
    bool hasBlue() const { return this->blue_ != nullptr;};
    void deleteBlue() { this->blue_ = nullptr;};
    inline int32_t blue() const { DARABONBA_PTR_GET_DEFAULT(blue_, 0) };
    inline GetRangeResponseBodyBackgroundColors& setBlue(int32_t blue) { DARABONBA_PTR_SET_VALUE(blue_, blue) };


    // hexString Field Functions 
    bool hasHexString() const { return this->hexString_ != nullptr;};
    void deleteHexString() { this->hexString_ = nullptr;};
    inline string hexString() const { DARABONBA_PTR_GET_DEFAULT(hexString_, "") };
    inline GetRangeResponseBodyBackgroundColors& setHexString(string hexString) { DARABONBA_PTR_SET_VALUE(hexString_, hexString) };


  protected:
    // red
    std::shared_ptr<int32_t> red_ = nullptr;
    // green
    std::shared_ptr<int32_t> green_ = nullptr;
    // blue
    std::shared_ptr<int32_t> blue_ = nullptr;
    // hexString
    std::shared_ptr<string> hexString_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
