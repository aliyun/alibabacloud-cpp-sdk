// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafRulesetsResponseBodyRulesets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rulesets, rulesets_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rulesets, rulesets_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWafRulesetsResponseBody() = default ;
    ListWafRulesetsResponseBody(const ListWafRulesetsResponseBody &) = default ;
    ListWafRulesetsResponseBody(ListWafRulesetsResponseBody &&) = default ;
    ListWafRulesetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesetsResponseBody() = default ;
    ListWafRulesetsResponseBody& operator=(const ListWafRulesetsResponseBody &) = default ;
    ListWafRulesetsResponseBody& operator=(ListWafRulesetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceUsage_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->rulesets_ == nullptr && return this->siteUsage_ == nullptr
        && return this->totalCount_ == nullptr; };
    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t instanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListWafRulesetsResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesetsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafRulesetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rulesets Field Functions 
    bool hasRulesets() const { return this->rulesets_ != nullptr;};
    void deleteRulesets() { this->rulesets_ = nullptr;};
    inline const vector<ListWafRulesetsResponseBodyRulesets> & rulesets() const { DARABONBA_PTR_GET_CONST(rulesets_, vector<ListWafRulesetsResponseBodyRulesets>) };
    inline vector<ListWafRulesetsResponseBodyRulesets> rulesets() { DARABONBA_PTR_GET(rulesets_, vector<ListWafRulesetsResponseBodyRulesets>) };
    inline ListWafRulesetsResponseBody& setRulesets(const vector<ListWafRulesetsResponseBodyRulesets> & rulesets) { DARABONBA_PTR_SET_VALUE(rulesets_, rulesets) };
    inline ListWafRulesetsResponseBody& setRulesets(vector<ListWafRulesetsResponseBodyRulesets> && rulesets) { DARABONBA_PTR_SET_RVALUE(rulesets_, rulesets) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline int64_t siteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0L) };
    inline ListWafRulesetsResponseBody& setSiteUsage(int64_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWafRulesetsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of WAF rule sets used by the instance in this WAF operation phase.
    std::shared_ptr<int64_t> instanceUsage_ = nullptr;
    // Current page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // List of rule set information, containing detailed information about the rule sets.
    std::shared_ptr<vector<ListWafRulesetsResponseBodyRulesets>> rulesets_ = nullptr;
    // Number of WAF rule sets used by the site in this WAF operation phase.
    std::shared_ptr<int64_t> siteUsage_ = nullptr;
    // Total number of filtered records.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
