// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainUvDataResponseBodyUvDataIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeDomainUvDataResponseBodyUvDataInterval(const DescribeDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeDomainUvDataResponseBodyUvDataInterval(DescribeDomainUvDataResponseBodyUvDataInterval &&) = default ;
    DescribeDomainUvDataResponseBodyUvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeDomainUvDataResponseBodyUvDataInterval& operator=(const DescribeDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeDomainUvDataResponseBodyUvDataInterval& operator=(DescribeDomainUvDataResponseBodyUvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData>) };
    inline vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData>) };
    inline DescribeDomainUvDataResponseBodyUvDataInterval& setUsageData(const vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainUvDataResponseBodyUvDataInterval& setUsageData(vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainUvDataResponseBodyUvDataIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
