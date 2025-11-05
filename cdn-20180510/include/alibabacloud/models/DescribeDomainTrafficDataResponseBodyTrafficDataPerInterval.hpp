// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval(const DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval(DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
