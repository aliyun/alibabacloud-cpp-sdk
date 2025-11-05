// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainPvDataResponseBodyPvDataIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainPvDataResponseBodyPvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeDomainPvDataResponseBodyPvDataInterval(const DescribeDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeDomainPvDataResponseBodyPvDataInterval(DescribeDomainPvDataResponseBodyPvDataInterval &&) = default ;
    DescribeDomainPvDataResponseBodyPvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeDomainPvDataResponseBodyPvDataInterval& operator=(const DescribeDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeDomainPvDataResponseBodyPvDataInterval& operator=(DescribeDomainPvDataResponseBodyPvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData>) };
    inline vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData>) };
    inline DescribeDomainPvDataResponseBodyPvDataInterval& setUsageData(const vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainPvDataResponseBodyPvDataInterval& setUsageData(vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainPvDataResponseBodyPvDataIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
