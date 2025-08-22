// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATABYLAYERRESPONSEBODYQPSDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINQPSDATABYLAYERRESPONSEBODYQPSDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval() = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval(const DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval &) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval(DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval &&) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval() = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval& operator=(const DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval &) = default ;
    DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval& operator=(DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule>) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval& setDataModule(const vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataInterval& setDataModule(vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
