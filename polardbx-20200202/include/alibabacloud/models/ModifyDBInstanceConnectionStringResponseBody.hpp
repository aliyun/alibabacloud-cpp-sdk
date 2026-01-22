// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBInstanceConnectionStringResponseBody() = default ;
    ModifyDBInstanceConnectionStringResponseBody(const ModifyDBInstanceConnectionStringResponseBody &) = default ;
    ModifyDBInstanceConnectionStringResponseBody(ModifyDBInstanceConnectionStringResponseBody &&) = default ;
    ModifyDBInstanceConnectionStringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConnectionStringResponseBody() = default ;
    ModifyDBInstanceConnectionStringResponseBody& operator=(const ModifyDBInstanceConnectionStringResponseBody &) = default ;
    ModifyDBInstanceConnectionStringResponseBody& operator=(ModifyDBInstanceConnectionStringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DBInstanceNetType, DBInstanceNetType_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DBInstanceNetType, DBInstanceNetType_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
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
      virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->DBInstanceName_ == nullptr && this->DBInstanceNetType_ == nullptr && this->port_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline Data& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // DBInstanceNetType Field Functions 
      bool hasDBInstanceNetType() const { return this->DBInstanceNetType_ != nullptr;};
      void deleteDBInstanceNetType() { this->DBInstanceNetType_ = nullptr;};
      inline string getDBInstanceNetType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceNetType_, "") };
      inline Data& setDBInstanceNetType(string DBInstanceNetType) { DARABONBA_PTR_SET_VALUE(DBInstanceNetType_, DBInstanceNetType) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline Data& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      shared_ptr<string> connectionString_ {};
      shared_ptr<string> DBInstanceName_ {};
      shared_ptr<string> DBInstanceNetType_ {};
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ModifyDBInstanceConnectionStringResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBInstanceConnectionStringResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBInstanceConnectionStringResponseBody::Data) };
    inline ModifyDBInstanceConnectionStringResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyDBInstanceConnectionStringResponseBody::Data) };
    inline ModifyDBInstanceConnectionStringResponseBody& setData(const ModifyDBInstanceConnectionStringResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBInstanceConnectionStringResponseBody& setData(ModifyDBInstanceConnectionStringResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyDBInstanceConnectionStringResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceConnectionStringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<ModifyDBInstanceConnectionStringResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
