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
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(LinkId, linkId_);
      DARABONBA_PTR_TO_JSON(McpEndpoint, mcpEndpoint_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SheetMcpEndpoint, sheetMcpEndpoint_);
      DARABONBA_PTR_TO_JSON(SyncEnabled, syncEnabled_);
      DARABONBA_PTR_TO_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKBSyncLinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(LinkId, linkId_);
      DARABONBA_PTR_FROM_JSON(McpEndpoint, mcpEndpoint_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SheetMcpEndpoint, sheetMcpEndpoint_);
      DARABONBA_PTR_FROM_JSON(SyncEnabled, syncEnabled_);
      DARABONBA_PTR_FROM_JSON(SyncIntervalMinutes, syncIntervalMinutes_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
        && this->clientSecret_ == nullptr && this->knowledgeBaseId_ == nullptr && this->linkId_ == nullptr && this->mcpEndpoint_ == nullptr && this->regionId_ == nullptr
        && this->sheetMcpEndpoint_ == nullptr && this->syncEnabled_ == nullptr && this->syncIntervalMinutes_ == nullptr && this->userId_ == nullptr; };
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


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateKBSyncLinkRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientSecret_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseId_ {};
    // This parameter is required.
    shared_ptr<string> linkId_ {};
    shared_ptr<string> mcpEndpoint_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sheetMcpEndpoint_ {};
    shared_ptr<bool> syncEnabled_ {};
    shared_ptr<int32_t> syncIntervalMinutes_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
