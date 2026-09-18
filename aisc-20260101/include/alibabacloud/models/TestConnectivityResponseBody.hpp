// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TESTCONNECTIVITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TESTCONNECTIVITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AISC20260101
{
namespace Models
{
  class TestConnectivityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TestConnectivityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TestConnectivityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TestConnectivityResponseBody() = default ;
    TestConnectivityResponseBody(const TestConnectivityResponseBody &) = default ;
    TestConnectivityResponseBody(TestConnectivityResponseBody &&) = default ;
    TestConnectivityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TestConnectivityResponseBody() = default ;
    TestConnectivityResponseBody& operator=(const TestConnectivityResponseBody &) = default ;
    TestConnectivityResponseBody& operator=(TestConnectivityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(LatencyMs, latencyMs_);
        DARABONBA_PTR_TO_JSON(VerifyMessage, verifyMessage_);
        DARABONBA_PTR_TO_JSON(VerifyStatus, verifyStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(LatencyMs, latencyMs_);
        DARABONBA_PTR_FROM_JSON(VerifyMessage, verifyMessage_);
        DARABONBA_PTR_FROM_JSON(VerifyStatus, verifyStatus_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->latencyMs_ == nullptr && this->verifyMessage_ == nullptr && this->verifyStatus_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
      inline Data& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // latencyMs Field Functions 
      bool hasLatencyMs() const { return this->latencyMs_ != nullptr;};
      void deleteLatencyMs() { this->latencyMs_ = nullptr;};
      inline int64_t getLatencyMs() const { DARABONBA_PTR_GET_DEFAULT(latencyMs_, 0L) };
      inline Data& setLatencyMs(int64_t latencyMs) { DARABONBA_PTR_SET_VALUE(latencyMs_, latencyMs) };


      // verifyMessage Field Functions 
      bool hasVerifyMessage() const { return this->verifyMessage_ != nullptr;};
      void deleteVerifyMessage() { this->verifyMessage_ = nullptr;};
      inline string getVerifyMessage() const { DARABONBA_PTR_GET_DEFAULT(verifyMessage_, "") };
      inline Data& setVerifyMessage(string verifyMessage) { DARABONBA_PTR_SET_VALUE(verifyMessage_, verifyMessage) };


      // verifyStatus Field Functions 
      bool hasVerifyStatus() const { return this->verifyStatus_ != nullptr;};
      void deleteVerifyStatus() { this->verifyStatus_ = nullptr;};
      inline string getVerifyStatus() const { DARABONBA_PTR_GET_DEFAULT(verifyStatus_, "") };
      inline Data& setVerifyStatus(string verifyStatus) { DARABONBA_PTR_SET_VALUE(verifyStatus_, verifyStatus) };


    protected:
      // The tracking identifier of the connectivity test. The system generates this value for the first call. For polling calls, this value is the same as the CheckId in the request.
      shared_ptr<string> checkId_ {};
      // The end-to-end latency of the target service response, in milliseconds. This value may be 0 or not returned when VerifyStatus is checking.
      shared_ptr<int64_t> latencyMs_ {};
      // The detailed information of the verification result. When VerifyStatus is verified, this value is a snippet of the response returned by the target service. When VerifyStatus is failed, this value describes the error cause, such as authentication failure, timeout, or empty response.
      shared_ptr<string> verifyMessage_ {};
      // The current status of the connectivity verification.
      shared_ptr<string> verifyStatus_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const TestConnectivityResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, TestConnectivityResponseBody::Data) };
    inline TestConnectivityResponseBody::Data getData() { DARABONBA_PTR_GET(data_, TestConnectivityResponseBody::Data) };
    inline TestConnectivityResponseBody& setData(const TestConnectivityResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline TestConnectivityResponseBody& setData(TestConnectivityResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TestConnectivityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The result details of the connectivity test.
    shared_ptr<TestConnectivityResponseBody::Data> data_ {};
    // The unique identifier of the request, used for troubleshooting and log tracing.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AISC20260101
#endif
