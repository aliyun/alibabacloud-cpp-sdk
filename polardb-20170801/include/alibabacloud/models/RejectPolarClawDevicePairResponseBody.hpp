// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REJECTPOLARCLAWDEVICEPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REJECTPOLARCLAWDEVICEPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RejectPolarClawDevicePairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RejectPolarClawDevicePairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PairRequestId, pairRequestId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RejectPolarClawDevicePairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PairRequestId, pairRequestId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RejectPolarClawDevicePairResponseBody() = default ;
    RejectPolarClawDevicePairResponseBody(const RejectPolarClawDevicePairResponseBody &) = default ;
    RejectPolarClawDevicePairResponseBody(RejectPolarClawDevicePairResponseBody &&) = default ;
    RejectPolarClawDevicePairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RejectPolarClawDevicePairResponseBody() = default ;
    RejectPolarClawDevicePairResponseBody& operator=(const RejectPolarClawDevicePairResponseBody &) = default ;
    RejectPolarClawDevicePairResponseBody& operator=(RejectPolarClawDevicePairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->deviceId_ == nullptr && this->message_ == nullptr && this->pairRequestId_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RejectPolarClawDevicePairResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline RejectPolarClawDevicePairResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline RejectPolarClawDevicePairResponseBody& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RejectPolarClawDevicePairResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pairRequestId Field Functions 
    bool hasPairRequestId() const { return this->pairRequestId_ != nullptr;};
    void deletePairRequestId() { this->pairRequestId_ = nullptr;};
    inline string getPairRequestId() const { DARABONBA_PTR_GET_DEFAULT(pairRequestId_, "") };
    inline RejectPolarClawDevicePairResponseBody& setPairRequestId(string pairRequestId) { DARABONBA_PTR_SET_VALUE(pairRequestId_, pairRequestId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RejectPolarClawDevicePairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The unique device ID.
    shared_ptr<string> deviceId_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The pairing request ID.
    shared_ptr<string> pairRequestId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
