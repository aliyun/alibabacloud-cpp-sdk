// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLivePackageOriginEndpointShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageOriginEndpointShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IpBlacklist, ipBlacklist_);
      DARABONBA_PTR_TO_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_TO_JSON(LivePackagingConfig, livePackagingConfigShrink_);
      DARABONBA_PTR_TO_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(TimeshiftVision, timeshiftVision_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageOriginEndpointShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationCode, authorizationCode_);
      DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndpointName, endpointName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IpBlacklist, ipBlacklist_);
      DARABONBA_PTR_FROM_JSON(IpWhitelist, ipWhitelist_);
      DARABONBA_PTR_FROM_JSON(LivePackagingConfig, livePackagingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ManifestName, manifestName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(TimeshiftVision, timeshiftVision_);
    };
    UpdateLivePackageOriginEndpointShrinkRequest() = default ;
    UpdateLivePackageOriginEndpointShrinkRequest(const UpdateLivePackageOriginEndpointShrinkRequest &) = default ;
    UpdateLivePackageOriginEndpointShrinkRequest(UpdateLivePackageOriginEndpointShrinkRequest &&) = default ;
    UpdateLivePackageOriginEndpointShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageOriginEndpointShrinkRequest() = default ;
    UpdateLivePackageOriginEndpointShrinkRequest& operator=(const UpdateLivePackageOriginEndpointShrinkRequest &) = default ;
    UpdateLivePackageOriginEndpointShrinkRequest& operator=(UpdateLivePackageOriginEndpointShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationCode_ != nullptr
        && this->channelName_ != nullptr && this->description_ != nullptr && this->endpointName_ != nullptr && this->groupName_ != nullptr && this->ipBlacklist_ != nullptr
        && this->ipWhitelist_ != nullptr && this->livePackagingConfigShrink_ != nullptr && this->manifestName_ != nullptr && this->protocol_ != nullptr && this->timeshiftVision_ != nullptr; };
    // authorizationCode Field Functions 
    bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
    void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
    inline string authorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


    // channelName Field Functions 
    bool hasChannelName() const { return this->channelName_ != nullptr;};
    void deleteChannelName() { this->channelName_ = nullptr;};
    inline string channelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endpointName Field Functions 
    bool hasEndpointName() const { return this->endpointName_ != nullptr;};
    void deleteEndpointName() { this->endpointName_ = nullptr;};
    inline string endpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ipBlacklist Field Functions 
    bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
    void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
    inline string ipBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setIpBlacklist(string ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


    // ipWhitelist Field Functions 
    bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
    void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
    inline string ipWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


    // livePackagingConfigShrink Field Functions 
    bool hasLivePackagingConfigShrink() const { return this->livePackagingConfigShrink_ != nullptr;};
    void deleteLivePackagingConfigShrink() { this->livePackagingConfigShrink_ = nullptr;};
    inline string livePackagingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(livePackagingConfigShrink_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setLivePackagingConfigShrink(string livePackagingConfigShrink) { DARABONBA_PTR_SET_VALUE(livePackagingConfigShrink_, livePackagingConfigShrink) };


    // manifestName Field Functions 
    bool hasManifestName() const { return this->manifestName_ != nullptr;};
    void deleteManifestName() { this->manifestName_ = nullptr;};
    inline string manifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // timeshiftVision Field Functions 
    bool hasTimeshiftVision() const { return this->timeshiftVision_ != nullptr;};
    void deleteTimeshiftVision() { this->timeshiftVision_ = nullptr;};
    inline int32_t timeshiftVision() const { DARABONBA_PTR_GET_DEFAULT(timeshiftVision_, 0) };
    inline UpdateLivePackageOriginEndpointShrinkRequest& setTimeshiftVision(int32_t timeshiftVision) { DARABONBA_PTR_SET_VALUE(timeshiftVision_, timeshiftVision) };


  protected:
    // The authorization code. It can be up to 200 characters in length. You must configure AuthorizationCode, IpWhitelist, or both. Format: [A-Za-z0-9-_.]+
    std::shared_ptr<string> authorizationCode_ = nullptr;
    // The channel name.
    // 
    // This parameter is required.
    std::shared_ptr<string> channelName_ = nullptr;
    // The endpoint description.
    std::shared_ptr<string> description_ = nullptr;
    // The origin endpoint name. It can contain letters, digits, hyphens (-), and underscores (_). The name must be 1 to 200 characters in length. Format: [A-Za-z0-9_-]+
    // 
    // This parameter is required.
    std::shared_ptr<string> endpointName_ = nullptr;
    // The channel group name.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The IP address blacklist. It supports subnet masks. Separate multiple IP addresses with commas (,).
    std::shared_ptr<string> ipBlacklist_ = nullptr;
    // The IP address whitelist. It supports subnet masks. 0.0.0.0/0 is not allowed. It can be up to 1,000 characters in length. Separate multiple IP addresses with commas (,). You must configure AuthorizationCode, IpWhitelist, or both.
    std::shared_ptr<string> ipWhitelist_ = nullptr;
    std::shared_ptr<string> livePackagingConfigShrink_ = nullptr;
    // The playlist name. Default value: manifest.
    std::shared_ptr<string> manifestName_ = nullptr;
    // The protocol. Only HLS is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> protocol_ = nullptr;
    // The number of days that time-shifted content is available. Maximum value: 30.
    std::shared_ptr<int32_t> timeshiftVision_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
