// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval() = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval(const DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval &) = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval(DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval &&) = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval() = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval& operator=(const DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval &) = default ;
    DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval& operator=(DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>) };
    inline vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>) };
    inline DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval& setDataModule(const vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainBpsDataByLayerResponseBodyBpsDataInterval& setDataModule(vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
