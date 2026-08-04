// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEBASICINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEBASICINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceBasicInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceBasicInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetDeviceBasicInfoResponseBody() = default ;
    GetDeviceBasicInfoResponseBody(const GetDeviceBasicInfoResponseBody &) = default ;
    GetDeviceBasicInfoResponseBody(GetDeviceBasicInfoResponseBody &&) = default ;
    GetDeviceBasicInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceBasicInfoResponseBody() = default ;
    GetDeviceBasicInfoResponseBody& operator=(const GetDeviceBasicInfoResponseBody &) = default ;
    GetDeviceBasicInfoResponseBody& operator=(GetDeviceBasicInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FirmwareVersion, firmwareVersion_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FirmwareVersion, firmwareVersion_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->firmwareVersion_ == nullptr
        && this->mac_ == nullptr && this->name_ == nullptr && this->sn_ == nullptr; };
      // firmwareVersion Field Functions 
      bool hasFirmwareVersion() const { return this->firmwareVersion_ != nullptr;};
      void deleteFirmwareVersion() { this->firmwareVersion_ = nullptr;};
      inline string getFirmwareVersion() const { DARABONBA_PTR_GET_DEFAULT(firmwareVersion_, "") };
      inline Result& setFirmwareVersion(string firmwareVersion) { DARABONBA_PTR_SET_VALUE(firmwareVersion_, firmwareVersion) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Result& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Result& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    protected:
      // Firmware version of the device.
      shared_ptr<string> firmwareVersion_ {};
      // MAC address of the device.
      shared_ptr<string> mac_ {};
      // Name of the device.
      shared_ptr<string> name_ {};
      // SN information of the device.
      shared_ptr<string> sn_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDeviceBasicInfoResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeviceBasicInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceBasicInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDeviceBasicInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetDeviceBasicInfoResponseBody::Result) };
    inline GetDeviceBasicInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetDeviceBasicInfoResponseBody::Result) };
    inline GetDeviceBasicInfoResponseBody& setResult(const GetDeviceBasicInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDeviceBasicInfoResponseBody& setResult(GetDeviceBasicInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Error code returned. A value of 200 indicates that the call succeeded.
    shared_ptr<int32_t> code_ {};
    // Return result of invoking this API.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Detailed information returned.
    shared_ptr<GetDeviceBasicInfoResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
