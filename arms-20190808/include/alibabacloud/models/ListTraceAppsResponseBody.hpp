// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRACEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRACEAPPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListTraceAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTraceAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceApps, traceApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListTraceAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceApps, traceApps_);
    };
    ListTraceAppsResponseBody() = default ;
    ListTraceAppsResponseBody(const ListTraceAppsResponseBody &) = default ;
    ListTraceAppsResponseBody(ListTraceAppsResponseBody &&) = default ;
    ListTraceAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTraceAppsResponseBody() = default ;
    ListTraceAppsResponseBody& operator=(const ListTraceAppsResponseBody &) = default ;
    ListTraceAppsResponseBody& operator=(ListTraceAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceApps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Language, language_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Show, show_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WorkloadKind, workloadKind_);
        DARABONBA_PTR_TO_JSON(WorkloadName, workloadName_);
      };
      friend void from_json(const Darabonba::Json& j, TraceApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Language, language_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Show, show_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WorkloadKind, workloadKind_);
        DARABONBA_PTR_FROM_JSON(WorkloadName, workloadName_);
      };
      TraceApps() = default ;
      TraceApps(const TraceApps &) = default ;
      TraceApps(TraceApps &&) = default ;
      TraceApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceApps() = default ;
      TraceApps& operator=(const TraceApps &) = default ;
      TraceApps& operator=(TraceApps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->clusterId_ == nullptr && this->createTime_ == nullptr && this->labels_ == nullptr && this->language_ == nullptr
        && this->namespace_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->show_ == nullptr
        && this->source_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr
        && this->workloadKind_ == nullptr && this->workloadName_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline TraceApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline TraceApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline TraceApps& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline TraceApps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline TraceApps& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline TraceApps& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // language Field Functions 
      bool hasLanguage() const { return this->language_ != nullptr;};
      void deleteLanguage() { this->language_ = nullptr;};
      inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
      inline TraceApps& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline TraceApps& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline TraceApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TraceApps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline TraceApps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // show Field Functions 
      bool hasShow() const { return this->show_ != nullptr;};
      void deleteShow() { this->show_ = nullptr;};
      inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
      inline TraceApps& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline TraceApps& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TraceApps::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TraceApps::Tags>) };
      inline vector<TraceApps::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TraceApps::Tags>) };
      inline TraceApps& setTags(const vector<TraceApps::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TraceApps& setTags(vector<TraceApps::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TraceApps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline TraceApps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TraceApps& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // workloadKind Field Functions 
      bool hasWorkloadKind() const { return this->workloadKind_ != nullptr;};
      void deleteWorkloadKind() { this->workloadKind_ = nullptr;};
      inline string getWorkloadKind() const { DARABONBA_PTR_GET_DEFAULT(workloadKind_, "") };
      inline TraceApps& setWorkloadKind(string workloadKind) { DARABONBA_PTR_SET_VALUE(workloadKind_, workloadKind) };


      // workloadName Field Functions 
      bool hasWorkloadName() const { return this->workloadName_ != nullptr;};
      void deleteWorkloadName() { this->workloadName_ = nullptr;};
      inline string getWorkloadName() const { DARABONBA_PTR_GET_DEFAULT(workloadName_, "") };
      inline TraceApps& setWorkloadName(string workloadName) { DARABONBA_PTR_SET_VALUE(workloadName_, workloadName) };


    protected:
      // The application ID.
      shared_ptr<int64_t> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The time when the monitoring task was created. The value is a timestamp. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The labels of the application.
      shared_ptr<vector<string>> labels_ {};
      // The language.
      shared_ptr<string> language_ {};
      // The namespace.
      shared_ptr<string> namespace_ {};
      // The process identifier (PID) of the application.
      shared_ptr<string> pid_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the application is displayed in the Application Real-Time Monitoring Service (ARMS) console. Valid values:
      // 
      // *   `true`: yes
      // *   `false`: no
      shared_ptr<bool> show_ {};
      // The application source.
      shared_ptr<string> source_ {};
      // The tags.
      shared_ptr<vector<TraceApps::Tags>> tags_ {};
      // The type of the monitoring task. Valid values:
      // 
      // *   `TRACE`: Application Monitoring
      // *   `RETCODE`: Browser Monitoring
      shared_ptr<string> type_ {};
      // The time when the monitoring task was updated. The value is a timestamp. Unit: milliseconds.
      shared_ptr<int64_t> updateTime_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The type of the workload.
      shared_ptr<string> workloadKind_ {};
      // The name of the workload.
      shared_ptr<string> workloadName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceApps_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListTraceAppsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTraceAppsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTraceAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTraceAppsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceApps Field Functions 
    bool hasTraceApps() const { return this->traceApps_ != nullptr;};
    void deleteTraceApps() { this->traceApps_ = nullptr;};
    inline const vector<ListTraceAppsResponseBody::TraceApps> & getTraceApps() const { DARABONBA_PTR_GET_CONST(traceApps_, vector<ListTraceAppsResponseBody::TraceApps>) };
    inline vector<ListTraceAppsResponseBody::TraceApps> getTraceApps() { DARABONBA_PTR_GET(traceApps_, vector<ListTraceAppsResponseBody::TraceApps>) };
    inline ListTraceAppsResponseBody& setTraceApps(const vector<ListTraceAppsResponseBody::TraceApps> & traceApps) { DARABONBA_PTR_SET_VALUE(traceApps_, traceApps) };
    inline ListTraceAppsResponseBody& setTraceApps(vector<ListTraceAppsResponseBody::TraceApps> && traceApps) { DARABONBA_PTR_SET_RVALUE(traceApps_, traceApps) };


  protected:
    // The HTTP status code returned for the request. Valid values:
    // 
    // *   `2XX`: The request is successful.
    // *   `3XX`: A redirection message is returned.
    // *   `4XX`: The request is invalid.
    // *   `5XX`: A server error occurs.
    shared_ptr<int32_t> code_ {};
    // The error message returned if the request parameters are invalid.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // 
    // *   `true`: The call was successful.
    // *   `false`: The call failed.
    shared_ptr<bool> success_ {};
    // The list of Application Monitoring tasks.
    shared_ptr<vector<ListTraceAppsResponseBody::TraceApps>> traceApps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
