// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
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
        DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_TO_JSON(DisabledPorts, disabledPorts_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
        DARABONBA_PTR_FROM_JSON(DisabledPorts, disabledPorts_);
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
        && this->DBInstanceID_ == nullptr && this->DBInstanceName_ == nullptr && this->disabledPorts_ == nullptr; };
      // connectionString Field Functions 
      bool hasConnectionString() const { return this->connectionString_ != nullptr;};
      void deleteConnectionString() { this->connectionString_ = nullptr;};
      inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
      inline Data& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


      // DBInstanceID Field Functions 
      bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
      void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
      inline int32_t getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, 0) };
      inline Data& setDBInstanceID(int32_t DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


      // disabledPorts Field Functions 
      bool hasDisabledPorts() const { return this->disabledPorts_ != nullptr;};
      void deleteDisabledPorts() { this->disabledPorts_ = nullptr;};
      inline string getDisabledPorts() const { DARABONBA_PTR_GET_DEFAULT(disabledPorts_, "") };
      inline Data& setDisabledPorts(string disabledPorts) { DARABONBA_PTR_SET_VALUE(disabledPorts_, disabledPorts) };


    protected:
      // The endpoint of the cluster.
      shared_ptr<string> connectionString_ {};
      // The cluster ID.
      shared_ptr<int32_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
      // The disabled database ports.
      shared_ptr<string> disabledPorts_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBInstanceConnectionStringResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBInstanceConnectionStringResponseBody::Data) };
    inline ModifyDBInstanceConnectionStringResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyDBInstanceConnectionStringResponseBody::Data) };
    inline ModifyDBInstanceConnectionStringResponseBody& setData(const ModifyDBInstanceConnectionStringResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBInstanceConnectionStringResponseBody& setData(ModifyDBInstanceConnectionStringResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceConnectionStringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ModifyDBInstanceConnectionStringResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
