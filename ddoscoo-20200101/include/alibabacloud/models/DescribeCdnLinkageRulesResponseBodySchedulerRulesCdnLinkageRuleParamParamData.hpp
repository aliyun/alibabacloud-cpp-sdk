// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULEPARAMPARAMDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNLINKAGERULESRESPONSEBODYSCHEDULERRULESCDNLINKAGERULEPARAMPARAMDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessQps, accessQps_);
      DARABONBA_PTR_TO_JSON(UpstreamQps, upstreamQps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessQps, accessQps_);
      DARABONBA_PTR_FROM_JSON(UpstreamQps, upstreamQps_);
    };
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData &&) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData() = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData& operator=(const DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData &) = default ;
    DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData& operator=(DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessQps_ == nullptr
        && return this->upstreamQps_ == nullptr; };
    // accessQps Field Functions 
    bool hasAccessQps() const { return this->accessQps_ != nullptr;};
    void deleteAccessQps() { this->accessQps_ = nullptr;};
    inline int64_t accessQps() const { DARABONBA_PTR_GET_DEFAULT(accessQps_, 0L) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData& setAccessQps(int64_t accessQps) { DARABONBA_PTR_SET_VALUE(accessQps_, accessQps) };


    // upstreamQps Field Functions 
    bool hasUpstreamQps() const { return this->upstreamQps_ != nullptr;};
    void deleteUpstreamQps() { this->upstreamQps_ = nullptr;};
    inline int64_t upstreamQps() const { DARABONBA_PTR_GET_DEFAULT(upstreamQps_, 0L) };
    inline DescribeCdnLinkageRulesResponseBodySchedulerRulesCdnLinkageRuleParamParamData& setUpstreamQps(int64_t upstreamQps) { DARABONBA_PTR_SET_VALUE(upstreamQps_, upstreamQps) };


  protected:
    std::shared_ptr<int64_t> accessQps_ = nullptr;
    std::shared_ptr<int64_t> upstreamQps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
