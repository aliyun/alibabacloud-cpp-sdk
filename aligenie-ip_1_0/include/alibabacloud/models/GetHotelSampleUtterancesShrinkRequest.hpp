// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELSAMPLEUTTERANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELSAMPLEUTTERANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelSampleUtterancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelSampleUtterancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelSampleUtterancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    GetHotelSampleUtterancesShrinkRequest() = default ;
    GetHotelSampleUtterancesShrinkRequest(const GetHotelSampleUtterancesShrinkRequest &) = default ;
    GetHotelSampleUtterancesShrinkRequest(GetHotelSampleUtterancesShrinkRequest &&) = default ;
    GetHotelSampleUtterancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelSampleUtterancesShrinkRequest() = default ;
    GetHotelSampleUtterancesShrinkRequest& operator=(const GetHotelSampleUtterancesShrinkRequest &) = default ;
    GetHotelSampleUtterancesShrinkRequest& operator=(GetHotelSampleUtterancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userInfoShrink_ == nullptr; };
    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline GetHotelSampleUtterancesShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
