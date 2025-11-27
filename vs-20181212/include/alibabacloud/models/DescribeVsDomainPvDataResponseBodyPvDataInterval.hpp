// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINPVDATARESPONSEBODYPVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainPvDataResponseBodyPvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainPvDataResponseBodyPvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeVsDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeVsDomainPvDataResponseBodyPvDataInterval(const DescribeVsDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeVsDomainPvDataResponseBodyPvDataInterval(DescribeVsDomainPvDataResponseBodyPvDataInterval &&) = default ;
    DescribeVsDomainPvDataResponseBodyPvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainPvDataResponseBodyPvDataInterval() = default ;
    DescribeVsDomainPvDataResponseBodyPvDataInterval& operator=(const DescribeVsDomainPvDataResponseBodyPvDataInterval &) = default ;
    DescribeVsDomainPvDataResponseBodyPvDataInterval& operator=(DescribeVsDomainPvDataResponseBodyPvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData>) };
    inline vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData>) };
    inline DescribeVsDomainPvDataResponseBodyPvDataInterval& setUsageData(const vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeVsDomainPvDataResponseBodyPvDataInterval& setUsageData(vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainPvDataResponseBodyPvDataIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
