// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCEENDPOINTADDRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCEENDPOINTADDRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceEndpointAddressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceEndpointAddressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceEndpointAddressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBInstanceEndpointAddressResponseBody() = default ;
    ModifyDBInstanceEndpointAddressResponseBody(const ModifyDBInstanceEndpointAddressResponseBody &) = default ;
    ModifyDBInstanceEndpointAddressResponseBody(ModifyDBInstanceEndpointAddressResponseBody &&) = default ;
    ModifyDBInstanceEndpointAddressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceEndpointAddressResponseBody() = default ;
    ModifyDBInstanceEndpointAddressResponseBody& operator=(const ModifyDBInstanceEndpointAddressResponseBody &) = default ;
    ModifyDBInstanceEndpointAddressResponseBody& operator=(ModifyDBInstanceEndpointAddressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceEndpointId, DBInstanceEndpointId_);
        DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
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
      virtual bool empty() const override { return this->DBInstanceEndpointId_ == nullptr
        && this->DBInstanceName_ == nullptr; };
      // DBInstanceEndpointId Field Functions 
      bool hasDBInstanceEndpointId() const { return this->DBInstanceEndpointId_ != nullptr;};
      void deleteDBInstanceEndpointId() { this->DBInstanceEndpointId_ = nullptr;};
      inline string getDBInstanceEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceEndpointId_, "") };
      inline Data& setDBInstanceEndpointId(string DBInstanceEndpointId) { DARABONBA_PTR_SET_VALUE(DBInstanceEndpointId_, DBInstanceEndpointId) };


      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    protected:
      // The endpoint ID of the instance.
      shared_ptr<string> DBInstanceEndpointId_ {};
      // The ID of the instance.
      shared_ptr<string> DBInstanceName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBInstanceEndpointAddressResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBInstanceEndpointAddressResponseBody::Data) };
    inline ModifyDBInstanceEndpointAddressResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyDBInstanceEndpointAddressResponseBody::Data) };
    inline ModifyDBInstanceEndpointAddressResponseBody& setData(const ModifyDBInstanceEndpointAddressResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBInstanceEndpointAddressResponseBody& setData(ModifyDBInstanceEndpointAddressResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceEndpointAddressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<ModifyDBInstanceEndpointAddressResponseBody::Data> data_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
