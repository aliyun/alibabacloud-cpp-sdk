// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRULESREQUEST_HPP_
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
  class ListQualityRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ListQuery, listQuery_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ListQualityRulesRequest() = default ;
    ListQualityRulesRequest(const ListQualityRulesRequest &) = default ;
    ListQualityRulesRequest(ListQualityRulesRequest &&) = default ;
    ListQualityRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityRulesRequest() = default ;
    ListQualityRulesRequest& operator=(const ListQualityRulesRequest &) = default ;
    ListQualityRulesRequest& operator=(ListQualityRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ListQuery : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ListQuery& obj) { 
        DARABONBA_PTR_TO_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_TO_JSON(Keyword, keyword_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(RuleStrengthList, ruleStrengthList_);
        DARABONBA_PTR_TO_JSON(StatusList, statusList_);
        DARABONBA_PTR_TO_JSON(TemplateIdList, templateIdList_);
        DARABONBA_PTR_TO_JSON(TestRunTaskStatusList, testRunTaskStatusList_);
        DARABONBA_PTR_TO_JSON(TestRunTaskValidateResultList, testRunTaskValidateResultList_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, ListQuery& obj) { 
        DARABONBA_PTR_FROM_JSON(CatalogList, catalogList_);
        DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(RuleStrengthList, ruleStrengthList_);
        DARABONBA_PTR_FROM_JSON(StatusList, statusList_);
        DARABONBA_PTR_FROM_JSON(TemplateIdList, templateIdList_);
        DARABONBA_PTR_FROM_JSON(TestRunTaskStatusList, testRunTaskStatusList_);
        DARABONBA_PTR_FROM_JSON(TestRunTaskValidateResultList, testRunTaskValidateResultList_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
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
      virtual bool empty() const override { return this->catalogList_ == nullptr
        && this->keyword_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->ruleStrengthList_ == nullptr && this->statusList_ == nullptr
        && this->templateIdList_ == nullptr && this->testRunTaskStatusList_ == nullptr && this->testRunTaskValidateResultList_ == nullptr && this->watchId_ == nullptr; };
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


      // statusList Field Functions 
      bool hasStatusList() const { return this->statusList_ != nullptr;};
      void deleteStatusList() { this->statusList_ = nullptr;};
      inline const vector<string> & getStatusList() const { DARABONBA_PTR_GET_CONST(statusList_, vector<string>) };
      inline vector<string> getStatusList() { DARABONBA_PTR_GET(statusList_, vector<string>) };
      inline ListQuery& setStatusList(const vector<string> & statusList) { DARABONBA_PTR_SET_VALUE(statusList_, statusList) };
      inline ListQuery& setStatusList(vector<string> && statusList) { DARABONBA_PTR_SET_RVALUE(statusList_, statusList) };


      // templateIdList Field Functions 
      bool hasTemplateIdList() const { return this->templateIdList_ != nullptr;};
      void deleteTemplateIdList() { this->templateIdList_ = nullptr;};
      inline const vector<int64_t> & getTemplateIdList() const { DARABONBA_PTR_GET_CONST(templateIdList_, vector<int64_t>) };
      inline vector<int64_t> getTemplateIdList() { DARABONBA_PTR_GET(templateIdList_, vector<int64_t>) };
      inline ListQuery& setTemplateIdList(const vector<int64_t> & templateIdList) { DARABONBA_PTR_SET_VALUE(templateIdList_, templateIdList) };
      inline ListQuery& setTemplateIdList(vector<int64_t> && templateIdList) { DARABONBA_PTR_SET_RVALUE(templateIdList_, templateIdList) };


      // testRunTaskStatusList Field Functions 
      bool hasTestRunTaskStatusList() const { return this->testRunTaskStatusList_ != nullptr;};
      void deleteTestRunTaskStatusList() { this->testRunTaskStatusList_ = nullptr;};
      inline const vector<string> & getTestRunTaskStatusList() const { DARABONBA_PTR_GET_CONST(testRunTaskStatusList_, vector<string>) };
      inline vector<string> getTestRunTaskStatusList() { DARABONBA_PTR_GET(testRunTaskStatusList_, vector<string>) };
      inline ListQuery& setTestRunTaskStatusList(const vector<string> & testRunTaskStatusList) { DARABONBA_PTR_SET_VALUE(testRunTaskStatusList_, testRunTaskStatusList) };
      inline ListQuery& setTestRunTaskStatusList(vector<string> && testRunTaskStatusList) { DARABONBA_PTR_SET_RVALUE(testRunTaskStatusList_, testRunTaskStatusList) };


      // testRunTaskValidateResultList Field Functions 
      bool hasTestRunTaskValidateResultList() const { return this->testRunTaskValidateResultList_ != nullptr;};
      void deleteTestRunTaskValidateResultList() { this->testRunTaskValidateResultList_ = nullptr;};
      inline const vector<string> & getTestRunTaskValidateResultList() const { DARABONBA_PTR_GET_CONST(testRunTaskValidateResultList_, vector<string>) };
      inline vector<string> getTestRunTaskValidateResultList() { DARABONBA_PTR_GET(testRunTaskValidateResultList_, vector<string>) };
      inline ListQuery& setTestRunTaskValidateResultList(const vector<string> & testRunTaskValidateResultList) { DARABONBA_PTR_SET_VALUE(testRunTaskValidateResultList_, testRunTaskValidateResultList) };
      inline ListQuery& setTestRunTaskValidateResultList(vector<string> && testRunTaskValidateResultList) { DARABONBA_PTR_SET_RVALUE(testRunTaskValidateResultList_, testRunTaskValidateResultList) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline ListQuery& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      shared_ptr<vector<string>> catalogList_ {};
      shared_ptr<string> keyword_ {};
      shared_ptr<int32_t> pageNo_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<vector<string>> ruleStrengthList_ {};
      shared_ptr<vector<string>> statusList_ {};
      shared_ptr<vector<int64_t>> templateIdList_ {};
      shared_ptr<vector<string>> testRunTaskStatusList_ {};
      shared_ptr<vector<string>> testRunTaskValidateResultList_ {};
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->listQuery_ == nullptr
        && this->opTenantId_ == nullptr; };
    // listQuery Field Functions 
    bool hasListQuery() const { return this->listQuery_ != nullptr;};
    void deleteListQuery() { this->listQuery_ = nullptr;};
    inline const ListQualityRulesRequest::ListQuery & getListQuery() const { DARABONBA_PTR_GET_CONST(listQuery_, ListQualityRulesRequest::ListQuery) };
    inline ListQualityRulesRequest::ListQuery getListQuery() { DARABONBA_PTR_GET(listQuery_, ListQualityRulesRequest::ListQuery) };
    inline ListQualityRulesRequest& setListQuery(const ListQualityRulesRequest::ListQuery & listQuery) { DARABONBA_PTR_SET_VALUE(listQuery_, listQuery) };
    inline ListQualityRulesRequest& setListQuery(ListQualityRulesRequest::ListQuery && listQuery) { DARABONBA_PTR_SET_RVALUE(listQuery_, listQuery) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ListQualityRulesRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<ListQualityRulesRequest::ListQuery> listQuery_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
