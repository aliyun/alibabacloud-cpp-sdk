// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERPERFORMANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeDBClusterPerformanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterPerformanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Performances, performances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterPerformanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Performances, performances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDBClusterPerformanceResponseBody() = default ;
    DescribeDBClusterPerformanceResponseBody(const DescribeDBClusterPerformanceResponseBody &) = default ;
    DescribeDBClusterPerformanceResponseBody(DescribeDBClusterPerformanceResponseBody &&) = default ;
    DescribeDBClusterPerformanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterPerformanceResponseBody() = default ;
    DescribeDBClusterPerformanceResponseBody& operator=(const DescribeDBClusterPerformanceResponseBody &) = default ;
    DescribeDBClusterPerformanceResponseBody& operator=(DescribeDBClusterPerformanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Performances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Performances& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Series, series_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Performances& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Series, series_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
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
      class Series : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Series& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TranslateKey, translateKey_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Series& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TranslateKey, translateKey_);
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
        virtual bool empty() const override { return this->name_ == nullptr
        && this->tags_ == nullptr && this->translateKey_ == nullptr && this->values_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Series& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
        inline Series& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


        // translateKey Field Functions 
        bool hasTranslateKey() const { return this->translateKey_ != nullptr;};
        void deleteTranslateKey() { this->translateKey_ = nullptr;};
        inline string getTranslateKey() const { DARABONBA_PTR_GET_DEFAULT(translateKey_, "") };
        inline Series& setTranslateKey(string translateKey) { DARABONBA_PTR_SET_VALUE(translateKey_, translateKey) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline Series& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline Series& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        // The name of the performance metric value. For more information about the performance metrics, see [Metric overview](https://help.aliyun.com/document_detail/2863211.html).
        shared_ptr<string> name_ {};
        // The tags that are added to the cluster.
        shared_ptr<string> tags_ {};
        shared_ptr<string> translateKey_ {};
        // The values of the performance metric at different points in time.
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->key_ == nullptr
        && this->series_ == nullptr && this->unit_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Performances& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // series Field Functions 
      bool hasSeries() const { return this->series_ != nullptr;};
      void deleteSeries() { this->series_ = nullptr;};
      inline const vector<Performances::Series> & getSeries() const { DARABONBA_PTR_GET_CONST(series_, vector<Performances::Series>) };
      inline vector<Performances::Series> getSeries() { DARABONBA_PTR_GET(series_, vector<Performances::Series>) };
      inline Performances& setSeries(const vector<Performances::Series> & series) { DARABONBA_PTR_SET_VALUE(series_, series) };
      inline Performances& setSeries(vector<Performances::Series> && series) { DARABONBA_PTR_SET_RVALUE(series_, series) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Performances& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      // The name of the performance metric.
      shared_ptr<string> key_ {};
      // The queried performance metric data.
      shared_ptr<vector<Performances::Series>> series_ {};
      // The unit of the performance metric.
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->endTime_ == nullptr && this->performances_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeDBClusterPerformanceResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDBClusterPerformanceResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // performances Field Functions 
    bool hasPerformances() const { return this->performances_ != nullptr;};
    void deletePerformances() { this->performances_ = nullptr;};
    inline const vector<DescribeDBClusterPerformanceResponseBody::Performances> & getPerformances() const { DARABONBA_PTR_GET_CONST(performances_, vector<DescribeDBClusterPerformanceResponseBody::Performances>) };
    inline vector<DescribeDBClusterPerformanceResponseBody::Performances> getPerformances() { DARABONBA_PTR_GET(performances_, vector<DescribeDBClusterPerformanceResponseBody::Performances>) };
    inline DescribeDBClusterPerformanceResponseBody& setPerformances(const vector<DescribeDBClusterPerformanceResponseBody::Performances> & performances) { DARABONBA_PTR_SET_VALUE(performances_, performances) };
    inline DescribeDBClusterPerformanceResponseBody& setPerformances(vector<DescribeDBClusterPerformanceResponseBody::Performances> && performances) { DARABONBA_PTR_SET_RVALUE(performances_, performances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBClusterPerformanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDBClusterPerformanceResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/454250.html) operation to query the IDs of all AnalyticDB for MySQL Data Lakehouse Edition (V3.0) clusters within a region.
    shared_ptr<string> DBClusterId_ {};
    // The end time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    shared_ptr<string> endTime_ {};
    // The queried performance metrics.
    shared_ptr<vector<DescribeDBClusterPerformanceResponseBody::Performances>> performances_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the query. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mmZ* format. The time is displayed in UTC.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
