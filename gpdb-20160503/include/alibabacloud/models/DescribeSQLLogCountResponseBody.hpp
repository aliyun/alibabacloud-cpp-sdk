// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGCOUNTRESPONSEBODY_HPP_
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
  class DescribeSQLLogCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSQLLogCountResponseBody() = default ;
    DescribeSQLLogCountResponseBody(const DescribeSQLLogCountResponseBody &) = default ;
    DescribeSQLLogCountResponseBody(DescribeSQLLogCountResponseBody &&) = default ;
    DescribeSQLLogCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogCountResponseBody() = default ;
    DescribeSQLLogCountResponseBody& operator=(const DescribeSQLLogCountResponseBody &) = default ;
    DescribeSQLLogCountResponseBody& operator=(DescribeSQLLogCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Series, series_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
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
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
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
          // The time when the audit logs were generated and the number of the audit logs.
          shared_ptr<vector<string>> point_ {};
        };

        virtual bool empty() const override { return this->values_ == nullptr; };
        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<Series::Values> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<Series::Values>) };
        inline vector<Series::Values> getValues() { DARABONBA_PTR_GET(values_, vector<Series::Values>) };
        inline Series& setValues(const vector<Series::Values> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Series& setValues(vector<Series::Values> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // Details of the audit logs.
        shared_ptr<vector<Series::Values>> values_ {};
      };

      virtual bool empty() const override { return this->name_ == nullptr
        && this->series_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<Items::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<Items::Series>) };
      inline vector<Items::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<Items::Series>) };
      inline Items& setSeries(const vector<Items::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline Items& setSeries(vector<Items::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


    protected:
      // The name of the table.
      shared_ptr<string> name_ {};
      // Details of the audit logs.
      shared_ptr<vector<Items::Series>> series_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeSQLLogCountResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeSQLLogCountResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeSQLLogCountResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeSQLLogCountResponseBody::Items>) };
    inline vector<DescribeSQLLogCountResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeSQLLogCountResponseBody::Items>) };
    inline DescribeSQLLogCountResponseBody& setItems(const vector<DescribeSQLLogCountResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSQLLogCountResponseBody& setItems(vector<DescribeSQLLogCountResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSQLLogCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeSQLLogCountResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The instance ID.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query.
    shared_ptr<string> endTime_ {};
    // The name of the instance.
    shared_ptr<vector<DescribeSQLLogCountResponseBody::Items>> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the query.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
