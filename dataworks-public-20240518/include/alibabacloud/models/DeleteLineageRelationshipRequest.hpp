// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELINEAGERELATIONSHIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELINEAGERELATIONSHIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteLineageRelationshipRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLineageRelationshipRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLineageRelationshipRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteLineageRelationshipRequest() = default ;
    DeleteLineageRelationshipRequest(const DeleteLineageRelationshipRequest &) = default ;
    DeleteLineageRelationshipRequest(DeleteLineageRelationshipRequest &&) = default ;
    DeleteLineageRelationshipRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLineageRelationshipRequest() = default ;
    DeleteLineageRelationshipRequest& operator=(const DeleteLineageRelationshipRequest &) = default ;
    DeleteLineageRelationshipRequest& operator=(DeleteLineageRelationshipRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeleteLineageRelationshipRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The ID of the lineage relationship. You can obtain this ID from the response of the ListLineageRelationships operation. The ID is in the format of `${accountId}:${srcEntityType}.${srcEntityId}:${dstEntityType}.${dstEntityId}:${taskType}.${taskId}`, where accountId is the Alibaba Cloud account ID, srcEntityType and srcEntityId are the source entity type and source entity ID, dstEntityType and dstEntityId are the destination entity type and destination entity ID, and taskType and taskId are the lineage task type and task ID. Example: `1245491995595649:custom-report.report_test_001:custom-table.table_test_001:custom-lineage-task.test_task_001`.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
