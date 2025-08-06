// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODMULTIUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODMULTIUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVodMultiUsageDataResponseBodyMultiUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodMultiUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodMultiUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MultiUsageData, multiUsageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodMultiUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MultiUsageData, multiUsageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodMultiUsageDataResponseBody() = default ;
    DescribeVodMultiUsageDataResponseBody(const DescribeVodMultiUsageDataResponseBody &) = default ;
    DescribeVodMultiUsageDataResponseBody(DescribeVodMultiUsageDataResponseBody &&) = default ;
    DescribeVodMultiUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodMultiUsageDataResponseBody() = default ;
    DescribeVodMultiUsageDataResponseBody& operator=(const DescribeVodMultiUsageDataResponseBody &) = default ;
    DescribeVodMultiUsageDataResponseBody& operator=(DescribeVodMultiUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->multiUsageData_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodMultiUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // multiUsageData Field Functions 
    bool hasMultiUsageData() const { return this->multiUsageData_ != nullptr;};
    void deleteMultiUsageData() { this->multiUsageData_ = nullptr;};
    inline const DescribeVodMultiUsageDataResponseBodyMultiUsageData & multiUsageData() const { DARABONBA_PTR_GET_CONST(multiUsageData_, DescribeVodMultiUsageDataResponseBodyMultiUsageData) };
    inline DescribeVodMultiUsageDataResponseBodyMultiUsageData multiUsageData() { DARABONBA_PTR_GET(multiUsageData_, DescribeVodMultiUsageDataResponseBodyMultiUsageData) };
    inline DescribeVodMultiUsageDataResponseBody& setMultiUsageData(const DescribeVodMultiUsageDataResponseBodyMultiUsageData & multiUsageData) { DARABONBA_PTR_SET_VALUE(multiUsageData_, multiUsageData) };
    inline DescribeVodMultiUsageDataResponseBody& setMultiUsageData(DescribeVodMultiUsageDataResponseBodyMultiUsageData && multiUsageData) { DARABONBA_PTR_SET_RVALUE(multiUsageData_, multiUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodMultiUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodMultiUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<DescribeVodMultiUsageDataResponseBodyMultiUsageData> multiUsageData_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
