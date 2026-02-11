// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTRACEAPPRESPONSEBODY_HPP_
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
  class GetTraceAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TraceApp, traceApp_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TraceApp, traceApp_);
    };
    GetTraceAppResponseBody() = default ;
    GetTraceAppResponseBody(const GetTraceAppResponseBody &) = default ;
    GetTraceAppResponseBody(GetTraceAppResponseBody &&) = default ;
    GetTraceAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceAppResponseBody() = default ;
    GetTraceAppResponseBody& operator=(const GetTraceAppResponseBody &) = default ;
    GetTraceAppResponseBody& operator=(GetTraceAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TraceApp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TraceApp& obj) { 
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
      friend void from_json(const Darabonba::Json& j, TraceApp& obj) { 
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
      TraceApp() = default ;
      TraceApp(const TraceApp &) = default ;
      TraceApp(TraceApp &&) = default ;
      TraceApp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TraceApp() = default ;
      TraceApp& operator=(const TraceApp &) = default ;
      TraceApp& operator=(TraceApp &&) = default ;
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
      inline TraceApp& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline TraceApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline TraceApp& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
      inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
      inline TraceApp& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline TraceApp& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline TraceApp& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TraceApp& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // show Field Functions 
      bool hasShow() const { return this->show_ != nullptr;};
      void deleteShow() { this->show_ = nullptr;};
      inline bool getShow() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
      inline TraceApp& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline TraceApp& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline TraceApp& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline TraceApp& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


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
        && this->traceApp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTraceAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // traceApp Field Functions 
    bool hasTraceApp() const { return this->traceApp_ != nullptr;};
    void deleteTraceApp() { this->traceApp_ = nullptr;};
    inline const GetTraceAppResponseBody::TraceApp & getTraceApp() const { DARABONBA_PTR_GET_CONST(traceApp_, GetTraceAppResponseBody::TraceApp) };
    inline GetTraceAppResponseBody::TraceApp getTraceApp() { DARABONBA_PTR_GET(traceApp_, GetTraceAppResponseBody::TraceApp) };
    inline GetTraceAppResponseBody& setTraceApp(const GetTraceAppResponseBody::TraceApp & traceApp) { DARABONBA_PTR_SET_VALUE(traceApp_, traceApp) };
    inline GetTraceAppResponseBody& setTraceApp(GetTraceAppResponseBody::TraceApp && traceApp) { DARABONBA_PTR_SET_RVALUE(traceApp_, traceApp) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetTraceAppResponseBody::TraceApp> traceApp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
