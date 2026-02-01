// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAbnormalyEventsResponseBody() = default ;
    ListAbnormalyEventsResponseBody(const ListAbnormalyEventsResponseBody &) = default ;
    ListAbnormalyEventsResponseBody(ListAbnormalyEventsResponseBody &&) = default ;
    ListAbnormalyEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsResponseBody() = default ;
    ListAbnormalyEventsResponseBody& operator=(const ListAbnormalyEventsResponseBody &) = default ;
    ListAbnormalyEventsResponseBody& operator=(ListAbnormalyEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(created_at, createdAt_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(diag_status, diagStatus_);
        DARABONBA_PTR_TO_JSON(end_at, endAt_);
        DARABONBA_PTR_TO_JSON(instance, instance_);
        DARABONBA_PTR_TO_JSON(item, item_);
        DARABONBA_PTR_TO_JSON(level, level_);
        DARABONBA_PTR_TO_JSON(namespace, namespace_);
        DARABONBA_PTR_TO_JSON(opts, opts_);
        DARABONBA_PTR_TO_JSON(pod, pod_);
        DARABONBA_PTR_TO_JSON(raw_metrics, rawMetrics_);
        DARABONBA_PTR_TO_JSON(region_id, regionId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(diag_status, diagStatus_);
        DARABONBA_PTR_FROM_JSON(end_at, endAt_);
        DARABONBA_PTR_FROM_JSON(instance, instance_);
        DARABONBA_PTR_FROM_JSON(item, item_);
        DARABONBA_PTR_FROM_JSON(level, level_);
        DARABONBA_PTR_FROM_JSON(namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(opts, opts_);
        DARABONBA_PTR_FROM_JSON(pod, pod_);
        DARABONBA_PTR_FROM_JSON(raw_metrics, rawMetrics_);
        DARABONBA_PTR_FROM_JSON(region_id, regionId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RawMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RawMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(end_time, endTime_);
          DARABONBA_PTR_TO_JSON(metrics, metrics_);
          DARABONBA_PTR_TO_JSON(start_time, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, RawMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(end_time, endTime_);
          DARABONBA_PTR_FROM_JSON(metrics, metrics_);
          DARABONBA_PTR_FROM_JSON(start_time, startTime_);
        };
        RawMetrics() = default ;
        RawMetrics(const RawMetrics &) = default ;
        RawMetrics(RawMetrics &&) = default ;
        RawMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RawMetrics() = default ;
        RawMetrics& operator=(const RawMetrics &) = default ;
        RawMetrics& operator=(RawMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->metrics_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
        inline RawMetrics& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // metrics Field Functions 
        bool hasMetrics() const { return this->metrics_ != nullptr;};
        void deleteMetrics() { this->metrics_ = nullptr;};
        inline const vector<string> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<string>) };
        inline vector<string> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<string>) };
        inline RawMetrics& setMetrics(const vector<string> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
        inline RawMetrics& setMetrics(vector<string> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline float getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
        inline RawMetrics& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        shared_ptr<float> endTime_ {};
        shared_ptr<vector<string>> metrics_ {};
        shared_ptr<float> startTime_ {};
      };

      class Opts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Opts& obj) { 
          DARABONBA_PTR_TO_JSON(label, label_);
          DARABONBA_PTR_TO_JSON(result, result_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Opts& obj) { 
          DARABONBA_PTR_FROM_JSON(label, label_);
          DARABONBA_PTR_FROM_JSON(result, result_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Opts() = default ;
        Opts(const Opts &) = default ;
        Opts(Opts &&) = default ;
        Opts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Opts() = default ;
        Opts& operator=(const Opts &) = default ;
        Opts& operator=(Opts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(status, status_);
            DARABONBA_PTR_TO_JSON(url, url_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(status, status_);
            DARABONBA_PTR_FROM_JSON(url, url_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->status_ == nullptr
        && this->url_ == nullptr; };
          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // url Field Functions 
          bool hasUrl() const { return this->url_ != nullptr;};
          void deleteUrl() { this->url_ = nullptr;};
          inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
          inline Result& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


        protected:
          shared_ptr<string> status_ {};
          shared_ptr<string> url_ {};
        };

        virtual bool empty() const override { return this->label_ == nullptr
        && this->result_ == nullptr && this->type_ == nullptr; };
        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Opts& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const Opts::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, Opts::Result) };
        inline Opts::Result getResult() { DARABONBA_PTR_GET(result_, Opts::Result) };
        inline Opts& setResult(const Opts::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline Opts& setResult(Opts::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Opts& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> label_ {};
        shared_ptr<Opts::Result> result_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->description_ == nullptr && this->diagStatus_ == nullptr && this->endAt_ == nullptr && this->instance_ == nullptr && this->item_ == nullptr
        && this->level_ == nullptr && this->namespace_ == nullptr && this->opts_ == nullptr && this->pod_ == nullptr && this->rawMetrics_ == nullptr
        && this->regionId_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
      // createdAt Field Functions 
      bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
      void deleteCreatedAt() { this->createdAt_ = nullptr;};
      inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
      inline Data& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // diagStatus Field Functions 
      bool hasDiagStatus() const { return this->diagStatus_ != nullptr;};
      void deleteDiagStatus() { this->diagStatus_ = nullptr;};
      inline int32_t getDiagStatus() const { DARABONBA_PTR_GET_DEFAULT(diagStatus_, 0) };
      inline Data& setDiagStatus(int32_t diagStatus) { DARABONBA_PTR_SET_VALUE(diagStatus_, diagStatus) };


      // endAt Field Functions 
      bool hasEndAt() const { return this->endAt_ != nullptr;};
      void deleteEndAt() { this->endAt_ = nullptr;};
      inline int64_t getEndAt() const { DARABONBA_PTR_GET_DEFAULT(endAt_, 0L) };
      inline Data& setEndAt(int64_t endAt) { DARABONBA_PTR_SET_VALUE(endAt_, endAt) };


      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline string getInstance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
      inline Data& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


      // item Field Functions 
      bool hasItem() const { return this->item_ != nullptr;};
      void deleteItem() { this->item_ = nullptr;};
      inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
      inline Data& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
      inline Data& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // opts Field Functions 
      bool hasOpts() const { return this->opts_ != nullptr;};
      void deleteOpts() { this->opts_ = nullptr;};
      inline const vector<Data::Opts> & getOpts() const { DARABONBA_PTR_GET_CONST(opts_, vector<Data::Opts>) };
      inline vector<Data::Opts> getOpts() { DARABONBA_PTR_GET(opts_, vector<Data::Opts>) };
      inline Data& setOpts(const vector<Data::Opts> & opts) { DARABONBA_PTR_SET_VALUE(opts_, opts) };
      inline Data& setOpts(vector<Data::Opts> && opts) { DARABONBA_PTR_SET_RVALUE(opts_, opts) };


      // pod Field Functions 
      bool hasPod() const { return this->pod_ != nullptr;};
      void deletePod() { this->pod_ = nullptr;};
      inline string getPod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
      inline Data& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


      // rawMetrics Field Functions 
      bool hasRawMetrics() const { return this->rawMetrics_ != nullptr;};
      void deleteRawMetrics() { this->rawMetrics_ = nullptr;};
      inline const Data::RawMetrics & getRawMetrics() const { DARABONBA_PTR_GET_CONST(rawMetrics_, Data::RawMetrics) };
      inline Data::RawMetrics getRawMetrics() { DARABONBA_PTR_GET(rawMetrics_, Data::RawMetrics) };
      inline Data& setRawMetrics(const Data::RawMetrics & rawMetrics) { DARABONBA_PTR_SET_VALUE(rawMetrics_, rawMetrics) };
      inline Data& setRawMetrics(Data::RawMetrics && rawMetrics) { DARABONBA_PTR_SET_RVALUE(rawMetrics_, rawMetrics) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<int64_t> createdAt_ {};
      shared_ptr<string> description_ {};
      shared_ptr<int32_t> diagStatus_ {};
      shared_ptr<int64_t> endAt_ {};
      shared_ptr<string> instance_ {};
      shared_ptr<string> item_ {};
      shared_ptr<string> level_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<vector<Data::Opts>> opts_ {};
      shared_ptr<string> pod_ {};
      shared_ptr<Data::RawMetrics> rawMetrics_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAbnormalyEventsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAbnormalyEventsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAbnormalyEventsResponseBody::Data>) };
    inline vector<ListAbnormalyEventsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAbnormalyEventsResponseBody::Data>) };
    inline ListAbnormalyEventsResponseBody& setData(const vector<ListAbnormalyEventsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAbnormalyEventsResponseBody& setData(vector<ListAbnormalyEventsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAbnormalyEventsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListAbnormalyEventsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListAbnormalyEventsResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
