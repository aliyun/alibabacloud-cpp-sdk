// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODYORIGINTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINTRAFFICDATARESPONSEBODYORIGINTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval(const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval(DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval &&) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval() = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval& operator=(const DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval &) = default ;
    DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval& operator=(DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule>) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval& setDataModule(const vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerInterval& setDataModule(vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainOriginTrafficDataResponseBodyOriginTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
