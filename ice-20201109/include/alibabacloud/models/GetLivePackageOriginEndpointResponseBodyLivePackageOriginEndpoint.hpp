// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVEPACKAGEORIGINENDPOINTRESPONSEBODYLIVEPACKAGEORIGINENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_GETLIVEPACKAGEORIGINENDPOINTRESPONSEBODYLIVEPACKAGEORIGINENDPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LivePackagingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(EndpointUrl, endpointUrl_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(LastModified, lastModified_);
      DARABONBA_PTR_TO_JSON(LivePackagingConfig, livePackagingConfig_);
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TimeshiftVision, timeshiftVision_);
    };
    friend void from_json(const Darabonba::Json& j, GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(EndpointUrl, endpointUrl_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(LastModified, lastModified_);
      DARABONBA_PTR_FROM_JSON(LivePackagingConfig, livePackagingConfig_);
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TimeshiftVision, timeshiftVision_);
    };
    GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint() = default ;
    GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint(const GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &) = default ;
    GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint(GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &&) = default ;
    GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint() = default ;
    GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& operator=(const GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &) = default ;
    GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& operator=(GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && return this->channelName_ == nullptr && return this->createTime_ == nullptr && return this->description_ == nullptr && return this->endpointName_ == nullptr && return this->endpointUrl_ == nullptr
        && return this->groupName_ == nullptr && return this->ipBlacklist_ == nullptr && return this->ipWhitelist_ == nullptr && return this->lastModified_ == nullptr && return this->livePackagingConfig_ == nullptr
        && return this->manifestName_ == nullptr && return this->protocol_ == nullptr && return this->timeshiftVision_ == nullptr; };
    // authorizationCode Field Functions 
    bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
    void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
    inline string authorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointUrl Field Functions 
    bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
    void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
    inline string endpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline string ipBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setIpBlacklist(string ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string ipWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // livePackagingConfig Field Functions 
    bool hasLivePackagingConfig() const { return this->livePackagingConfig_ != nullptr;};
    void deleteLivePackagingConfig() { this->livePackagingConfig_ = nullptr;};
    inline const Models::LivePackagingConfig & livePackagingConfig() const { DARABONBA_PTR_GET_CONST(livePackagingConfig_, Models::LivePackagingConfig) };
    inline Models::LivePackagingConfig livePackagingConfig() { DARABONBA_PTR_GET(livePackagingConfig_, Models::LivePackagingConfig) };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setLivePackagingConfig(const Models::LivePackagingConfig & livePackagingConfig) { DARABONBA_PTR_SET_VALUE(livePackagingConfig_, livePackagingConfig) };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setLivePackagingConfig(Models::LivePackagingConfig && livePackagingConfig) { DARABONBA_PTR_SET_RVALUE(livePackagingConfig_, livePackagingConfig) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeshiftVision Field Functions 
    bool hasTimeshiftVision() const { return this->timeshiftVision_ != nullptr;};
    void deleteTimeshiftVision() { this->timeshiftVision_ = nullptr;};
    inline int32_t timeshiftVision() const { DARABONBA_PTR_GET_DEFAULT(timeshiftVision_, 0) };
    inline GetLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setTimeshiftVision(int32_t timeshiftVision) { DARABONBA_PTR_SET_VALUE(timeshiftVision_, timeshiftVision) };


  protected:
    // The authorization code.
    std::shared_ptr<string> authorizationCode_ = nullptr;
    // The channel name.
    std::shared_ptr<string> channelName_ = nullptr;
    // The time when the endpoint was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The endpoint description.
    std::shared_ptr<string> description_ = nullptr;
    // The endpoint name.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The endpoint URL.
    std::shared_ptr<string> endpointUrl_ = nullptr;
    // The channel group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // The IP address blacklist.
    std::shared_ptr<string> ipBlacklist_ = nullptr;
    // The IP address whitelist.
    std::shared_ptr<string> ipWhitelist_ = nullptr;
    // The time when the endpoint was last modified.
    std::shared_ptr<string> lastModified_ = nullptr;
    std::shared_ptr<Models::LivePackagingConfig> livePackagingConfig_ = nullptr;
    // The playlist name.
    std::shared_ptr<string> manifestName_ = nullptr;
    // The distribution protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // The number of days that time-shifted content is available.
    std::shared_ptr<int32_t> timeshiftVision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
