// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKBSYNCLINKATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKBSYNCLINKATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeKBSyncLinkAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKBSyncLinkAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImPlatform, imPlatform_);
      DARABONBA_PTR_TO_JSON(LinkId, linkId_);
      DARABONBA_PTR_TO_JSON(LinkName, linkName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceDir, sourceDir_);
      DARABONBA_PTR_TO_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_TO_JSON(SyncStatus, syncStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKBSyncLinkAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImPlatform, imPlatform_);
      DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
      DARABONBA_PTR_FROM_JSON(LinkName, linkName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceDir, sourceDir_);
      DARABONBA_PTR_FROM_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_FROM_JSON(SyncStatus, syncStatus_);
    };
    DescribeKBSyncLinkAttributeResponseBody() = default ;
    DescribeKBSyncLinkAttributeResponseBody(const DescribeKBSyncLinkAttributeResponseBody &) = default ;
    DescribeKBSyncLinkAttributeResponseBody(DescribeKBSyncLinkAttributeResponseBody &&) = default ;
    DescribeKBSyncLinkAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKBSyncLinkAttributeResponseBody() = default ;
    DescribeKBSyncLinkAttributeResponseBody& operator=(const DescribeKBSyncLinkAttributeResponseBody &) = default ;
    DescribeKBSyncLinkAttributeResponseBody& operator=(DescribeKBSyncLinkAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(FeishuChatMemberStaleTtlSeconds, feishuChatMemberStaleTtlSeconds_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(FeishuChatMemberStaleTtlSeconds, feishuChatMemberStaleTtlSeconds_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->feishuChatMemberStaleTtlSeconds_ == nullptr
        && this->userId_ == nullptr; };
      // feishuChatMemberStaleTtlSeconds Field Functions 
      bool hasFeishuChatMemberStaleTtlSeconds() const { return this->feishuChatMemberStaleTtlSeconds_ != nullptr;};
      void deleteFeishuChatMemberStaleTtlSeconds() { this->feishuChatMemberStaleTtlSeconds_ = nullptr;};
      inline int32_t getFeishuChatMemberStaleTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(feishuChatMemberStaleTtlSeconds_, 0) };
      inline Config& setFeishuChatMemberStaleTtlSeconds(int32_t feishuChatMemberStaleTtlSeconds) { DARABONBA_PTR_SET_VALUE(feishuChatMemberStaleTtlSeconds_, feishuChatMemberStaleTtlSeconds) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Config& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The validity period of the successful snapshot of Lark group members for fallback reuse, in seconds. This parameter is returned only for FEISHU synchronization links. A value of -1 indicates that the snapshot never expires. A value of 0 indicates that snapshot fallback reuse is disabled. A positive integer indicates the maximum age of the snapshot allowed for reuse. The valid value configured for the link is returned. If no value is configured, the default value -1 is returned.
      shared_ptr<int32_t> feishuChatMemberStaleTtlSeconds_ {};
      // The ID of the DingTalk user who performs the operation. This parameter is returned only for DINGTALK synchronization links.
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->config_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->imPlatform_ == nullptr && this->linkId_ == nullptr
        && this->linkName_ == nullptr && this->requestId_ == nullptr && this->sourceDir_ == nullptr && this->syncIntervalMinutes_ == nullptr && this->syncStatus_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeKBSyncLinkAttributeResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, DescribeKBSyncLinkAttributeResponseBody::Config) };
    inline DescribeKBSyncLinkAttributeResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, DescribeKBSyncLinkAttributeResponseBody::Config) };
    inline DescribeKBSyncLinkAttributeResponseBody& setConfig(const DescribeKBSyncLinkAttributeResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeKBSyncLinkAttributeResponseBody& setConfig(DescribeKBSyncLinkAttributeResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imPlatform Field Functions 
    bool hasImPlatform() const { return this->imPlatform_ != nullptr;};
    void deleteImPlatform() { this->imPlatform_ = nullptr;};
    inline string getImPlatform() const { DARABONBA_PTR_GET_DEFAULT(imPlatform_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setImPlatform(string imPlatform) { DARABONBA_PTR_SET_VALUE(imPlatform_, imPlatform) };


    // linkId Field Functions 
    bool hasLinkId() const { return this->linkId_ != nullptr;};
    void deleteLinkId() { this->linkId_ = nullptr;};
    inline string getLinkId() const { DARABONBA_PTR_GET_DEFAULT(linkId_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setLinkId(string linkId) { DARABONBA_PTR_SET_VALUE(linkId_, linkId) };


    // linkName Field Functions 
    bool hasLinkName() const { return this->linkName_ != nullptr;};
    void deleteLinkName() { this->linkName_ = nullptr;};
    inline string getLinkName() const { DARABONBA_PTR_GET_DEFAULT(linkName_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setLinkName(string linkName) { DARABONBA_PTR_SET_VALUE(linkName_, linkName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceDir Field Functions 
    bool hasSourceDir() const { return this->sourceDir_ != nullptr;};
    void deleteSourceDir() { this->sourceDir_ = nullptr;};
    inline string getSourceDir() const { DARABONBA_PTR_GET_DEFAULT(sourceDir_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setSourceDir(string sourceDir) { DARABONBA_PTR_SET_VALUE(sourceDir_, sourceDir) };


    // syncIntervalMinutes Field Functions 
    bool hasSyncIntervalMinutes() const { return this->syncIntervalMinutes_ != nullptr;};
    void deleteSyncIntervalMinutes() { this->syncIntervalMinutes_ = nullptr;};
    inline int32_t getSyncIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(syncIntervalMinutes_, 0) };
    inline DescribeKBSyncLinkAttributeResponseBody& setSyncIntervalMinutes(int32_t syncIntervalMinutes) { DARABONBA_PTR_SET_VALUE(syncIntervalMinutes_, syncIntervalMinutes) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline DescribeKBSyncLinkAttributeResponseBody& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


  protected:
    // The client ID of the source application.
    shared_ptr<string> clientId_ {};
    // The synchronization configuration whitelist returned based on the source type. For DINGTALK, UserId can be returned. For FEISHU, FeishuChatMemberStaleTtlSeconds can be returned.
    shared_ptr<DescribeKBSyncLinkAttributeResponseBody::Config> config_ {};
    // The creation time of the synchronization link.
    shared_ptr<string> creationTime_ {};
    // The description of the synchronization link.
    shared_ptr<string> description_ {};
    // The source channel of the synchronization link. Valid values: OSS, DINGTALK, FEISHU, and SHAREPOINT.
    shared_ptr<string> imPlatform_ {};
    // The unique identifier of the synchronization link.
    shared_ptr<string> linkId_ {};
    // The name of the synchronization link.
    shared_ptr<string> linkName_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The source directory.
    shared_ptr<string> sourceDir_ {};
    // The automatic synchronization interval, in minutes.
    shared_ptr<int32_t> syncIntervalMinutes_ {};
    // The status of the synchronization link.
    shared_ptr<string> syncStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
