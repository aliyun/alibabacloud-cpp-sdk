// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBInstanceConfigResponseBody() = default ;
    ModifyDBInstanceConfigResponseBody(const ModifyDBInstanceConfigResponseBody &) = default ;
    ModifyDBInstanceConfigResponseBody(ModifyDBInstanceConfigResponseBody &&) = default ;
    ModifyDBInstanceConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConfigResponseBody() = default ;
    ModifyDBInstanceConfigResponseBody& operator=(const ModifyDBInstanceConfigResponseBody &) = default ;
    ModifyDBInstanceConfigResponseBody& operator=(ModifyDBInstanceConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
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
      virtual bool empty() const override { return this->DBInstanceId_ == nullptr; };
      // DBInstanceId Field Functions 
      bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
      void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
      inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
      inline Data& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    protected:
      shared_ptr<string> DBInstanceId_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBInstanceConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBInstanceConfigResponseBody::Data) };
    inline ModifyDBInstanceConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ModifyDBInstanceConfigResponseBody::Data) };
    inline ModifyDBInstanceConfigResponseBody& setData(const ModifyDBInstanceConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBInstanceConfigResponseBody& setData(ModifyDBInstanceConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ModifyDBInstanceConfigResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
