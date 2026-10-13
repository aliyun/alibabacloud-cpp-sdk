// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCSOURCETREENODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTEXTDATABASESYNCSOURCETREENODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ListContextDatabaseSyncSourceTreeNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContextDatabaseSyncSourceTreeNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContextDatabaseSyncSourceTreeNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListContextDatabaseSyncSourceTreeNodesRequest() = default ;
    ListContextDatabaseSyncSourceTreeNodesRequest(const ListContextDatabaseSyncSourceTreeNodesRequest &) = default ;
    ListContextDatabaseSyncSourceTreeNodesRequest(ListContextDatabaseSyncSourceTreeNodesRequest &&) = default ;
    ListContextDatabaseSyncSourceTreeNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContextDatabaseSyncSourceTreeNodesRequest() = default ;
    ListContextDatabaseSyncSourceTreeNodesRequest& operator=(const ListContextDatabaseSyncSourceTreeNodesRequest &) = default ;
    ListContextDatabaseSyncSourceTreeNodesRequest& operator=(ListContextDatabaseSyncSourceTreeNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sourceId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListContextDatabaseSyncSourceTreeNodesRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListContextDatabaseSyncSourceTreeNodesRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
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
