// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRULETASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRULETASKSREQUEST_HPP_
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
  class ListQualityRuleTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityRuleTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityRuleTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListQualityRuleTasksRequest() = default ;
    ListQualityRuleTasksRequest(const ListQualityRuleTasksRequest &) = default ;
    ListQualityRuleTasksRequest(ListQualityRuleTasksRequest &&) = default ;
    ListQualityRuleTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityRuleTasksRequest() = default ;
    ListQualityRuleTasksRequest& operator=(const ListQualityRuleTasksRequest &) = default ;
    ListQualityRuleTasksRequest& operator=(ListQualityRuleTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(BizDate, bizDate_);
        DARABONBA_PTR_TO_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RuleStrengthList, ruleStrengthList_);
        DARABONBA_PTR_TO_JSON(RuleTagList, ruleTagList_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(ValidateResultList, validateResultList_);
        DARABONBA_PTR_TO_JSON(WatchTaskId, watchTaskId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDate, bizDate_);
        DARABONBA_PTR_FROM_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RuleStrengthList, ruleStrengthList_);
        DARABONBA_PTR_FROM_JSON(RuleTagList, ruleTagList_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
        DARABONBA_PTR_FROM_JSON(ValidateResultList, validateResultList_);
        DARABONBA_PTR_FROM_JSON(WatchTaskId, watchTaskId_);
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
      virtual bool empty() const override { return this->bizDate_ == nullptr
        && this->catalogList_ == nullptr && this->keyword_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->ruleStrengthList_ == nullptr
        && this->ruleTagList_ == nullptr && this->statusList_ == nullptr && this->validateResultList_ == nullptr && this->watchTaskId_ == nullptr; };
      // bizDate Field Functions 
      bool hasBizDate() const { return this->bizDate_ != nullptr;};
      void deleteBizDate() { this->bizDate_ = nullptr;};
      inline string getBizDate() const { DARABONBA_PTR_GET_DEFAULT(bizDate_, "") };
      inline ListQuery& setBizDate(string bizDate) { DARABONBA_PTR_SET_VALUE(bizDate_, bizDate) };


      // catalogList Field Functions 
      bool hasCatalogList() const { return this->catalogList_ != nullptr;};
      void deleteCatalogList() { this->catalogList_ = nullptr;};
      inline const vector<string> & getCatalogList() const { DARABONBA_PTR_GET_CONST(catalogList_, vector<string>) };
      inline vector<string> getCatalogList() { DARABONBA_PTR_GET(catalogList_, vector<string>) };
      inline ListQuery& setCatalogList(const vector<string> & catalogList) { DARABONBA_PTR_SET_VALUE(catalogList_, catalogList) };
      inline ListQuery& setCatalogList(vector<string> && catalogList) { DARABONBA_PTR_SET_RVALUE(catalogList_, catalogList) };


      // keyword Field Functions 
      bool hasKeyword() const { return this->keyword_ != nullptr;};
      void deleteKeyword() { this->keyword_ = nullptr;};
      inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
      inline ListQuery& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline ListQuery& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ListQuery& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // ruleStrengthList Field Functions 
      bool hasRuleStrengthList() const { return this->ruleStrengthList_ != nullptr;};
      void deleteRuleStrengthList() { this->ruleStrengthList_ = nullptr;};
      inline const vector<string> & getRuleStrengthList() const { DARABONBA_PTR_GET_CONST(ruleStrengthList_, vector<string>) };
      inline vector<string> getRuleStrengthList() { DARABONBA_PTR_GET(ruleStrengthList_, vector<string>) };
      inline ListQuery& setRuleStrengthList(const vector<string> & ruleStrengthList) { DARABONBA_PTR_SET_VALUE(ruleStrengthList_, ruleStrengthList) };
      inline ListQuery& setRuleStrengthList(vector<string> && ruleStrengthList) { DARABONBA_PTR_SET_RVALUE(ruleStrengthList_, ruleStrengthList) };


      // ruleTagList Field Functions 
      bool hasRuleTagList() const { return this->ruleTagList_ != nullptr;};
      void deleteRuleTagList() { this->ruleTagList_ = nullptr;};
      inline const vector<string> & getRuleTagList() const { DARABONBA_PTR_GET_CONST(ruleTagList_, vector<string>) };
      inline vector<string> getRuleTagList() { DARABONBA_PTR_GET(ruleTagList_, vector<string>) };
      inline ListQuery& setRuleTagList(const vector<string> & ruleTagList) { DARABONBA_PTR_SET_VALUE(ruleTagList_, ruleTagList) };
      inline ListQuery& setRuleTagList(vector<string> && ruleTagList) { DARABONBA_PTR_SET_RVALUE(ruleTagList_, ruleTagList) };


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline ListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline ListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      // validateResultList Field Functions 
      bool hasValidateResultList() const { return this->validateResultList_ != nullptr;};
      void deleteValidateResultList() { this->validateResultList_ = nullptr;};
      inline const vector<string> & getValidateResultList() const { DARABONBA_PTR_GET_CONST(validateResultList_, vector<string>) };
      inline vector<string> getValidateResultList() { DARABONBA_PTR_GET(validateResultList_, vector<string>) };
      inline ListQuery& setValidateResultList(const vector<string> & validateResultList) { DARABONBA_PTR_SET_VALUE(validateResultList_, validateResultList) };
      inline ListQuery& setValidateResultList(vector<string> && validateResultList) { DARABONBA_PTR_SET_RVALUE(validateResultList_, validateResultList) };


      // watchTaskId Field Functions 
      bool hasWatchTaskId() const { return this->watchTaskId_ != nullptr;};
      void deleteWatchTaskId() { this->watchTaskId_ = nullptr;};
      inline int64_t getWatchTaskId() const { DARABONBA_PTR_GET_DEFAULT(watchTaskId_, 0L) };
      inline ListQuery& setWatchTaskId(int64_t watchTaskId) { DARABONBA_PTR_SET_VALUE(watchTaskId_, watchTaskId) };


    protected:
      shared_ptr<string> bizDate_ {};
      shared_ptr<vector<string>> catalogList_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> ruleStrengthList_ {};
      shared_ptr<vector<string>> ruleTagList_ {};
      shared_ptr<vector<string>> statusList_ {};
      shared_ptr<vector<string>> validateResultList_ {};
      shared_ptr<int64_t> watchTaskId_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListQualityRuleTasksRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListQualityRuleTasksRequest::ListQuery) };
    inline ListQualityRuleTasksRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListQualityRuleTasksRequest::ListQuery) };
    inline ListQualityRuleTasksRequest& setListQuery(const ListQualityRuleTasksRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListQualityRuleTasksRequest& setListQuery(ListQualityRuleTasksRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListQualityRuleTasksRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<ListQualityRuleTasksRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
