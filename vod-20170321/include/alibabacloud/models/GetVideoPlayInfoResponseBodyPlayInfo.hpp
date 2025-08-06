// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOPLAYINFORESPONSEBODYPLAYINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOPLAYINFORESPONSEBODYPLAYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetVideoPlayInfoResponseBodyPlayInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoPlayInfoResponseBodyPlayInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoPlayInfoResponseBodyPlayInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(AccessKeySecret, accessKeySecret_);
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(PlayDomain, playDomain_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    GetVideoPlayInfoResponseBodyPlayInfo() = default ;
    GetVideoPlayInfoResponseBodyPlayInfo(const GetVideoPlayInfoResponseBodyPlayInfo &) = default ;
    GetVideoPlayInfoResponseBodyPlayInfo(GetVideoPlayInfoResponseBodyPlayInfo &&) = default ;
    GetVideoPlayInfoResponseBodyPlayInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoPlayInfoResponseBodyPlayInfo() = default ;
    GetVideoPlayInfoResponseBodyPlayInfo& operator=(const GetVideoPlayInfoResponseBodyPlayInfo &) = default ;
    GetVideoPlayInfoResponseBodyPlayInfo& operator=(GetVideoPlayInfoResponseBodyPlayInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->accessKeySecret_ != nullptr && this->authInfo_ != nullptr && this->playDomain_ != nullptr && this->region_ != nullptr && this->securityToken_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline GetVideoPlayInfoResponseBodyPlayInfo& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // accessKeySecret Field Functions 
    bool hasAccessKeySecret() const { return this->accessKeySecret_ != nullptr;};
    void deleteAccessKeySecret() { this->accessKeySecret_ = nullptr;};
    inline string accessKeySecret() const { DARABONBA_PTR_GET_DEFAULT(accessKeySecret_, "") };
    inline GetVideoPlayInfoResponseBodyPlayInfo& setAccessKeySecret(string accessKeySecret) { DARABONBA_PTR_SET_VALUE(accessKeySecret_, accessKeySecret) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline GetVideoPlayInfoResponseBodyPlayInfo& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // playDomain Field Functions 
    bool hasPlayDomain() const { return this->playDomain_ != nullptr;};
    void deletePlayDomain() { this->playDomain_ = nullptr;};
    inline string playDomain() const { DARABONBA_PTR_GET_DEFAULT(playDomain_, "") };
    inline GetVideoPlayInfoResponseBodyPlayInfo& setPlayDomain(string playDomain) { DARABONBA_PTR_SET_VALUE(playDomain_, playDomain) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetVideoPlayInfoResponseBodyPlayInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetVideoPlayInfoResponseBodyPlayInfo& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> accessKeySecret_ = nullptr;
    std::shared_ptr<string> authInfo_ = nullptr;
    std::shared_ptr<string> playDomain_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
