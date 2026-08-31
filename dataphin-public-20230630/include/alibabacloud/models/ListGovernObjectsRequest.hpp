// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGOVERNOBJECTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGOVERNOBJECTSREQUEST_HPP_
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
  class ListGovernObjectsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGovernObjectsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGovernObjectsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListGovernObjectsRequest() = default ;
    ListGovernObjectsRequest(const ListGovernObjectsRequest &) = default ;
    ListGovernObjectsRequest(ListGovernObjectsRequest &&) = default ;
    ListGovernObjectsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGovernObjectsRequest() = default ;
    ListGovernObjectsRequest& operator=(const ListGovernObjectsRequest &) = default ;
    ListGovernObjectsRequest& operator=(ListGovernObjectsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(GovernItemType, governItemType_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(ProjectNames, projectNames_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(ViewType, viewType_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(GovernItemType, governItemType_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(ProjectNames, projectNames_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
        DARABONBA_PTR_FROM_JSON(ViewType, viewType_);
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
      virtual bool empty() const override { return this->governItemType_ == nullptr
        && this->keyword_ == nullptr && this->owner_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectNames_ == nullptr
        && this->statusList_ == nullptr && this->viewType_ == nullptr; };
      // governItemType Field Functions 
      bool hasGovernItemType() const { return this->governItemType_ != nullptr;};
      void deleteGovernItemType() { this->governItemType_ = nullptr;};
      inline string getGovernItemType() const { DARABONBA_PTR_GET_DEFAULT(governItemType_, "") };
      inline ListQuery& setGovernItemType(string governItemType) { DARABONBA_PTR_SET_VALUE(governItemType_, governItemType) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline ListQuery& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ListQuery& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // projectNames Field Functions 
      bool hasProjectNames() const { return this->projectNames_ != nullptr;};
      void deleteProjectNames() { this->projectNames_ = nullptr;};
      inline const vector<string> & getProjectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
      inline vector<string> getProjectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
      inline ListQuery& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
      inline ListQuery& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline ListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline ListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      // viewType Field Functions 
      bool hasViewType() const { return this->viewType_ != nullptr;};
      void deleteViewType() { this->viewType_ = nullptr;};
      inline string getViewType() const { DARABONBA_PTR_GET_DEFAULT(viewType_, "") };
      inline ListQuery& setViewType(string viewType) { DARABONBA_PTR_SET_VALUE(viewType_, viewType) };


    protected:
      // The governance item type. Valid values:
      // 
      // - TABLE
      // - DATASOURCE_TABLE
      // - DATASOURCE
      // - INDEX
      // - REALTIME_LOGICAL_TABLE
      // - QD_FEATURE
      // 
      // This parameter is required.
      shared_ptr<string> governItemType_ {};
      // The search keyword.
      shared_ptr<string> keyword_ {};
      // The owner.
      shared_ptr<string> owner_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The list of project names used to filter results.
      shared_ptr<vector<string>> projectNames_ {};
      // The list of governance object statuses. Valid values:
      // 
      // - NEW
      // - VERIFY
      // - FINISHED
      // - IGNORE
      shared_ptr<vector<string>> statusList_ {};
      // The view type. Valid values:
      // 
      // - ALL
      // - OWNER
      // - PROJECT
      shared_ptr<string> viewType_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListGovernObjectsRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListGovernObjectsRequest::ListQuery) };
    inline ListGovernObjectsRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListGovernObjectsRequest::ListQuery) };
    inline ListGovernObjectsRequest& setListQuery(const ListGovernObjectsRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListGovernObjectsRequest& setListQuery(ListGovernObjectsRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListGovernObjectsRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListGovernObjectsRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The paged query conditions.
    // 
    // This parameter is required.
    shared_ptr<ListGovernObjectsRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
