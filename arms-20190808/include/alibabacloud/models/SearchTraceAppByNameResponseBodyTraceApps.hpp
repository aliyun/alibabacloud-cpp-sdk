// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMERESPONSEBODYTRACEAPPS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACEAPPBYNAMERESPONSEBODYTRACEAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchTraceAppByNameResponseBodyTraceAppsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchTraceAppByNameResponseBodyTraceApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTraceAppByNameResponseBodyTraceApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Show, show_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTraceAppByNameResponseBodyTraceApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Show, show_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchTraceAppByNameResponseBodyTraceApps() = default ;
    SearchTraceAppByNameResponseBodyTraceApps(const SearchTraceAppByNameResponseBodyTraceApps &) = default ;
    SearchTraceAppByNameResponseBodyTraceApps(SearchTraceAppByNameResponseBodyTraceApps &&) = default ;
    SearchTraceAppByNameResponseBodyTraceApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTraceAppByNameResponseBodyTraceApps() = default ;
    SearchTraceAppByNameResponseBodyTraceApps& operator=(const SearchTraceAppByNameResponseBodyTraceApps &) = default ;
    SearchTraceAppByNameResponseBodyTraceApps& operator=(SearchTraceAppByNameResponseBodyTraceApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->createTime_ != nullptr && this->labels_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->show_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr
        && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SearchTraceAppByNameResponseBodyTraceApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<string> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
    inline vector<string> labels() { DARABONBA_PTR_GET(labels_, vector<string>) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchTraceAppByNameResponseBodyTraceApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchTraceAppByNameResponseBodyTraceApps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchTraceAppByNameResponseBodyTraceApps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // show Field Functions 
    bool hasShow() const { return this->show_ != nullptr;};
    void deleteShow() { this->show_ = nullptr;};
    inline bool show() const { DARABONBA_PTR_GET_DEFAULT(show_, false) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setShow(bool show) { DARABONBA_PTR_SET_VALUE(show_, show) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags>) };
    inline vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags>) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setTags(const vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setTags(vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchTraceAppByNameResponseBodyTraceApps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline SearchTraceAppByNameResponseBodyTraceApps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchTraceAppByNameResponseBodyTraceApps& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The application ID.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The timestamp generated when the task was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The aliases of the application.
    std::shared_ptr<vector<string>> labels_ = nullptr;
    // The process identifier (PID) of the application.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the application is displayed in the Application Real-Time Monitoring Service (ARMS) console. Valid values:
    // 
    // *   `true`: yes
    // *   `false`: no
    std::shared_ptr<bool> show_ = nullptr;
    // A list of tags.
    std::shared_ptr<vector<Models::SearchTraceAppByNameResponseBodyTraceAppsTags>> tags_ = nullptr;
    // The type of the monitoring task. Valid values:
    // 
    // *   `TRACE`: Application Monitoring
    // *   `RETCODE`: Browser Monitoring
    std::shared_ptr<string> type_ = nullptr;
    // The timestamp generated when the task information was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
