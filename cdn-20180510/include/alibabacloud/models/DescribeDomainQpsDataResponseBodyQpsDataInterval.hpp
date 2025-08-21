// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATARESPONSEBODYQPSDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINQPSDATARESPONSEBODYQPSDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainQpsDataResponseBodyQpsDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainQpsDataResponseBodyQpsDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainQpsDataResponseBodyQpsDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainQpsDataResponseBodyQpsDataInterval() = default ;
    DescribeDomainQpsDataResponseBodyQpsDataInterval(const DescribeDomainQpsDataResponseBodyQpsDataInterval &) = default ;
    DescribeDomainQpsDataResponseBodyQpsDataInterval(DescribeDomainQpsDataResponseBodyQpsDataInterval &&) = default ;
    DescribeDomainQpsDataResponseBodyQpsDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainQpsDataResponseBodyQpsDataInterval() = default ;
    DescribeDomainQpsDataResponseBodyQpsDataInterval& operator=(const DescribeDomainQpsDataResponseBodyQpsDataInterval &) = default ;
    DescribeDomainQpsDataResponseBodyQpsDataInterval& operator=(DescribeDomainQpsDataResponseBodyQpsDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule>) };
    inline vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule>) };
    inline DescribeDomainQpsDataResponseBodyQpsDataInterval& setDataModule(const vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainQpsDataResponseBodyQpsDataInterval& setDataModule(vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainQpsDataResponseBodyQpsDataIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
