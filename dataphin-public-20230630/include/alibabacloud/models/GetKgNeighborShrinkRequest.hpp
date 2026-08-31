// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGNEIGHBORSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKGNEIGHBORSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetKgNeighborShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgNeighborShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityDataId, entityDataId_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(NeighborsQuery, neighborsQueryShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgNeighborShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityDataId, entityDataId_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(NeighborsQuery, neighborsQueryShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetKgNeighborShrinkRequest() = default ;
    GetKgNeighborShrinkRequest(const GetKgNeighborShrinkRequest &) = default ;
    GetKgNeighborShrinkRequest(GetKgNeighborShrinkRequest &&) = default ;
    GetKgNeighborShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgNeighborShrinkRequest() = default ;
    GetKgNeighborShrinkRequest& operator=(const GetKgNeighborShrinkRequest &) = default ;
    GetKgNeighborShrinkRequest& operator=(GetKgNeighborShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entityDataId_ == nullptr
        && this->entityType_ == nullptr && this->neighborsQueryShrink_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // entityDataId Field Functions 
    bool hasEntityDataId() const { return this->entityDataId_ != nullptr;};
    void deleteEntityDataId() { this->entityDataId_ = nullptr;};
    inline string getEntityDataId() const { DARABONBA_PTR_GET_DEFAULT(entityDataId_, "") };
    inline GetKgNeighborShrinkRequest& setEntityDataId(string entityDataId) { DARABONBA_PTR_SET_VALUE(entityDataId_, entityDataId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline GetKgNeighborShrinkRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // neighborsQueryShrink Field Functions 
    bool hasNeighborsQueryShrink() const { return this->neighborsQueryShrink_ != nullptr;};
    void deleteNeighborsQueryShrink() { this->neighborsQueryShrink_ = nullptr;};
    inline string getNeighborsQueryShrink() const { DARABONBA_PTR_GET_DEFAULT(neighborsQueryShrink_, "") };
    inline GetKgNeighborShrinkRequest& setNeighborsQueryShrink(string neighborsQueryShrink) { DARABONBA_PTR_SET_VALUE(neighborsQueryShrink_, neighborsQueryShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetKgNeighborShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetKgNeighborShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetKgNeighborShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The entity record data ID.
    // 
    // This parameter is required.
    shared_ptr<string> entityDataId_ {};
    // The entity type.
    // 
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    // The entity record neighbor node query instruction.
    shared_ptr<string> neighborsQueryShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // The model ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
