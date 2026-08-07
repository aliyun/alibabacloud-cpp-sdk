// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220926
{
namespace Models
{
  class GetAppConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Classify, classify_);
      DARABONBA_ANY_TO_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_TO_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Option, option_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Classify, classify_);
      DARABONBA_ANY_FROM_JSON(CustomConfig, customConfig_);
      DARABONBA_PTR_FROM_JSON(DeployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Option, option_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetAppConfigResponseBody() = default ;
    GetAppConfigResponseBody(const GetAppConfigResponseBody &) = default ;
    GetAppConfigResponseBody(GetAppConfigResponseBody &&) = default ;
    GetAppConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppConfigResponseBody() = default ;
    GetAppConfigResponseBody& operator=(const GetAppConfigResponseBody &) = default ;
    GetAppConfigResponseBody& operator=(GetAppConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->classify_ == nullptr && this->customConfig_ == nullptr && this->deployStatus_ == nullptr && this->gmtModified_ == nullptr && this->name_ == nullptr
        && this->option_ == nullptr && this->requestId_ == nullptr && this->resourceType_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetAppConfigResponseBody& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // classify Field Functions 
    bool hasClassify() const { return this->classify_ != nullptr;};
    void deleteClassify() { this->classify_ = nullptr;};
    inline string getClassify() const { DARABONBA_PTR_GET_DEFAULT(classify_, "") };
    inline GetAppConfigResponseBody& setClassify(string classify) { DARABONBA_PTR_SET_VALUE(classify_, classify) };


    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline     const Darabonba::Json & getCustomConfig() const { DARABONBA_GET(customConfig_) };
    Darabonba::Json & getCustomConfig() { DARABONBA_GET(customConfig_) };
    inline GetAppConfigResponseBody& setCustomConfig(const Darabonba::Json & customConfig) { DARABONBA_SET_VALUE(customConfig_, customConfig) };
    inline GetAppConfigResponseBody& setCustomConfig(Darabonba::Json && customConfig) { DARABONBA_SET_RVALUE(customConfig_, customConfig) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string getDeployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline GetAppConfigResponseBody& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline GetAppConfigResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAppConfigResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // option Field Functions 
    bool hasOption() const { return this->option_ != nullptr;};
    void deleteOption() { this->option_ = nullptr;};
    inline     const Darabonba::Json & getOption() const { DARABONBA_GET(option_) };
    Darabonba::Json & getOption() { DARABONBA_GET(option_) };
    inline GetAppConfigResponseBody& setOption(const Darabonba::Json & option) { DARABONBA_SET_VALUE(option_, option) };
    inline GetAppConfigResponseBody& setOption(Darabonba::Json && option) { DARABONBA_SET_RVALUE(option_, option) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAppConfigResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAppConfigResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetAppConfigResponseBody& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // App ID。
    shared_ptr<string> appId_ {};
    // The category.
    shared_ptr<string> classify_ {};
    // The configuration details.
    Darabonba::Json customConfig_ {};
    // The publish status.
    shared_ptr<string> deployStatus_ {};
    // The modification time.
    shared_ptr<string> gmtModified_ {};
    // The application name.
    shared_ptr<string> name_ {};
    // The preset options.
    Darabonba::Json option_ {};
    // The ID assigned by the backend to uniquely identify a request. This ID can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The resource type.
    shared_ptr<string> resourceType_ {};
    // The type.
    shared_ptr<string> type_ {};
    // The version number.
    shared_ptr<int64_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220926
#endif
