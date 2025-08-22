// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETTRAFFICDATARESPONSEBODYTRAFFICDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval(const DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval(DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval() = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval& operator=(const DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval &) = default ;
    DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval& operator=(DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule>) };
    inline DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(const vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerInterval& setDataModule(vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDcdnDomainWebsocketTrafficDataResponseBodyTrafficDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
