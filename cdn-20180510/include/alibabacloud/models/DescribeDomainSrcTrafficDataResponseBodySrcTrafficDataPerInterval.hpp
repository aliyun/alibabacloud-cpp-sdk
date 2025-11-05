// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTRAFFICDATARESPONSEBODYSRCTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRCTRAFFICDATARESPONSEBODYSRCTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval() = default ;
    DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval(const DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &) = default ;
    DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval(DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &&) = default ;
    DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval() = default ;
    DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& operator=(const DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &) = default ;
    DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& operator=(DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule>) };
    inline DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& setDataModule(const vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerInterval& setDataModule(vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainSrcTrafficDataResponseBodySrcTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
