// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCESUPPORTMAXPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceSupportMaxPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceSupportMaxPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceSupportMaxPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceSupportMaxPerformanceResponseBody() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody(const DescribeDBInstanceSupportMaxPerformanceResponseBody &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody(DescribeDBInstanceSupportMaxPerformanceResponseBody &&) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceSupportMaxPerformanceResponseBody() = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody& operator=(const DescribeDBInstanceSupportMaxPerformanceResponseBody &) = default ;
    DescribeDBInstanceSupportMaxPerformanceResponseBody& operator=(DescribeDBInstanceSupportMaxPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Performances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Performances& obj) { 
        DARABONBA_PTR_TO_JSON(Performance, performance_);
      };
      friend void from_json(const Darabonba::Json& j, Performances& obj) { 
        DARABONBA_PTR_FROM_JSON(Performance, performance_);
      };
      Performances() = default ;
      Performances(const Performances &) = default ;
      Performances(Performances &&) = default ;
      Performances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Performances() = default ;
      Performances& operator=(const Performances &) = default ;
      Performances& operator=(Performances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Performance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Performance& obj) { 
          DARABONBA_PTR_TO_JSON(Bottleneck, bottleneck_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Unit, unit_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Performance& obj) { 
          DARABONBA_PTR_FROM_JSON(Bottleneck, bottleneck_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Unit, unit_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Performance() = default ;
        Performance(const Performance &) = default ;
        Performance(Performance &&) = default ;
        Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Performance() = default ;
        Performance& operator=(const Performance &) = default ;
        Performance& operator=(Performance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bottleneck_ == nullptr
        && this->key_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
        // bottleneck Field Functions 
        bool hasBottleneck() const { return this->bottleneck_ != nullptr;};
        void deleteBottleneck() { this->bottleneck_ = nullptr;};
        inline string getBottleneck() const { DARABONBA_PTR_GET_DEFAULT(bottleneck_, "") };
        inline Performance& setBottleneck(string bottleneck) { DARABONBA_PTR_SET_VALUE(bottleneck_, bottleneck) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Performance& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline Performance& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Performance& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The performance bottleneck type.
        shared_ptr<string> bottleneck_ {};
        // The name of the performance metric.
        shared_ptr<string> key_ {};
        // The unit of the performance metric.
        shared_ptr<string> unit_ {};
        // The value of the performance metric.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->performance_ == nullptr; };
      // performance Field Functions 
      bool hasPerformance() const { return this->performance_ != nullptr;};
      void deletePerformance() { this->performance_ = nullptr;};
      inline const vector<Performances::Performance> & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, vector<Performances::Performance>) };
      inline vector<Performances::Performance> getPerformance() { DARABONBA_PTR_GET(performance_, vector<Performances::Performance>) };
      inline Performances& setPerformance(const vector<Performances::Performance> & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
      inline Performances& setPerformance(vector<Performances::Performance> && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    protected:
      shared_ptr<vector<Performances::Performance>> performance_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->performances_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances & getPerformances() const { DARABONBA_PTR_GET_CONST(performances_, DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances getPerformances() { DARABONBA_PTR_GET(performances_, DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setPerformances(const DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setPerformances(DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceSupportMaxPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The queried performance metric.
    shared_ptr<DescribeDBInstanceSupportMaxPerformanceResponseBody::Performances> performances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
