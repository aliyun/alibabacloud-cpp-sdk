// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstancePerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstancePerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstancePerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
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
          DARABONBA_PTR_TO_JSON(PerformanceValues, performanceValues_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
          DARABONBA_PTR_TO_JSON(ValueFormat, valueFormat_);
        };
        friend void from_json(const Darabonba::Json& j, PerformanceKey& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(PerformanceValues, performanceValues_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
          DARABONBA_PTR_FROM_JSON(ValueFormat, valueFormat_);
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
        class PerformanceValues : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PerformanceValues& obj) { 
            DARABONBA_PTR_TO_JSON(PerformanceValue, performanceValue_);
          };
          friend void from_json(const Darabonba::Json& j, PerformanceValues& obj) { 
            DARABONBA_PTR_FROM_JSON(PerformanceValue, performanceValue_);
          };
          PerformanceValues() = default ;
          PerformanceValues(const PerformanceValues &) = default ;
          PerformanceValues(PerformanceValues &&) = default ;
          PerformanceValues(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PerformanceValues() = default ;
          PerformanceValues& operator=(const PerformanceValues &) = default ;
          PerformanceValues& operator=(PerformanceValues &&) = default ;
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
            // The date and time when the metric value was generated.
            shared_ptr<string> date_ {};
            // The value of the performance metric.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->performanceValue_ == nullptr; };
          // performanceValue Field Functions 
          bool hasPerformanceValue() const { return this->performanceValue_ != nullptr;};
          void deletePerformanceValue() { this->performanceValue_ = nullptr;};
          inline const vector<PerformanceValues::PerformanceValue> & getPerformanceValue() const { DARABONBA_PTR_GET_CONST(performanceValue_, vector<PerformanceValues::PerformanceValue>) };
          inline vector<PerformanceValues::PerformanceValue> getPerformanceValue() { DARABONBA_PTR_GET(performanceValue_, vector<PerformanceValues::PerformanceValue>) };
          inline PerformanceValues& setPerformanceValue(const vector<PerformanceValues::PerformanceValue> & performanceValue) { DARABONBA_PTR_SET_VALUE(performanceValue_, performanceValue) };
          inline PerformanceValues& setPerformanceValue(vector<PerformanceValues::PerformanceValue> && performanceValue) { DARABONBA_PTR_SET_RVALUE(performanceValue_, performanceValue) };


        protected:
          shared_ptr<vector<PerformanceValues::PerformanceValue>> performanceValue_ {};
        };

        virtual bool empty() const override { return this->key_ == nullptr
        && this->performanceValues_ == nullptr && this->unit_ == nullptr && this->valueFormat_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline PerformanceKey& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // performanceValues Field Functions 
        bool hasPerformanceValues() const { return this->performanceValues_ != nullptr;};
        void deletePerformanceValues() { this->performanceValues_ = nullptr;};
        inline const PerformanceKey::PerformanceValues & getPerformanceValues() const { DARABONBA_PTR_GET_CONST(performanceValues_, PerformanceKey::PerformanceValues) };
        inline PerformanceKey::PerformanceValues getPerformanceValues() { DARABONBA_PTR_GET(performanceValues_, PerformanceKey::PerformanceValues) };
        inline PerformanceKey& setPerformanceValues(const PerformanceKey::PerformanceValues & performanceValues) { DARABONBA_PTR_SET_VALUE(performanceValues_, performanceValues) };
        inline PerformanceKey& setPerformanceValues(PerformanceKey::PerformanceValues && performanceValues) { DARABONBA_PTR_SET_RVALUE(performanceValues_, performanceValues) };


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


      protected:
        // The performance metrics that are returned.
        shared_ptr<string> key_ {};
        // The details of the performance metric values.
        shared_ptr<PerformanceKey::PerformanceValues> performanceValues_ {};
        // The unit of the performance metric.
        shared_ptr<string> unit_ {};
        // The format of the performance metric value. If the performance metric contains multiple fields, the fields are separated with ampersands ( &).
        // 
        // For example, if you query disk space usage, the returned value of the **ValueFormat** parameter is **ins_size\\&data_size\\&log_size**.
        shared_ptr<string> valueFormat_ {};
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

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->performanceKeys_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBInstancePerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


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
    // The end of the queried time range. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The details of performance metrics.
    shared_ptr<DescribeDBInstancePerformanceResponseBody::PerformanceKeys> performanceKeys_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the queried time range. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm*Z format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
