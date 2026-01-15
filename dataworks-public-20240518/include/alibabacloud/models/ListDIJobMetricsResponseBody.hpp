// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDIJobMetricsResponseBody() = default ;
    ListDIJobMetricsResponseBody(const ListDIJobMetricsResponseBody &) = default ;
    ListDIJobMetricsResponseBody(ListDIJobMetricsResponseBody &&) = default ;
    ListDIJobMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobMetricsResponseBody() = default ;
    ListDIJobMetricsResponseBody& operator=(const ListDIJobMetricsResponseBody &) = default ;
    ListDIJobMetricsResponseBody& operator=(ListDIJobMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(JobMetrics, jobMetrics_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(JobMetrics, jobMetrics_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class JobMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const JobMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SeriesList, seriesList_);
        };
        friend void from_json(const Darabonba::Json& j, JobMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SeriesList, seriesList_);
        };
        JobMetrics() = default ;
        JobMetrics(const JobMetrics &) = default ;
        JobMetrics(JobMetrics &&) = default ;
        JobMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~JobMetrics() = default ;
        JobMetrics& operator=(const JobMetrics &) = default ;
        JobMetrics& operator=(JobMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SeriesList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SeriesList& obj) { 
            DARABONBA_PTR_TO_JSON(Time, time_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SeriesList& obj) { 
            DARABONBA_PTR_FROM_JSON(Time, time_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SeriesList() = default ;
          SeriesList(const SeriesList &) = default ;
          SeriesList(SeriesList &&) = default ;
          SeriesList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SeriesList() = default ;
          SeriesList& operator=(const SeriesList &) = default ;
          SeriesList& operator=(SeriesList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->time_ == nullptr
        && this->value_ == nullptr; };
          // time Field Functions 
          bool hasTime() const { return this->time_ != nullptr;};
          void deleteTime() { this->time_ = nullptr;};
          inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
          inline SeriesList& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline SeriesList& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The point in time at which data is sampled based on the metric.
          shared_ptr<int64_t> time_ {};
          // The sample value.
          shared_ptr<double> value_ {};
        };

        virtual bool empty() const override { return this->name_ == nullptr
        && this->seriesList_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline JobMetrics& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // seriesList Field Functions 
        bool hasSeriesList() const { return this->seriesList_ != nullptr;};
        void deleteSeriesList() { this->seriesList_ = nullptr;};
        inline const vector<JobMetrics::SeriesList> & getSeriesList() const { DARABONBA_PTR_GET_CONST(seriesList_, vector<JobMetrics::SeriesList>) };
        inline vector<JobMetrics::SeriesList> getSeriesList() { DARABONBA_PTR_GET(seriesList_, vector<JobMetrics::SeriesList>) };
        inline JobMetrics& setSeriesList(const vector<JobMetrics::SeriesList> & seriesList) { DARABONBA_PTR_SET_VALUE(seriesList_, seriesList) };
        inline JobMetrics& setSeriesList(vector<JobMetrics::SeriesList> && seriesList) { DARABONBA_PTR_SET_RVALUE(seriesList_, seriesList) };


      protected:
        // The name of the metric.
        shared_ptr<string> name_ {};
        // The metric data.
        shared_ptr<vector<JobMetrics::SeriesList>> seriesList_ {};
      };

      virtual bool empty() const override { return this->jobMetrics_ == nullptr; };
      // jobMetrics Field Functions 
      bool hasJobMetrics() const { return this->jobMetrics_ != nullptr;};
      void deleteJobMetrics() { this->jobMetrics_ = nullptr;};
      inline const vector<PagingInfo::JobMetrics> & getJobMetrics() const { DARABONBA_PTR_GET_CONST(jobMetrics_, vector<PagingInfo::JobMetrics>) };
      inline vector<PagingInfo::JobMetrics> getJobMetrics() { DARABONBA_PTR_GET(jobMetrics_, vector<PagingInfo::JobMetrics>) };
      inline PagingInfo& setJobMetrics(const vector<PagingInfo::JobMetrics> & jobMetrics) { DARABONBA_PTR_SET_VALUE(jobMetrics_, jobMetrics) };
      inline PagingInfo& setJobMetrics(vector<PagingInfo::JobMetrics> && jobMetrics) { DARABONBA_PTR_SET_RVALUE(jobMetrics_, jobMetrics) };


    protected:
      // The metrics returned.
      shared_ptr<vector<PagingInfo::JobMetrics>> jobMetrics_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListDIJobMetricsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListDIJobMetricsResponseBody::PagingInfo) };
    inline ListDIJobMetricsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListDIJobMetricsResponseBody::PagingInfo) };
    inline ListDIJobMetricsResponseBody& setPagingInfo(const ListDIJobMetricsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListDIJobMetricsResponseBody& setPagingInfo(ListDIJobMetricsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDIJobMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListDIJobMetricsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
