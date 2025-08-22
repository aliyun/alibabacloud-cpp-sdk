// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINMULTIUSAGEDATARESPONSEBODYTRAFFICPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(TrafficDataModule, trafficDataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(TrafficDataModule, trafficDataModule_);
    };
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval(const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval(DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval &&) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval() = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval& operator=(const DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval &) = default ;
    DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval& operator=(DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->trafficDataModule_ != nullptr; };
    // trafficDataModule Field Functions 
    bool hasTrafficDataModule() const { return this->trafficDataModule_ != nullptr;};
    void deleteTrafficDataModule() { this->trafficDataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> & trafficDataModule() const { DARABONBA_PTR_GET_CONST(trafficDataModule_, vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule>) };
    inline vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> trafficDataModule() { DARABONBA_PTR_GET(trafficDataModule_, vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule>) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval& setTrafficDataModule(const vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> & trafficDataModule) { DARABONBA_PTR_SET_VALUE(trafficDataModule_, trafficDataModule) };
    inline DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerInterval& setTrafficDataModule(vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule> && trafficDataModule) { DARABONBA_PTR_SET_RVALUE(trafficDataModule_, trafficDataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainMultiUsageDataResponseBodyTrafficPerIntervalTrafficDataModule>> trafficDataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
