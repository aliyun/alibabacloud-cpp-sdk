// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDRESPONSEBODYRETCODEAPP_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDRESPONSEBODYRETCODEAPP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRetcodeAppByPidResponseBodyRetcodeAppTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeAppByPidResponseBodyRetcodeApp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeAppByPidResponseBodyRetcodeApp& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeAppByPidResponseBodyRetcodeApp& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetRetcodeAppByPidResponseBodyRetcodeApp() = default ;
    GetRetcodeAppByPidResponseBodyRetcodeApp(const GetRetcodeAppByPidResponseBodyRetcodeApp &) = default ;
    GetRetcodeAppByPidResponseBodyRetcodeApp(GetRetcodeAppByPidResponseBodyRetcodeApp &&) = default ;
    GetRetcodeAppByPidResponseBodyRetcodeApp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeAppByPidResponseBodyRetcodeApp() = default ;
    GetRetcodeAppByPidResponseBodyRetcodeApp& operator=(const GetRetcodeAppByPidResponseBodyRetcodeApp &) = default ;
    GetRetcodeAppByPidResponseBodyRetcodeApp& operator=(GetRetcodeAppByPidResponseBodyRetcodeApp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->pid_ != nullptr && this->resourceGroupId_ != nullptr && this->retcodeAppType_ != nullptr && this->tags_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // retcodeAppType Field Functions 
    bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
    void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
    inline string retcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags>) };
    inline vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags>) };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setTags(const vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetRetcodeAppByPidResponseBodyRetcodeApp& setTags(vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the application. The parameter is an auto-increment parameter.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application that is monitored by Browser Monitoring.
    std::shared_ptr<string> appName_ = nullptr;
    // The process identifier (PID) of the application.
    std::shared_ptr<string> pid_ = nullptr;
    // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the application that is monitored by Browser Monitoring. Valid values:
    // 
    // *   `web`: web application
    // *   `weex`: Weex mobile app
    // *   `mini_dd`: DingTalk mini program
    // *   `mini_alipay`: Alipay mini program
    // *   `mini_wx`: WeChat mini program
    // *   `mini_common`: mini program on other platforms
    std::shared_ptr<string> retcodeAppType_ = nullptr;
    // The tags that are attached to the instance.
    std::shared_ptr<vector<Models::GetRetcodeAppByPidResponseBodyRetcodeAppTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
