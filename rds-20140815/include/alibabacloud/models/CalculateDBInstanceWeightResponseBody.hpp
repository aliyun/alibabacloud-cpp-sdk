// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CALCULATEDBINSTANCEWEIGHTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CalculateDBInstanceWeightResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CalculateDBInstanceWeightResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CalculateDBInstanceWeightResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CalculateDBInstanceWeightResponseBody() = default ;
    CalculateDBInstanceWeightResponseBody(const CalculateDBInstanceWeightResponseBody &) = default ;
    CalculateDBInstanceWeightResponseBody(CalculateDBInstanceWeightResponseBody &&) = default ;
    CalculateDBInstanceWeightResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CalculateDBInstanceWeightResponseBody() = default ;
    CalculateDBInstanceWeightResponseBody& operator=(const CalculateDBInstanceWeightResponseBody &) = default ;
    CalculateDBInstanceWeightResponseBody& operator=(CalculateDBInstanceWeightResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceWeight, DBInstanceWeight_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceWeight, DBInstanceWeight_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceWeight : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceWeight& obj) { 
          DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_TO_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_TO_JSON(ReadonlyInstanceSQLDelayedTime, readonlyInstanceSQLDelayedTime_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceWeight& obj) { 
          DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
          DARABONBA_PTR_FROM_JSON(DBInstanceType, DBInstanceType_);
          DARABONBA_PTR_FROM_JSON(ReadonlyInstanceSQLDelayedTime, readonlyInstanceSQLDelayedTime_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        DBInstanceWeight() = default ;
        DBInstanceWeight(const DBInstanceWeight &) = default ;
        DBInstanceWeight(DBInstanceWeight &&) = default ;
        DBInstanceWeight(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceWeight() = default ;
        DBInstanceWeight& operator=(const DBInstanceWeight &) = default ;
        DBInstanceWeight& operator=(DBInstanceWeight &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->DBInstanceType_ == nullptr && this->readonlyInstanceSQLDelayedTime_ == nullptr && this->weight_ == nullptr; };
        // DBInstanceId Field Functions 
        bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
        void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
        inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
        inline DBInstanceWeight& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


        // DBInstanceType Field Functions 
        bool hasDBInstanceType() const { return this->DBInstanceType_ != nullptr;};
        void deleteDBInstanceType() { this->DBInstanceType_ = nullptr;};
        inline string getDBInstanceType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceType_, "") };
        inline DBInstanceWeight& setDBInstanceType(string DBInstanceType) { DARABONBA_PTR_SET_VALUE(DBInstanceType_, DBInstanceType) };


        // readonlyInstanceSQLDelayedTime Field Functions 
        bool hasReadonlyInstanceSQLDelayedTime() const { return this->readonlyInstanceSQLDelayedTime_ != nullptr;};
        void deleteReadonlyInstanceSQLDelayedTime() { this->readonlyInstanceSQLDelayedTime_ = nullptr;};
        inline string getReadonlyInstanceSQLDelayedTime() const { DARABONBA_PTR_GET_DEFAULT(readonlyInstanceSQLDelayedTime_, "") };
        inline DBInstanceWeight& setReadonlyInstanceSQLDelayedTime(string readonlyInstanceSQLDelayedTime) { DARABONBA_PTR_SET_VALUE(readonlyInstanceSQLDelayedTime_, readonlyInstanceSQLDelayedTime) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
        inline DBInstanceWeight& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // The instance ID
        shared_ptr<string> DBInstanceId_ {};
        // The type of the instance. Valid values:
        // 
        // *   **Master**: primary instance
        // *   **Readonly**: read-only instance
        shared_ptr<string> DBInstanceType_ {};
        // The latency at which the read-only instances replicate data. The read-only instances replicate data from the primary instance at the latency that is specified by the **ReadonlyInstanceSQLDelayedTime** parameter. Unit: seconds.
        shared_ptr<string> readonlyInstanceSQLDelayedTime_ {};
        // The read weight that the system calculates in real time for the instance.
        shared_ptr<string> weight_ {};
      };

      virtual bool empty() const override { return this->DBInstanceWeight_ == nullptr; };
      // DBInstanceWeight Field Functions 
      bool hasDBInstanceWeight() const { return this->DBInstanceWeight_ != nullptr;};
      void deleteDBInstanceWeight() { this->DBInstanceWeight_ = nullptr;};
      inline const vector<Items::DBInstanceWeight> & getDBInstanceWeight() const { DARABONBA_PTR_GET_CONST(DBInstanceWeight_, vector<Items::DBInstanceWeight>) };
      inline vector<Items::DBInstanceWeight> getDBInstanceWeight() { DARABONBA_PTR_GET(DBInstanceWeight_, vector<Items::DBInstanceWeight>) };
      inline Items& setDBInstanceWeight(const vector<Items::DBInstanceWeight> & dBInstanceWeight) { DARABONBA_PTR_SET_VALUE(DBInstanceWeight_, dBInstanceWeight) };
      inline Items& setDBInstanceWeight(vector<Items::DBInstanceWeight> && dBInstanceWeight) { DARABONBA_PTR_SET_RVALUE(DBInstanceWeight_, dBInstanceWeight) };


    protected:
      shared_ptr<vector<Items::DBInstanceWeight>> DBInstanceWeight_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const CalculateDBInstanceWeightResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, CalculateDBInstanceWeightResponseBody::Items) };
    inline CalculateDBInstanceWeightResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, CalculateDBInstanceWeightResponseBody::Items) };
    inline CalculateDBInstanceWeightResponseBody& setItems(const CalculateDBInstanceWeightResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline CalculateDBInstanceWeightResponseBody& setItems(CalculateDBInstanceWeightResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CalculateDBInstanceWeightResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of information about the system-assigned read weight.
    shared_ptr<CalculateDBInstanceWeightResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
