// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLISTREVIEWHISTORYREVIEWRIGHTRULEREVIEWRIGHTRULE_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAREVIEWHISTORYLISTREVIEWHISTORYREVIEWRIGHTRULEREVIEWRIGHTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule& obj) { 
      DARABONBA_PTR_TO_JSON(rid, rid_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule& obj) { 
      DARABONBA_PTR_FROM_JSON(rid, rid_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
    };
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule(const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule(GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule &&) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule() = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule& operator=(const GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule &) = default ;
    GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule& operator=(GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rid_ != nullptr
        && this->ruleName_ != nullptr; };
    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline int64_t rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, 0L) };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule& setRid(int64_t rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline GetResultToReviewResponseBodyDataReviewHistoryListReviewHistoryReviewRightRuleReviewRightRule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    std::shared_ptr<int64_t> rid_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
