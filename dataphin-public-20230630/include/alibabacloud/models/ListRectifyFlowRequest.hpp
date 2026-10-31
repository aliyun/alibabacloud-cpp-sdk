// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECTIFYFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRECTIFYFLOWREQUEST_HPP_
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
  class ListRectifyFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRectifyFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRectifyFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    ListRectifyFlowRequest() = default ;
    ListRectifyFlowRequest(const ListRectifyFlowRequest &) = default ;
    ListRectifyFlowRequest(ListRectifyFlowRequest &&) = default ;
    ListRectifyFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRectifyFlowRequest() = default ;
    ListRectifyFlowRequest& operator=(const ListRectifyFlowRequest &) = default ;
    ListRectifyFlowRequest& operator=(ListRectifyFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(GovernItemType, governItemType_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(PriorityFilters, priorityFilters_);
        DARABONBA_PTR_TO_JSON(RectifyUserFilters, rectifyUserFilters_);
        DARABONBA_PTR_TO_JSON(StatusFilters, statusFilters_);
        DARABONBA_PTR_TO_JSON(VerifyUserFilters, verifyUserFilters_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(GovernItemType, governItemType_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(PriorityFilters, priorityFilters_);
        DARABONBA_PTR_FROM_JSON(RectifyUserFilters, rectifyUserFilters_);
        DARABONBA_PTR_FROM_JSON(StatusFilters, statusFilters_);
        DARABONBA_PTR_FROM_JSON(VerifyUserFilters, verifyUserFilters_);
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
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->priorityFilters_ == nullptr && this->rectifyUserFilters_ == nullptr && this->statusFilters_ == nullptr
        && this->verifyUserFilters_ == nullptr; };
      // governItemType Field Functions 
      bool hasGovernItemType() const { return this->governItemType_ != nullptr;};
      void deleteGovernItemType() { this->governItemType_ = nullptr;};
      inline string getGovernItemType() const { DARABONBA_PTR_GET_DEFAULT(governItemType_, "") };
      inline ListQuery& setGovernItemType(string governItemType) { DARABONBA_PTR_SET_VALUE(governItemType_, governItemType) };


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


      // priorityFilters Field Functions 
      bool hasPriorityFilters() const { return this->priorityFilters_ != nullptr;};
      void deletePriorityFilters() { this->priorityFilters_ = nullptr;};
      inline const vector<string> & getPriorityFilters() const { DARABONBA_PTR_GET_CONST(priorityFilters_, vector<string>) };
      inline vector<string> getPriorityFilters() { DARABONBA_PTR_GET(priorityFilters_, vector<string>) };
      inline ListQuery& setPriorityFilters(const vector<string> & priorityFilters) { DARABONBA_PTR_SET_VALUE(priorityFilters_, priorityFilters) };
      inline ListQuery& setPriorityFilters(vector<string> && priorityFilters) { DARABONBA_PTR_SET_RVALUE(priorityFilters_, priorityFilters) };


      // rectifyUserFilters Field Functions 
      bool hasRectifyUserFilters() const { return this->rectifyUserFilters_ != nullptr;};
      void deleteRectifyUserFilters() { this->rectifyUserFilters_ = nullptr;};
      inline const vector<string> & getRectifyUserFilters() const { DARABONBA_PTR_GET_CONST(rectifyUserFilters_, vector<string>) };
      inline vector<string> getRectifyUserFilters() { DARABONBA_PTR_GET(rectifyUserFilters_, vector<string>) };
      inline ListQuery& setRectifyUserFilters(const vector<string> & rectifyUserFilters) { DARABONBA_PTR_SET_VALUE(rectifyUserFilters_, rectifyUserFilters) };
      inline ListQuery& setRectifyUserFilters(vector<string> && rectifyUserFilters) { DARABONBA_PTR_SET_RVALUE(rectifyUserFilters_, rectifyUserFilters) };


      // statusFilters Field Functions 
      bool hasStatusFilters() const { return this->statusFilters_ != nullptr;};
      void deleteStatusFilters() { this->statusFilters_ = nullptr;};
      inline const vector<string> & getStatusFilters() const { DARABONBA_PTR_GET_CONST(statusFilters_, vector<string>) };
      inline vector<string> getStatusFilters() { DARABONBA_PTR_GET(statusFilters_, vector<string>) };
      inline ListQuery& setStatusFilters(const vector<string> & statusFilters) { DARABONBA_PTR_SET_VALUE(statusFilters_, statusFilters) };
      inline ListQuery& setStatusFilters(vector<string> && statusFilters) { DARABONBA_PTR_SET_RVALUE(statusFilters_, statusFilters) };


      // verifyUserFilters Field Functions 
      bool hasVerifyUserFilters() const { return this->verifyUserFilters_ != nullptr;};
      void deleteVerifyUserFilters() { this->verifyUserFilters_ = nullptr;};
      inline const vector<string> & getVerifyUserFilters() const { DARABONBA_PTR_GET_CONST(verifyUserFilters_, vector<string>) };
      inline vector<string> getVerifyUserFilters() { DARABONBA_PTR_GET(verifyUserFilters_, vector<string>) };
      inline ListQuery& setVerifyUserFilters(const vector<string> & verifyUserFilters) { DARABONBA_PTR_SET_VALUE(verifyUserFilters_, verifyUserFilters) };
      inline ListQuery& setVerifyUserFilters(vector<string> && verifyUserFilters) { DARABONBA_PTR_SET_RVALUE(verifyUserFilters_, verifyUserFilters) };


    protected:
      // The governance object type. Valid values: TABLE, DATASOURCE_TABLE, DATASOURCE, INDEX, REALTIME_LOGICAL_TABLE, and QD_FEATURE.
      // 
      // This parameter is required.
      shared_ptr<string> governItemType_ {};
      // The page number. Default value: 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Default value: 20.
      shared_ptr<int32_t> pageSize_ {};
      // The priority filters. Valid values: HIGH, MIDDLE, and LOW.
      shared_ptr<vector<string>> priorityFilters_ {};
      // The list of rectifier IDs.
      shared_ptr<vector<string>> rectifyUserFilters_ {};
      // SUBMIT_RECTIFY, SUBMIT_VERIFY, FINISH_VERIFY, and REJECT_VERIFY.
      shared_ptr<vector<string>> statusFilters_ {};
      // The list of verifier IDs.
      shared_ptr<vector<string>> verifyUserFilters_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListRectifyFlowRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListRectifyFlowRequest::ListQuery) };
    inline ListRectifyFlowRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListRectifyFlowRequest::ListQuery) };
    inline ListRectifyFlowRequest& setListQuery(const ListRectifyFlowRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListRectifyFlowRequest& setListQuery(ListRectifyFlowRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListRectifyFlowRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline ListRectifyFlowRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The business request parameters.
    // 
    // This parameter is required.
    shared_ptr<ListRectifyFlowRequest::ListQuery> listQuery_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
