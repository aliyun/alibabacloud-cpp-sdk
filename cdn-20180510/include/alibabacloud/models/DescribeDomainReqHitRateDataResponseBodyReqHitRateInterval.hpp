// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINREQHITRATEDATARESPONSEBODYREQHITRATEINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINREQHITRATEDATARESPONSEBODYREQHITRATEINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval() = default ;
    DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval(const DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval &) = default ;
    DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval(DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval &&) = default ;
    DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval() = default ;
    DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval& operator=(const DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval &) = default ;
    DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval& operator=(DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule>) };
    inline vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule>) };
    inline DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval& setDataModule(const vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainReqHitRateDataResponseBodyReqHitRateInterval& setDataModule(vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainReqHitRateDataResponseBodyReqHitRateIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
