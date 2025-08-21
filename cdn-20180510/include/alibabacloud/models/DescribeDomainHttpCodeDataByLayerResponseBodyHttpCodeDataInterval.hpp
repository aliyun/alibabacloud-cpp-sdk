// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATABYLAYERRESPONSEBODYHTTPCODEDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATABYLAYERRESPONSEBODYHTTPCODEDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval() = default ;
    DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval(const DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval &) = default ;
    DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval(DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval &&) = default ;
    DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval() = default ;
    DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval& operator=(const DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval &) = default ;
    DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval& operator=(DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule>) };
    inline vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule>) };
    inline DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval& setDataModule(const vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataInterval& setDataModule(vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainHttpCodeDataByLayerResponseBodyHttpCodeDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
