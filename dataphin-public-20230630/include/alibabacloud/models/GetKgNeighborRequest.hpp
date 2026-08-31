// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKGNEIGHBORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKGNEIGHBORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetKgNeighborRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKgNeighborRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntityDataId, entityDataId_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(NeighborsQuery, neighborsQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKgNeighborRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntityDataId, entityDataId_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(NeighborsQuery, neighborsQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetKgNeighborRequest() = default ;
    GetKgNeighborRequest(const GetKgNeighborRequest &) = default ;
    GetKgNeighborRequest(GetKgNeighborRequest &&) = default ;
    GetKgNeighborRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKgNeighborRequest() = default ;
    GetKgNeighborRequest& operator=(const GetKgNeighborRequest &) = default ;
    GetKgNeighborRequest& operator=(GetKgNeighborRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NeighborsQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NeighborsQuery& obj) { 
        DARABONBA_PTR_TO_JSON(Depth, depth_);
        DARABONBA_PTR_TO_JSON(DirectionType, directionType_);
        DARABONBA_PTR_TO_JSON(RelationTypes, relationTypes_);
      };
      friend void from_json(const Darabonba::Json& j, NeighborsQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(Depth, depth_);
        DARABONBA_PTR_FROM_JSON(DirectionType, directionType_);
        DARABONBA_PTR_FROM_JSON(RelationTypes, relationTypes_);
      };
      NeighborsQuery() = default ;
      NeighborsQuery(const NeighborsQuery &) = default ;
      NeighborsQuery(NeighborsQuery &&) = default ;
      NeighborsQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NeighborsQuery() = default ;
      NeighborsQuery& operator=(const NeighborsQuery &) = default ;
      NeighborsQuery& operator=(NeighborsQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->depth_ == nullptr
        && this->directionType_ == nullptr && this->relationTypes_ == nullptr; };
      // depth Field Functions 
      bool hasDepth() const { return this->depth_ != nullptr;};
      void deleteDepth() { this->depth_ = nullptr;};
      inline int32_t getDepth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
      inline NeighborsQuery& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


      // directionType Field Functions 
      bool hasDirectionType() const { return this->directionType_ != nullptr;};
      void deleteDirectionType() { this->directionType_ = nullptr;};
      inline string getDirectionType() const { DARABONBA_PTR_GET_DEFAULT(directionType_, "") };
      inline NeighborsQuery& setDirectionType(string directionType) { DARABONBA_PTR_SET_VALUE(directionType_, directionType) };


      // relationTypes Field Functions 
      bool hasRelationTypes() const { return this->relationTypes_ != nullptr;};
      void deleteRelationTypes() { this->relationTypes_ = nullptr;};
      inline const vector<string> & getRelationTypes() const { DARABONBA_PTR_GET_CONST(relationTypes_, vector<string>) };
      inline vector<string> getRelationTypes() { DARABONBA_PTR_GET(relationTypes_, vector<string>) };
      inline NeighborsQuery& setRelationTypes(const vector<string> & relationTypes) { DARABONBA_PTR_SET_VALUE(relationTypes_, relationTypes) };
      inline NeighborsQuery& setRelationTypes(vector<string> && relationTypes) { DARABONBA_PTR_SET_RVALUE(relationTypes_, relationTypes) };


    protected:
      // The maximum depth of neighbor nodes. Default value: 1.
      shared_ptr<int32_t> depth_ {};
      // The direction type. Valid values:
      // - in: the current entity is the target node.
      // - out: the current entity is the source node.
      // - both: the current entity is both the source node and the target node.
      // 
      // Default value: both.
      shared_ptr<string> directionType_ {};
      // The list of relation types.
      shared_ptr<vector<string>> relationTypes_ {};
    };

    virtual bool empty() const override { return this->entityDataId_ == nullptr
        && this->entityType_ == nullptr && this->neighborsQuery_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->workspaceId_ == nullptr; };
    // entityDataId Field Functions 
    bool hasEntityDataId() const { return this->entityDataId_ != nullptr;};
    void deleteEntityDataId() { this->entityDataId_ = nullptr;};
    inline string getEntityDataId() const { DARABONBA_PTR_GET_DEFAULT(entityDataId_, "") };
    inline GetKgNeighborRequest& setEntityDataId(string entityDataId) { DARABONBA_PTR_SET_VALUE(entityDataId_, entityDataId) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline GetKgNeighborRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // neighborsQuery Field Functions 
    bool hasNeighborsQuery() const { return this->neighborsQuery_ != nullptr;};
    void deleteNeighborsQuery() { this->neighborsQuery_ = nullptr;};
    inline const GetKgNeighborRequest::NeighborsQuery & getNeighborsQuery() const { DARABONBA_PTR_GET_CONST(neighborsQuery_, GetKgNeighborRequest::NeighborsQuery) };
    inline GetKgNeighborRequest::NeighborsQuery getNeighborsQuery() { DARABONBA_PTR_GET(neighborsQuery_, GetKgNeighborRequest::NeighborsQuery) };
    inline GetKgNeighborRequest& setNeighborsQuery(const GetKgNeighborRequest::NeighborsQuery & neighborsQuery) { DARABONBA_PTR_SET_VALUE(neighborsQuery_, neighborsQuery) };
    inline GetKgNeighborRequest& setNeighborsQuery(GetKgNeighborRequest::NeighborsQuery && neighborsQuery) { DARABONBA_PTR_SET_RVALUE(neighborsQuery_, neighborsQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetKgNeighborRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetKgNeighborRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetKgNeighborRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    shared_ptr<GetKgNeighborRequest::NeighborsQuery> neighborsQuery_ {};
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
