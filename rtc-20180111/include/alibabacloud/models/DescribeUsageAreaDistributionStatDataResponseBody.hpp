// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEAREADISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageAreaDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageAreaStatList, usageAreaStatList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageAreaDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageAreaStatList, usageAreaStatList_);
    };
    DescribeUsageAreaDistributionStatDataResponseBody() = default ;
    DescribeUsageAreaDistributionStatDataResponseBody(const DescribeUsageAreaDistributionStatDataResponseBody &) = default ;
    DescribeUsageAreaDistributionStatDataResponseBody(DescribeUsageAreaDistributionStatDataResponseBody &&) = default ;
    DescribeUsageAreaDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageAreaDistributionStatDataResponseBody() = default ;
    DescribeUsageAreaDistributionStatDataResponseBody& operator=(const DescribeUsageAreaDistributionStatDataResponseBody &) = default ;
    DescribeUsageAreaDistributionStatDataResponseBody& operator=(DescribeUsageAreaDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->usageAreaStatList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageAreaDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageAreaStatList Field Functions 
    bool hasUsageAreaStatList() const { return this->usageAreaStatList_ != nullptr;};
    void deleteUsageAreaStatList() { this->usageAreaStatList_ = nullptr;};
    inline const vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList> & usageAreaStatList() const { DARABONBA_PTR_GET_CONST(usageAreaStatList_, vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>) };
    inline vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList> usageAreaStatList() { DARABONBA_PTR_GET(usageAreaStatList_, vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>) };
    inline DescribeUsageAreaDistributionStatDataResponseBody& setUsageAreaStatList(const vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList> & usageAreaStatList) { DARABONBA_PTR_SET_VALUE(usageAreaStatList_, usageAreaStatList) };
    inline DescribeUsageAreaDistributionStatDataResponseBody& setUsageAreaStatList(vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList> && usageAreaStatList) { DARABONBA_PTR_SET_RVALUE(usageAreaStatList_, usageAreaStatList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUsageAreaDistributionStatDataResponseBodyUsageAreaStatList>> usageAreaStatList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
