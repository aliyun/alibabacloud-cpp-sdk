// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELCONTACTBYNUMBERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELCONTACTBYNUMBERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelContactByNumberShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelContactByNumberShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelContactByNumberShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    GetHotelContactByNumberShrinkRequest() = default ;
    GetHotelContactByNumberShrinkRequest(const GetHotelContactByNumberShrinkRequest &) = default ;
    GetHotelContactByNumberShrinkRequest(GetHotelContactByNumberShrinkRequest &&) = default ;
    GetHotelContactByNumberShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelContactByNumberShrinkRequest() = default ;
    GetHotelContactByNumberShrinkRequest& operator=(const GetHotelContactByNumberShrinkRequest &) = default ;
    GetHotelContactByNumberShrinkRequest& operator=(GetHotelContactByNumberShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->number_ == nullptr
        && this->userInfoShrink_ == nullptr; };
    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline GetHotelContactByNumberShrinkRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline GetHotelContactByNumberShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> number_ {};
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
