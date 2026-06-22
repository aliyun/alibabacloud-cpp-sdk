// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOCTORAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListDoctorApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDoctorApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDoctorApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDoctorApplicationsResponseBody() = default ;
    ListDoctorApplicationsResponseBody(const ListDoctorApplicationsResponseBody &) = default ;
    ListDoctorApplicationsResponseBody(ListDoctorApplicationsResponseBody &&) = default ;
    ListDoctorApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDoctorApplicationsResponseBody() = default ;
    ListDoctorApplicationsResponseBody& operator=(const ListDoctorApplicationsResponseBody &) = default ;
    ListDoctorApplicationsResponseBody& operator=(ListDoctorApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Analysis, analysis_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Ids, ids_);
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(QuerySql, querySql_);
        DARABONBA_PTR_TO_JSON(Queue, queue_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Analysis, analysis_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Ids, ids_);
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(QuerySql, querySql_);
        DARABONBA_PTR_FROM_JSON(Queue, queue_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(User, user_);
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
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(MemSeconds, memSeconds_);
          DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
          DARABONBA_PTR_TO_JSON(VcoreSeconds, vcoreSeconds_);
          DARABONBA_PTR_TO_JSON(VcoreUtilization, vcoreUtilization_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(MemSeconds, memSeconds_);
          DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
          DARABONBA_PTR_FROM_JSON(VcoreSeconds, vcoreSeconds_);
          DARABONBA_PTR_FROM_JSON(VcoreUtilization, vcoreUtilization_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VcoreUtilization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VcoreUtilization& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VcoreUtilization& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VcoreUtilization() = default ;
          VcoreUtilization(const VcoreUtilization &) = default ;
          VcoreUtilization(VcoreUtilization &&) = default ;
          VcoreUtilization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VcoreUtilization() = default ;
          VcoreUtilization& operator=(const VcoreUtilization &) = default ;
          VcoreUtilization& operator=(VcoreUtilization &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline VcoreUtilization& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VcoreUtilization& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline VcoreUtilization& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline VcoreUtilization& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<float> value_ {};
        };

        class VcoreSeconds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VcoreSeconds& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VcoreSeconds& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VcoreSeconds() = default ;
          VcoreSeconds(const VcoreSeconds &) = default ;
          VcoreSeconds(VcoreSeconds &&) = default ;
          VcoreSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VcoreSeconds() = default ;
          VcoreSeconds& operator=(const VcoreSeconds &) = default ;
          VcoreSeconds& operator=(VcoreSeconds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline VcoreSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline VcoreSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline VcoreSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline VcoreSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        class MemUtilization : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemUtilization& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemUtilization& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemUtilization() = default ;
          MemUtilization(const MemUtilization &) = default ;
          MemUtilization(MemUtilization &&) = default ;
          MemUtilization(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemUtilization() = default ;
          MemUtilization& operator=(const MemUtilization &) = default ;
          MemUtilization& operator=(MemUtilization &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline MemUtilization& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemUtilization& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemUtilization& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline float getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
          inline MemUtilization& setValue(float value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<float> value_ {};
        };

        class MemSeconds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemSeconds& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Unit, unit_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MemSeconds& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Unit, unit_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MemSeconds() = default ;
          MemSeconds(const MemSeconds &) = default ;
          MemSeconds(MemSeconds &&) = default ;
          MemSeconds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemSeconds() = default ;
          MemSeconds& operator=(const MemSeconds &) = default ;
          MemSeconds& operator=(MemSeconds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline MemSeconds& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline MemSeconds& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // unit Field Functions 
          bool hasUnit() const { return this->unit_ != nullptr;};
          void deleteUnit() { this->unit_ = nullptr;};
          inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
          inline MemSeconds& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline int64_t getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0L) };
          inline MemSeconds& setValue(int64_t value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the metric.
          shared_ptr<string> description_ {};
          // The name of the metric.
          shared_ptr<string> name_ {};
          // The unit of the metric.
          shared_ptr<string> unit_ {};
          // The value of the metric.
          shared_ptr<int64_t> value_ {};
        };

        virtual bool empty() const override { return this->memSeconds_ == nullptr
        && this->memUtilization_ == nullptr && this->vcoreSeconds_ == nullptr && this->vcoreUtilization_ == nullptr; };
        // memSeconds Field Functions 
        bool hasMemSeconds() const { return this->memSeconds_ != nullptr;};
        void deleteMemSeconds() { this->memSeconds_ = nullptr;};
        inline const Metrics::MemSeconds & getMemSeconds() const { DARABONBA_PTR_GET_CONST(memSeconds_, Metrics::MemSeconds) };
        inline Metrics::MemSeconds getMemSeconds() { DARABONBA_PTR_GET(memSeconds_, Metrics::MemSeconds) };
        inline Metrics& setMemSeconds(const Metrics::MemSeconds & memSeconds) { DARABONBA_PTR_SET_VALUE(memSeconds_, memSeconds) };
        inline Metrics& setMemSeconds(Metrics::MemSeconds && memSeconds) { DARABONBA_PTR_SET_RVALUE(memSeconds_, memSeconds) };


        // memUtilization Field Functions 
        bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
        void deleteMemUtilization() { this->memUtilization_ = nullptr;};
        inline const Metrics::MemUtilization & getMemUtilization() const { DARABONBA_PTR_GET_CONST(memUtilization_, Metrics::MemUtilization) };
        inline Metrics::MemUtilization getMemUtilization() { DARABONBA_PTR_GET(memUtilization_, Metrics::MemUtilization) };
        inline Metrics& setMemUtilization(const Metrics::MemUtilization & memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };
        inline Metrics& setMemUtilization(Metrics::MemUtilization && memUtilization) { DARABONBA_PTR_SET_RVALUE(memUtilization_, memUtilization) };


        // vcoreSeconds Field Functions 
        bool hasVcoreSeconds() const { return this->vcoreSeconds_ != nullptr;};
        void deleteVcoreSeconds() { this->vcoreSeconds_ = nullptr;};
        inline const Metrics::VcoreSeconds & getVcoreSeconds() const { DARABONBA_PTR_GET_CONST(vcoreSeconds_, Metrics::VcoreSeconds) };
        inline Metrics::VcoreSeconds getVcoreSeconds() { DARABONBA_PTR_GET(vcoreSeconds_, Metrics::VcoreSeconds) };
        inline Metrics& setVcoreSeconds(const Metrics::VcoreSeconds & vcoreSeconds) { DARABONBA_PTR_SET_VALUE(vcoreSeconds_, vcoreSeconds) };
        inline Metrics& setVcoreSeconds(Metrics::VcoreSeconds && vcoreSeconds) { DARABONBA_PTR_SET_RVALUE(vcoreSeconds_, vcoreSeconds) };


        // vcoreUtilization Field Functions 
        bool hasVcoreUtilization() const { return this->vcoreUtilization_ != nullptr;};
        void deleteVcoreUtilization() { this->vcoreUtilization_ = nullptr;};
        inline const Metrics::VcoreUtilization & getVcoreUtilization() const { DARABONBA_PTR_GET_CONST(vcoreUtilization_, Metrics::VcoreUtilization) };
        inline Metrics::VcoreUtilization getVcoreUtilization() { DARABONBA_PTR_GET(vcoreUtilization_, Metrics::VcoreUtilization) };
        inline Metrics& setVcoreUtilization(const Metrics::VcoreUtilization & vcoreUtilization) { DARABONBA_PTR_SET_VALUE(vcoreUtilization_, vcoreUtilization) };
        inline Metrics& setVcoreUtilization(Metrics::VcoreUtilization && vcoreUtilization) { DARABONBA_PTR_SET_RVALUE(vcoreUtilization_, vcoreUtilization) };


      protected:
        // The amount of memory consumed.
        shared_ptr<Metrics::MemSeconds> memSeconds_ {};
        // The memory usage
        shared_ptr<Metrics::MemUtilization> memUtilization_ {};
        // The CPU usage.
        shared_ptr<Metrics::VcoreSeconds> vcoreSeconds_ {};
        // The CPU utilization. This parameter has the same meaning as %CPU in the Linux top command.
        shared_ptr<Metrics::VcoreUtilization> vcoreUtilization_ {};
      };

      class Analysis : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Analysis& obj) { 
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, Analysis& obj) { 
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
        };
        Analysis() = default ;
        Analysis(const Analysis &) = default ;
        Analysis(Analysis &&) = default ;
        Analysis(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Analysis() = default ;
        Analysis& operator=(const Analysis &) = default ;
        Analysis& operator=(Analysis &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->score_ == nullptr
        && this->suggestion_ == nullptr; };
        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline Analysis& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline Analysis& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // The score of the job.
        shared_ptr<int32_t> score_ {};
        // The suggestion on executing the job.
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->analysis_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->endTime_ == nullptr && this->ids_ == nullptr && this->metrics_ == nullptr
        && this->querySql_ == nullptr && this->queue_ == nullptr && this->startTime_ == nullptr && this->type_ == nullptr && this->user_ == nullptr; };
      // analysis Field Functions 
      bool hasAnalysis() const { return this->analysis_ != nullptr;};
      void deleteAnalysis() { this->analysis_ = nullptr;};
      inline const Data::Analysis & getAnalysis() const { DARABONBA_PTR_GET_CONST(analysis_, Data::Analysis) };
      inline Data::Analysis getAnalysis() { DARABONBA_PTR_GET(analysis_, Data::Analysis) };
      inline Data& setAnalysis(const Data::Analysis & analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };
      inline Data& setAnalysis(Data::Analysis && analysis) { DARABONBA_PTR_SET_RVALUE(analysis_, analysis) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Data& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // ids Field Functions 
      bool hasIds() const { return this->ids_ != nullptr;};
      void deleteIds() { this->ids_ = nullptr;};
      inline const vector<string> & getIds() const { DARABONBA_PTR_GET_CONST(ids_, vector<string>) };
      inline vector<string> getIds() { DARABONBA_PTR_GET(ids_, vector<string>) };
      inline Data& setIds(const vector<string> & ids) { DARABONBA_PTR_SET_VALUE(ids_, ids) };
      inline Data& setIds(vector<string> && ids) { DARABONBA_PTR_SET_RVALUE(ids_, ids) };


      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const Data::Metrics & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, Data::Metrics) };
      inline Data::Metrics getMetrics() { DARABONBA_PTR_GET(metrics_, Data::Metrics) };
      inline Data& setMetrics(const Data::Metrics & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(Data::Metrics && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // querySql Field Functions 
      bool hasQuerySql() const { return this->querySql_ != nullptr;};
      void deleteQuerySql() { this->querySql_ = nullptr;};
      inline string getQuerySql() const { DARABONBA_PTR_GET_DEFAULT(querySql_, "") };
      inline Data& setQuerySql(string querySql) { DARABONBA_PTR_SET_VALUE(querySql_, querySql) };


      // queue Field Functions 
      bool hasQueue() const { return this->queue_ != nullptr;};
      void deleteQueue() { this->queue_ = nullptr;};
      inline string getQueue() const { DARABONBA_PTR_GET_DEFAULT(queue_, "") };
      inline Data& setQueue(string queue) { DARABONBA_PTR_SET_VALUE(queue_, queue) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline Data& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The analysis results of the jobs.
      shared_ptr<Data::Analysis> analysis_ {};
      // The job ID in YARN. The value of QueryID or SessionID is returned for a Hive job.
      shared_ptr<string> appId_ {};
      // The name of the job.
      shared_ptr<string> appName_ {};
      // The time when the job ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The job IDs. Multiple job IDs are separated with commas (,).
      shared_ptr<vector<string>> ids_ {};
      // The data about metrics.
      shared_ptr<Data::Metrics> metrics_ {};
      // The query statement. This parameter is left empty for non-SQL jobs.
      shared_ptr<string> querySql_ {};
      // The YARN queue to which the job was submitted.
      shared_ptr<string> queue_ {};
      // The time when the job was submitted. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The type of the compute engine.
      shared_ptr<string> type_ {};
      // The username that was used to submit the job.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDoctorApplicationsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDoctorApplicationsResponseBody::Data>) };
    inline vector<ListDoctorApplicationsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDoctorApplicationsResponseBody::Data>) };
    inline ListDoctorApplicationsResponseBody& setData(const vector<ListDoctorApplicationsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDoctorApplicationsResponseBody& setData(vector<ListDoctorApplicationsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDoctorApplicationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDoctorApplicationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDoctorApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDoctorApplicationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of jobs.
    shared_ptr<vector<ListDoctorApplicationsResponseBody::Data>> data_ {};
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
