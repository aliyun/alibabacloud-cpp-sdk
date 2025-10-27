// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTraceInfoDetailResponseBodyTraceInfoDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceInfoDetail, traceInfoDetail_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceInfoDetail, traceInfoDetail_);
    };
    DescribeTraceInfoDetailResponseBody() = default ;
    DescribeTraceInfoDetailResponseBody(const DescribeTraceInfoDetailResponseBody &) = default ;
    DescribeTraceInfoDetailResponseBody(DescribeTraceInfoDetailResponseBody &&) = default ;
    DescribeTraceInfoDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailResponseBody() = default ;
    DescribeTraceInfoDetailResponseBody& operator=(const DescribeTraceInfoDetailResponseBody &) = default ;
    DescribeTraceInfoDetailResponseBody& operator=(DescribeTraceInfoDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->success_ == nullptr && return this->traceInfoDetail_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTraceInfoDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTraceInfoDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceInfoDetail Field Functions 
    bool hasTraceInfoDetail() const { return this->traceInfoDetail_ != nullptr;};
    void deleteTraceInfoDetail() { this->traceInfoDetail_ = nullptr;};
    inline const DescribeTraceInfoDetailResponseBodyTraceInfoDetail & traceInfoDetail() const { DARABONBA_PTR_GET_CONST(traceInfoDetail_, DescribeTraceInfoDetailResponseBodyTraceInfoDetail) };
    inline DescribeTraceInfoDetailResponseBodyTraceInfoDetail traceInfoDetail() { DARABONBA_PTR_GET(traceInfoDetail_, DescribeTraceInfoDetailResponseBodyTraceInfoDetail) };
    inline DescribeTraceInfoDetailResponseBody& setTraceInfoDetail(const DescribeTraceInfoDetailResponseBodyTraceInfoDetail & traceInfoDetail) { DARABONBA_PTR_SET_VALUE(traceInfoDetail_, traceInfoDetail) };
    inline DescribeTraceInfoDetailResponseBody& setTraceInfoDetail(DescribeTraceInfoDetailResponseBodyTraceInfoDetail && traceInfoDetail) { DARABONBA_PTR_SET_RVALUE(traceInfoDetail_, traceInfoDetail) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The details of the tracing diagram.
    std::shared_ptr<DescribeTraceInfoDetailResponseBodyTraceInfoDetail> traceInfoDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
