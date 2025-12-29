// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELNOTICEV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELNOTICEV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelNoticeV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelNoticeV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelNoticeV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    GetHotelNoticeV2ShrinkRequest() = default ;
    GetHotelNoticeV2ShrinkRequest(const GetHotelNoticeV2ShrinkRequest &) = default ;
    GetHotelNoticeV2ShrinkRequest(GetHotelNoticeV2ShrinkRequest &&) = default ;
    GetHotelNoticeV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelNoticeV2ShrinkRequest() = default ;
    GetHotelNoticeV2ShrinkRequest& operator=(const GetHotelNoticeV2ShrinkRequest &) = default ;
    GetHotelNoticeV2ShrinkRequest& operator=(GetHotelNoticeV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userInfoShrink_ == nullptr; };
    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline GetHotelNoticeV2ShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
