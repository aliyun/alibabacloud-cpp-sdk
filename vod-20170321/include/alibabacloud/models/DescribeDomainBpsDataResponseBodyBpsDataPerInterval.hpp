// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeDomainBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerInterval(const DescribeDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerInterval(DescribeDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeDomainBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeDomainBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeDomainBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
