// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLECLASSESRESPONSEBODY_HPP_
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
  class DescribeAvailableClassesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableClassesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceClasses, DBInstanceClasses_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableClassesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceClasses, DBInstanceClasses_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAvailableClassesResponseBody() = default ;
    DescribeAvailableClassesResponseBody(const DescribeAvailableClassesResponseBody &) = default ;
    DescribeAvailableClassesResponseBody(DescribeAvailableClassesResponseBody &&) = default ;
    DescribeAvailableClassesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableClassesResponseBody() = default ;
    DescribeAvailableClassesResponseBody& operator=(const DescribeAvailableClassesResponseBody &) = default ;
    DescribeAvailableClassesResponseBody& operator=(DescribeAvailableClassesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DBInstanceClasses : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBInstanceClasses& obj) { 
        DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
        DARABONBA_PTR_TO_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
      };
      friend void from_json(const Darabonba::Json& j, DBInstanceClasses& obj) { 
        DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
        DARABONBA_PTR_FROM_JSON(DBInstanceStorageRange, DBInstanceStorageRange_);
      };
      DBInstanceClasses() = default ;
      DBInstanceClasses(const DBInstanceClasses &) = default ;
      DBInstanceClasses(DBInstanceClasses &&) = default ;
      DBInstanceClasses(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBInstanceClasses() = default ;
      DBInstanceClasses& operator=(const DBInstanceClasses &) = default ;
      DBInstanceClasses& operator=(DBInstanceClasses &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DBInstanceStorageRange : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DBInstanceStorageRange& obj) { 
          DARABONBA_PTR_TO_JSON(MaxValue, maxValue_);
          DARABONBA_PTR_TO_JSON(MinValue, minValue_);
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, DBInstanceStorageRange& obj) { 
          DARABONBA_PTR_FROM_JSON(MaxValue, maxValue_);
          DARABONBA_PTR_FROM_JSON(MinValue, minValue_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        DBInstanceStorageRange() = default ;
        DBInstanceStorageRange(const DBInstanceStorageRange &) = default ;
        DBInstanceStorageRange(DBInstanceStorageRange &&) = default ;
        DBInstanceStorageRange(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DBInstanceStorageRange() = default ;
        DBInstanceStorageRange& operator=(const DBInstanceStorageRange &) = default ;
        DBInstanceStorageRange& operator=(DBInstanceStorageRange &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maxValue_ == nullptr
        && this->minValue_ == nullptr && this->step_ == nullptr; };
        // maxValue Field Functions 
        bool hasMaxValue() const { return this->maxValue_ != nullptr;};
        void deleteMaxValue() { this->maxValue_ = nullptr;};
        inline int32_t getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, 0) };
        inline DBInstanceStorageRange& setMaxValue(int32_t maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


        // minValue Field Functions 
        bool hasMinValue() const { return this->minValue_ != nullptr;};
        void deleteMinValue() { this->minValue_ = nullptr;};
        inline int32_t getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, 0) };
        inline DBInstanceStorageRange& setMinValue(int32_t minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline DBInstanceStorageRange& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        // The maximum storage capacity that is supported for the instance. Unit: GB.
        shared_ptr<int32_t> maxValue_ {};
        // The minimum storage capacity that is supported for the instance. Unit: GB.
        shared_ptr<int32_t> minValue_ {};
        // The minimum step size at which you can adjust the storage capacity of the instance. The minimum step size is 5 GB.
        shared_ptr<int32_t> step_ {};
      };

      virtual bool empty() const override { return this->DBInstanceClass_ == nullptr
        && this->DBInstanceStorageRange_ == nullptr; };
      // DBInstanceClass Field Functions 
      bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
      void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
      inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
      inline DBInstanceClasses& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


      // DBInstanceStorageRange Field Functions 
      bool hasDBInstanceStorageRange() const { return this->DBInstanceStorageRange_ != nullptr;};
      void deleteDBInstanceStorageRange() { this->DBInstanceStorageRange_ = nullptr;};
      inline const DBInstanceClasses::DBInstanceStorageRange & getDBInstanceStorageRange() const { DARABONBA_PTR_GET_CONST(DBInstanceStorageRange_, DBInstanceClasses::DBInstanceStorageRange) };
      inline DBInstanceClasses::DBInstanceStorageRange getDBInstanceStorageRange() { DARABONBA_PTR_GET(DBInstanceStorageRange_, DBInstanceClasses::DBInstanceStorageRange) };
      inline DBInstanceClasses& setDBInstanceStorageRange(const DBInstanceClasses::DBInstanceStorageRange & dBInstanceStorageRange) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageRange_, dBInstanceStorageRange) };
      inline DBInstanceClasses& setDBInstanceStorageRange(DBInstanceClasses::DBInstanceStorageRange && dBInstanceStorageRange) { DARABONBA_PTR_SET_RVALUE(DBInstanceStorageRange_, dBInstanceStorageRange) };


    protected:
      // The instance type of the instance.
      shared_ptr<string> DBInstanceClass_ {};
      // The storage capacity range that is supported for the instance.
      shared_ptr<DBInstanceClasses::DBInstanceStorageRange> DBInstanceStorageRange_ {};
    };

    virtual bool empty() const override { return this->DBInstanceClasses_ == nullptr
        && this->requestId_ == nullptr; };
    // DBInstanceClasses Field Functions 
    bool hasDBInstanceClasses() const { return this->DBInstanceClasses_ != nullptr;};
    void deleteDBInstanceClasses() { this->DBInstanceClasses_ = nullptr;};
    inline const vector<DescribeAvailableClassesResponseBody::DBInstanceClasses> & getDBInstanceClasses() const { DARABONBA_PTR_GET_CONST(DBInstanceClasses_, vector<DescribeAvailableClassesResponseBody::DBInstanceClasses>) };
    inline vector<DescribeAvailableClassesResponseBody::DBInstanceClasses> getDBInstanceClasses() { DARABONBA_PTR_GET(DBInstanceClasses_, vector<DescribeAvailableClassesResponseBody::DBInstanceClasses>) };
    inline DescribeAvailableClassesResponseBody& setDBInstanceClasses(const vector<DescribeAvailableClassesResponseBody::DBInstanceClasses> & dBInstanceClasses) { DARABONBA_PTR_SET_VALUE(DBInstanceClasses_, dBInstanceClasses) };
    inline DescribeAvailableClassesResponseBody& setDBInstanceClasses(vector<DescribeAvailableClassesResponseBody::DBInstanceClasses> && dBInstanceClasses) { DARABONBA_PTR_SET_RVALUE(DBInstanceClasses_, dBInstanceClasses) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAvailableClassesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the instance types available for the instance.
    shared_ptr<vector<DescribeAvailableClassesResponseBody::DBInstanceClasses>> DBInstanceClasses_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
