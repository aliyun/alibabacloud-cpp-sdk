// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPATRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPATRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval(const DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval(DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainIpaTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
