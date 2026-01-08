// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTPAYLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTPAYLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventPayloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventPayloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(DstPort, dstPort_);
      DARABONBA_PTR_TO_JSON(DstVpcId, dstVpcId_);
      DARABONBA_PTR_TO_JSON(HitContentType, hitContentType_);
      DARABONBA_PTR_TO_JSON(HitTo, hitTo_);
      DARABONBA_PTR_TO_JSON(ParsedContent, parsedContent_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_TO_JSON(Proto, proto_);
      DARABONBA_PTR_TO_JSON(RealIp, realIp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_TO_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_TO_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_TO_JSON(XForwardFor, XForwardFor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventPayloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(DstPort, dstPort_);
      DARABONBA_PTR_FROM_JSON(DstVpcId, dstVpcId_);
      DARABONBA_PTR_FROM_JSON(HitContentType, hitContentType_);
      DARABONBA_PTR_FROM_JSON(HitTo, hitTo_);
      DARABONBA_PTR_FROM_JSON(ParsedContent, parsedContent_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(PayloadLen, payloadLen_);
      DARABONBA_PTR_FROM_JSON(Proto, proto_);
      DARABONBA_PTR_FROM_JSON(RealIp, realIp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcIP, srcIP_);
      DARABONBA_PTR_FROM_JSON(SrcPort, srcPort_);
      DARABONBA_PTR_FROM_JSON(SrcVpcId, srcVpcId_);
      DARABONBA_PTR_FROM_JSON(XForwardFor, XForwardFor_);
    };
    DescribeRiskEventPayloadResponseBody() = default ;
    DescribeRiskEventPayloadResponseBody(const DescribeRiskEventPayloadResponseBody &) = default ;
    DescribeRiskEventPayloadResponseBody(DescribeRiskEventPayloadResponseBody &&) = default ;
    DescribeRiskEventPayloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventPayloadResponseBody() = default ;
    DescribeRiskEventPayloadResponseBody& operator=(const DescribeRiskEventPayloadResponseBody &) = default ;
    DescribeRiskEventPayloadResponseBody& operator=(DescribeRiskEventPayloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstIP_ == nullptr
        && this->dstPort_ == nullptr && this->dstVpcId_ == nullptr && this->hitContentType_ == nullptr && this->hitTo_ == nullptr && this->parsedContent_ == nullptr
        && this->payload_ == nullptr && this->payloadLen_ == nullptr && this->proto_ == nullptr && this->realIp_ == nullptr && this->requestId_ == nullptr
        && this->srcIP_ == nullptr && this->srcPort_ == nullptr && this->srcVpcId_ == nullptr && this->XForwardFor_ == nullptr; };
    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string getDstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeRiskEventPayloadResponseBody& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // dstPort Field Functions 
    bool hasDstPort() const { return this->dstPort_ != nullptr;};
    void deleteDstPort() { this->dstPort_ = nullptr;};
    inline int32_t getDstPort() const { DARABONBA_PTR_GET_DEFAULT(dstPort_, 0) };
    inline DescribeRiskEventPayloadResponseBody& setDstPort(int32_t dstPort) { DARABONBA_PTR_SET_VALUE(dstPort_, dstPort) };


    // dstVpcId Field Functions 
    bool hasDstVpcId() const { return this->dstVpcId_ != nullptr;};
    void deleteDstVpcId() { this->dstVpcId_ = nullptr;};
    inline string getDstVpcId() const { DARABONBA_PTR_GET_DEFAULT(dstVpcId_, "") };
    inline DescribeRiskEventPayloadResponseBody& setDstVpcId(string dstVpcId) { DARABONBA_PTR_SET_VALUE(dstVpcId_, dstVpcId) };


    // hitContentType Field Functions 
    bool hasHitContentType() const { return this->hitContentType_ != nullptr;};
    void deleteHitContentType() { this->hitContentType_ = nullptr;};
    inline int32_t getHitContentType() const { DARABONBA_PTR_GET_DEFAULT(hitContentType_, 0) };
    inline DescribeRiskEventPayloadResponseBody& setHitContentType(int32_t hitContentType) { DARABONBA_PTR_SET_VALUE(hitContentType_, hitContentType) };


    // hitTo Field Functions 
    bool hasHitTo() const { return this->hitTo_ != nullptr;};
    void deleteHitTo() { this->hitTo_ = nullptr;};
    inline int32_t getHitTo() const { DARABONBA_PTR_GET_DEFAULT(hitTo_, 0) };
    inline DescribeRiskEventPayloadResponseBody& setHitTo(int32_t hitTo) { DARABONBA_PTR_SET_VALUE(hitTo_, hitTo) };


    // parsedContent Field Functions 
    bool hasParsedContent() const { return this->parsedContent_ != nullptr;};
    void deleteParsedContent() { this->parsedContent_ = nullptr;};
    inline string getParsedContent() const { DARABONBA_PTR_GET_DEFAULT(parsedContent_, "") };
    inline DescribeRiskEventPayloadResponseBody& setParsedContent(string parsedContent) { DARABONBA_PTR_SET_VALUE(parsedContent_, parsedContent) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline DescribeRiskEventPayloadResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // payloadLen Field Functions 
    bool hasPayloadLen() const { return this->payloadLen_ != nullptr;};
    void deletePayloadLen() { this->payloadLen_ = nullptr;};
    inline int32_t getPayloadLen() const { DARABONBA_PTR_GET_DEFAULT(payloadLen_, 0) };
    inline DescribeRiskEventPayloadResponseBody& setPayloadLen(int32_t payloadLen) { DARABONBA_PTR_SET_VALUE(payloadLen_, payloadLen) };


    // proto Field Functions 
    bool hasProto() const { return this->proto_ != nullptr;};
    void deleteProto() { this->proto_ = nullptr;};
    inline string getProto() const { DARABONBA_PTR_GET_DEFAULT(proto_, "") };
    inline DescribeRiskEventPayloadResponseBody& setProto(string proto) { DARABONBA_PTR_SET_VALUE(proto_, proto) };


    // realIp Field Functions 
    bool hasRealIp() const { return this->realIp_ != nullptr;};
    void deleteRealIp() { this->realIp_ = nullptr;};
    inline string getRealIp() const { DARABONBA_PTR_GET_DEFAULT(realIp_, "") };
    inline DescribeRiskEventPayloadResponseBody& setRealIp(string realIp) { DARABONBA_PTR_SET_VALUE(realIp_, realIp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRiskEventPayloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcIP Field Functions 
    bool hasSrcIP() const { return this->srcIP_ != nullptr;};
    void deleteSrcIP() { this->srcIP_ = nullptr;};
    inline string getSrcIP() const { DARABONBA_PTR_GET_DEFAULT(srcIP_, "") };
    inline DescribeRiskEventPayloadResponseBody& setSrcIP(string srcIP) { DARABONBA_PTR_SET_VALUE(srcIP_, srcIP) };


    // srcPort Field Functions 
    bool hasSrcPort() const { return this->srcPort_ != nullptr;};
    void deleteSrcPort() { this->srcPort_ = nullptr;};
    inline int32_t getSrcPort() const { DARABONBA_PTR_GET_DEFAULT(srcPort_, 0) };
    inline DescribeRiskEventPayloadResponseBody& setSrcPort(int32_t srcPort) { DARABONBA_PTR_SET_VALUE(srcPort_, srcPort) };


    // srcVpcId Field Functions 
    bool hasSrcVpcId() const { return this->srcVpcId_ != nullptr;};
    void deleteSrcVpcId() { this->srcVpcId_ = nullptr;};
    inline string getSrcVpcId() const { DARABONBA_PTR_GET_DEFAULT(srcVpcId_, "") };
    inline DescribeRiskEventPayloadResponseBody& setSrcVpcId(string srcVpcId) { DARABONBA_PTR_SET_VALUE(srcVpcId_, srcVpcId) };


    // XForwardFor Field Functions 
    bool hasXForwardFor() const { return this->XForwardFor_ != nullptr;};
    void deleteXForwardFor() { this->XForwardFor_ = nullptr;};
    inline string getXForwardFor() const { DARABONBA_PTR_GET_DEFAULT(XForwardFor_, "") };
    inline DescribeRiskEventPayloadResponseBody& setXForwardFor(string XForwardFor) { DARABONBA_PTR_SET_VALUE(XForwardFor_, XForwardFor) };


  protected:
    // The destination IP address of the intrusion event.
    shared_ptr<string> dstIP_ {};
    // The destination port of the intrusion event.
    shared_ptr<int32_t> dstPort_ {};
    // The destination VPC ID of the intrusion event.
    shared_ptr<string> dstVpcId_ {};
    // Type of the hit.
    shared_ptr<int32_t> hitContentType_ {};
    // The position where the hit ends.
    shared_ptr<int32_t> hitTo_ {};
    // Hit payload.
    shared_ptr<string> parsedContent_ {};
    // The attack payload of the intrusion event.
    shared_ptr<string> payload_ {};
    // The length of the attack payload of the intrusion event.
    shared_ptr<int32_t> payloadLen_ {};
    // The protocol type of intrusion event. Valid values:
    // 
    // *   **TCP**
    // *   **UDP**
    shared_ptr<string> proto_ {};
    // The HTTP X-Real-IP field.
    shared_ptr<string> realIp_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The source IP address of the intrusion event.
    shared_ptr<string> srcIP_ {};
    // The source port of the intrusion event.
    shared_ptr<int32_t> srcPort_ {};
    // The source VPC ID of the intrusion event.
    shared_ptr<string> srcVpcId_ {};
    // The HTTP X-Forwarded-For field.
    shared_ptr<string> XForwardFor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
