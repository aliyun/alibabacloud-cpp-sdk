// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODYORIGINBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINORIGINBPSDATARESPONSEBODYORIGINBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval(const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval(DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval &&) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval() = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval& operator=(const DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval &) = default ;
    DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval& operator=(DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule>) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval& setDataModule(const vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerInterval& setDataModule(vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainOriginBpsDataResponseBodyOriginBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
