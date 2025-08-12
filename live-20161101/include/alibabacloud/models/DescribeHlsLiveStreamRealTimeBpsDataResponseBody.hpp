// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHLSLIVESTREAMREALTIMEBPSDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeHlsLiveStreamRealTimeBpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHlsLiveStreamRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHlsLiveStreamRealTimeBpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody(const DescribeHlsLiveStreamRealTimeBpsDataResponseBody &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody(DescribeHlsLiveStreamRealTimeBpsDataResponseBody &&) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHlsLiveStreamRealTimeBpsDataResponseBody() = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody& operator=(const DescribeHlsLiveStreamRealTimeBpsDataResponseBody &) = default ;
    DescribeHlsLiveStreamRealTimeBpsDataResponseBody& operator=(DescribeHlsLiveStreamRealTimeBpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->time_ != nullptr && this->usageData_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData> & usageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData>) };
    inline vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData> usageData() { DARABONBA_PTR_GET(usageData_, vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData>) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setUsageData(const vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeHlsLiveStreamRealTimeBpsDataResponseBody& setUsageData(vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The timestamp for which the data was queried.
    std::shared_ptr<string> time_ = nullptr;
    // The usage data.
    std::shared_ptr<vector<DescribeHlsLiveStreamRealTimeBpsDataResponseBodyUsageData>> usageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
