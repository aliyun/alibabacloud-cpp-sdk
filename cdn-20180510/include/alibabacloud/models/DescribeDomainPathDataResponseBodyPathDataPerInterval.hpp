// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINPATHDATARESPONSEBODYPATHDATAPERINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINPATHDATARESPONSEBODYPATHDATAPERINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainPathDataResponseBodyPathDataPerInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainPathDataResponseBodyPathDataPerInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainPathDataResponseBodyPathDataPerInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeDomainPathDataResponseBodyPathDataPerInterval() = default ;
    DescribeDomainPathDataResponseBodyPathDataPerInterval(const DescribeDomainPathDataResponseBodyPathDataPerInterval &) = default ;
    DescribeDomainPathDataResponseBodyPathDataPerInterval(DescribeDomainPathDataResponseBodyPathDataPerInterval &&) = default ;
    DescribeDomainPathDataResponseBodyPathDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainPathDataResponseBodyPathDataPerInterval() = default ;
    DescribeDomainPathDataResponseBodyPathDataPerInterval& operator=(const DescribeDomainPathDataResponseBodyPathDataPerInterval &) = default ;
    DescribeDomainPathDataResponseBodyPathDataPerInterval& operator=(DescribeDomainPathDataResponseBodyPathDataPerInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->usageData_ != nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData>) };
    inline vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData>) };
    inline DescribeDomainPathDataResponseBodyPathDataPerInterval& setUsageData(const vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeDomainPathDataResponseBodyPathDataPerInterval& setUsageData(vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainPathDataResponseBodyPathDataPerIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
