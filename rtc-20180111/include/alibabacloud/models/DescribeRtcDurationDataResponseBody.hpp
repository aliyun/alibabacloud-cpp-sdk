// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCDURATIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcDurationDataResponseBodyDurationDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcDurationDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcDurationDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DurationDataPerInterval, durationDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcDurationDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationDataPerInterval, durationDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRtcDurationDataResponseBody() = default ;
    DescribeRtcDurationDataResponseBody(const DescribeRtcDurationDataResponseBody &) = default ;
    DescribeRtcDurationDataResponseBody(DescribeRtcDurationDataResponseBody &&) = default ;
    DescribeRtcDurationDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcDurationDataResponseBody() = default ;
    DescribeRtcDurationDataResponseBody& operator=(const DescribeRtcDurationDataResponseBody &) = default ;
    DescribeRtcDurationDataResponseBody& operator=(DescribeRtcDurationDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationDataPerInterval_ == nullptr
        && return this->requestId_ == nullptr; };
    // durationDataPerInterval Field Functions 
    bool hasDurationDataPerInterval() const { return this->durationDataPerInterval_ != nullptr;};
    void deleteDurationDataPerInterval() { this->durationDataPerInterval_ = nullptr;};
    inline const DescribeRtcDurationDataResponseBodyDurationDataPerInterval & durationDataPerInterval() const { DARABONBA_PTR_GET_CONST(durationDataPerInterval_, DescribeRtcDurationDataResponseBodyDurationDataPerInterval) };
    inline DescribeRtcDurationDataResponseBodyDurationDataPerInterval durationDataPerInterval() { DARABONBA_PTR_GET(durationDataPerInterval_, DescribeRtcDurationDataResponseBodyDurationDataPerInterval) };
    inline DescribeRtcDurationDataResponseBody& setDurationDataPerInterval(const DescribeRtcDurationDataResponseBodyDurationDataPerInterval & durationDataPerInterval) { DARABONBA_PTR_SET_VALUE(durationDataPerInterval_, durationDataPerInterval) };
    inline DescribeRtcDurationDataResponseBody& setDurationDataPerInterval(DescribeRtcDurationDataResponseBodyDurationDataPerInterval && durationDataPerInterval) { DARABONBA_PTR_SET_RVALUE(durationDataPerInterval_, durationDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcDurationDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeRtcDurationDataResponseBodyDurationDataPerInterval> durationDataPerInterval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
