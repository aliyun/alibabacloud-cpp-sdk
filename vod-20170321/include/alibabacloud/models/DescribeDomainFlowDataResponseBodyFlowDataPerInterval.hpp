// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINFLOWDATARESPONSEBODYFLOWDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINFLOWDATARESPONSEBODYFLOWDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeDomainFlowDataResponseBodyFlowDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainFlowDataResponseBodyFlowDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainFlowDataResponseBodyFlowDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
    };
    DescribeDomainFlowDataResponseBodyFlowDataPerInterval() = default ;
    DescribeDomainFlowDataResponseBodyFlowDataPerInterval(const DescribeDomainFlowDataResponseBodyFlowDataPerInterval &) = default ;
    DescribeDomainFlowDataResponseBodyFlowDataPerInterval(DescribeDomainFlowDataResponseBodyFlowDataPerInterval &&) = default ;
    DescribeDomainFlowDataResponseBodyFlowDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainFlowDataResponseBodyFlowDataPerInterval() = default ;
    DescribeDomainFlowDataResponseBodyFlowDataPerInterval& operator=(const DescribeDomainFlowDataResponseBodyFlowDataPerInterval &) = default ;
    DescribeDomainFlowDataResponseBodyFlowDataPerInterval& operator=(DescribeDomainFlowDataResponseBodyFlowDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataModule_ != nullptr; };
    // dataModule Field Functions 
    bool hasDataModule() const { return this->dataModule_ != nullptr;};
    void deleteDataModule() { this->dataModule_ = nullptr;};
    inline const vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule> & dataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule>) };
    inline vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule> dataModule() { DARABONBA_PTR_GET(dataModule_, vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule>) };
    inline DescribeDomainFlowDataResponseBodyFlowDataPerInterval& setDataModule(const vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
    inline DescribeDomainFlowDataResponseBodyFlowDataPerInterval& setDataModule(vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainFlowDataResponseBodyFlowDataPerIntervalDataModule>> dataModule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
