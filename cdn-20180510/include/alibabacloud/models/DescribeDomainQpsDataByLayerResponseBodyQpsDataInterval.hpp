// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATABYLAYERRESPONSEBODYQPSDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATABYLAYERRESPONSEBODYQPSDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval() = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval(const DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval &) = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval(DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval &&) = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval() = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval& operator=(const DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval &) = default ;
    DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval& operator=(DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule>) };
    inline vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule>) };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval& setDataModule(const vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainQpsDataByLayerResponseBodyQpsDataInterval& setDataModule(vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainQpsDataByLayerResponseBodyQpsDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
