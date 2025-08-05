// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONNECTIONSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONNECTIONSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeConnectionStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConnectionStatusResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(DestinationConnectionStatus, destinationConnectionStatus_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_ANY_TO_JSON(SourceConnectionStatus, sourceConnectionStatus_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConnectionStatusResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(DestinationConnectionStatus, destinationConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_ANY_FROM_JSON(SourceConnectionStatus, sourceConnectionStatus_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeConnectionStatusResponseBody() = default ;
    DescribeConnectionStatusResponseBody(const DescribeConnectionStatusResponseBody &) = default ;
    DescribeConnectionStatusResponseBody(DescribeConnectionStatusResponseBody &&) = default ;
    DescribeConnectionStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConnectionStatusResponseBody() = default ;
    DescribeConnectionStatusResponseBody& operator=(const DescribeConnectionStatusResponseBody &) = default ;
    DescribeConnectionStatusResponseBody& operator=(DescribeConnectionStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationConnectionStatus_ != nullptr
        && this->errCode_ != nullptr && this->errMessage_ != nullptr && this->requestId_ != nullptr && this->sourceConnectionStatus_ != nullptr && this->success_ != nullptr; };
    // destinationConnectionStatus Field Functions 
    bool hasDestinationConnectionStatus() const { return this->destinationConnectionStatus_ != nullptr;};
    void deleteDestinationConnectionStatus() { this->destinationConnectionStatus_ = nullptr;};
    inline     const Darabonba::Json & destinationConnectionStatus() const { DARABONBA_GET(destinationConnectionStatus_) };
    Darabonba::Json & destinationConnectionStatus() { DARABONBA_GET(destinationConnectionStatus_) };
    inline DescribeConnectionStatusResponseBody& setDestinationConnectionStatus(const Darabonba::Json & destinationConnectionStatus) { DARABONBA_SET_VALUE(destinationConnectionStatus_, destinationConnectionStatus) };
    inline DescribeConnectionStatusResponseBody& setDestinationConnectionStatus(Darabonba::Json & destinationConnectionStatus) { DARABONBA_SET_RVALUE(destinationConnectionStatus_, destinationConnectionStatus) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string errCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeConnectionStatusResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeConnectionStatusResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConnectionStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceConnectionStatus Field Functions 
    bool hasSourceConnectionStatus() const { return this->sourceConnectionStatus_ != nullptr;};
    void deleteSourceConnectionStatus() { this->sourceConnectionStatus_ = nullptr;};
    inline     const Darabonba::Json & sourceConnectionStatus() const { DARABONBA_GET(sourceConnectionStatus_) };
    Darabonba::Json & sourceConnectionStatus() { DARABONBA_GET(sourceConnectionStatus_) };
    inline DescribeConnectionStatusResponseBody& setSourceConnectionStatus(const Darabonba::Json & sourceConnectionStatus) { DARABONBA_SET_VALUE(sourceConnectionStatus_, sourceConnectionStatus) };
    inline DescribeConnectionStatusResponseBody& setSourceConnectionStatus(Darabonba::Json & sourceConnectionStatus) { DARABONBA_SET_RVALUE(sourceConnectionStatus_, sourceConnectionStatus) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeConnectionStatusResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The connectivity of DTS servers to the destination database.
    Darabonba::Json destinationConnectionStatus_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errCode_ = nullptr;
    // The error message returned if the call failed.
    std::shared_ptr<string> errMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The connectivity of DTS servers to the source database.
    Darabonba::Json sourceConnectionStatus_ = nullptr;
    // Indicates whether the call was successful.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
