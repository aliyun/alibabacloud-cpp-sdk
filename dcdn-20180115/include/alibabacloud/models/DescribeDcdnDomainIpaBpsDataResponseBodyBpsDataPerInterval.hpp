// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPABPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINIPABPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval(const DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval(DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainIpaBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
