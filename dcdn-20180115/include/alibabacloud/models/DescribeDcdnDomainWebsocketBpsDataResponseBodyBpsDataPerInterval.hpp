// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETBPSDATARESPONSEBODYBPSDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval(const DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval(DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval() = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval& operator=(const DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval &) = default ;
    DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval& operator=(DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule>) };
    inline DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval& setDataModule(const vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerInterval& setDataModule(vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainWebsocketBpsDataResponseBodyBpsDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
