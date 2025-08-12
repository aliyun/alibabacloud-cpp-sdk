// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINBPSDATABYLAYERRESPONSEBODYBPSDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval(const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval(DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval &&) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval() = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval& operator=(const DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval &) = default ;
    DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval& operator=(DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>) };
    inline vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>) };
    inline DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval& setDataModule(const vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataInterval& setDataModule(vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeLiveDomainBpsDataByLayerResponseBodyBpsDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
