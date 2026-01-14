// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALIZESERVICELINKROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIALIZESERVICELINKROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class InitializeServiceLinkRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitializeServiceLinkRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, InitializeServiceLinkRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    InitializeServiceLinkRoleResponseBody() = default ;
    InitializeServiceLinkRoleResponseBody(const InitializeServiceLinkRoleResponseBody &) = default ;
    InitializeServiceLinkRoleResponseBody(InitializeServiceLinkRoleResponseBody &&) = default ;
    InitializeServiceLinkRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitializeServiceLinkRoleResponseBody() = default ;
    InitializeServiceLinkRoleResponseBody& operator=(const InitializeServiceLinkRoleResponseBody &) = default ;
    InitializeServiceLinkRoleResponseBody& operator=(InitializeServiceLinkRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RequiredPermission, requiredPermission_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RequiredPermission, requiredPermission_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
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
      virtual bool empty() const override { return this->requiredPermission_ == nullptr
        && this->roleName_ == nullptr && this->serviceName_ == nullptr; };
      // requiredPermission Field Functions 
      bool hasRequiredPermission() const { return this->requiredPermission_ != nullptr;};
      void deleteRequiredPermission() { this->requiredPermission_ = nullptr;};
      inline string getRequiredPermission() const { DARABONBA_PTR_GET_DEFAULT(requiredPermission_, "") };
      inline Data& setRequiredPermission(string requiredPermission) { DARABONBA_PTR_SET_VALUE(requiredPermission_, requiredPermission) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Data& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline Data& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    protected:
      shared_ptr<string> requiredPermission_ {};
      shared_ptr<string> roleName_ {};
      shared_ptr<string> serviceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitializeServiceLinkRoleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InitializeServiceLinkRoleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InitializeServiceLinkRoleResponseBody::Data) };
    inline InitializeServiceLinkRoleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InitializeServiceLinkRoleResponseBody::Data) };
    inline InitializeServiceLinkRoleResponseBody& setData(const InitializeServiceLinkRoleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InitializeServiceLinkRoleResponseBody& setData(InitializeServiceLinkRoleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitializeServiceLinkRoleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitializeServiceLinkRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline InitializeServiceLinkRoleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<InitializeServiceLinkRoleResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
