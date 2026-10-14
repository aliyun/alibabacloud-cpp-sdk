// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKBSYNCLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKBSYNCLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdateKBSyncLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKBSyncLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(FeishuChatMemberStaleTtlSeconds, feishuChatMemberStaleTtlSeconds_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LinkId, linkId_);
      DARABONBA_PTR_TO_JSON(McpEndpoint, mcpEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SheetMcpEndpoint, sheetMcpEndpoint_);
      DARABONBA_PTR_TO_JSON(SyncEnabled, syncEnabled_);
      DARABONBA_PTR_TO_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_TO_JSON(UserAccessToken, userAccessToken_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserRefreshToken, userRefreshToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKBSyncLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(FeishuChatMemberStaleTtlSeconds, feishuChatMemberStaleTtlSeconds_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
      DARABONBA_PTR_FROM_JSON(McpEndpoint, mcpEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SheetMcpEndpoint, sheetMcpEndpoint_);
      DARABONBA_PTR_FROM_JSON(SyncEnabled, syncEnabled_);
      DARABONBA_PTR_FROM_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_FROM_JSON(UserAccessToken, userAccessToken_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserRefreshToken, userRefreshToken_);
    };
    UpdateKBSyncLinkRequest() = default ;
    UpdateKBSyncLinkRequest(const UpdateKBSyncLinkRequest &) = default ;
    UpdateKBSyncLinkRequest(UpdateKBSyncLinkRequest &&) = default ;
    UpdateKBSyncLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKBSyncLinkRequest() = default ;
    UpdateKBSyncLinkRequest& operator=(const UpdateKBSyncLinkRequest &) = default ;
    UpdateKBSyncLinkRequest& operator=(UpdateKBSyncLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr && this->feishuChatMemberStaleTtlSeconds_ == nullptr && this->knowledgeBaseId_ == nullptr && this->linkId_ == nullptr && this->mcpEndpoint_ == nullptr
        && this->regionId_ == nullptr && this->sheetMcpEndpoint_ == nullptr && this->syncEnabled_ == nullptr && this->syncIntervalMinutes_ == nullptr && this->userAccessToken_ == nullptr
        && this->userId_ == nullptr && this->userRefreshToken_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline UpdateKBSyncLinkRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline UpdateKBSyncLinkRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // feishuChatMemberStaleTtlSeconds Field Functions 
    bool hasFeishuChatMemberStaleTtlSeconds() const { return this->feishuChatMemberStaleTtlSeconds_ != nullptr;};
    void deleteFeishuChatMemberStaleTtlSeconds() { this->feishuChatMemberStaleTtlSeconds_ = nullptr;};
    inline int32_t getFeishuChatMemberStaleTtlSeconds() const { DARABONBA_PTR_GET_DEFAULT(feishuChatMemberStaleTtlSeconds_, 0) };
    inline UpdateKBSyncLinkRequest& setFeishuChatMemberStaleTtlSeconds(int32_t feishuChatMemberStaleTtlSeconds) { DARABONBA_PTR_SET_VALUE(feishuChatMemberStaleTtlSeconds_, feishuChatMemberStaleTtlSeconds) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline UpdateKBSyncLinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // linkId Field Functions 
    bool hasLinkId() const { return this->linkId_ != nullptr;};
    void deleteLinkId() { this->linkId_ = nullptr;};
    inline string getLinkId() const { DARABONBA_PTR_GET_DEFAULT(linkId_, "") };
    inline UpdateKBSyncLinkRequest& setLinkId(string linkId) { DARABONBA_PTR_SET_VALUE(linkId_, linkId) };


    // mcpEndpoint Field Functions 
    bool hasMcpEndpoint() const { return this->mcpEndpoint_ != nullptr;};
    void deleteMcpEndpoint() { this->mcpEndpoint_ = nullptr;};
    inline string getMcpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mcpEndpoint_, "") };
    inline UpdateKBSyncLinkRequest& setMcpEndpoint(string mcpEndpoint) { DARABONBA_PTR_SET_VALUE(mcpEndpoint_, mcpEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateKBSyncLinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sheetMcpEndpoint Field Functions 
    bool hasSheetMcpEndpoint() const { return this->sheetMcpEndpoint_ != nullptr;};
    void deleteSheetMcpEndpoint() { this->sheetMcpEndpoint_ = nullptr;};
    inline string getSheetMcpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(sheetMcpEndpoint_, "") };
    inline UpdateKBSyncLinkRequest& setSheetMcpEndpoint(string sheetMcpEndpoint) { DARABONBA_PTR_SET_VALUE(sheetMcpEndpoint_, sheetMcpEndpoint) };


    // syncEnabled Field Functions 
    bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
    void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
    inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
    inline UpdateKBSyncLinkRequest& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


    // syncIntervalMinutes Field Functions 
    bool hasSyncIntervalMinutes() const { return this->syncIntervalMinutes_ != nullptr;};
    void deleteSyncIntervalMinutes() { this->syncIntervalMinutes_ = nullptr;};
    inline int32_t getSyncIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(syncIntervalMinutes_, 0) };
    inline UpdateKBSyncLinkRequest& setSyncIntervalMinutes(int32_t syncIntervalMinutes) { DARABONBA_PTR_SET_VALUE(syncIntervalMinutes_, syncIntervalMinutes) };


    // userAccessToken Field Functions 
    bool hasUserAccessToken() const { return this->userAccessToken_ != nullptr;};
    void deleteUserAccessToken() { this->userAccessToken_ = nullptr;};
    inline string getUserAccessToken() const { DARABONBA_PTR_GET_DEFAULT(userAccessToken_, "") };
    inline UpdateKBSyncLinkRequest& setUserAccessToken(string userAccessToken) { DARABONBA_PTR_SET_VALUE(userAccessToken_, userAccessToken) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateKBSyncLinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userRefreshToken Field Functions 
    bool hasUserRefreshToken() const { return this->userRefreshToken_ != nullptr;};
    void deleteUserRefreshToken() { this->userRefreshToken_ = nullptr;};
    inline string getUserRefreshToken() const { DARABONBA_PTR_GET_DEFAULT(userRefreshToken_, "") };
    inline UpdateKBSyncLinkRequest& setUserRefreshToken(string userRefreshToken) { DARABONBA_PTR_SET_VALUE(userRefreshToken_, userRefreshToken) };


  protected:
    // The client ID.
    shared_ptr<string> clientId_ {};
    // The client secret.
    shared_ptr<string> clientSecret_ {};
    // The validity period of a successful Lark group member snapshot used for fallback reuse, in seconds. This parameter can be explicitly set only for FEISHU synchronization links. A value of -1 indicates that the snapshot never expires. A value of 0 disables snapshot fallback reuse. A positive integer indicates the maximum age of a snapshot allowed for reuse. If this parameter is omitted, the original value is retained. Explicitly passing -1 restores the default behavior.
    shared_ptr<int32_t> feishuChatMemberStaleTtlSeconds_ {};
    // The unique identifier of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The ID of the synchronization link.
    // 
    // This parameter is required.
    shared_ptr<string> linkId_ {};
    // The endpoint of the DingTalk Docs MCP server.
    shared_ptr<string> mcpEndpoint_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The endpoint of the DingTalk Sheets MCP server.
    shared_ptr<string> sheetMcpEndpoint_ {};
    // Specifies whether to enable automatic synchronization. This parameter must be modified individually and cannot be changed along with other configurations.
    shared_ptr<bool> syncEnabled_ {};
    // 20
    shared_ptr<int32_t> syncIntervalMinutes_ {};
    // The new Lark user access token.
    shared_ptr<string> userAccessToken_ {};
    // The ID of the DingTalk user that performs the operation.
    shared_ptr<string> userId_ {};
    // The new Lark user refresh token. Pass this parameter together with UserAccessToken. Passing empty strings for both parameters indicates deletion.
    shared_ptr<string> userRefreshToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
