// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODY_HPP_
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
  class DescribeDBInstancePerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBInstancePerformanceResponseBody() = default ;
    DescribeDBInstancePerformanceResponseBody(const DescribeDBInstancePerformanceResponseBody &) = default ;
    DescribeDBInstancePerformanceResponseBody(DescribeDBInstancePerformanceResponseBody &&) = default ;
    DescribeDBInstancePerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstancePerformanceResponseBody() = default ;
    DescribeDBInstancePerformanceResponseBody& operator=(const DescribeDBInstancePerformanceResponseBody &) = default ;
    DescribeDBInstancePerformanceResponseBody& operator=(DescribeDBInstancePerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PerformanceKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PerformanceKeys& obj) { 
        DARABONBA_PTR_TO_JSON(PerformanceKey, performanceKey_);
      };
      friend void from_json(const Darabonba::Json& j, PerformanceKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(PerformanceKey, performanceKey_);
      };
      PerformanceKeys() = default ;
      PerformanceKeys(const PerformanceKeys &) = default ;
      PerformanceKeys(PerformanceKeys &&) = default ;
      PerformanceKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PerformanceKeys() = default ;
      PerformanceKeys& operator=(const PerformanceKeys &) = default ;
      PerformanceKeys& operator=(PerformanceKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PerformanceKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PerformanceKey& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
          DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, PerformanceKey& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
          DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        PerformanceKey() = default ;
        PerformanceKey(const PerformanceKey &) = default ;
        PerformanceKey(PerformanceKey &&) = default ;
        PerformanceKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PerformanceKey() = default ;
        PerformanceKey& operator=(const PerformanceKey &) = default ;
        PerformanceKey& operator=(PerformanceKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Values : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Values& obj) { 
            DARABONBA_PTR_TO_JSON(PerformanceValue, performanceValue_);
          };
          friend void from_json(const Darabonba::Json& j, Values& obj) { 
            DARABONBA_PTR_FROM_JSON(PerformanceValue, performanceValue_);
          };
          Values() = default ;
          Values(const Values &) = default ;
          Values(Values &&) = default ;
          Values(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Values() = default ;
          Values& operator=(const Values &) = default ;
          Values& operator=(Values &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class PerformanceValue : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const PerformanceValue& obj) { 
              DARABONBA_PTR_TO_JSON(Date, date_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, PerformanceValue& obj) { 
              DARABONBA_PTR_FROM_JSON(Date, date_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            PerformanceValue() = default ;
            PerformanceValue(const PerformanceValue &) = default ;
            PerformanceValue(PerformanceValue &&) = default ;
            PerformanceValue(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~PerformanceValue() = default ;
            PerformanceValue& operator=(const PerformanceValue &) = default ;
            PerformanceValue& operator=(PerformanceValue &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->date_ == nullptr
        && this->value_ == nullptr; };
            // date Field Functions 
            bool hasDate() const { return this->date_ != nullptr;};
            void deleteDate() { this->date_ = nullptr;};
            inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
            inline PerformanceValue& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline PerformanceValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The date and time when the value of the performance metric was recorded. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
            shared_ptr<string> date_ {};
            // The value of the performance metric.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->performanceValue_ == nullptr; };
          // performanceValue Field Functions 
          bool hasPerformanceValue() const { return this->performanceValue_ != nullptr;};
          void deletePerformanceValue() { this->performanceValue_ = nullptr;};
          inline const vector<Values::PerformanceValue> & getPerformanceValue() const { DARABONBA_PTR_GET_CONST(performanceValue_, vector<Values::PerformanceValue>) };
          inline vector<Values::PerformanceValue> getPerformanceValue() { DARABONBA_PTR_GET(performanceValue_, vector<Values::PerformanceValue>) };
          inline Values& setPerformanceValue(const vector<Values::PerformanceValue> & performanceValue) { DARABONBA_PTR_SET_VALUE(performanceValue_, performanceValue) };
          inline Values& setPerformanceValue(vector<Values::PerformanceValue> && performanceValue) { DARABONBA_PTR_SET_RVALUE(performanceValue_, performanceValue) };


        protected:
          shared_ptr<vector<Values::PerformanceValue>> performanceValue_ {};
        };

        virtual bool empty() const override { return this->key_ == nullptr
        && this->unit_ == nullptr && this->valueFormat_ == nullptr && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline PerformanceKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline PerformanceKey& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // valueFormat Field Functions 
        bool hasValueFormat() const { return this->valueFormat_ != nullptr;};
        void deleteValueFormat() { this->valueFormat_ = nullptr;};
        inline string getValueFormat() const { DARABONBA_PTR_GET_DEFAULT(valueFormat_, "") };
        inline PerformanceKey& setValueFormat(string valueFormat) { DARABONBA_PTR_SET_VALUE(valueFormat_, valueFormat) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const PerformanceKey::Values & getValues() const { DARABONBA_PTR_GET_CONST(values_, PerformanceKey::Values) };
        inline PerformanceKey::Values getValues() { DARABONBA_PTR_GET(values_, PerformanceKey::Values) };
        inline PerformanceKey& setValues(const PerformanceKey::Values & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline PerformanceKey& setValues(PerformanceKey::Values && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The name of the performance metric.
        shared_ptr<string> key_ {};
        // The unit of the performance metrics.
        shared_ptr<string> unit_ {};
        // The format in which the value of the performance metric is returned.
        // 
        // >  If a performance metric value consists of multiple fields, the values are separated with ampersands (&). Example: com_delete\\&com_insert\\&com_insert_select\\&com_replace.
        shared_ptr<string> valueFormat_ {};
        // The performance metric values.
        shared_ptr<PerformanceKey::Values> values_ {};
      };

      virtual bool empty() const override { return this->performanceKey_ == nullptr; };
      // performanceKey Field Functions 
      bool hasPerformanceKey() const { return this->performanceKey_ != nullptr;};
      void deletePerformanceKey() { this->performanceKey_ = nullptr;};
      inline const vector<PerformanceKeys::PerformanceKey> & getPerformanceKey() const { DARABONBA_PTR_GET_CONST(performanceKey_, vector<PerformanceKeys::PerformanceKey>) };
      inline vector<PerformanceKeys::PerformanceKey> getPerformanceKey() { DARABONBA_PTR_GET(performanceKey_, vector<PerformanceKeys::PerformanceKey>) };
      inline PerformanceKeys& setPerformanceKey(const vector<PerformanceKeys::PerformanceKey> & performanceKey) { DARABONBA_PTR_SET_VALUE(performanceKey_, performanceKey) };
      inline PerformanceKeys& setPerformanceKey(vector<PerformanceKeys::PerformanceKey> && performanceKey) { DARABONBA_PTR_SET_RVALUE(performanceKey_, performanceKey) };


    protected:
      shared_ptr<vector<PerformanceKeys::PerformanceKey>> performanceKey_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->endTime_ == nullptr && this->engine_ == nullptr && this->performanceKeys_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstancePerformanceResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBInstancePerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDBInstancePerformanceResponseBody& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // performanceKeys Field Functions 
    bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
    void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
    inline const DescribeDBInstancePerformanceResponseBody::PerformanceKeys & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, DescribeDBInstancePerformanceResponseBody::PerformanceKeys) };
    inline DescribeDBInstancePerformanceResponseBody::PerformanceKeys getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, DescribeDBInstancePerformanceResponseBody::PerformanceKeys) };
    inline DescribeDBInstancePerformanceResponseBody& setPerformanceKeys(const DescribeDBInstancePerformanceResponseBody::PerformanceKeys & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
    inline DescribeDBInstancePerformanceResponseBody& setPerformanceKeys(DescribeDBInstancePerformanceResponseBody::PerformanceKeys && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstancePerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBInstancePerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The end time of the query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The database engine of the instance.
    shared_ptr<string> engine_ {};
    // Details of the performance metrics.
    shared_ptr<DescribeDBInstancePerformanceResponseBody::PerformanceKeys> performanceKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the query. Specify the time in the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time must be in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
