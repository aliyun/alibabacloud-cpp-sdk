// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTMPDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERTMPDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class CreateRtmpDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRtmpDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRtmpDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateRtmpDeviceResponseBody() = default ;
    CreateRtmpDeviceResponseBody(const CreateRtmpDeviceResponseBody &) = default ;
    CreateRtmpDeviceResponseBody(CreateRtmpDeviceResponseBody &&) = default ;
    CreateRtmpDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRtmpDeviceResponseBody() = default ;
    CreateRtmpDeviceResponseBody& operator=(const CreateRtmpDeviceResponseBody &) = default ;
    CreateRtmpDeviceResponseBody& operator=(CreateRtmpDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_TO_JSON(IotId, iotId_);
        DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
        DARABONBA_PTR_FROM_JSON(IotId, iotId_);
        DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
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
      virtual bool empty() const override { return this->deviceName_ == nullptr
        && this->iotId_ == nullptr && this->streamName_ == nullptr; };
      // deviceName Field Functions 
      bool hasDeviceName() const { return this->deviceName_ != nullptr;};
      void deleteDeviceName() { this->deviceName_ = nullptr;};
      inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
      inline Data& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


      // iotId Field Functions 
      bool hasIotId() const { return this->iotId_ != nullptr;};
      void deleteIotId() { this->iotId_ = nullptr;};
      inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
      inline Data& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


      // streamName Field Functions 
      bool hasStreamName() const { return this->streamName_ != nullptr;};
      void deleteStreamName() { this->streamName_ = nullptr;};
      inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
      inline Data& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    protected:
      shared_ptr<string> deviceName_ {};
      shared_ptr<string> iotId_ {};
      shared_ptr<string> streamName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateRtmpDeviceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CreateRtmpDeviceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CreateRtmpDeviceResponseBody::Data) };
    inline CreateRtmpDeviceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CreateRtmpDeviceResponseBody::Data) };
    inline CreateRtmpDeviceResponseBody& setData(const CreateRtmpDeviceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateRtmpDeviceResponseBody& setData(CreateRtmpDeviceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateRtmpDeviceResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateRtmpDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateRtmpDeviceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<CreateRtmpDeviceResponseBody::Data> data_ {};
    shared_ptr<string> errorMessage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
