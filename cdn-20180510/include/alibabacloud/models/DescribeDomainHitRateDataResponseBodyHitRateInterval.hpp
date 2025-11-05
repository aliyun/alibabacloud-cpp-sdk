// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHITRATEDATARESPONSEBODYHITRATEINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHitRateDataResponseBodyHitRateInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHitRateDataResponseBodyHitRateInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHitRateDataResponseBodyHitRateInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainHitRateDataResponseBodyHitRateInterval() = default ;
    DescribeDomainHitRateDataResponseBodyHitRateInterval(const DescribeDomainHitRateDataResponseBodyHitRateInterval &) = default ;
    DescribeDomainHitRateDataResponseBodyHitRateInterval(DescribeDomainHitRateDataResponseBodyHitRateInterval &&) = default ;
    DescribeDomainHitRateDataResponseBodyHitRateInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHitRateDataResponseBodyHitRateInterval() = default ;
    DescribeDomainHitRateDataResponseBodyHitRateInterval& operator=(const DescribeDomainHitRateDataResponseBodyHitRateInterval &) = default ;
    DescribeDomainHitRateDataResponseBodyHitRateInterval& operator=(DescribeDomainHitRateDataResponseBodyHitRateInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule>) };
    inline vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule>) };
    inline DescribeDomainHitRateDataResponseBodyHitRateInterval& setDataModule(const vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainHitRateDataResponseBodyHitRateInterval& setDataModule(vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainHitRateDataResponseBodyHitRateIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
