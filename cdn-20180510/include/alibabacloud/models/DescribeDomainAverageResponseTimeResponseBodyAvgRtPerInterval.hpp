// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMERESPONSEBODYAVGRTPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINAVERAGERESPONSETIMERESPONSEBODYAVGRTPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval() = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval(const DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval &) = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval(DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval &&) = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval() = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval& operator=(const DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval &) = default ;
    DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval& operator=(DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataModule_ == nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule>) };
    inline DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval& setDataModule(const vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainAverageResponseTimeResponseBodyAvgRTPerInterval& setDataModule(vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainAverageResponseTimeResponseBodyAvgRTPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
