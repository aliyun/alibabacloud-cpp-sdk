// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTRESPONSEBODYLIVEPACKAGEORIGINENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTRESPONSEBODYLIVEPACKAGEORIGINENDPOINT_HPP_
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
  class UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& obj) { 
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
    UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint() = default ;
    UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint(const UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &) = default ;
    UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint(UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &&) = default ;
    UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint() = default ;
    UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& operator=(const UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &) = default ;
    UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& operator=(UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationCode_ != nullptr
        && this->channelName_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->endpointName_ != nullptr && this->endpointUrl_ != nullptr
        && this->groupName_ != nullptr && this->ipBlacklist_ != nullptr && this->ipWhitelist_ != nullptr && this->lastModified_ != nullptr && this->livePackagingConfig_ != nullptr
        && this->manifestName_ != nullptr && this->protocol_ != nullptr && this->timeshiftVision_ != nullptr; };
    // authorizationCode Field Functions 
    bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
    void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
    inline string authorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // endpointUrl Field Functions 
    bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
    void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
    inline string endpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline string ipBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setIpBlacklist(string ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string ipWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // lastModified Field Functions 
    bool hasLastModified() const { return this->lastModified_ != nullptr;};
    void deleteLastModified() { this->lastModified_ = nullptr;};
    inline string lastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


    // livePackagingConfig Field Functions 
    bool hasLivePackagingConfig() const { return this->livePackagingConfig_ != nullptr;};
    void deleteLivePackagingConfig() { this->livePackagingConfig_ = nullptr;};
    inline const Models::LivePackagingConfig & livePackagingConfig() const { DARABONBA_PTR_GET_CONST(livePackagingConfig_, Models::LivePackagingConfig) };
    inline Models::LivePackagingConfig livePackagingConfig() { DARABONBA_PTR_GET(livePackagingConfig_, Models::LivePackagingConfig) };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setLivePackagingConfig(const Models::LivePackagingConfig & livePackagingConfig) { DARABONBA_PTR_SET_VALUE(livePackagingConfig_, livePackagingConfig) };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setLivePackagingConfig(Models::LivePackagingConfig && livePackagingConfig) { DARABONBA_PTR_SET_RVALUE(livePackagingConfig_, livePackagingConfig) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeshiftVision Field Functions 
    bool hasTimeshiftVision() const { return this->timeshiftVision_ != nullptr;};
    void deleteTimeshiftVision() { this->timeshiftVision_ = nullptr;};
    inline int32_t timeshiftVision() const { DARABONBA_PTR_GET_DEFAULT(timeshiftVision_, 0) };
    inline UpdateLivePackageOriginEndpointResponseBodyLivePackageOriginEndpoint& setTimeshiftVision(int32_t timeshiftVision) { DARABONBA_PTR_SET_VALUE(timeshiftVision_, timeshiftVision) };


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
    // The IP address blacklist. It supports subnet masks. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<string> ipBlacklist_ = nullptr;
    // The IP address whitelist. It supports subnet masks. Multiple IP addresses are separated by commas (,).
    std::shared_ptr<string> ipWhitelist_ = nullptr;
    // The time when the endpoint was last modified.
    std::shared_ptr<string> lastModified_ = nullptr;
    std::shared_ptr<Models::LivePackagingConfig> livePackagingConfig_ = nullptr;
    // The playlist name. Default value: manifest.
    std::shared_ptr<string> manifestName_ = nullptr;
    // The protocol. Only HLS is supported.
    std::shared_ptr<string> protocol_ = nullptr;
    // The number of days that time-shifted content is available. Maximum value: 30.
    std::shared_ptr<int32_t> timeshiftVision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
