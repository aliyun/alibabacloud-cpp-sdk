// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAASDATAUNITUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSAASDATAUNITUSAGERESPONSEBODY_HPP_
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
  class GetSaasDataUnitUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSaasDataUnitUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Distribution, distribution_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(TimeSeries, timeSeries_);
      DARABONBA_PTR_TO_JSON(Warnings, warnings_);
    };
    friend void from_json(const Darabonba::Json& j, GetSaasDataUnitUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Distribution, distribution_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(TimeSeries, timeSeries_);
      DARABONBA_PTR_FROM_JSON(Warnings, warnings_);
    };
    GetSaasDataUnitUsageResponseBody() = default ;
    GetSaasDataUnitUsageResponseBody(const GetSaasDataUnitUsageResponseBody &) = default ;
    GetSaasDataUnitUsageResponseBody(GetSaasDataUnitUsageResponseBody &&) = default ;
    GetSaasDataUnitUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSaasDataUnitUsageResponseBody() = default ;
    GetSaasDataUnitUsageResponseBody& operator=(const GetSaasDataUnitUsageResponseBody &) = default ;
    GetSaasDataUnitUsageResponseBody& operator=(GetSaasDataUnitUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Warnings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Warnings& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, Warnings& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      Warnings() = default ;
      Warnings(const Warnings &) = default ;
      Warnings(Warnings &&) = default ;
      Warnings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Warnings() = default ;
      Warnings& operator=(const Warnings &) = default ;
      Warnings& operator=(Warnings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Warnings& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Warnings& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The notification code. Valid values include DATA_INCOMPLETE and DATA_UNIT_PENDING.
      shared_ptr<string> code_ {};
      // The notification message.
      shared_ptr<string> message_ {};
    };

    class TimeSeries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TimeSeries& obj) { 
        DARABONBA_PTR_TO_JSON(DataUnit, dataUnit_);
        DARABONBA_PTR_TO_JSON(Scenes, scenes_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, TimeSeries& obj) { 
        DARABONBA_PTR_FROM_JSON(DataUnit, dataUnit_);
        DARABONBA_PTR_FROM_JSON(Scenes, scenes_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      TimeSeries() = default ;
      TimeSeries(const TimeSeries &) = default ;
      TimeSeries(TimeSeries &&) = default ;
      TimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TimeSeries() = default ;
      TimeSeries& operator=(const TimeSeries &) = default ;
      TimeSeries& operator=(TimeSeries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Scenes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Scenes& obj) { 
          DARABONBA_PTR_TO_JSON(DataUnit, dataUnit_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
          DARABONBA_PTR_TO_JSON(UsageScene, usageScene_);
        };
        friend void from_json(const Darabonba::Json& j, Scenes& obj) { 
          DARABONBA_PTR_FROM_JSON(DataUnit, dataUnit_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
          DARABONBA_PTR_FROM_JSON(UsageScene, usageScene_);
        };
        Scenes() = default ;
        Scenes(const Scenes &) = default ;
        Scenes(Scenes &&) = default ;
        Scenes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Scenes() = default ;
        Scenes& operator=(const Scenes &) = default ;
        Scenes& operator=(Scenes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataUnit_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->usageScene_ == nullptr; };
        // dataUnit Field Functions 
        bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
        void deleteDataUnit() { this->dataUnit_ = nullptr;};
        inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
        inline Scenes& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
        inline Scenes& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // projectName Field Functions 
        bool hasProjectName() const { return this->projectName_ != nullptr;};
        void deleteProjectName() { this->projectName_ = nullptr;};
        inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
        inline Scenes& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


        // usageScene Field Functions 
        bool hasUsageScene() const { return this->usageScene_ != nullptr;};
        void deleteUsageScene() { this->usageScene_ = nullptr;};
        inline string getUsageScene() const { DARABONBA_PTR_GET_DEFAULT(usageScene_, "") };
        inline Scenes& setUsageScene(string usageScene) { DARABONBA_PTR_SET_VALUE(usageScene_, usageScene) };


      protected:
        // The exact non-negative decimal string. Floating-point or exponential formats are not used. The value is null when the amount is incomplete.
        shared_ptr<string> dataUnit_ {};
        // The project attribution at the time of the call. The value is null when missing, which does not affect the total amount.
        shared_ptr<string> projectId_ {};
        // The project name. For the same scenario and project ID, the latest non-empty name snapshot within the query range is used. If multiple snapshots exist in the same second, the maximum value in lexicographical order is used. The value is null when missing.
        shared_ptr<string> projectName_ {};
        // The business scenario code.
        shared_ptr<string> usageScene_ {};
      };

      virtual bool empty() const override { return this->dataUnit_ == nullptr
        && this->scenes_ == nullptr && this->time_ == nullptr; };
      // dataUnit Field Functions 
      bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
      void deleteDataUnit() { this->dataUnit_ = nullptr;};
      inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
      inline TimeSeries& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


      // scenes Field Functions 
      bool hasScenes() const { return this->scenes_ != nullptr;};
      void deleteScenes() { this->scenes_ = nullptr;};
      inline const vector<TimeSeries::Scenes> & getScenes() const { DARABONBA_PTR_GET_CONST(scenes_, vector<TimeSeries::Scenes>) };
      inline vector<TimeSeries::Scenes> getScenes() { DARABONBA_PTR_GET(scenes_, vector<TimeSeries::Scenes>) };
      inline TimeSeries& setScenes(const vector<TimeSeries::Scenes> & scenes) { DARABONBA_PTR_SET_VALUE(scenes_, scenes) };
      inline TimeSeries& setScenes(vector<TimeSeries::Scenes> && scenes) { DARABONBA_PTR_SET_RVALUE(scenes_, scenes) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline TimeSeries& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The exact non-negative decimal string. Floating-point or exponential formats are not used. The value is null when the amount is incomplete.
      shared_ptr<string> dataUnit_ {};
      // The scenario usage within the bucket.
      shared_ptr<vector<TimeSeries::Scenes>> scenes_ {};
      // The start time of the UTC bucket.
      shared_ptr<string> time_ {};
    };

    class Summary : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Summary& obj) { 
        DARABONBA_PTR_TO_JSON(DataUnit, dataUnit_);
      };
      friend void from_json(const Darabonba::Json& j, Summary& obj) { 
        DARABONBA_PTR_FROM_JSON(DataUnit, dataUnit_);
      };
      Summary() = default ;
      Summary(const Summary &) = default ;
      Summary(Summary &&) = default ;
      Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Summary() = default ;
      Summary& operator=(const Summary &) = default ;
      Summary& operator=(Summary &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataUnit_ == nullptr; };
      // dataUnit Field Functions 
      bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
      void deleteDataUnit() { this->dataUnit_ = nullptr;};
      inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
      inline Summary& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


    protected:
      // The exact non-negative decimal string. Floating-point or exponential formats are not used. The value is null when the amount is incomplete.
      shared_ptr<string> dataUnit_ {};
    };

    class Distribution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Distribution& obj) { 
        DARABONBA_PTR_TO_JSON(DataUnit, dataUnit_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(UsageScene, usageScene_);
        DARABONBA_PTR_TO_JSON(UsageSceneName, usageSceneName_);
      };
      friend void from_json(const Darabonba::Json& j, Distribution& obj) { 
        DARABONBA_PTR_FROM_JSON(DataUnit, dataUnit_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(UsageScene, usageScene_);
        DARABONBA_PTR_FROM_JSON(UsageSceneName, usageSceneName_);
      };
      Distribution() = default ;
      Distribution(const Distribution &) = default ;
      Distribution(Distribution &&) = default ;
      Distribution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Distribution() = default ;
      Distribution& operator=(const Distribution &) = default ;
      Distribution& operator=(Distribution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataUnit_ == nullptr
        && this->projectId_ == nullptr && this->projectName_ == nullptr && this->usageScene_ == nullptr && this->usageSceneName_ == nullptr; };
      // dataUnit Field Functions 
      bool hasDataUnit() const { return this->dataUnit_ != nullptr;};
      void deleteDataUnit() { this->dataUnit_ = nullptr;};
      inline string getDataUnit() const { DARABONBA_PTR_GET_DEFAULT(dataUnit_, "") };
      inline Distribution& setDataUnit(string dataUnit) { DARABONBA_PTR_SET_VALUE(dataUnit_, dataUnit) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
      inline Distribution& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline Distribution& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // usageScene Field Functions 
      bool hasUsageScene() const { return this->usageScene_ != nullptr;};
      void deleteUsageScene() { this->usageScene_ = nullptr;};
      inline string getUsageScene() const { DARABONBA_PTR_GET_DEFAULT(usageScene_, "") };
      inline Distribution& setUsageScene(string usageScene) { DARABONBA_PTR_SET_VALUE(usageScene_, usageScene) };


      // usageSceneName Field Functions 
      bool hasUsageSceneName() const { return this->usageSceneName_ != nullptr;};
      void deleteUsageSceneName() { this->usageSceneName_ = nullptr;};
      inline string getUsageSceneName() const { DARABONBA_PTR_GET_DEFAULT(usageSceneName_, "") };
      inline Distribution& setUsageSceneName(string usageSceneName) { DARABONBA_PTR_SET_VALUE(usageSceneName_, usageSceneName) };


    protected:
      // The exact non-negative decimal string. Floating-point or exponential formats are not used. The value is null when the amount is incomplete.
      shared_ptr<string> dataUnit_ {};
      // The project attribution at the time of the call. The value is null when missing, which does not affect the total amount.
      shared_ptr<string> projectId_ {};
      // The project name. For the same scenario and project ID, the latest non-empty name snapshot within the query range is used. If multiple snapshots exist in the same second, the maximum value in lexicographical order is used. The value is null when missing.
      shared_ptr<string> projectName_ {};
      // The business scenario code.
      shared_ptr<string> usageScene_ {};
      // The display name of the business scenario. This name is supplemented by a dictionary that maps the original Meta values to Chinese names, and is not an SLS field. UsageScene always retains the original log value. If no Chinese name is available, the original value is used as the name. Blank values are classified as other. Different codes with the same Chinese name are not merged.
      shared_ptr<string> usageSceneName_ {};
    };

    virtual bool empty() const override { return this->distribution_ == nullptr
        && this->endTime_ == nullptr && this->requestId_ == nullptr && this->serviceId_ == nullptr && this->startTime_ == nullptr && this->summary_ == nullptr
        && this->timeSeries_ == nullptr && this->warnings_ == nullptr; };
    // distribution Field Functions 
    bool hasDistribution() const { return this->distribution_ != nullptr;};
    void deleteDistribution() { this->distribution_ = nullptr;};
    inline const vector<GetSaasDataUnitUsageResponseBody::Distribution> & getDistribution() const { DARABONBA_PTR_GET_CONST(distribution_, vector<GetSaasDataUnitUsageResponseBody::Distribution>) };
    inline vector<GetSaasDataUnitUsageResponseBody::Distribution> getDistribution() { DARABONBA_PTR_GET(distribution_, vector<GetSaasDataUnitUsageResponseBody::Distribution>) };
    inline GetSaasDataUnitUsageResponseBody& setDistribution(const vector<GetSaasDataUnitUsageResponseBody::Distribution> & distribution) { DARABONBA_PTR_SET_VALUE(distribution_, distribution) };
    inline GetSaasDataUnitUsageResponseBody& setDistribution(vector<GetSaasDataUnitUsageResponseBody::Distribution> && distribution) { DARABONBA_PTR_SET_RVALUE(distribution_, distribution) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetSaasDataUnitUsageResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSaasDataUnitUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetSaasDataUnitUsageResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetSaasDataUnitUsageResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const GetSaasDataUnitUsageResponseBody::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, GetSaasDataUnitUsageResponseBody::Summary) };
    inline GetSaasDataUnitUsageResponseBody::Summary getSummary() { DARABONBA_PTR_GET(summary_, GetSaasDataUnitUsageResponseBody::Summary) };
    inline GetSaasDataUnitUsageResponseBody& setSummary(const GetSaasDataUnitUsageResponseBody::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline GetSaasDataUnitUsageResponseBody& setSummary(GetSaasDataUnitUsageResponseBody::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timeSeries Field Functions 
    bool hasTimeSeries() const { return this->timeSeries_ != nullptr;};
    void deleteTimeSeries() { this->timeSeries_ = nullptr;};
    inline const vector<GetSaasDataUnitUsageResponseBody::TimeSeries> & getTimeSeries() const { DARABONBA_PTR_GET_CONST(timeSeries_, vector<GetSaasDataUnitUsageResponseBody::TimeSeries>) };
    inline vector<GetSaasDataUnitUsageResponseBody::TimeSeries> getTimeSeries() { DARABONBA_PTR_GET(timeSeries_, vector<GetSaasDataUnitUsageResponseBody::TimeSeries>) };
    inline GetSaasDataUnitUsageResponseBody& setTimeSeries(const vector<GetSaasDataUnitUsageResponseBody::TimeSeries> & timeSeries) { DARABONBA_PTR_SET_VALUE(timeSeries_, timeSeries) };
    inline GetSaasDataUnitUsageResponseBody& setTimeSeries(vector<GetSaasDataUnitUsageResponseBody::TimeSeries> && timeSeries) { DARABONBA_PTR_SET_RVALUE(timeSeries_, timeSeries) };


    // warnings Field Functions 
    bool hasWarnings() const { return this->warnings_ != nullptr;};
    void deleteWarnings() { this->warnings_ = nullptr;};
    inline const vector<GetSaasDataUnitUsageResponseBody::Warnings> & getWarnings() const { DARABONBA_PTR_GET_CONST(warnings_, vector<GetSaasDataUnitUsageResponseBody::Warnings>) };
    inline vector<GetSaasDataUnitUsageResponseBody::Warnings> getWarnings() { DARABONBA_PTR_GET(warnings_, vector<GetSaasDataUnitUsageResponseBody::Warnings>) };
    inline GetSaasDataUnitUsageResponseBody& setWarnings(const vector<GetSaasDataUnitUsageResponseBody::Warnings> & warnings) { DARABONBA_PTR_SET_VALUE(warnings_, warnings) };
    inline GetSaasDataUnitUsageResponseBody& setWarnings(vector<GetSaasDataUnitUsageResponseBody::Warnings> && warnings) { DARABONBA_PTR_SET_RVALUE(warnings_, warnings) };


  protected:
    // The business distribution. The items are sorted in descending order of DataUnit. Items with unknown amounts are placed at the end. Items with the same value are sorted in ascending order of scenario code, project ID, and name. The items are grouped by scenario and project ID. Items without an ID but with a name are grouped by name. Records missing both are grouped as unassociated projects. The sum of all items in the complete result equals the summary. Missing or blank log scenarios are classified as other. Scenarios with values but no configured mapping retain the original values as codes and display names, and are normally included in the total. No empty rows are created for other if there are no records.
    shared_ptr<vector<GetSaasDataUnitUsageResponseBody::Distribution>> distribution_ {};
    // The actual end time of the query.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The SaaS service ID.
    shared_ptr<string> serviceId_ {};
    // The actual start time of the query.
    shared_ptr<string> startTime_ {};
    // The usage summary.
    shared_ptr<GetSaasDataUnitUsageResponseBody::Summary> summary_ {};
    // The time trend. The items are sorted in ascending order of the UTC bucket start time. Zero buckets are padded for complete queries. The value is null for unknown amounts and is not replaced with zero.
    shared_ptr<vector<GetSaasDataUnitUsageResponseBody::TimeSeries>> timeSeries_ {};
    // The product notifications.
    shared_ptr<vector<GetSaasDataUnitUsageResponseBody::Warnings>> warnings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
