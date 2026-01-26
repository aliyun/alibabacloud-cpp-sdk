// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODEAPPBYPIDRESPONSEBODY_HPP_
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
  class GetRetcodeAppByPidResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeAppByPidResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeApp, retcodeApp_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeAppByPidResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeApp, retcodeApp_);
    };
    GetRetcodeAppByPidResponseBody() = default ;
    GetRetcodeAppByPidResponseBody(const GetRetcodeAppByPidResponseBody &) = default ;
    GetRetcodeAppByPidResponseBody(GetRetcodeAppByPidResponseBody &&) = default ;
    GetRetcodeAppByPidResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeAppByPidResponseBody() = default ;
    GetRetcodeAppByPidResponseBody& operator=(const GetRetcodeAppByPidResponseBody &) = default ;
    GetRetcodeAppByPidResponseBody& operator=(GetRetcodeAppByPidResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetcodeApp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetcodeApp& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, RetcodeApp& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      RetcodeApp() = default ;
      RetcodeApp(const RetcodeApp &) = default ;
      RetcodeApp(RetcodeApp &&) = default ;
      RetcodeApp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetcodeApp() = default ;
      RetcodeApp& operator=(const RetcodeApp &) = default ;
      RetcodeApp& operator=(RetcodeApp &&) = default ;
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
        // The key of the tag.
        shared_ptr<string> key_ {};
        // The value of the tag.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->pid_ == nullptr && this->resourceGroupId_ == nullptr && this->retcodeAppType_ == nullptr && this->tags_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline RetcodeApp& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RetcodeApp& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline RetcodeApp& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RetcodeApp& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // retcodeAppType Field Functions 
      bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
      void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
      inline string getRetcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
      inline RetcodeApp& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<RetcodeApp::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RetcodeApp::Tags>) };
      inline vector<RetcodeApp::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<RetcodeApp::Tags>) };
      inline RetcodeApp& setTags(const vector<RetcodeApp::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline RetcodeApp& setTags(vector<RetcodeApp::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the application. The parameter is an auto-increment parameter.
      shared_ptr<string> appId_ {};
      // The name of the application that is monitored by Browser Monitoring.
      shared_ptr<string> appName_ {};
      // The process identifier (PID) of the application.
      shared_ptr<string> pid_ {};
      // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
      shared_ptr<string> resourceGroupId_ {};
      // The type of the application that is monitored by Browser Monitoring. Valid values:
      // 
      // *   `web`: web application
      // *   `weex`: Weex mobile app
      // *   `mini_dd`: DingTalk mini program
      // *   `mini_alipay`: Alipay mini program
      // *   `mini_wx`: WeChat mini program
      // *   `mini_common`: mini program on other platforms
      shared_ptr<string> retcodeAppType_ {};
      // The tags that are attached to the instance.
      shared_ptr<vector<RetcodeApp::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->retcodeApp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRetcodeAppByPidResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeApp Field Functions 
    bool hasRetcodeApp() const { return this->retcodeApp_ != nullptr;};
    void deleteRetcodeApp() { this->retcodeApp_ = nullptr;};
    inline const GetRetcodeAppByPidResponseBody::RetcodeApp & getRetcodeApp() const { DARABONBA_PTR_GET_CONST(retcodeApp_, GetRetcodeAppByPidResponseBody::RetcodeApp) };
    inline GetRetcodeAppByPidResponseBody::RetcodeApp getRetcodeApp() { DARABONBA_PTR_GET(retcodeApp_, GetRetcodeAppByPidResponseBody::RetcodeApp) };
    inline GetRetcodeAppByPidResponseBody& setRetcodeApp(const GetRetcodeAppByPidResponseBody::RetcodeApp & retcodeApp) { DARABONBA_PTR_SET_VALUE(retcodeApp_, retcodeApp) };
    inline GetRetcodeAppByPidResponseBody& setRetcodeApp(GetRetcodeAppByPidResponseBody::RetcodeApp && retcodeApp) { DARABONBA_PTR_SET_RVALUE(retcodeApp_, retcodeApp) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned application data.
    shared_ptr<GetRetcodeAppByPidResponseBody::RetcodeApp> retcodeApp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
