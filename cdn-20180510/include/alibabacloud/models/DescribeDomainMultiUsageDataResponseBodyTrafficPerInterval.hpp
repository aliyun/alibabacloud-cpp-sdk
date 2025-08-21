// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficDataModule, trafficDataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficDataModule, trafficDataModule_);
    };
    DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval() = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval(const DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval &) = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval(DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval &&) = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval() = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval& operator=(const DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval &) = default ;
    DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval& operator=(DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trafficDataModule_ != nullptr; };
    // trafficDataModule Field Functions 
    bool hasTrafficDataModule() const { return this->trafficDataModule_ != nullptr;};
    void deleteTrafficDataModule() { this->trafficDataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> & trafficDataModule() const { DARABONBA_PTR_GET_CONST(trafficDataModule_, vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule>) };
    inline vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> trafficDataModule() { DARABONBA_PTR_GET(trafficDataModule_, vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule>) };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval& setTrafficDataModule(const vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> & trafficDataModule) { DARABONBA_PTR_SET_VALUE(trafficDataModule_, trafficDataModule) };
    inline DescribeDomainMultiUsageDataResponseBodyTrafficPerInterval& setTrafficDataModule(vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> && trafficDataModule) { DARABONBA_PTR_SET_RVALUE(trafficDataModule_, trafficDataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule>> trafficDataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
