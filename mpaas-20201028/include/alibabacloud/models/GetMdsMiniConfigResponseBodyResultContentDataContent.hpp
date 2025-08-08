// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETMDSMINICONFIGRESPONSEBODYRESULTCONTENTDATACONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList.hpp>
#include <alibabacloud/models/GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch.hpp>
#include <alibabacloud/models/GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList.hpp>
#include <alibabacloud/models/GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetMdsMiniConfigResponseBodyResultContentDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMdsMiniConfigResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(ApiConfigList, apiConfigList_);
      DARABONBA_PTR_TO_JSON(AppCode, appCode_);
      DARABONBA_PTR_TO_JSON(EnableServerDomainCount, enableServerDomainCount_);
      DARABONBA_PTR_TO_JSON(H5Id, h5Id_);
      DARABONBA_PTR_TO_JSON(H5Name, h5Name_);
      DARABONBA_PTR_TO_JSON(PrivilegeSwitch, privilegeSwitch_);
      DARABONBA_PTR_TO_JSON(ServerDomainConfigList, serverDomainConfigList_);
      DARABONBA_PTR_TO_JSON(WebviewDomainConfigList, webviewDomainConfigList_);
    };
    friend void from_json(const Darabonba::Json& j, GetMdsMiniConfigResponseBodyResultContentDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiConfigList, apiConfigList_);
      DARABONBA_PTR_FROM_JSON(AppCode, appCode_);
      DARABONBA_PTR_FROM_JSON(EnableServerDomainCount, enableServerDomainCount_);
      DARABONBA_PTR_FROM_JSON(H5Id, h5Id_);
      DARABONBA_PTR_FROM_JSON(H5Name, h5Name_);
      DARABONBA_PTR_FROM_JSON(PrivilegeSwitch, privilegeSwitch_);
      DARABONBA_PTR_FROM_JSON(ServerDomainConfigList, serverDomainConfigList_);
      DARABONBA_PTR_FROM_JSON(WebviewDomainConfigList, webviewDomainConfigList_);
    };
    GetMdsMiniConfigResponseBodyResultContentDataContent() = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContent(const GetMdsMiniConfigResponseBodyResultContentDataContent &) = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContent(GetMdsMiniConfigResponseBodyResultContentDataContent &&) = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMdsMiniConfigResponseBodyResultContentDataContent() = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContent& operator=(const GetMdsMiniConfigResponseBodyResultContentDataContent &) = default ;
    GetMdsMiniConfigResponseBodyResultContentDataContent& operator=(GetMdsMiniConfigResponseBodyResultContentDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiConfigList_ != nullptr
        && this->appCode_ != nullptr && this->enableServerDomainCount_ != nullptr && this->h5Id_ != nullptr && this->h5Name_ != nullptr && this->privilegeSwitch_ != nullptr
        && this->serverDomainConfigList_ != nullptr && this->webviewDomainConfigList_ != nullptr; };
    // apiConfigList Field Functions 
    bool hasApiConfigList() const { return this->apiConfigList_ != nullptr;};
    void deleteApiConfigList() { this->apiConfigList_ = nullptr;};
    inline const vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList> & apiConfigList() const { DARABONBA_PTR_GET_CONST(apiConfigList_, vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList>) };
    inline vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList> apiConfigList() { DARABONBA_PTR_GET(apiConfigList_, vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList>) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setApiConfigList(const vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList> & apiConfigList) { DARABONBA_PTR_SET_VALUE(apiConfigList_, apiConfigList) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setApiConfigList(vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList> && apiConfigList) { DARABONBA_PTR_SET_RVALUE(apiConfigList_, apiConfigList) };


    // appCode Field Functions 
    bool hasAppCode() const { return this->appCode_ != nullptr;};
    void deleteAppCode() { this->appCode_ = nullptr;};
    inline string appCode() const { DARABONBA_PTR_GET_DEFAULT(appCode_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setAppCode(string appCode) { DARABONBA_PTR_SET_VALUE(appCode_, appCode) };


    // enableServerDomainCount Field Functions 
    bool hasEnableServerDomainCount() const { return this->enableServerDomainCount_ != nullptr;};
    void deleteEnableServerDomainCount() { this->enableServerDomainCount_ = nullptr;};
    inline string enableServerDomainCount() const { DARABONBA_PTR_GET_DEFAULT(enableServerDomainCount_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setEnableServerDomainCount(string enableServerDomainCount) { DARABONBA_PTR_SET_VALUE(enableServerDomainCount_, enableServerDomainCount) };


    // h5Id Field Functions 
    bool hasH5Id() const { return this->h5Id_ != nullptr;};
    void deleteH5Id() { this->h5Id_ = nullptr;};
    inline string h5Id() const { DARABONBA_PTR_GET_DEFAULT(h5Id_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setH5Id(string h5Id) { DARABONBA_PTR_SET_VALUE(h5Id_, h5Id) };


    // h5Name Field Functions 
    bool hasH5Name() const { return this->h5Name_ != nullptr;};
    void deleteH5Name() { this->h5Name_ = nullptr;};
    inline string h5Name() const { DARABONBA_PTR_GET_DEFAULT(h5Name_, "") };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setH5Name(string h5Name) { DARABONBA_PTR_SET_VALUE(h5Name_, h5Name) };


    // privilegeSwitch Field Functions 
    bool hasPrivilegeSwitch() const { return this->privilegeSwitch_ != nullptr;};
    void deletePrivilegeSwitch() { this->privilegeSwitch_ = nullptr;};
    inline const Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch & privilegeSwitch() const { DARABONBA_PTR_GET_CONST(privilegeSwitch_, Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch) };
    inline Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch privilegeSwitch() { DARABONBA_PTR_GET(privilegeSwitch_, Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setPrivilegeSwitch(const Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch & privilegeSwitch) { DARABONBA_PTR_SET_VALUE(privilegeSwitch_, privilegeSwitch) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setPrivilegeSwitch(Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch && privilegeSwitch) { DARABONBA_PTR_SET_RVALUE(privilegeSwitch_, privilegeSwitch) };


    // serverDomainConfigList Field Functions 
    bool hasServerDomainConfigList() const { return this->serverDomainConfigList_ != nullptr;};
    void deleteServerDomainConfigList() { this->serverDomainConfigList_ = nullptr;};
    inline const vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList> & serverDomainConfigList() const { DARABONBA_PTR_GET_CONST(serverDomainConfigList_, vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList>) };
    inline vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList> serverDomainConfigList() { DARABONBA_PTR_GET(serverDomainConfigList_, vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList>) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setServerDomainConfigList(const vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList> & serverDomainConfigList) { DARABONBA_PTR_SET_VALUE(serverDomainConfigList_, serverDomainConfigList) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setServerDomainConfigList(vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList> && serverDomainConfigList) { DARABONBA_PTR_SET_RVALUE(serverDomainConfigList_, serverDomainConfigList) };


    // webviewDomainConfigList Field Functions 
    bool hasWebviewDomainConfigList() const { return this->webviewDomainConfigList_ != nullptr;};
    void deleteWebviewDomainConfigList() { this->webviewDomainConfigList_ = nullptr;};
    inline const vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList> & webviewDomainConfigList() const { DARABONBA_PTR_GET_CONST(webviewDomainConfigList_, vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList>) };
    inline vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList> webviewDomainConfigList() { DARABONBA_PTR_GET(webviewDomainConfigList_, vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList>) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setWebviewDomainConfigList(const vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList> & webviewDomainConfigList) { DARABONBA_PTR_SET_VALUE(webviewDomainConfigList_, webviewDomainConfigList) };
    inline GetMdsMiniConfigResponseBodyResultContentDataContent& setWebviewDomainConfigList(vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList> && webviewDomainConfigList) { DARABONBA_PTR_SET_RVALUE(webviewDomainConfigList_, webviewDomainConfigList) };


  protected:
    std::shared_ptr<vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentApiConfigList>> apiConfigList_ = nullptr;
    std::shared_ptr<string> appCode_ = nullptr;
    std::shared_ptr<string> enableServerDomainCount_ = nullptr;
    std::shared_ptr<string> h5Id_ = nullptr;
    std::shared_ptr<string> h5Name_ = nullptr;
    std::shared_ptr<Models::GetMdsMiniConfigResponseBodyResultContentDataContentPrivilegeSwitch> privilegeSwitch_ = nullptr;
    std::shared_ptr<vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentServerDomainConfigList>> serverDomainConfigList_ = nullptr;
    std::shared_ptr<vector<Models::GetMdsMiniConfigResponseBodyResultContentDataContentWebviewDomainConfigList>> webviewDomainConfigList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
