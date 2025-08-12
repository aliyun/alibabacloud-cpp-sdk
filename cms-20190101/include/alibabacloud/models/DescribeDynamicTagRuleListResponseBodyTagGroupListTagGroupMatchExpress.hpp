// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPMATCHEXPRESS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTRESPONSEBODYTAGGROUPLISTTAGGROUPMATCHEXPRESS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress& obj) { 
      DARABONBA_PTR_TO_JSON(MatchExpress, matchExpress_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchExpress, matchExpress_);
    };
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress &&) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress() = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress& operator=(const DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress &) = default ;
    DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress& operator=(DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchExpress_ != nullptr; };
    // matchExpress Field Functions 
    bool hasMatchExpress() const { return this->matchExpress_ != nullptr;};
    void deleteMatchExpress() { this->matchExpress_ = nullptr;};
    inline const vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress> & matchExpress() const { DARABONBA_PTR_GET_CONST(matchExpress_, vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress>) };
    inline vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress> matchExpress() { DARABONBA_PTR_GET(matchExpress_, vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress>) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress& setMatchExpress(const vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress> & matchExpress) { DARABONBA_PTR_SET_VALUE(matchExpress_, matchExpress) };
    inline DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpress& setMatchExpress(vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress> && matchExpress) { DARABONBA_PTR_SET_RVALUE(matchExpress_, matchExpress) };


  protected:
    std::shared_ptr<vector<Models::DescribeDynamicTagRuleListResponseBodyTagGroupListTagGroupMatchExpressMatchExpress>> matchExpress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
