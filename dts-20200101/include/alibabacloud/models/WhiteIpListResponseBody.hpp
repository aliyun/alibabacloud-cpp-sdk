// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WHITEIPLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_WHITEIPLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class WhiteIpListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WhiteIpListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DestIpList, destIpList_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(IpList, ipList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SrcIpList, srcIpList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, WhiteIpListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DestIpList, destIpList_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(IpList, ipList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SrcIpList, srcIpList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    WhiteIpListResponseBody() = default ;
    WhiteIpListResponseBody(const WhiteIpListResponseBody &) = default ;
    WhiteIpListResponseBody(WhiteIpListResponseBody &&) = default ;
    WhiteIpListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WhiteIpListResponseBody() = default ;
    WhiteIpListResponseBody& operator=(const WhiteIpListResponseBody &) = default ;
    WhiteIpListResponseBody& operator=(WhiteIpListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destIpList_ == nullptr
        && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr
        && this->ipList_ == nullptr && this->requestId_ == nullptr && this->srcIpList_ == nullptr && this->success_ == nullptr; };
    // destIpList Field Functions 
    bool hasDestIpList() const { return this->destIpList_ != nullptr;};
    void deleteDestIpList() { this->destIpList_ = nullptr;};
    inline string getDestIpList() const { DARABONBA_PTR_GET_DEFAULT(destIpList_, "") };
    inline WhiteIpListResponseBody& setDestIpList(string destIpList) { DARABONBA_PTR_SET_VALUE(destIpList_, destIpList) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline WhiteIpListResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline WhiteIpListResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline WhiteIpListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline WhiteIpListResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline WhiteIpListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // ipList Field Functions 
    bool hasIpList() const { return this->ipList_ != nullptr;};
    void deleteIpList() { this->ipList_ = nullptr;};
    inline string getIpList() const { DARABONBA_PTR_GET_DEFAULT(ipList_, "") };
    inline WhiteIpListResponseBody& setIpList(string ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline WhiteIpListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // srcIpList Field Functions 
    bool hasSrcIpList() const { return this->srcIpList_ != nullptr;};
    void deleteSrcIpList() { this->srcIpList_ = nullptr;};
    inline string getSrcIpList() const { DARABONBA_PTR_GET_DEFAULT(srcIpList_, "") };
    inline WhiteIpListResponseBody& setSrcIpList(string srcIpList) { DARABONBA_PTR_SET_VALUE(srcIpList_, srcIpList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline WhiteIpListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Target end adaptation to VPCNAT IP whitelist
    shared_ptr<string> destIpList_ {};
    // The dynamic error code. This parameter will be removed in the future.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message. This parameter will be removed in the future.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the call failed.
    shared_ptr<string> errCode_ {};
    // The error message returned if the call failed.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // IP address.
    shared_ptr<string> ipList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Source adaptation to VPC NAT IP whitelist
    shared_ptr<string> srcIpList_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
