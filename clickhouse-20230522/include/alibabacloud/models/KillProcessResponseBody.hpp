// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KILLPROCESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_KILLPROCESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class KillProcessResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KillProcessResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, KillProcessResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    KillProcessResponseBody() = default ;
    KillProcessResponseBody(const KillProcessResponseBody &) = default ;
    KillProcessResponseBody(KillProcessResponseBody &&) = default ;
    KillProcessResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KillProcessResponseBody() = default ;
    KillProcessResponseBody& operator=(const KillProcessResponseBody &) = default ;
    KillProcessResponseBody& operator=(KillProcessResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
        DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->DBInstanceID_ == nullptr && this->DBInstanceName_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


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


    protected:
      // The number of queries that are terminated.
      shared_ptr<int64_t> count_ {};
      // The cluster ID.
      shared_ptr<int32_t> DBInstanceID_ {};
      // The cluster name.
      shared_ptr<string> DBInstanceName_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const KillProcessResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, KillProcessResponseBody::Data) };
    inline KillProcessResponseBody::Data getData() { DARABONBA_PTR_GET(data_, KillProcessResponseBody::Data) };
    inline KillProcessResponseBody& setData(const KillProcessResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline KillProcessResponseBody& setData(KillProcessResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline KillProcessResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<KillProcessResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
