// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAuthCodeBindForExtResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAuthCodeBindForExtResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAuthCodeBindForExtResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    CheckAuthCodeBindForExtResponseBody() = default ;
    CheckAuthCodeBindForExtResponseBody(const CheckAuthCodeBindForExtResponseBody &) = default ;
    CheckAuthCodeBindForExtResponseBody(CheckAuthCodeBindForExtResponseBody &&) = default ;
    CheckAuthCodeBindForExtResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAuthCodeBindForExtResponseBody() = default ;
    CheckAuthCodeBindForExtResponseBody& operator=(const CheckAuthCodeBindForExtResponseBody &) = default ;
    CheckAuthCodeBindForExtResponseBody& operator=(CheckAuthCodeBindForExtResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceOpenInfo, deviceOpenInfo_);
        DARABONBA_PTR_TO_JSON(UserOpenInfo, userOpenInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceOpenInfo, deviceOpenInfo_);
        DARABONBA_PTR_FROM_JSON(UserOpenInfo, userOpenInfo_);
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
      class UserOpenInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserOpenInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdType, idType_);
        };
        friend void from_json(const Darabonba::Json& j, UserOpenInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdType, idType_);
        };
        UserOpenInfo() = default ;
        UserOpenInfo(const UserOpenInfo &) = default ;
        UserOpenInfo(UserOpenInfo &&) = default ;
        UserOpenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserOpenInfo() = default ;
        UserOpenInfo& operator=(const UserOpenInfo &) = default ;
        UserOpenInfo& operator=(UserOpenInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->idType_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline UserOpenInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idType Field Functions 
        bool hasIdType() const { return this->idType_ != nullptr;};
        void deleteIdType() { this->idType_ = nullptr;};
        inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
        inline UserOpenInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      protected:
        // External user ID
        shared_ptr<string> id_ {};
        // USER_ID
        shared_ptr<string> idType_ {};
      };

      class DeviceOpenInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceOpenInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IdType, idType_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceOpenInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IdType, idType_);
        };
        DeviceOpenInfo() = default ;
        DeviceOpenInfo(const DeviceOpenInfo &) = default ;
        DeviceOpenInfo(DeviceOpenInfo &&) = default ;
        DeviceOpenInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceOpenInfo() = default ;
        DeviceOpenInfo& operator=(const DeviceOpenInfo &) = default ;
        DeviceOpenInfo& operator=(DeviceOpenInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->idType_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DeviceOpenInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // idType Field Functions 
        bool hasIdType() const { return this->idType_ != nullptr;};
        void deleteIdType() { this->idType_ = nullptr;};
        inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
        inline DeviceOpenInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      protected:
        // External device ID
        shared_ptr<string> id_ {};
        // DEVICE_ID
        shared_ptr<string> idType_ {};
      };

      virtual bool empty() const override { return this->deviceOpenInfo_ == nullptr
        && this->userOpenInfo_ == nullptr; };
      // deviceOpenInfo Field Functions 
      bool hasDeviceOpenInfo() const { return this->deviceOpenInfo_ != nullptr;};
      void deleteDeviceOpenInfo() { this->deviceOpenInfo_ = nullptr;};
      inline const Result::DeviceOpenInfo & getDeviceOpenInfo() const { DARABONBA_PTR_GET_CONST(deviceOpenInfo_, Result::DeviceOpenInfo) };
      inline Result::DeviceOpenInfo getDeviceOpenInfo() { DARABONBA_PTR_GET(deviceOpenInfo_, Result::DeviceOpenInfo) };
      inline Result& setDeviceOpenInfo(const Result::DeviceOpenInfo & deviceOpenInfo) { DARABONBA_PTR_SET_VALUE(deviceOpenInfo_, deviceOpenInfo) };
      inline Result& setDeviceOpenInfo(Result::DeviceOpenInfo && deviceOpenInfo) { DARABONBA_PTR_SET_RVALUE(deviceOpenInfo_, deviceOpenInfo) };


      // userOpenInfo Field Functions 
      bool hasUserOpenInfo() const { return this->userOpenInfo_ != nullptr;};
      void deleteUserOpenInfo() { this->userOpenInfo_ = nullptr;};
      inline const Result::UserOpenInfo & getUserOpenInfo() const { DARABONBA_PTR_GET_CONST(userOpenInfo_, Result::UserOpenInfo) };
      inline Result::UserOpenInfo getUserOpenInfo() { DARABONBA_PTR_GET(userOpenInfo_, Result::UserOpenInfo) };
      inline Result& setUserOpenInfo(const Result::UserOpenInfo & userOpenInfo) { DARABONBA_PTR_SET_VALUE(userOpenInfo_, userOpenInfo) };
      inline Result& setUserOpenInfo(Result::UserOpenInfo && userOpenInfo) { DARABONBA_PTR_SET_RVALUE(userOpenInfo_, userOpenInfo) };


    protected:
      // Device open information
      shared_ptr<Result::DeviceOpenInfo> deviceOpenInfo_ {};
      // User open information
      shared_ptr<Result::UserOpenInfo> userOpenInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline CheckAuthCodeBindForExtResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CheckAuthCodeBindForExtResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckAuthCodeBindForExtResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const CheckAuthCodeBindForExtResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, CheckAuthCodeBindForExtResponseBody::Result) };
    inline CheckAuthCodeBindForExtResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, CheckAuthCodeBindForExtResponseBody::Result) };
    inline CheckAuthCodeBindForExtResponseBody& setResult(const CheckAuthCodeBindForExtResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline CheckAuthCodeBindForExtResponseBody& setResult(CheckAuthCodeBindForExtResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The returned error code. The value 200 indicates that the invocation succeeded.
    shared_ptr<int32_t> code_ {};
    // Return Result of invoking this API.
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Detailed information
    shared_ptr<CheckAuthCodeBindForExtResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
