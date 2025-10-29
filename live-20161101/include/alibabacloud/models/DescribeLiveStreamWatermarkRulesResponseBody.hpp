// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMWATERMARKRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamWatermarkRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamWatermarkRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfoList, ruleInfoList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamWatermarkRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfoList, ruleInfoList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    DescribeLiveStreamWatermarkRulesResponseBody() = default ;
    DescribeLiveStreamWatermarkRulesResponseBody(const DescribeLiveStreamWatermarkRulesResponseBody &) = default ;
    DescribeLiveStreamWatermarkRulesResponseBody(DescribeLiveStreamWatermarkRulesResponseBody &&) = default ;
    DescribeLiveStreamWatermarkRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamWatermarkRulesResponseBody() = default ;
    DescribeLiveStreamWatermarkRulesResponseBody& operator=(const DescribeLiveStreamWatermarkRulesResponseBody &) = default ;
    DescribeLiveStreamWatermarkRulesResponseBody& operator=(DescribeLiveStreamWatermarkRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleInfoList_ == nullptr && return this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfoList Field Functions 
    bool hasRuleInfoList() const { return this->ruleInfoList_ != nullptr;};
    void deleteRuleInfoList() { this->ruleInfoList_ = nullptr;};
    inline const DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList & ruleInfoList() const { DARABONBA_PTR_GET_CONST(ruleInfoList_, DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList) };
    inline DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList ruleInfoList() { DARABONBA_PTR_GET(ruleInfoList_, DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList) };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setRuleInfoList(const DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList & ruleInfoList) { DARABONBA_PTR_SET_VALUE(ruleInfoList_, ruleInfoList) };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setRuleInfoList(DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList && ruleInfoList) { DARABONBA_PTR_SET_RVALUE(ruleInfoList_, ruleInfoList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeLiveStreamWatermarkRulesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The watermark rules.
    std::shared_ptr<DescribeLiveStreamWatermarkRulesResponseBodyRuleInfoList> ruleInfoList_ = nullptr;
    // The total number of entries that meet the specified conditions.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
