// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTPAYLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINVADEEVENTPAYLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeInvadeEventPayloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInvadeEventPayloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_TO_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_TO_JSON(HighlightEnd, highlightEnd_);
      DARABONBA_PTR_TO_JSON(HighlightStart, highlightStart_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInvadeEventPayloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetsInstanceId, assetsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EventUuid, eventUuid_);
      DARABONBA_PTR_FROM_JSON(HighlightEnd, highlightEnd_);
      DARABONBA_PTR_FROM_JSON(HighlightStart, highlightStart_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInvadeEventPayloadResponseBody() = default ;
    DescribeInvadeEventPayloadResponseBody(const DescribeInvadeEventPayloadResponseBody &) = default ;
    DescribeInvadeEventPayloadResponseBody(DescribeInvadeEventPayloadResponseBody &&) = default ;
    DescribeInvadeEventPayloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInvadeEventPayloadResponseBody() = default ;
    DescribeInvadeEventPayloadResponseBody& operator=(const DescribeInvadeEventPayloadResponseBody &) = default ;
    DescribeInvadeEventPayloadResponseBody& operator=(DescribeInvadeEventPayloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetsInstanceId_ == nullptr
        && this->eventUuid_ == nullptr && this->highlightEnd_ == nullptr && this->highlightStart_ == nullptr && this->payload_ == nullptr && this->payloadLen_ == nullptr
        && this->requestId_ == nullptr; };
    // assetsInstanceId Field Functions 
    bool hasAssetsInstanceId() const { return this->assetsInstanceId_ != nullptr;};
    void deleteAssetsInstanceId() { this->assetsInstanceId_ = nullptr;};
    inline string getAssetsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(assetsInstanceId_, "") };
    inline DescribeInvadeEventPayloadResponseBody& setAssetsInstanceId(string assetsInstanceId) { DARABONBA_PTR_SET_VALUE(assetsInstanceId_, assetsInstanceId) };


    // eventUuid Field Functions 
    bool hasEventUuid() const { return this->eventUuid_ != nullptr;};
    void deleteEventUuid() { this->eventUuid_ = nullptr;};
    inline string getEventUuid() const { DARABONBA_PTR_GET_DEFAULT(eventUuid_, "") };
    inline DescribeInvadeEventPayloadResponseBody& setEventUuid(string eventUuid) { DARABONBA_PTR_SET_VALUE(eventUuid_, eventUuid) };


    // highlightEnd Field Functions 
    bool hasHighlightEnd() const { return this->highlightEnd_ != nullptr;};
    void deleteHighlightEnd() { this->highlightEnd_ = nullptr;};
    inline int32_t getHighlightEnd() const { DARABONBA_PTR_GET_DEFAULT(highlightEnd_, 0) };
    inline DescribeInvadeEventPayloadResponseBody& setHighlightEnd(int32_t highlightEnd) { DARABONBA_PTR_SET_VALUE(highlightEnd_, highlightEnd) };


    // highlightStart Field Functions 
    bool hasHighlightStart() const { return this->highlightStart_ != nullptr;};
    void deleteHighlightStart() { this->highlightStart_ = nullptr;};
    inline int32_t getHighlightStart() const { DARABONBA_PTR_GET_DEFAULT(highlightStart_, 0) };
    inline DescribeInvadeEventPayloadResponseBody& setHighlightStart(int32_t highlightStart) { DARABONBA_PTR_SET_VALUE(highlightStart_, highlightStart) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline DescribeInvadeEventPayloadResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // payloadLen Field Functions 
    bool hasPayloadLen() const { return this->payloadLen_ != nullptr;};
    void deletePayloadLen() { this->payloadLen_ = nullptr;};
    inline int32_t getPayloadLen() const { DARABONBA_PTR_GET_DEFAULT(payloadLen_, 0) };
    inline DescribeInvadeEventPayloadResponseBody& setPayloadLen(int32_t payloadLen) { DARABONBA_PTR_SET_VALUE(payloadLen_, payloadLen) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInvadeEventPayloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID of the asset to which the event belongs.
    shared_ptr<string> assetsInstanceId_ {};
    // The unique ID of the event.
    shared_ptr<string> eventUuid_ {};
    // The end position (character index) of the matched content in the payload.
    shared_ptr<int32_t> highlightEnd_ {};
    // The start position (character index) of the matched content in the payload.
    shared_ptr<int32_t> highlightStart_ {};
    // The raw packet payload content of the intrusion event.
    shared_ptr<string> payload_ {};
    // The length of the payload in bytes.
    shared_ptr<int32_t> payloadLen_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
