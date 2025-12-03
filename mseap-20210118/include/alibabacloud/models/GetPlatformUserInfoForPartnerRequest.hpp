// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLATFORMUSERINFOFORPARTNERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLATFORMUSERINFOFORPARTNERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GetPlatformUserInfoForPartnerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPlatformUserInfoForPartnerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPlatformUserInfoForPartnerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GetPlatformUserInfoForPartnerRequest() = default ;
    GetPlatformUserInfoForPartnerRequest(const GetPlatformUserInfoForPartnerRequest &) = default ;
    GetPlatformUserInfoForPartnerRequest(GetPlatformUserInfoForPartnerRequest &&) = default ;
    GetPlatformUserInfoForPartnerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPlatformUserInfoForPartnerRequest() = default ;
    GetPlatformUserInfoForPartnerRequest& operator=(const GetPlatformUserInfoForPartnerRequest &) = default ;
    GetPlatformUserInfoForPartnerRequest& operator=(GetPlatformUserInfoForPartnerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->platformType_ == nullptr && return this->userId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetPlatformUserInfoForPartnerRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string platformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline GetPlatformUserInfoForPartnerRequest& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetPlatformUserInfoForPartnerRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> platformType_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
