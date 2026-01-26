// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRETCODEAPPSRESPONSEBODY_HPP_
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
  class ListRetcodeAppsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRetcodeAppsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RetcodeApps, retcodeApps_);
    };
    friend void from_json(const Darabonba::Json& j, ListRetcodeAppsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RetcodeApps, retcodeApps_);
    };
    ListRetcodeAppsResponseBody() = default ;
    ListRetcodeAppsResponseBody(const ListRetcodeAppsResponseBody &) = default ;
    ListRetcodeAppsResponseBody(ListRetcodeAppsResponseBody &&) = default ;
    ListRetcodeAppsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRetcodeAppsResponseBody() = default ;
    ListRetcodeAppsResponseBody& operator=(const ListRetcodeAppsResponseBody &) = default ;
    ListRetcodeAppsResponseBody& operator=(ListRetcodeAppsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RetcodeApps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RetcodeApps& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(Pid, pid_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RetcodeAppType, retcodeAppType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, RetcodeApps& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(Pid, pid_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RetcodeAppType, retcodeAppType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      RetcodeApps() = default ;
      RetcodeApps(const RetcodeApps &) = default ;
      RetcodeApps(RetcodeApps &&) = default ;
      RetcodeApps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RetcodeApps() = default ;
      RetcodeApps& operator=(const RetcodeApps &) = default ;
      RetcodeApps& operator=(RetcodeApps &&) = default ;
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
        && this->appName_ == nullptr && this->nickName_ == nullptr && this->pid_ == nullptr && this->resourceGroupId_ == nullptr && this->retcodeAppType_ == nullptr
        && this->tags_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
      inline RetcodeApps& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline RetcodeApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline RetcodeApps& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // pid Field Functions 
      bool hasPid() const { return this->pid_ != nullptr;};
      void deletePid() { this->pid_ = nullptr;};
      inline string getPid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
      inline RetcodeApps& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RetcodeApps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // retcodeAppType Field Functions 
      bool hasRetcodeAppType() const { return this->retcodeAppType_ != nullptr;};
      void deleteRetcodeAppType() { this->retcodeAppType_ = nullptr;};
      inline string getRetcodeAppType() const { DARABONBA_PTR_GET_DEFAULT(retcodeAppType_, "") };
      inline RetcodeApps& setRetcodeAppType(string retcodeAppType) { DARABONBA_PTR_SET_VALUE(retcodeAppType_, retcodeAppType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<RetcodeApps::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RetcodeApps::Tags>) };
      inline vector<RetcodeApps::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<RetcodeApps::Tags>) };
      inline RetcodeApps& setTags(const vector<RetcodeApps::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline RetcodeApps& setTags(vector<RetcodeApps::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The ID of the application. The parameter is an auto-increment parameter.
      shared_ptr<int64_t> appId_ {};
      // The name of the application.
      shared_ptr<string> appName_ {};
      // The alias of the application monitored by Browser Monitoring.
      shared_ptr<string> nickName_ {};
      // The process identifier (PID) of the application.
      shared_ptr<string> pid_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The type of the application. Valid values:
      // 
      // *   `web`: web application
      // *   `weex`: Weex mobile app
      // *   `mini_dd`: DingTalk mini program
      // *   `mini_alipay`: Alipay mini program
      // *   `mini_wx`: WeChat mini program
      // *   `mini_common`: mini program on other platforms
      shared_ptr<string> retcodeAppType_ {};
      // The tags of the task.
      shared_ptr<vector<RetcodeApps::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->retcodeApps_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRetcodeAppsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // retcodeApps Field Functions 
    bool hasRetcodeApps() const { return this->retcodeApps_ != nullptr;};
    void deleteRetcodeApps() { this->retcodeApps_ = nullptr;};
    inline const vector<ListRetcodeAppsResponseBody::RetcodeApps> & getRetcodeApps() const { DARABONBA_PTR_GET_CONST(retcodeApps_, vector<ListRetcodeAppsResponseBody::RetcodeApps>) };
    inline vector<ListRetcodeAppsResponseBody::RetcodeApps> getRetcodeApps() { DARABONBA_PTR_GET(retcodeApps_, vector<ListRetcodeAppsResponseBody::RetcodeApps>) };
    inline ListRetcodeAppsResponseBody& setRetcodeApps(const vector<ListRetcodeAppsResponseBody::RetcodeApps> & retcodeApps) { DARABONBA_PTR_SET_VALUE(retcodeApps_, retcodeApps) };
    inline ListRetcodeAppsResponseBody& setRetcodeApps(vector<ListRetcodeAppsResponseBody::RetcodeApps> && retcodeApps) { DARABONBA_PTR_SET_RVALUE(retcodeApps_, retcodeApps) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of applications monitored by Browser Monitoring.
    shared_ptr<vector<ListRetcodeAppsResponseBody::RetcodeApps>> retcodeApps_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
