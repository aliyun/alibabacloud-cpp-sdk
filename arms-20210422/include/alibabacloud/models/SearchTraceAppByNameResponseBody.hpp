// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchTraceAppByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceApps, traceApps_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceApps, traceApps_);
    };
    SearchTraceAppByNameResponseBody() = default ;
    SearchTraceAppByNameResponseBody(const SearchTraceAppByNameResponseBody &) = default ;
    SearchTraceAppByNameResponseBody(SearchTraceAppByNameResponseBody &&) = default ;
    SearchTraceAppByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByNameResponseBody() = default ;
    SearchTraceAppByNameResponseBody& operator=(const SearchTraceAppByNameResponseBody &) = default ;
    SearchTraceAppByNameResponseBody& operator=(SearchTraceAppByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceApps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Show, show_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, TraceApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Show, show_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
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
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->createTime_ == nullptr && this->labels_ == nullptr && this->pid_ == nullptr && this->regionId_ == nullptr
        && this->show_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr; };
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


      // show Field Functions 
      bool hasShow() const { return this->show_ != nullptr;};
      void deleteShow() { this->show_ = nullptr;};
      inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
      inline TraceApps& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


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


    protected:
      shared_ptr<int64_t> appId_ {};
      shared_ptr<string> appName_ {};
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<vector<string>> labels_ {};
      shared_ptr<string> pid_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<bool> show_ {};
      shared_ptr<string> type_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->traceApps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTraceAppByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceApps Field Functions 
    bool hasTraceApps() const { return this->traceApps_ != nullptr;};
    void deleteTraceApps() { this->traceApps_ = nullptr;};
    inline const vector<SearchTraceAppByNameResponseBody::TraceApps> & getTraceApps() const { DARABONBA_PTR_GET_CONST(traceApps_, vector<SearchTraceAppByNameResponseBody::TraceApps>) };
    inline vector<SearchTraceAppByNameResponseBody::TraceApps> getTraceApps() { DARABONBA_PTR_GET(traceApps_, vector<SearchTraceAppByNameResponseBody::TraceApps>) };
    inline SearchTraceAppByNameResponseBody& setTraceApps(const vector<SearchTraceAppByNameResponseBody::TraceApps> & traceApps) { DARABONBA_PTR_SET_VALUE(traceApps_, traceApps) };
    inline SearchTraceAppByNameResponseBody& setTraceApps(vector<SearchTraceAppByNameResponseBody::TraceApps> && traceApps) { DARABONBA_PTR_SET_RVALUE(traceApps_, traceApps) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<SearchTraceAppByNameResponseBody::TraceApps>> traceApps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
