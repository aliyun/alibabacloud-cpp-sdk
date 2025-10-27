// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLISTSUBTYPESCHECKDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGYRISKTYPEWHITELISTQUERYRESULTLISTSUBTYPESCHECKDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& obj) { 
      DARABONBA_PTR_TO_JSON(CheckDesc, checkDesc_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckDesc, checkDesc_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckItem, checkItem_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails &&) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails() = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& operator=(const DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails &) = default ;
    DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& operator=(DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkDesc_ == nullptr
        && return this->checkId_ == nullptr && return this->checkItem_ == nullptr && return this->rules_ == nullptr; };
    // checkDesc Field Functions 
    bool hasCheckDesc() const { return this->checkDesc_ != nullptr;};
    void deleteCheckDesc() { this->checkDesc_ = nullptr;};
    inline string checkDesc() const { DARABONBA_PTR_GET_DEFAULT(checkDesc_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& setCheckDesc(string checkDesc) { DARABONBA_PTR_SET_VALUE(checkDesc_, checkDesc) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t checkId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkItem Field Functions 
    bool hasCheckItem() const { return this->checkItem_ != nullptr;};
    void deleteCheckItem() { this->checkItem_ = nullptr;};
    inline string checkItem() const { DARABONBA_PTR_GET_DEFAULT(checkItem_, "") };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& setCheckItem(string checkItem) { DARABONBA_PTR_SET_VALUE(checkItem_, checkItem) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules>) };
    inline vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules>) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& setRules(const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetails& setRules(vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The description of the check item.
    std::shared_ptr<string> checkDesc_ = nullptr;
    // The ID of the check item.
    std::shared_ptr<int64_t> checkId_ = nullptr;
    // The check item.
    std::shared_ptr<string> checkItem_ = nullptr;
    // The details of rules.
    std::shared_ptr<vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultListSubTypesCheckDetailsRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
