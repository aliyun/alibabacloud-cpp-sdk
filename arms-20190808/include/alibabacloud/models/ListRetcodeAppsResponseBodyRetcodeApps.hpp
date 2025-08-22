// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODYRETCODEAPPS_HPP_
#define ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODYRETCODEAPPS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRetcodeAppsResponseBodyRetcodeAppsTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListRetcodeAppsResponseBodyRetcodeApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRetcodeAppsResponseBodyRetcodeApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListRetcodeAppsResponseBodyRetcodeApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListRetcodeAppsResponseBodyRetcodeApps() = default ;
    ListRetcodeAppsResponseBodyRetcodeApps(const ListRetcodeAppsResponseBodyRetcodeApps &) = default ;
    ListRetcodeAppsResponseBodyRetcodeApps(ListRetcodeAppsResponseBodyRetcodeApps &&) = default ;
    ListRetcodeAppsResponseBodyRetcodeApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRetcodeAppsResponseBodyRetcodeApps() = default ;
    ListRetcodeAppsResponseBodyRetcodeApps& operator=(const ListRetcodeAppsResponseBodyRetcodeApps &) = default ;
    ListRetcodeAppsResponseBodyRetcodeApps& operator=(ListRetcodeAppsResponseBodyRetcodeApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->nickName_ != nullptr && this->pid_ != nullptr && this->resourceGroupId_ != nullptr && this->retcodeAppType_ != nullptr
        && this->tags_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retcodeAppType Field Functions 
    bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
    void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
    inline string retcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags>) };
    inline vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags>) };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setTags(const vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListRetcodeAppsResponseBodyRetcodeApps& setTags(vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the application. The parameter is an auto-increment parameter.
    std::shared_ptr<int64_t> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The alias of the application monitored by Browser Monitoring.
    std::shared_ptr<string> nickName_ = nullptr;
    // The process identifier (PID) of the application.
    std::shared_ptr<string> pid_ = nullptr;
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
    // The tags of the task.
    std::shared_ptr<vector<Models::ListRetcodeAppsResponseBodyRetcodeAppsTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
