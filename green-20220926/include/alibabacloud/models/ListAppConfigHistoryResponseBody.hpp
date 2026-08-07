// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPCONFIGHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPCONFIGHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class ListAppConfigHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(History, history_);
      DARABONBA_PTR_TO_JSON(Publish, publish_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppConfigHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(History, history_);
      DARABONBA_PTR_FROM_JSON(Publish, publish_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAppConfigHistoryResponseBody() = default ;
    ListAppConfigHistoryResponseBody(const ListAppConfigHistoryResponseBody &) = default ;
    ListAppConfigHistoryResponseBody(ListAppConfigHistoryResponseBody &&) = default ;
    ListAppConfigHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppConfigHistoryResponseBody() = default ;
    ListAppConfigHistoryResponseBody& operator=(const ListAppConfigHistoryResponseBody &) = default ;
    ListAppConfigHistoryResponseBody& operator=(ListAppConfigHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Publish : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Publish& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_ANY_TO_JSON(CustomConfig, customConfig_);
        DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_ANY_TO_JSON(Option, option_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Publish& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_ANY_FROM_JSON(CustomConfig, customConfig_);
        DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_ANY_FROM_JSON(Option, option_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Publish() = default ;
      Publish(const Publish &) = default ;
      Publish(Publish &&) = default ;
      Publish(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Publish() = default ;
      Publish& operator=(const Publish &) = default ;
      Publish& operator=(Publish &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->classify_ == nullptr && this->customConfig_ == nullptr && this->deployStatus_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr
        && this->option_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Publish& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline Publish& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // customConfig Field Functions 
      bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
      void deleteCustomConfig() { this->customConfig_ = nullptr;};
      inline       const Darabonba::Json & getCustomConfig() const { DARABONBA_GET(customConfig_) };
      Darabonba::Json & getCustomConfig() { DARABONBA_GET(customConfig_) };
      inline Publish& setCustomConfig(const Darabonba::Json & customConfig) { DARABONBA_SET_VALUE(customConfig_, customConfig) };
      inline Publish& setCustomConfig(Darabonba::Json && customConfig) { DARABONBA_SET_RVALUE(customConfig_, customConfig) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline Publish& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Publish& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Publish& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // option Field Functions 
      bool hasOption() const { return this->option_ != nullptr;};
      void deleteOption() { this->option_ = nullptr;};
      inline       const Darabonba::Json & getOption() const { DARABONBA_GET(option_) };
      Darabonba::Json & getOption() { DARABONBA_GET(option_) };
      inline Publish& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
      inline Publish& setOption(Darabonba::Json && option) { DARABONBA_SET_RVALUE(option_, option) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Publish& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Publish& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline Publish& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // App ID。
      shared_ptr<string> appId_ {};
      // **[Deprecated]** The categorization.
      shared_ptr<string> classify_ {};
      // **[Deprecated]** The configuration details.
      Darabonba::Json customConfig_ {};
      // **[Deprecated]** The publish status.
      shared_ptr<string> deployStatus_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // **[Deprecated]** The name.
      shared_ptr<string> name_ {};
      // **[Deprecated]** The preset options.
      Darabonba::Json option_ {};
      // **[Deprecated]** The resource type.
      shared_ptr<string> resourceType_ {};
      // **[Deprecated]** The type.
      shared_ptr<string> type_ {};
      // The version number.
      shared_ptr<int64_t> version_ {};
    };

    class History : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const History& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(Classify, classify_);
        DARABONBA_ANY_TO_JSON(CustomConfig, customConfig_);
        DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_ANY_TO_JSON(Option, option_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, History& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(Classify, classify_);
        DARABONBA_ANY_FROM_JSON(CustomConfig, customConfig_);
        DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_ANY_FROM_JSON(Option, option_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      History() = default ;
      History(const History &) = default ;
      History(History &&) = default ;
      History(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~History() = default ;
      History& operator=(const History &) = default ;
      History& operator=(History &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->classify_ == nullptr && this->customConfig_ == nullptr && this->deployStatus_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr
        && this->option_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline History& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // classify Field Functions 
      bool hasClassify() const { return this->classify_ != nullptr;};
      void deleteClassify() { this->classify_ = nullptr;};
      inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
      inline History& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


      // customConfig Field Functions 
      bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
      void deleteCustomConfig() { this->customConfig_ = nullptr;};
      inline       const Darabonba::Json & getCustomConfig() const { DARABONBA_GET(customConfig_) };
      Darabonba::Json & getCustomConfig() { DARABONBA_GET(customConfig_) };
      inline History& setCustomConfig(const Darabonba::Json & customConfig) { DARABONBA_SET_VALUE(customConfig_, customConfig) };
      inline History& setCustomConfig(Darabonba::Json && customConfig) { DARABONBA_SET_RVALUE(customConfig_, customConfig) };


      // deployStatus Field Functions 
      bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
      void deleteDeployStatus() { this->deployStatus_ = nullptr;};
      inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
      inline History& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline History& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline History& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // option Field Functions 
      bool hasOption() const { return this->option_ != nullptr;};
      void deleteOption() { this->option_ = nullptr;};
      inline       const Darabonba::Json & getOption() const { DARABONBA_GET(option_) };
      Darabonba::Json & getOption() { DARABONBA_GET(option_) };
      inline History& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
      inline History& setOption(Darabonba::Json && option) { DARABONBA_SET_RVALUE(option_, option) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline History& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline History& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
      inline History& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // App ID。
      shared_ptr<string> appId_ {};
      // **[Deprecated]** The categorization.
      shared_ptr<string> classify_ {};
      // **[Deprecated]** The configuration details.
      Darabonba::Json customConfig_ {};
      // **[Deprecated]** The publish status.
      shared_ptr<string> deployStatus_ {};
      // The modification time.
      shared_ptr<string> gmtModified_ {};
      // **[Deprecated]** The name.
      shared_ptr<string> name_ {};
      // **[Deprecated]** The preset options.
      Darabonba::Json option_ {};
      // **[Deprecated]** The resource type.
      shared_ptr<string> resourceType_ {};
      // **[Deprecated]** The type.
      shared_ptr<string> type_ {};
      // The version number.
      shared_ptr<int64_t> version_ {};
    };

    virtual bool empty() const override { return this->history_ == nullptr
        && this->publish_ == nullptr && this->requestId_ == nullptr; };
    // history Field Functions 
    bool hasHistory() const { return this->history_ != nullptr;};
    void deleteHistory() { this->history_ = nullptr;};
    inline const vector<ListAppConfigHistoryResponseBody::History> & getHistory() const { DARABONBA_PTR_GET_CONST(history_, vector<ListAppConfigHistoryResponseBody::History>) };
    inline vector<ListAppConfigHistoryResponseBody::History> getHistory() { DARABONBA_PTR_GET(history_, vector<ListAppConfigHistoryResponseBody::History>) };
    inline ListAppConfigHistoryResponseBody& setHistory(const vector<ListAppConfigHistoryResponseBody::History> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
    inline ListAppConfigHistoryResponseBody& setHistory(vector<ListAppConfigHistoryResponseBody::History> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


    // publish Field Functions 
    bool hasPublish() const { return this->publish_ != nullptr;};
    void deletePublish() { this->publish_ = nullptr;};
    inline const vector<ListAppConfigHistoryResponseBody::Publish> & getPublish() const { DARABONBA_PTR_GET_CONST(publish_, vector<ListAppConfigHistoryResponseBody::Publish>) };
    inline vector<ListAppConfigHistoryResponseBody::Publish> getPublish() { DARABONBA_PTR_GET(publish_, vector<ListAppConfigHistoryResponseBody::Publish>) };
    inline ListAppConfigHistoryResponseBody& setPublish(const vector<ListAppConfigHistoryResponseBody::Publish> & publish) { DARABONBA_PTR_SET_VALUE(publish_, publish) };
    inline ListAppConfigHistoryResponseBody& setPublish(vector<ListAppConfigHistoryResponseBody::Publish> && publish) { DARABONBA_PTR_SET_RVALUE(publish_, publish) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAppConfigHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The historical versions.
    shared_ptr<vector<ListAppConfigHistoryResponseBody::History>> history_ {};
    // The published versions.
    shared_ptr<vector<ListAppConfigHistoryResponseBody::Publish>> publish_ {};
    // The ID assigned by the backend to uniquely identify a request. It can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
