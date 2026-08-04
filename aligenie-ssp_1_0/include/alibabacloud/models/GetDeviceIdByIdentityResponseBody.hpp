// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEIDBYIDENTITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEIDBYIDENTITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceIdByIdentityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceIdByIdentityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceIdByIdentityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetDeviceIdByIdentityResponseBody() = default ;
    GetDeviceIdByIdentityResponseBody(const GetDeviceIdByIdentityResponseBody &) = default ;
    GetDeviceIdByIdentityResponseBody(GetDeviceIdByIdentityResponseBody &&) = default ;
    GetDeviceIdByIdentityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceIdByIdentityResponseBody() = default ;
    GetDeviceIdByIdentityResponseBody& operator=(const GetDeviceIdByIdentityResponseBody &) = default ;
    GetDeviceIdByIdentityResponseBody& operator=(GetDeviceIdByIdentityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_TO_JSON(DeviceUnionIds, deviceUnionIds_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
        DARABONBA_PTR_FROM_JSON(DeviceUnionIds, deviceUnionIds_);
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
      class DeviceUnionIds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceUnionIds& obj) { 
          DARABONBA_PTR_TO_JSON(DeviceUnionId, deviceUnionId_);
          DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceUnionIds& obj) { 
          DARABONBA_PTR_FROM_JSON(DeviceUnionId, deviceUnionId_);
          DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
        };
        DeviceUnionIds() = default ;
        DeviceUnionIds(const DeviceUnionIds &) = default ;
        DeviceUnionIds(DeviceUnionIds &&) = default ;
        DeviceUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceUnionIds() = default ;
        DeviceUnionIds& operator=(const DeviceUnionIds &) = default ;
        DeviceUnionIds& operator=(DeviceUnionIds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deviceUnionId_ == nullptr
        && this->organizationId_ == nullptr; };
        // deviceUnionId Field Functions 
        bool hasDeviceUnionId() const { return this->deviceUnionId_ != nullptr;};
        void deleteDeviceUnionId() { this->deviceUnionId_ = nullptr;};
        inline string getDeviceUnionId() const { DARABONBA_PTR_GET_DEFAULT(deviceUnionId_, "") };
        inline DeviceUnionIds& setDeviceUnionId(string deviceUnionId) { DARABONBA_PTR_SET_VALUE(deviceUnionId_, deviceUnionId) };


        // organizationId Field Functions 
        bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
        void deleteOrganizationId() { this->organizationId_ = nullptr;};
        inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
        inline DeviceUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      protected:
        // The UnionId of the device.
        shared_ptr<string> deviceUnionId_ {};
        // Organization ID.
        shared_ptr<string> organizationId_ {};
      };

      virtual bool empty() const override { return this->deviceOpenId_ == nullptr
        && this->deviceUnionIds_ == nullptr; };
      // deviceOpenId Field Functions 
      bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
      void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
      inline string getDeviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
      inline Result& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


      // deviceUnionIds Field Functions 
      bool hasDeviceUnionIds() const { return this->deviceUnionIds_ != nullptr;};
      void deleteDeviceUnionIds() { this->deviceUnionIds_ = nullptr;};
      inline const vector<Result::DeviceUnionIds> & getDeviceUnionIds() const { DARABONBA_PTR_GET_CONST(deviceUnionIds_, vector<Result::DeviceUnionIds>) };
      inline vector<Result::DeviceUnionIds> getDeviceUnionIds() { DARABONBA_PTR_GET(deviceUnionIds_, vector<Result::DeviceUnionIds>) };
      inline Result& setDeviceUnionIds(const vector<Result::DeviceUnionIds> & deviceUnionIds) { DARABONBA_PTR_SET_VALUE(deviceUnionIds_, deviceUnionIds) };
      inline Result& setDeviceUnionIds(vector<Result::DeviceUnionIds> && deviceUnionIds) { DARABONBA_PTR_SET_RVALUE(deviceUnionIds_, deviceUnionIds) };


    protected:
      // The openId corresponding to the device.
      shared_ptr<string> deviceOpenId_ {};
      // Organization ID and UnionId information corresponding to the device.
      shared_ptr<vector<Result::DeviceUnionIds>> deviceUnionIds_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetDeviceIdByIdentityResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeviceIdByIdentityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeviceIdByIdentityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetDeviceIdByIdentityResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetDeviceIdByIdentityResponseBody::Result) };
    inline GetDeviceIdByIdentityResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetDeviceIdByIdentityResponseBody::Result) };
    inline GetDeviceIdByIdentityResponseBody& setResult(const GetDeviceIdByIdentityResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetDeviceIdByIdentityResponseBody& setResult(GetDeviceIdByIdentityResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The error code returned. A value of 200 indicates that the invocation succeeded.
    shared_ptr<int32_t> code_ {};
    // The return result of invoking this API.
    shared_ptr<string> message_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Detailed information returned.
    shared_ptr<GetDeviceIdByIdentityResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
