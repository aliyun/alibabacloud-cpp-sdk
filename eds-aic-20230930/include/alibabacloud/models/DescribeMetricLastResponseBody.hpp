// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTRESPONSEBODY_HPP_
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
  class DescribeMetricLastResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MetricTotalModel, metricTotalModel_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MetricTotalModel, metricTotalModel_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMetricLastResponseBody() = default ;
    DescribeMetricLastResponseBody(const DescribeMetricLastResponseBody &) = default ;
    DescribeMetricLastResponseBody(DescribeMetricLastResponseBody &&) = default ;
    DescribeMetricLastResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastResponseBody() = default ;
    DescribeMetricLastResponseBody& operator=(const DescribeMetricLastResponseBody &) = default ;
    DescribeMetricLastResponseBody& operator=(DescribeMetricLastResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MetricTotalModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MetricTotalModel& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(MetricModelList, metricModelList_);
      };
      friend void from_json(const Darabonba::Json& j, MetricTotalModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
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
          DARABONBA_PTR_TO_JSON(ProcessLastInfos, processLastInfos_);
        };
        friend void from_json(const Darabonba::Json& j, MetricModelList& obj) { 
          DARABONBA_PTR_FROM_JSON(DataPoints, dataPoints_);
          DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
          DARABONBA_PTR_FROM_JSON(ProcessLastInfos, processLastInfos_);
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
        class ProcessLastInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ProcessLastInfos& obj) { 
            DARABONBA_PTR_TO_JSON(CpuUsage, cpuUsage_);
            DARABONBA_PTR_TO_JSON(MemoryUsage, memoryUsage_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ProcessIds, processIds_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, ProcessLastInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(CpuUsage, cpuUsage_);
            DARABONBA_PTR_FROM_JSON(MemoryUsage, memoryUsage_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ProcessIds, processIds_);
            DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          };
          ProcessLastInfos() = default ;
          ProcessLastInfos(const ProcessLastInfos &) = default ;
          ProcessLastInfos(ProcessLastInfos &&) = default ;
          ProcessLastInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ProcessLastInfos() = default ;
          ProcessLastInfos& operator=(const ProcessLastInfos &) = default ;
          ProcessLastInfos& operator=(ProcessLastInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cpuUsage_ == nullptr
        && this->memoryUsage_ == nullptr && this->name_ == nullptr && this->processIds_ == nullptr && this->timestamp_ == nullptr; };
          // cpuUsage Field Functions 
          bool hasCpuUsage() const { return this->cpuUsage_ != nullptr;};
          void deleteCpuUsage() { this->cpuUsage_ = nullptr;};
          inline double getCpuUsage() const { DARABONBA_PTR_GET_DEFAULT(cpuUsage_, 0.0) };
          inline ProcessLastInfos& setCpuUsage(double cpuUsage) { DARABONBA_PTR_SET_VALUE(cpuUsage_, cpuUsage) };


          // memoryUsage Field Functions 
          bool hasMemoryUsage() const { return this->memoryUsage_ != nullptr;};
          void deleteMemoryUsage() { this->memoryUsage_ = nullptr;};
          inline double getMemoryUsage() const { DARABONBA_PTR_GET_DEFAULT(memoryUsage_, 0.0) };
          inline ProcessLastInfos& setMemoryUsage(double memoryUsage) { DARABONBA_PTR_SET_VALUE(memoryUsage_, memoryUsage) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ProcessLastInfos& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // processIds Field Functions 
          bool hasProcessIds() const { return this->processIds_ != nullptr;};
          void deleteProcessIds() { this->processIds_ = nullptr;};
          inline const vector<int32_t> & getProcessIds() const { DARABONBA_PTR_GET_CONST(processIds_, vector<int32_t>) };
          inline vector<int32_t> getProcessIds() { DARABONBA_PTR_GET(processIds_, vector<int32_t>) };
          inline ProcessLastInfos& setProcessIds(const vector<int32_t> & processIds) { DARABONBA_PTR_SET_VALUE(processIds_, processIds) };
          inline ProcessLastInfos& setProcessIds(vector<int32_t> && processIds) { DARABONBA_PTR_SET_RVALUE(processIds_, processIds) };


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline ProcessLastInfos& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          shared_ptr<double> cpuUsage_ {};
          shared_ptr<double> memoryUsage_ {};
          shared_ptr<string> name_ {};
          shared_ptr<vector<int32_t>> processIds_ {};
          shared_ptr<int64_t> timestamp_ {};
        };

        class DataPoints : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataPoints& obj) { 
            DARABONBA_PTR_TO_JSON(Average, average_);
            DARABONBA_PTR_TO_JSON(GpuId, gpuId_);
            DARABONBA_PTR_TO_JSON(Maximum, maximum_);
            DARABONBA_PTR_TO_JSON(Minimum, minimum_);
            DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          };
          friend void from_json(const Darabonba::Json& j, DataPoints& obj) { 
            DARABONBA_PTR_FROM_JSON(Average, average_);
            DARABONBA_PTR_FROM_JSON(GpuId, gpuId_);
            DARABONBA_PTR_FROM_JSON(Maximum, maximum_);
            DARABONBA_PTR_FROM_JSON(Minimum, minimum_);
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
        && this->gpuId_ == nullptr && this->maximum_ == nullptr && this->minimum_ == nullptr && this->timestamp_ == nullptr; };
          // average Field Functions 
          bool hasAverage() const { return this->average_ != nullptr;};
          void deleteAverage() { this->average_ = nullptr;};
          inline double getAverage() const { DARABONBA_PTR_GET_DEFAULT(average_, 0.0) };
          inline DataPoints& setAverage(double average) { DARABONBA_PTR_SET_VALUE(average_, average) };


          // gpuId Field Functions 
          bool hasGpuId() const { return this->gpuId_ != nullptr;};
          void deleteGpuId() { this->gpuId_ = nullptr;};
          inline string getGpuId() const { DARABONBA_PTR_GET_DEFAULT(gpuId_, "") };
          inline DataPoints& setGpuId(string gpuId) { DARABONBA_PTR_SET_VALUE(gpuId_, gpuId) };


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


          // timestamp Field Functions 
          bool hasTimestamp() const { return this->timestamp_ != nullptr;};
          void deleteTimestamp() { this->timestamp_ = nullptr;};
          inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
          inline DataPoints& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        protected:
          shared_ptr<double> average_ {};
          shared_ptr<string> gpuId_ {};
          shared_ptr<double> maximum_ {};
          shared_ptr<double> minimum_ {};
          shared_ptr<int64_t> timestamp_ {};
        };

        virtual bool empty() const override { return this->dataPoints_ == nullptr
        && this->metricName_ == nullptr && this->processLastInfos_ == nullptr; };
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


        // processLastInfos Field Functions 
        bool hasProcessLastInfos() const { return this->processLastInfos_ != nullptr;};
        void deleteProcessLastInfos() { this->processLastInfos_ = nullptr;};
        inline const vector<MetricModelList::ProcessLastInfos> & getProcessLastInfos() const { DARABONBA_PTR_GET_CONST(processLastInfos_, vector<MetricModelList::ProcessLastInfos>) };
        inline vector<MetricModelList::ProcessLastInfos> getProcessLastInfos() { DARABONBA_PTR_GET(processLastInfos_, vector<MetricModelList::ProcessLastInfos>) };
        inline MetricModelList& setProcessLastInfos(const vector<MetricModelList::ProcessLastInfos> & processLastInfos) { DARABONBA_PTR_SET_VALUE(processLastInfos_, processLastInfos) };
        inline MetricModelList& setProcessLastInfos(vector<MetricModelList::ProcessLastInfos> && processLastInfos) { DARABONBA_PTR_SET_RVALUE(processLastInfos_, processLastInfos) };


      protected:
        shared_ptr<vector<MetricModelList::DataPoints>> dataPoints_ {};
        shared_ptr<string> metricName_ {};
        shared_ptr<vector<MetricModelList::ProcessLastInfos>> processLastInfos_ {};
      };

      virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && this->metricModelList_ == nullptr; };
      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline MetricTotalModel& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // metricModelList Field Functions 
      bool hasMetricModelList() const { return this->metricModelList_ != nullptr;};
      void deleteMetricModelList() { this->metricModelList_ = nullptr;};
      inline const vector<MetricTotalModel::MetricModelList> & getMetricModelList() const { DARABONBA_PTR_GET_CONST(metricModelList_, vector<MetricTotalModel::MetricModelList>) };
      inline vector<MetricTotalModel::MetricModelList> getMetricModelList() { DARABONBA_PTR_GET(metricModelList_, vector<MetricTotalModel::MetricModelList>) };
      inline MetricTotalModel& setMetricModelList(const vector<MetricTotalModel::MetricModelList> & metricModelList) { DARABONBA_PTR_SET_VALUE(metricModelList_, metricModelList) };
      inline MetricTotalModel& setMetricModelList(vector<MetricTotalModel::MetricModelList> && metricModelList) { DARABONBA_PTR_SET_RVALUE(metricModelList_, metricModelList) };


    protected:
      shared_ptr<string> androidInstanceId_ {};
      shared_ptr<vector<MetricTotalModel::MetricModelList>> metricModelList_ {};
    };

    virtual bool empty() const override { return this->count_ == nullptr
        && this->metricTotalModel_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeMetricLastResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // metricTotalModel Field Functions 
    bool hasMetricTotalModel() const { return this->metricTotalModel_ != nullptr;};
    void deleteMetricTotalModel() { this->metricTotalModel_ = nullptr;};
    inline const vector<DescribeMetricLastResponseBody::MetricTotalModel> & getMetricTotalModel() const { DARABONBA_PTR_GET_CONST(metricTotalModel_, vector<DescribeMetricLastResponseBody::MetricTotalModel>) };
    inline vector<DescribeMetricLastResponseBody::MetricTotalModel> getMetricTotalModel() { DARABONBA_PTR_GET(metricTotalModel_, vector<DescribeMetricLastResponseBody::MetricTotalModel>) };
    inline DescribeMetricLastResponseBody& setMetricTotalModel(const vector<DescribeMetricLastResponseBody::MetricTotalModel> & metricTotalModel) { DARABONBA_PTR_SET_VALUE(metricTotalModel_, metricTotalModel) };
    inline DescribeMetricLastResponseBody& setMetricTotalModel(vector<DescribeMetricLastResponseBody::MetricTotalModel> && metricTotalModel) { DARABONBA_PTR_SET_RVALUE(metricTotalModel_, metricTotalModel) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricLastResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetricLastResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<DescribeMetricLastResponseBody::MetricTotalModel>> metricTotalModel_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
