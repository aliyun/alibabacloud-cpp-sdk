// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEDISTRIBUTIONSTATDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsageDistributionStatDataResponseBodyUsageStatList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageDistributionStatDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageStatList, usageStatList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageDistributionStatDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageStatList, usageStatList_);
    };
    DescribeUsageDistributionStatDataResponseBody() = default ;
    DescribeUsageDistributionStatDataResponseBody(const DescribeUsageDistributionStatDataResponseBody &) = default ;
    DescribeUsageDistributionStatDataResponseBody(DescribeUsageDistributionStatDataResponseBody &&) = default ;
    DescribeUsageDistributionStatDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageDistributionStatDataResponseBody() = default ;
    DescribeUsageDistributionStatDataResponseBody& operator=(const DescribeUsageDistributionStatDataResponseBody &) = default ;
    DescribeUsageDistributionStatDataResponseBody& operator=(DescribeUsageDistributionStatDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->usageStatList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageDistributionStatDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageStatList Field Functions 
    bool hasUsageStatList() const { return this->usageStatList_ != nullptr;};
    void deleteUsageStatList() { this->usageStatList_ = nullptr;};
    inline const vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList> & usageStatList() const { DARABONBA_PTR_GET_CONST(usageStatList_, vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>) };
    inline vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList> usageStatList() { DARABONBA_PTR_GET(usageStatList_, vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>) };
    inline DescribeUsageDistributionStatDataResponseBody& setUsageStatList(const vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList> & usageStatList) { DARABONBA_PTR_SET_VALUE(usageStatList_, usageStatList) };
    inline DescribeUsageDistributionStatDataResponseBody& setUsageStatList(vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList> && usageStatList) { DARABONBA_PTR_SET_RVALUE(usageStatList_, usageStatList) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUsageDistributionStatDataResponseBodyUsageStatList>> usageStatList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
