// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATASHAREPERFORMANCERESPONSEBODY_HPP_
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
  class DescribeDataSharePerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataSharePerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataSharePerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PerformanceKeys, performanceKeys_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDataSharePerformanceResponseBody() = default ;
    DescribeDataSharePerformanceResponseBody(const DescribeDataSharePerformanceResponseBody &) = default ;
    DescribeDataSharePerformanceResponseBody(DescribeDataSharePerformanceResponseBody &&) = default ;
    DescribeDataSharePerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataSharePerformanceResponseBody() = default ;
    DescribeDataSharePerformanceResponseBody& operator=(const DescribeDataSharePerformanceResponseBody &) = default ;
    DescribeDataSharePerformanceResponseBody& operator=(DescribeDataSharePerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PerformanceKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PerformanceKeys& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, PerformanceKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
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
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Series() = default ;
        Series(const Series &) = default ;
        Series(Series &&) = default ;
        Series(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Series() = default ;
        Series& operator=(const Series &) = default ;
        Series& operator=(Series &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Values : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Values& obj) { 
            DARABONBA_PTR_TO_JSON(Point, point_);
          };
          friend void from_json(const Darabonba::Json& j, Values& obj) { 
            DARABONBA_PTR_FROM_JSON(Point, point_);
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
          virtual bool empty() const override { return this->point_ == nullptr; };
          // point Field Functions 
          bool hasPoint() const { return this->point_ != nullptr;};
          void deletePoint() { this->point_ = nullptr;};
          inline const vector<string> & getPoint() const { DARABONBA_PTR_GET_CONST(point_, vector<string>) };
          inline vector<string> getPoint() { DARABONBA_PTR_GET(point_, vector<string>) };
          inline Values& setPoint(const vector<string> & point) { DARABONBA_PTR_SET_VALUE(point_, point) };
          inline Values& setPoint(vector<string> && point) { DARABONBA_PTR_SET_RVALUE(point_, point) };


        protected:
          // The value of the performance metric at a point in time.
          shared_ptr<vector<string>> point_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<Series::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Series::Values>) };
        inline vector<Series::Values> getValues() { DARABONBA_PTR_GET(values_, vector<Series::Values>) };
        inline Series& setValues(const vector<Series::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Series& setValues(vector<Series::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The name of the performance metric.
        shared_ptr<string> name_ {};
        // One or more values of the performance metric.
        shared_ptr<vector<Series::Values>> values_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->series_ == nullptr && this->unit_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PerformanceKeys& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<PerformanceKeys::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<PerformanceKeys::Series>) };
      inline vector<PerformanceKeys::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<PerformanceKeys::Series>) };
      inline PerformanceKeys& setSeries(const vector<PerformanceKeys::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline PerformanceKeys& setSeries(vector<PerformanceKeys::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline PerformanceKeys& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The name of the performance metric.
      shared_ptr<string> name_ {};
      // Details of the performance metric.
      shared_ptr<vector<PerformanceKeys::Series>> series_ {};
      // The unit of the performance metric.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->performanceKeys_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDataSharePerformanceResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDataSharePerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // performanceKeys Field Functions 
    bool hasPerformanceKeys() const { return this->performanceKeys_ != nullptr;};
    void deletePerformanceKeys() { this->performanceKeys_ = nullptr;};
    inline const vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys> & getPerformanceKeys() const { DARABONBA_PTR_GET_CONST(performanceKeys_, vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys>) };
    inline vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys> getPerformanceKeys() { DARABONBA_PTR_GET(performanceKeys_, vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys>) };
    inline DescribeDataSharePerformanceResponseBody& setPerformanceKeys(const vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys> & performanceKeys) { DARABONBA_PTR_SET_VALUE(performanceKeys_, performanceKeys) };
    inline DescribeDataSharePerformanceResponseBody& setPerformanceKeys(vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys> && performanceKeys) { DARABONBA_PTR_SET_RVALUE(performanceKeys_, performanceKeys) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataSharePerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDataSharePerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the instance.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query.
    shared_ptr<string> endTime_ {};
    // Details of data sharing performance metrics.
    shared_ptr<vector<DescribeDataSharePerformanceResponseBody::PerformanceKeys>> performanceKeys_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start time of the query.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
