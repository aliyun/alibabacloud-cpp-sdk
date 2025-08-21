// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMETRAFFICDATARESPONSEBODYREALTIMETRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREALTIMETRAFFICDATARESPONSEBODYREALTIMETRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval() = default ;
    DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(const DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &) = default ;
    DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &&) = default ;
    DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval() = default ;
    DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& operator=(const DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &) = default ;
    DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& operator=(DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>) };
    inline DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& setDataModule(const vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerInterval& setDataModule(vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainRealTimeTrafficDataResponseBodyRealTimeTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
