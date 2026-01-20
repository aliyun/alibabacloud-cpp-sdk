// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEMINORVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpgradeMinorVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeMinorVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeMinorVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    UpgradeMinorVersionResponseBody() = default ;
    UpgradeMinorVersionResponseBody(const UpgradeMinorVersionResponseBody &) = default ;
    UpgradeMinorVersionResponseBody(UpgradeMinorVersionResponseBody &&) = default ;
    UpgradeMinorVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeMinorVersionResponseBody() = default ;
    UpgradeMinorVersionResponseBody& operator=(const UpgradeMinorVersionResponseBody &) = default ;
    UpgradeMinorVersionResponseBody& operator=(UpgradeMinorVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      virtual bool empty() const override { return this->DBInstanceName_ == nullptr; };
      // DBInstanceName Field Functions 
      bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
      void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
      inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
      inline Data& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    protected:
      // The instance ID.
      shared_ptr<string> DBInstanceName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpgradeMinorVersionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpgradeMinorVersionResponseBody::Data) };
    inline UpgradeMinorVersionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpgradeMinorVersionResponseBody::Data) };
    inline UpgradeMinorVersionResponseBody& setData(const UpgradeMinorVersionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpgradeMinorVersionResponseBody& setData(UpgradeMinorVersionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpgradeMinorVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    shared_ptr<UpgradeMinorVersionResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
