// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKBSYNCLINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKBSYNCLINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateKBSyncLinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKBSyncLinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LinkName, linkName_);
      DARABONBA_PTR_TO_JSON(McpEndpoint, mcpEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SheetMcpEndpoint, sheetMcpEndpoint_);
      DARABONBA_PTR_TO_JSON(SourceDir, sourceDir_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKBSyncLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LinkName, linkName_);
      DARABONBA_PTR_FROM_JSON(McpEndpoint, mcpEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SheetMcpEndpoint, sheetMcpEndpoint_);
      DARABONBA_PTR_FROM_JSON(SourceDir, sourceDir_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateKBSyncLinkRequest() = default ;
    CreateKBSyncLinkRequest(const CreateKBSyncLinkRequest &) = default ;
    CreateKBSyncLinkRequest(CreateKBSyncLinkRequest &&) = default ;
    CreateKBSyncLinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKBSyncLinkRequest() = default ;
    CreateKBSyncLinkRequest& operator=(const CreateKBSyncLinkRequest &) = default ;
    CreateKBSyncLinkRequest& operator=(CreateKBSyncLinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr && this->description_ == nullptr && this->knowledgeBaseId_ == nullptr && this->linkName_ == nullptr && this->mcpEndpoint_ == nullptr
        && this->regionId_ == nullptr && this->sheetMcpEndpoint_ == nullptr && this->sourceDir_ == nullptr && this->sourceType_ == nullptr && this->syncIntervalMinutes_ == nullptr
        && this->tenantId_ == nullptr && this->userId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CreateKBSyncLinkRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline CreateKBSyncLinkRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKBSyncLinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string getKnowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline CreateKBSyncLinkRequest& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // linkName Field Functions 
    bool hasLinkName() const { return this->linkName_ != nullptr;};
    void deleteLinkName() { this->linkName_ = nullptr;};
    inline string getLinkName() const { DARABONBA_PTR_GET_DEFAULT(linkName_, "") };
    inline CreateKBSyncLinkRequest& setLinkName(string linkName) { DARABONBA_PTR_SET_VALUE(linkName_, linkName) };


    // mcpEndpoint Field Functions 
    bool hasMcpEndpoint() const { return this->mcpEndpoint_ != nullptr;};
    void deleteMcpEndpoint() { this->mcpEndpoint_ = nullptr;};
    inline string getMcpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(mcpEndpoint_, "") };
    inline CreateKBSyncLinkRequest& setMcpEndpoint(string mcpEndpoint) { DARABONBA_PTR_SET_VALUE(mcpEndpoint_, mcpEndpoint) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateKBSyncLinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sheetMcpEndpoint Field Functions 
    bool hasSheetMcpEndpoint() const { return this->sheetMcpEndpoint_ != nullptr;};
    void deleteSheetMcpEndpoint() { this->sheetMcpEndpoint_ = nullptr;};
    inline string getSheetMcpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(sheetMcpEndpoint_, "") };
    inline CreateKBSyncLinkRequest& setSheetMcpEndpoint(string sheetMcpEndpoint) { DARABONBA_PTR_SET_VALUE(sheetMcpEndpoint_, sheetMcpEndpoint) };


    // sourceDir Field Functions 
    bool hasSourceDir() const { return this->sourceDir_ != nullptr;};
    void deleteSourceDir() { this->sourceDir_ = nullptr;};
    inline string getSourceDir() const { DARABONBA_PTR_GET_DEFAULT(sourceDir_, "") };
    inline CreateKBSyncLinkRequest& setSourceDir(string sourceDir) { DARABONBA_PTR_SET_VALUE(sourceDir_, sourceDir) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline CreateKBSyncLinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // syncIntervalMinutes Field Functions 
    bool hasSyncIntervalMinutes() const { return this->syncIntervalMinutes_ != nullptr;};
    void deleteSyncIntervalMinutes() { this->syncIntervalMinutes_ = nullptr;};
    inline int32_t getSyncIntervalMinutes() const { DARABONBA_PTR_GET_DEFAULT(syncIntervalMinutes_, 0) };
    inline CreateKBSyncLinkRequest& setSyncIntervalMinutes(int32_t syncIntervalMinutes) { DARABONBA_PTR_SET_VALUE(syncIntervalMinutes_, syncIntervalMinutes) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateKBSyncLinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateKBSyncLinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The client ID.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The client secret.
    // 
    // This parameter is required.
    shared_ptr<string> clientSecret_ {};
    // The description of the synchronization link.
    shared_ptr<string> description_ {};
    // The unique identifier of the knowledge base.
    // 
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // The name of the synchronization link.
    // 
    // This parameter is required.
    shared_ptr<string> linkName_ {};
    // The DingTalk document MCP Server endpoint.
    shared_ptr<string> mcpEndpoint_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The DingTalk spreadsheet MCP Server endpoint.
    shared_ptr<string> sheetMcpEndpoint_ {};
    // The source directory address for synchronization.
    // 
    // This parameter is required.
    shared_ptr<string> sourceDir_ {};
    // The data source type. Valid values: FEISHU and SHAREPOINT.
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The synchronization interval. Unit: minutes.
    shared_ptr<int32_t> syncIntervalMinutes_ {};
    // The tenant ID. This parameter is required when SourceType is set to SHAREPOINT.
    shared_ptr<string> tenantId_ {};
    // The DingTalk operator user ID.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
