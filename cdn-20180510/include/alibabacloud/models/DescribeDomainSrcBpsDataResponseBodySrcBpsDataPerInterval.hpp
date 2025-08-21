// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATARESPONSEBODYSRCBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCBPSDATARESPONSEBODYSRCBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval() = default ;
    DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval(const DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval &) = default ;
    DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval(DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval &&) = default ;
    DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval() = default ;
    DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval& operator=(const DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval &) = default ;
    DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval& operator=(DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule>) };
    inline DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval& setDataModule(const vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerInterval& setDataModule(vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcBpsDataResponseBodySrcBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
