// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOSSDKVERSIONDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageOsSdkVersionDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageOsSdkVersionStatList, usageOsSdkVersionStatList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOsSdkVersionDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageOsSdkVersionStatList, usageOsSdkVersionStatList_);
    };
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody(const DescribeUsageOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody(DescribeUsageOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOsSdkVersionDistributionStatDataResponseBody() = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody& operator=(const DescribeUsageOsSdkVersionDistributionStatDataResponseBody &) = default ;
    DescribeUsageOsSdkVersionDistributionStatDataResponseBody& operator=(DescribeUsageOsSdkVersionDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->usageOsSdkVersionStatList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageOsSdkVersionStatList Field Functions 
    bool hasUsageOsSdkVersionStatList() const { return this->usageOsSdkVersionStatList_ != nullptr;};
    void deleteUsageOsSdkVersionStatList() { this->usageOsSdkVersionStatList_ = nullptr;};
    inline const vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList> & usageOsSdkVersionStatList() const { DARABONBA_PTR_GET_CONST(usageOsSdkVersionStatList_, vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>) };
    inline vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList> usageOsSdkVersionStatList() { DARABONBA_PTR_GET(usageOsSdkVersionStatList_, vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody& setUsageOsSdkVersionStatList(const vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList> & usageOsSdkVersionStatList) { DARABONBA_PTR_SET_VALUE(usageOsSdkVersionStatList_, usageOsSdkVersionStatList) };
    inline DescribeUsageOsSdkVersionDistributionStatDataResponseBody& setUsageOsSdkVersionStatList(vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList> && usageOsSdkVersionStatList) { DARABONBA_PTR_SET_RVALUE(usageOsSdkVersionStatList_, usageOsSdkVersionStatList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUsageOsSdkVersionDistributionStatDataResponseBodyUsageOsSdkVersionStatList>> usageOsSdkVersionStatList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
