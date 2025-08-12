// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPUSHPROXYUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLivePushProxyUsageDataResponseBodyPushProxyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLivePushProxyUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLivePushProxyUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PushProxyData, pushProxyData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLivePushProxyUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PushProxyData, pushProxyData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLivePushProxyUsageDataResponseBody() = default ;
    DescribeLivePushProxyUsageDataResponseBody(const DescribeLivePushProxyUsageDataResponseBody &) = default ;
    DescribeLivePushProxyUsageDataResponseBody(DescribeLivePushProxyUsageDataResponseBody &&) = default ;
    DescribeLivePushProxyUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLivePushProxyUsageDataResponseBody() = default ;
    DescribeLivePushProxyUsageDataResponseBody& operator=(const DescribeLivePushProxyUsageDataResponseBody &) = default ;
    DescribeLivePushProxyUsageDataResponseBody& operator=(DescribeLivePushProxyUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->pushProxyData_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLivePushProxyUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pushProxyData Field Functions 
    bool hasPushProxyData() const { return this->pushProxyData_ != nullptr;};
    void deletePushProxyData() { this->pushProxyData_ = nullptr;};
    inline const DescribeLivePushProxyUsageDataResponseBodyPushProxyData & pushProxyData() const { DARABONBA_PTR_GET_CONST(pushProxyData_, DescribeLivePushProxyUsageDataResponseBodyPushProxyData) };
    inline DescribeLivePushProxyUsageDataResponseBodyPushProxyData pushProxyData() { DARABONBA_PTR_GET(pushProxyData_, DescribeLivePushProxyUsageDataResponseBodyPushProxyData) };
    inline DescribeLivePushProxyUsageDataResponseBody& setPushProxyData(const DescribeLivePushProxyUsageDataResponseBodyPushProxyData & pushProxyData) { DARABONBA_PTR_SET_VALUE(pushProxyData_, pushProxyData) };
    inline DescribeLivePushProxyUsageDataResponseBody& setPushProxyData(DescribeLivePushProxyUsageDataResponseBodyPushProxyData && pushProxyData) { DARABONBA_PTR_SET_RVALUE(pushProxyData_, pushProxyData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLivePushProxyUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLivePushProxyUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The usage data of live center stream relay.
    std::shared_ptr<DescribeLivePushProxyUsageDataResponseBodyPushProxyData> pushProxyData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
