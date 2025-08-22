// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODYPAGEBEANRETCODEAPPS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRETCODEAPPBYPAGERESPONSEBODYPAGEBEANRETCODEAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps() = default ;
    SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps(const SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps &) = default ;
    SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps(SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps &&) = default ;
    SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps() = default ;
    SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& operator=(const SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps &) = default ;
    SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& operator=(SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->createTime_ != nullptr && this->nickName_ != nullptr && this->pid_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->retcodeAppType_ != nullptr && this->tags_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr
        && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retcodeAppType Field Functions 
    bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
    void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
    inline string retcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags>) };
    inline vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags>) };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setTags(const vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setTags(vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchRetcodeAppByPageResponseBodyPageBeanRetcodeApps& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The ID of the application. The parameter is an auto-increment parameter.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The alias of the application.
    std::shared_ptr<string> nickName_ = nullptr;
    // The process identifier (PID) of the application.
    std::shared_ptr<string> pid_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the application. Valid values:
    // 
    // *   `web`: web application
    // *   `weex`: Weex mobile app
    // *   `mini_dd`: DingTalk mini program
    // *   `mini_alipay`: Alipay mini program
    // *   `mini_wx`: WeChat mini program
    // *   `mini_common`: mini program on other platforms
    std::shared_ptr<string> retcodeAppType_ = nullptr;
    // The tag.
    std::shared_ptr<vector<Models::SearchRetcodeAppByPageResponseBodyPageBeanRetcodeAppsTags>> tags_ = nullptr;
    // The type of the monitoring task. Valid values:
    // 
    // *   `TRACE`: Application Monitoring
    // *   `RETCODE`: Browser Monitoring
    std::shared_ptr<string> type_ = nullptr;
    // The time when the task was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
