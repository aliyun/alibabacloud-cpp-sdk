// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKGRELATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTKGRELATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListKgRelationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKgRelationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKgRelationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListKgRelationRequest() = default ;
    ListKgRelationRequest(const ListKgRelationRequest &) = default ;
    ListKgRelationRequest(ListKgRelationRequest &&) = default ;
    ListKgRelationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKgRelationRequest() = default ;
    ListKgRelationRequest& operator=(const ListKgRelationRequest &) = default ;
    ListKgRelationRequest& operator=(ListKgRelationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(SourceEntityId, sourceEntityId_);
        DARABONBA_PTR_TO_JSON(TargetEntityId, targetEntityId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(SourceEntityId, sourceEntityId_);
        DARABONBA_PTR_FROM_JSON(TargetEntityId, targetEntityId_);
      };
      ListQuery() = default ;
      ListQuery(const ListQuery &) = default ;
      ListQuery(ListQuery &&) = default ;
      ListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ListQuery() = default ;
      ListQuery& operator=(const ListQuery &) = default ;
      ListQuery& operator=(ListQuery &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNum_ == nullptr
        && this->pageSize_ == nullptr && this->sourceEntityId_ == nullptr && this->targetEntityId_ == nullptr; };
      // pageNum Field Functions 
      bool hasPageNum() const { return this->pageNum_ != nullptr;};
      void deletePageNum() { this->pageNum_ = nullptr;};
      inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
      inline ListQuery& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // sourceEntityId Field Functions 
      bool hasSourceEntityId() const { return this->sourceEntityId_ != nullptr;};
      void deleteSourceEntityId() { this->sourceEntityId_ = nullptr;};
      inline string getSourceEntityId() const { DARABONBA_PTR_GET_DEFAULT(sourceEntityId_, "") };
      inline ListQuery& setSourceEntityId(string sourceEntityId) { DARABONBA_PTR_SET_VALUE(sourceEntityId_, sourceEntityId) };


      // targetEntityId Field Functions 
      bool hasTargetEntityId() const { return this->targetEntityId_ != nullptr;};
      void deleteTargetEntityId() { this->targetEntityId_ = nullptr;};
      inline string getTargetEntityId() const { DARABONBA_PTR_GET_DEFAULT(targetEntityId_, "") };
      inline ListQuery& setTargetEntityId(string targetEntityId) { DARABONBA_PTR_SET_VALUE(targetEntityId_, targetEntityId) };


    protected:
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNum_ {};
      // The number of records per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The source entity record ID.
      shared_ptr<string> sourceEntityId_ {};
      // The target entity record ID.
      shared_ptr<string> targetEntityId_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->relationType_ == nullptr && this->workspaceId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListKgRelationRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListKgRelationRequest::ListQuery) };
    inline ListKgRelationRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListKgRelationRequest::ListQuery) };
    inline ListKgRelationRequest& setListQuery(const ListKgRelationRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListKgRelationRequest& setListQuery(ListKgRelationRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListKgRelationRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string getRelationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ListKgRelationRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListKgRelationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The paged search filter conditions.
    shared_ptr<ListKgRelationRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The relationship type code.
    // 
    // This parameter is required.
    shared_ptr<string> relationType_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
