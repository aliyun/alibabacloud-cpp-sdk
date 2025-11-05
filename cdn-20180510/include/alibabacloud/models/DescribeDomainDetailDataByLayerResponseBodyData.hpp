// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILDATABYLAYERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainDetailDataByLayerResponseBodyDataDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainDetailDataByLayerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailDataByLayerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailDataByLayerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainDetailDataByLayerResponseBodyData() = default ;
    DescribeDomainDetailDataByLayerResponseBodyData(const DescribeDomainDetailDataByLayerResponseBodyData &) = default ;
    DescribeDomainDetailDataByLayerResponseBodyData(DescribeDomainDetailDataByLayerResponseBodyData &&) = default ;
    DescribeDomainDetailDataByLayerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailDataByLayerResponseBodyData() = default ;
    DescribeDomainDetailDataByLayerResponseBodyData& operator=(const DescribeDomainDetailDataByLayerResponseBodyData &) = default ;
    DescribeDomainDetailDataByLayerResponseBodyData& operator=(DescribeDomainDetailDataByLayerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule>) };
    inline vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule>) };
    inline DescribeDomainDetailDataByLayerResponseBodyData& setDataModule(const vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainDetailDataByLayerResponseBodyData& setDataModule(vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainDetailDataByLayerResponseBodyDataDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
