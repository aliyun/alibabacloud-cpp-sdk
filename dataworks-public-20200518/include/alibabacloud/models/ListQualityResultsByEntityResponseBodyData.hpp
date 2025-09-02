// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYENTITYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUALITYRESULTSBYENTITYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQualityResultsByEntityResponseBodyDataRuleChecks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListQualityResultsByEntityResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQualityResultsByEntityResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleChecks, ruleChecks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListQualityResultsByEntityResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleChecks, ruleChecks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListQualityResultsByEntityResponseBodyData() = default ;
    ListQualityResultsByEntityResponseBodyData(const ListQualityResultsByEntityResponseBodyData &) = default ;
    ListQualityResultsByEntityResponseBodyData(ListQualityResultsByEntityResponseBodyData &&) = default ;
    ListQualityResultsByEntityResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQualityResultsByEntityResponseBodyData() = default ;
    ListQualityResultsByEntityResponseBodyData& operator=(const ListQualityResultsByEntityResponseBodyData &) = default ;
    ListQualityResultsByEntityResponseBodyData& operator=(ListQualityResultsByEntityResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->ruleChecks_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListQualityResultsByEntityResponseBodyData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListQualityResultsByEntityResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleChecks Field Functions 
    bool hasRuleChecks() const { return this->ruleChecks_ != nullptr;};
    void deleteRuleChecks() { this->ruleChecks_ = nullptr;};
    inline const vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks> & ruleChecks() const { DARABONBA_PTR_GET_CONST(ruleChecks_, vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks>) };
    inline vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks> ruleChecks() { DARABONBA_PTR_GET(ruleChecks_, vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks>) };
    inline ListQualityResultsByEntityResponseBodyData& setRuleChecks(const vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks> & ruleChecks) { DARABONBA_PTR_SET_VALUE(ruleChecks_, ruleChecks) };
    inline ListQualityResultsByEntityResponseBodyData& setRuleChecks(vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks> && ruleChecks) { DARABONBA_PTR_SET_RVALUE(ruleChecks_, ruleChecks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListQualityResultsByEntityResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The returned check results.
    std::shared_ptr<vector<Models::ListQualityResultsByEntityResponseBodyDataRuleChecks>> ruleChecks_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
