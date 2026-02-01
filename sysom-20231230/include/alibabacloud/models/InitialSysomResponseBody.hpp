// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITIALSYSOMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_INITIALSYSOMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class InitialSysomResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitialSysomResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
    };
    friend void from_json(const Darabonba::Json& j, InitialSysomResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
    };
    InitialSysomResponseBody() = default ;
    InitialSysomResponseBody(const InitialSysomResponseBody &) = default ;
    InitialSysomResponseBody(InitialSysomResponseBody &&) = default ;
    InitialSysomResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitialSysomResponseBody() = default ;
    InitialSysomResponseBody& operator=(const InitialSysomResponseBody &) = default ;
    InitialSysomResponseBody& operator=(InitialSysomResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(role_exist, roleExist_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(role_exist, roleExist_);
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
      virtual bool empty() const override { return this->roleExist_ == nullptr; };
      // roleExist Field Functions 
      bool hasRoleExist() const { return this->roleExist_ != nullptr;};
      void deleteRoleExist() { this->roleExist_ = nullptr;};
      inline bool getRoleExist() const { DARABONBA_PTR_GET_DEFAULT(roleExist_, false) };
      inline Data& setRoleExist(bool roleExist) { DARABONBA_PTR_SET_VALUE(roleExist_, roleExist) };


    protected:
      shared_ptr<bool> roleExist_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline InitialSysomResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline InitialSysomResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const InitialSysomResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, InitialSysomResponseBody::Data) };
    inline InitialSysomResponseBody::Data getData() { DARABONBA_PTR_GET(data_, InitialSysomResponseBody::Data) };
    inline InitialSysomResponseBody& setData(const InitialSysomResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline InitialSysomResponseBody& setData(InitialSysomResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline InitialSysomResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<InitialSysomResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
