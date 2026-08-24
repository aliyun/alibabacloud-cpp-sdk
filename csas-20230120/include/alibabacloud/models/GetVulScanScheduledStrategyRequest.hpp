// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVULSCANSCHEDULEDSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVULSCANSCHEDULEDSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetVulScanScheduledStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVulScanScheduledStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVulScanScheduledStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    GetVulScanScheduledStrategyRequest() = default ;
    GetVulScanScheduledStrategyRequest(const GetVulScanScheduledStrategyRequest &) = default ;
    GetVulScanScheduledStrategyRequest(GetVulScanScheduledStrategyRequest &&) = default ;
    GetVulScanScheduledStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVulScanScheduledStrategyRequest() = default ;
    GetVulScanScheduledStrategyRequest& operator=(const GetVulScanScheduledStrategyRequest &) = default ;
    GetVulScanScheduledStrategyRequest& operator=(GetVulScanScheduledStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->strategyId_ == nullptr; };
    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline GetVulScanScheduledStrategyRequest& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The vulnerability scheduled scan policy ID. You can obtain the value from the following operations:
    // - [ListVulScanScheduledStrategies](~~ListVulScanScheduledStrategies~~): Lists vulnerability scheduled scan policies.
    // - [CreateVulScanScheduledStrategy](~~CreateVulScanScheduledStrategy~~): Creates a vulnerability scheduled scan policy.
    // 
    // This parameter is required.
    shared_ptr<string> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
