// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINUVDATARESPONSEBODYUVDATAINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainUvDataResponseBodyUvDataInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainUvDataResponseBodyUvDataInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeVsDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeVsDomainUvDataResponseBodyUvDataInterval(const DescribeVsDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeVsDomainUvDataResponseBodyUvDataInterval(DescribeVsDomainUvDataResponseBodyUvDataInterval &&) = default ;
    DescribeVsDomainUvDataResponseBodyUvDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainUvDataResponseBodyUvDataInterval() = default ;
    DescribeVsDomainUvDataResponseBodyUvDataInterval& operator=(const DescribeVsDomainUvDataResponseBodyUvDataInterval &) = default ;
    DescribeVsDomainUvDataResponseBodyUvDataInterval& operator=(DescribeVsDomainUvDataResponseBodyUvDataInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->usageData_ == nullptr; };
    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData>) };
    inline vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData>) };
    inline DescribeVsDomainUvDataResponseBodyUvDataInterval& setUsageData(const vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeVsDomainUvDataResponseBodyUvDataInterval& setUsageData(vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    std::shared_ptr<vector<Models::DescribeVsDomainUvDataResponseBodyUvDataIntervalUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
