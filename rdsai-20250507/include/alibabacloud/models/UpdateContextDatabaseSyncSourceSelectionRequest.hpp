// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCSOURCESELECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTEXTDATABASESYNCSOURCESELECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class UpdateContextDatabaseSyncSourceSelectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateContextDatabaseSyncSourceSelectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(SelectedNodeKeys, selectedNodeKeys_);
      DARABONBA_PTR_TO_JSON(SelectionPolicy, selectionPolicy_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateContextDatabaseSyncSourceSelectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(SelectedNodeKeys, selectedNodeKeys_);
      DARABONBA_PTR_FROM_JSON(SelectionPolicy, selectionPolicy_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateContextDatabaseSyncSourceSelectionRequest() = default ;
    UpdateContextDatabaseSyncSourceSelectionRequest(const UpdateContextDatabaseSyncSourceSelectionRequest &) = default ;
    UpdateContextDatabaseSyncSourceSelectionRequest(UpdateContextDatabaseSyncSourceSelectionRequest &&) = default ;
    UpdateContextDatabaseSyncSourceSelectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateContextDatabaseSyncSourceSelectionRequest() = default ;
    UpdateContextDatabaseSyncSourceSelectionRequest& operator=(const UpdateContextDatabaseSyncSourceSelectionRequest &) = default ;
    UpdateContextDatabaseSyncSourceSelectionRequest& operator=(UpdateContextDatabaseSyncSourceSelectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->selectedNodeKeys_ == nullptr && this->selectionPolicy_ == nullptr && this->sourceId_ == nullptr && this->workspaceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateContextDatabaseSyncSourceSelectionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // selectedNodeKeys Field Functions 
    bool hasSelectedNodeKeys() const { return this->selectedNodeKeys_ != nullptr;};
    void deleteSelectedNodeKeys() { this->selectedNodeKeys_ = nullptr;};
    inline const vector<string> & getSelectedNodeKeys() const { DARABONBA_PTR_GET_CONST(selectedNodeKeys_, vector<string>) };
    inline vector<string> getSelectedNodeKeys() { DARABONBA_PTR_GET(selectedNodeKeys_, vector<string>) };
    inline UpdateContextDatabaseSyncSourceSelectionRequest& setSelectedNodeKeys(const vector<string> & selectedNodeKeys) { DARABONBA_PTR_SET_VALUE(selectedNodeKeys_, selectedNodeKeys) };
    inline UpdateContextDatabaseSyncSourceSelectionRequest& setSelectedNodeKeys(vector<string> && selectedNodeKeys) { DARABONBA_PTR_SET_RVALUE(selectedNodeKeys_, selectedNodeKeys) };


    // selectionPolicy Field Functions 
    bool hasSelectionPolicy() const { return this->selectionPolicy_ != nullptr;};
    void deleteSelectionPolicy() { this->selectionPolicy_ = nullptr;};
    inline string getSelectionPolicy() const { DARABONBA_PTR_GET_DEFAULT(selectionPolicy_, "") };
    inline UpdateContextDatabaseSyncSourceSelectionRequest& setSelectionPolicy(string selectionPolicy) { DARABONBA_PTR_SET_VALUE(selectionPolicy_, selectionPolicy) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateContextDatabaseSyncSourceSelectionRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateContextDatabaseSyncSourceSelectionRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The list of selected node identifiers.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> selectedNodeKeys_ {};
    // The selection policy.
    shared_ptr<string> selectionPolicy_ {};
    // The data source ID, which is a system-generated UUID.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
