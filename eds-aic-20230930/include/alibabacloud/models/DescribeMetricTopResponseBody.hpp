// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeMetricTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MetricTotalModel, metricTotalModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MetricTotalModel, metricTotalModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMetricTopResponseBody() = default ;
    DescribeMetricTopResponseBody(const DescribeMetricTopResponseBody &) = default ;
    DescribeMetricTopResponseBody(DescribeMetricTopResponseBody &&) = default ;
    DescribeMetricTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricTopResponseBody() = default ;
    DescribeMetricTopResponseBody& operator=(const DescribeMetricTopResponseBody &) = default ;
    DescribeMetricTopResponseBody& operator=(DescribeMetricTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricTotalModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricTotalModel& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MetricModelList, metricModelList_);
      };
      friend void from_json(const Darabonba::Json& j, MetricTotalModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MetricModelList, metricModelList_);
      };
      MetricTotalModel() = default ;
      MetricTotalModel(const MetricTotalModel &) = default ;
      MetricTotalModel(MetricTotalModel &&) = default ;
      MetricTotalModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MetricTotalModel() = default ;
      MetricTotalModel& operator=(const MetricTotalModel &) = default ;
      MetricTotalModel& operator=(MetricTotalModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MetricModelList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MetricModelList& obj) { 
          DARABONBA_PTR_TO_JSON(DataPoints, dataPoints_);
          DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        };
        friend void from_json(const Darabonba::Json& j, MetricModelList& obj) { 
          DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        };
        MetricModelList() = default ;
        MetricModelList(const MetricModelList &) = default ;
        MetricModelList(MetricModelList &&) = default ;
        MetricModelList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MetricModelList() = default ;
        MetricModelList& operator=(const MetricModelList &) = default ;
        MetricModelList& operator=(MetricModelList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataPoints : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataPoints& obj) { 
            DARABONBA_PTR_TO_JSON(Average, average_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Maximum, maximum_);
            DARABONBA_PTR_TO_JSON(Minimum, minimum_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Properties, properties_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, DataPoints& obj) { 
            DARABONBA_PTR_FROM_JSON(Average, average_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
            DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Properties, properties_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          };
          DataPoints() = default ;
          DataPoints(const DataPoints &) = default ;
          DataPoints(DataPoints &&) = default ;
          DataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataPoints() = default ;
          DataPoints& operator=(const DataPoints &) = default ;
          DataPoints& operator=(DataPoints &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->average_ == nullptr
        && this->id_ == nullptr && this->maximum_ == nullptr && this->minimum_ == nullptr && this->name_ == nullptr && this->properties_ == nullptr
        && this->timestamp_ == nullptr; };
          // average Field Functions 
          bool hasAverage() const { return this->average_ != nullptr;};
          void deleteAverage() { this->average_ = nullptr;};
          inline double getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
          inline DataPoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline DataPoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // maximum Field Functions 
          bool hasMaximum() const { return this->maximum_ != nullptr;};
          void deleteMaximum() { this->maximum_ = nullptr;};
          inline double getMaximum() const { DARABONBA_PTR_GET_DEFAULT(maximum_, 0.0) };
          inline DataPoints& setMaximum(double maximum) { DARABONBA_PTR_SET_VALUE(maximum_, maximum) };


          // minimum Field Functions 
          bool hasMinimum() const { return this->minimum_ != nullptr;};
          void deleteMinimum() { this->minimum_ = nullptr;};
          inline double getMinimum() const { DARABONBA_PTR_GET_DEFAULT(minimum_, 0.0) };
          inline DataPoints& setMinimum(double minimum) { DARABONBA_PTR_SET_VALUE(minimum_, minimum) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DataPoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // properties Field Functions 
          bool hasProperties() const { return this->properties_ != nullptr;};
          void deleteProperties() { this->properties_ = nullptr;};
          inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
          inline DataPoints& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline DataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          shared_ptr<double> average_ {};
          shared_ptr<string> id_ {};
          shared_ptr<double> maximum_ {};
          shared_ptr<double> minimum_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> properties_ {};
          shared_ptr<int64_t> timestamp_ {};
        };

        virtual bool empty() const override { return this->dataPoints_ == nullptr
        && this->metricName_ == nullptr; };
        // dataPoints Field Functions 
        bool hasDataPoints() const { return this->dataPoints_ != nullptr;};
        void deleteDataPoints() { this->dataPoints_ = nullptr;};
        inline const vector<MetricModelList::DataPoints> & getDataPoints() const { DARABONBA_PTR_GET_CONST(dataPoints_, vector<MetricModelList::DataPoints>) };
        inline vector<MetricModelList::DataPoints> getDataPoints() { DARABONBA_PTR_GET(dataPoints_, vector<MetricModelList::DataPoints>) };
        inline MetricModelList& setDataPoints(const vector<MetricModelList::DataPoints> & dataPoints) { DARABONBA_PTR_SET_VALUE(dataPoints_, dataPoints) };
        inline MetricModelList& setDataPoints(vector<MetricModelList::DataPoints> && dataPoints) { DARABONBA_PTR_SET_RVALUE(dataPoints_, dataPoints) };


        // metricName Field Functions 
        bool hasMetricName() const { return this->metricName_ != nullptr;};
        void deleteMetricName() { this->metricName_ = nullptr;};
        inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
        inline MetricModelList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      protected:
        shared_ptr<vector<MetricModelList::DataPoints>> dataPoints_ {};
        shared_ptr<string> metricName_ {};
      };

      virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && this->instanceId_ == nullptr && this->metricModelList_ == nullptr; };
      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline MetricTotalModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline MetricTotalModel& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // metricModelList Field Functions 
      bool hasMetricModelList() const { return this->metricModelList_ != nullptr;};
      void deleteMetricModelList() { this->metricModelList_ = nullptr;};
      inline const vector<MetricTotalModel::MetricModelList> & getMetricModelList() const { DARABONBA_PTR_GET_CONST(metricModelList_, vector<MetricTotalModel::MetricModelList>) };
      inline vector<MetricTotalModel::MetricModelList> getMetricModelList() { DARABONBA_PTR_GET(metricModelList_, vector<MetricTotalModel::MetricModelList>) };
      inline MetricTotalModel& setMetricModelList(const vector<MetricTotalModel::MetricModelList> & metricModelList) { DARABONBA_PTR_SET_VALUE(metricModelList_, metricModelList) };
      inline MetricTotalModel& setMetricModelList(vector<MetricTotalModel::MetricModelList> && metricModelList) { DARABONBA_PTR_SET_RVALUE(metricModelList_, metricModelList) };


    protected:
      shared_ptr<string> androidInstanceId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<MetricTotalModel::MetricModelList>> metricModelList_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->metricTotalModel_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeMetricTopResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // metricTotalModel Field Functions 
    bool hasMetricTotalModel() const { return this->metricTotalModel_ != nullptr;};
    void deleteMetricTotalModel() { this->metricTotalModel_ = nullptr;};
    inline const vector<DescribeMetricTopResponseBody::MetricTotalModel> & getMetricTotalModel() const { DARABONBA_PTR_GET_CONST(metricTotalModel_, vector<DescribeMetricTopResponseBody::MetricTotalModel>) };
    inline vector<DescribeMetricTopResponseBody::MetricTotalModel> getMetricTotalModel() { DARABONBA_PTR_GET(metricTotalModel_, vector<DescribeMetricTopResponseBody::MetricTotalModel>) };
    inline DescribeMetricTopResponseBody& setMetricTotalModel(const vector<DescribeMetricTopResponseBody::MetricTotalModel> & metricTotalModel) { DARABONBA_PTR_SET_VALUE(metricTotalModel_, metricTotalModel) };
    inline DescribeMetricTopResponseBody& setMetricTotalModel(vector<DescribeMetricTopResponseBody::MetricTotalModel> && metricTotalModel) { DARABONBA_PTR_SET_RVALUE(metricTotalModel_, metricTotalModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricTopResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<DescribeMetricTopResponseBody::MetricTotalModel>> metricTotalModel_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
