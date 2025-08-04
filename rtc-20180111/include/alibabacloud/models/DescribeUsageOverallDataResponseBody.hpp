// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSAGEOVERALLDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSAGEOVERALLDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUsageOverallDataResponseBodyUsageOverallData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeUsageOverallDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUsageOverallDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UsageOverallData, usageOverallData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUsageOverallDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UsageOverallData, usageOverallData_);
    };
    DescribeUsageOverallDataResponseBody() = default ;
    DescribeUsageOverallDataResponseBody(const DescribeUsageOverallDataResponseBody &) = default ;
    DescribeUsageOverallDataResponseBody(DescribeUsageOverallDataResponseBody &&) = default ;
    DescribeUsageOverallDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUsageOverallDataResponseBody() = default ;
    DescribeUsageOverallDataResponseBody& operator=(const DescribeUsageOverallDataResponseBody &) = default ;
    DescribeUsageOverallDataResponseBody& operator=(DescribeUsageOverallDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->usageOverallData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUsageOverallDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // usageOverallData Field Functions 
    bool hasUsageOverallData() const { return this->usageOverallData_ != nullptr;};
    void deleteUsageOverallData() { this->usageOverallData_ = nullptr;};
    inline const vector<DescribeUsageOverallDataResponseBodyUsageOverallData> & usageOverallData() const { DARABONBA_PTR_GET_CONST(usageOverallData_, vector<DescribeUsageOverallDataResponseBodyUsageOverallData>) };
    inline vector<DescribeUsageOverallDataResponseBodyUsageOverallData> usageOverallData() { DARABONBA_PTR_GET(usageOverallData_, vector<DescribeUsageOverallDataResponseBodyUsageOverallData>) };
    inline DescribeUsageOverallDataResponseBody& setUsageOverallData(const vector<DescribeUsageOverallDataResponseBodyUsageOverallData> & usageOverallData) { DARABONBA_PTR_SET_VALUE(usageOverallData_, usageOverallData) };
    inline DescribeUsageOverallDataResponseBody& setUsageOverallData(vector<DescribeUsageOverallDataResponseBodyUsageOverallData> && usageOverallData) { DARABONBA_PTR_SET_RVALUE(usageOverallData_, usageOverallData) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeUsageOverallDataResponseBodyUsageOverallData>> usageOverallData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
