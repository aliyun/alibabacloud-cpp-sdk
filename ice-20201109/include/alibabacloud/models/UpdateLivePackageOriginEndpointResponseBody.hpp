// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVEPACKAGEORIGINENDPOINTRESPONSEBODY_HPP_
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
  class UpdateLivePackageOriginEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLivePackageOriginEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LivePackageOriginEndpoint, livePackageOriginEndpoint_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpdateLivePackageOriginEndpointResponseBody() = default ;
    UpdateLivePackageOriginEndpointResponseBody(const UpdateLivePackageOriginEndpointResponseBody &) = default ;
    UpdateLivePackageOriginEndpointResponseBody(UpdateLivePackageOriginEndpointResponseBody &&) = default ;
    UpdateLivePackageOriginEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLivePackageOriginEndpointResponseBody() = default ;
    UpdateLivePackageOriginEndpointResponseBody& operator=(const UpdateLivePackageOriginEndpointResponseBody &) = default ;
    UpdateLivePackageOriginEndpointResponseBody& operator=(UpdateLivePackageOriginEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LivePackageOriginEndpoint : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LivePackageOriginEndpoint& obj) { 
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
      friend void from_json(const Darabonba::Json& j, LivePackageOriginEndpoint& obj) { 
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
      LivePackageOriginEndpoint() = default ;
      LivePackageOriginEndpoint(const LivePackageOriginEndpoint &) = default ;
      LivePackageOriginEndpoint(LivePackageOriginEndpoint &&) = default ;
      LivePackageOriginEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LivePackageOriginEndpoint() = default ;
      LivePackageOriginEndpoint& operator=(const LivePackageOriginEndpoint &) = default ;
      LivePackageOriginEndpoint& operator=(LivePackageOriginEndpoint &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorizationCode_ == nullptr
        && this->channelName_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->endpointName_ == nullptr && this->endpointUrl_ == nullptr
        && this->groupName_ == nullptr && this->ipBlacklist_ == nullptr && this->ipWhitelist_ == nullptr && this->lastModified_ == nullptr && this->livePackagingConfig_ == nullptr
        && this->manifestName_ == nullptr && this->protocol_ == nullptr && this->timeshiftVision_ == nullptr; };
      // authorizationCode Field Functions 
      bool hasAuthorizationCode() const { return this->authorizationCode_ != nullptr;};
      void deleteAuthorizationCode() { this->authorizationCode_ = nullptr;};
      inline string getAuthorizationCode() const { DARABONBA_PTR_GET_DEFAULT(authorizationCode_, "") };
      inline LivePackageOriginEndpoint& setAuthorizationCode(string authorizationCode) { DARABONBA_PTR_SET_VALUE(authorizationCode_, authorizationCode) };


      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline LivePackageOriginEndpoint& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LivePackageOriginEndpoint& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LivePackageOriginEndpoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endpointName Field Functions 
      bool hasEndpointName() const { return this->endpointName_ != nullptr;};
      void deleteEndpointName() { this->endpointName_ = nullptr;};
      inline string getEndpointName() const { DARABONBA_PTR_GET_DEFAULT(endpointName_, "") };
      inline LivePackageOriginEndpoint& setEndpointName(string endpointName) { DARABONBA_PTR_SET_VALUE(endpointName_, endpointName) };


      // endpointUrl Field Functions 
      bool hasEndpointUrl() const { return this->endpointUrl_ != nullptr;};
      void deleteEndpointUrl() { this->endpointUrl_ = nullptr;};
      inline string getEndpointUrl() const { DARABONBA_PTR_GET_DEFAULT(endpointUrl_, "") };
      inline LivePackageOriginEndpoint& setEndpointUrl(string endpointUrl) { DARABONBA_PTR_SET_VALUE(endpointUrl_, endpointUrl) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline LivePackageOriginEndpoint& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // ipBlacklist Field Functions 
      bool hasIpBlacklist() const { return this->ipBlacklist_ != nullptr;};
      void deleteIpBlacklist() { this->ipBlacklist_ = nullptr;};
      inline string getIpBlacklist() const { DARABONBA_PTR_GET_DEFAULT(ipBlacklist_, "") };
      inline LivePackageOriginEndpoint& setIpBlacklist(string ipBlacklist) { DARABONBA_PTR_SET_VALUE(ipBlacklist_, ipBlacklist) };


      // ipWhitelist Field Functions 
      bool hasIpWhitelist() const { return this->ipWhitelist_ != nullptr;};
      void deleteIpWhitelist() { this->ipWhitelist_ = nullptr;};
      inline string getIpWhitelist() const { DARABONBA_PTR_GET_DEFAULT(ipWhitelist_, "") };
      inline LivePackageOriginEndpoint& setIpWhitelist(string ipWhitelist) { DARABONBA_PTR_SET_VALUE(ipWhitelist_, ipWhitelist) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline LivePackageOriginEndpoint& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // livePackagingConfig Field Functions 
      bool hasLivePackagingConfig() const { return this->livePackagingConfig_ != nullptr;};
      void deleteLivePackagingConfig() { this->livePackagingConfig_ = nullptr;};
      inline const LivePackagingConfig & getLivePackagingConfig() const { DARABONBA_PTR_GET_CONST(livePackagingConfig_, LivePackagingConfig) };
      inline LivePackagingConfig getLivePackagingConfig() { DARABONBA_PTR_GET(livePackagingConfig_, LivePackagingConfig) };
      inline LivePackageOriginEndpoint& setLivePackagingConfig(const LivePackagingConfig & livePackagingConfig) { DARABONBA_PTR_SET_VALUE(livePackagingConfig_, livePackagingConfig) };
      inline LivePackageOriginEndpoint& setLivePackagingConfig(LivePackagingConfig && livePackagingConfig) { DARABONBA_PTR_SET_RVALUE(livePackagingConfig_, livePackagingConfig) };


      // manifestName Field Functions 
      bool hasManifestName() const { return this->manifestName_ != nullptr;};
      void deleteManifestName() { this->manifestName_ = nullptr;};
      inline string getManifestName() const { DARABONBA_PTR_GET_DEFAULT(manifestName_, "") };
      inline LivePackageOriginEndpoint& setManifestName(string manifestName) { DARABONBA_PTR_SET_VALUE(manifestName_, manifestName) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline LivePackageOriginEndpoint& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // timeshiftVision Field Functions 
      bool hasTimeshiftVision() const { return this->timeshiftVision_ != nullptr;};
      void deleteTimeshiftVision() { this->timeshiftVision_ = nullptr;};
      inline int32_t getTimeshiftVision() const { DARABONBA_PTR_GET_DEFAULT(timeshiftVision_, 0) };
      inline LivePackageOriginEndpoint& setTimeshiftVision(int32_t timeshiftVision) { DARABONBA_PTR_SET_VALUE(timeshiftVision_, timeshiftVision) };


    protected:
      // The authorization code.
      shared_ptr<string> authorizationCode_ {};
      // The channel name.
      shared_ptr<string> channelName_ {};
      // The time when the endpoint was created.
      shared_ptr<string> createTime_ {};
      // The endpoint description.
      shared_ptr<string> description_ {};
      // The endpoint name.
      shared_ptr<string> endpointName_ {};
      // The endpoint URL.
      shared_ptr<string> endpointUrl_ {};
      // The channel group name.
      shared_ptr<string> groupName_ {};
      // The IP address blacklist. It supports subnet masks. Multiple IP addresses are separated by commas (,).
      shared_ptr<string> ipBlacklist_ {};
      // The IP address whitelist. It supports subnet masks. Multiple IP addresses are separated by commas (,).
      shared_ptr<string> ipWhitelist_ {};
      // The time when the endpoint was last modified.
      shared_ptr<string> lastModified_ {};
      shared_ptr<LivePackagingConfig> livePackagingConfig_ {};
      // The playlist name. Default value: manifest.
      shared_ptr<string> manifestName_ {};
      // The protocol. Only HLS is supported.
      shared_ptr<string> protocol_ {};
      // The number of days that time-shifted content is available. Maximum value: 30.
      shared_ptr<int32_t> timeshiftVision_ {};
    };

    virtual bool empty() const override { return this->livePackageOriginEndpoint_ == nullptr
        && this->requestId_ == nullptr; };
    // livePackageOriginEndpoint Field Functions 
    bool hasLivePackageOriginEndpoint() const { return this->livePackageOriginEndpoint_ != nullptr;};
    void deleteLivePackageOriginEndpoint() { this->livePackageOriginEndpoint_ = nullptr;};
    inline const UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint & getLivePackageOriginEndpoint() const { DARABONBA_PTR_GET_CONST(livePackageOriginEndpoint_, UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint) };
    inline UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint getLivePackageOriginEndpoint() { DARABONBA_PTR_GET(livePackageOriginEndpoint_, UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint) };
    inline UpdateLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(const UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint & livePackageOriginEndpoint) { DARABONBA_PTR_SET_VALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };
    inline UpdateLivePackageOriginEndpointResponseBody& setLivePackageOriginEndpoint(UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint && livePackageOriginEndpoint) { DARABONBA_PTR_SET_RVALUE(livePackageOriginEndpoint_, livePackageOriginEndpoint) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateLivePackageOriginEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the origin endpoint.
    shared_ptr<UpdateLivePackageOriginEndpointResponseBody::LivePackageOriginEndpoint> livePackageOriginEndpoint_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
