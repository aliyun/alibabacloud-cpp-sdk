// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDLLASTPAYLOADRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDLLASTPAYLOADRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeSdlLastPayloadResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSdlLastPayloadResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DstPortList, dstPortList_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(ProtoList, protoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcPortList, srcPortList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSdlLastPayloadResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DstPortList, dstPortList_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(ProtoList, protoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcPortList, srcPortList_);
    };
    DescribeSdlLastPayloadResponseBody() = default ;
    DescribeSdlLastPayloadResponseBody(const DescribeSdlLastPayloadResponseBody &) = default ;
    DescribeSdlLastPayloadResponseBody(DescribeSdlLastPayloadResponseBody &&) = default ;
    DescribeSdlLastPayloadResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSdlLastPayloadResponseBody() = default ;
    DescribeSdlLastPayloadResponseBody& operator=(const DescribeSdlLastPayloadResponseBody &) = default ;
    DescribeSdlLastPayloadResponseBody& operator=(DescribeSdlLastPayloadResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dstPortList_ == nullptr
        && this->payload_ == nullptr && this->protoList_ == nullptr && this->requestId_ == nullptr && this->srcPortList_ == nullptr; };
    // dstPortList Field Functions 
    bool hasDstPortList() const { return this->dstPortList_ != nullptr;};
    void deleteDstPortList() { this->dstPortList_ = nullptr;};
    inline string getDstPortList() const { DARABONBA_PTR_GET_DEFAULT(dstPortList_, "") };
    inline DescribeSdlLastPayloadResponseBody& setDstPortList(string dstPortList) { DARABONBA_PTR_SET_VALUE(dstPortList_, dstPortList) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline string getPayload() const { DARABONBA_PTR_GET_DEFAULT(payload_, "") };
    inline DescribeSdlLastPayloadResponseBody& setPayload(string payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };


    // protoList Field Functions 
    bool hasProtoList() const { return this->protoList_ != nullptr;};
    void deleteProtoList() { this->protoList_ = nullptr;};
    inline string getProtoList() const { DARABONBA_PTR_GET_DEFAULT(protoList_, "") };
    inline DescribeSdlLastPayloadResponseBody& setProtoList(string protoList) { DARABONBA_PTR_SET_VALUE(protoList_, protoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSdlLastPayloadResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcPortList Field Functions 
    bool hasSrcPortList() const { return this->srcPortList_ != nullptr;};
    void deleteSrcPortList() { this->srcPortList_ = nullptr;};
    inline string getSrcPortList() const { DARABONBA_PTR_GET_DEFAULT(srcPortList_, "") };
    inline DescribeSdlLastPayloadResponseBody& setSrcPortList(string srcPortList) { DARABONBA_PTR_SET_VALUE(srcPortList_, srcPortList) };


  protected:
    // The destination port.
    shared_ptr<string> dstPortList_ {};
    // The attack payload of the intrusion prevention event.
    shared_ptr<string> payload_ {};
    // The protocol.
    shared_ptr<string> protoList_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The source port.
    shared_ptr<string> srcPortList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
