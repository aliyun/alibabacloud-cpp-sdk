// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWafRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceUsage, instanceUsage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWafRulesResponseBody() = default ;
    ListWafRulesResponseBody(const ListWafRulesResponseBody &) = default ;
    ListWafRulesResponseBody(ListWafRulesResponseBody &&) = default ;
    ListWafRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafRulesResponseBody() = default ;
    ListWafRulesResponseBody& operator=(const ListWafRulesResponseBody &) = default ;
    ListWafRulesResponseBody& operator=(ListWafRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceUsage_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->requestId_ != nullptr && this->rules_ != nullptr && this->siteUsage_ != nullptr
        && this->totalCount_ != nullptr; };
    // instanceUsage Field Functions 
    bool hasInstanceUsage() const { return this->instanceUsage_ != nullptr;};
    void deleteInstanceUsage() { this->instanceUsage_ = nullptr;};
    inline int64_t instanceUsage() const { DARABONBA_PTR_GET_DEFAULT(instanceUsage_, 0L) };
    inline ListWafRulesResponseBody& setInstanceUsage(int64_t instanceUsage) { DARABONBA_PTR_SET_VALUE(instanceUsage_, instanceUsage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWafRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListWafRulesResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListWafRulesResponseBodyRules>) };
    inline vector<ListWafRulesResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<ListWafRulesResponseBodyRules>) };
    inline ListWafRulesResponseBody& setRules(const vector<ListWafRulesResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListWafRulesResponseBody& setRules(vector<ListWafRulesResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // siteUsage Field Functions 
    bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
    void deleteSiteUsage() { this->siteUsage_ = nullptr;};
    inline int64_t siteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0L) };
    inline ListWafRulesResponseBody& setSiteUsage(int64_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWafRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Number of rules used in this WAF phase for the corresponding instance of the site.
    std::shared_ptr<int64_t> instanceUsage_ = nullptr;
    // Page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Page size.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Returned list of rules.
    std::shared_ptr<vector<ListWafRulesResponseBodyRules>> rules_ = nullptr;
    // Site usage.
    std::shared_ptr<int64_t> siteUsage_ = nullptr;
    // Total number of rules after filtering.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
