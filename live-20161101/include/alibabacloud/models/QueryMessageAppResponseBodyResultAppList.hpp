// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGEAPPRESPONSEBODYRESULTAPPLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGEAPPRESPONSEBODYRESULTAPPLIST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class QueryMessageAppResponseBodyResultAppList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageAppResponseBodyResultAppList& obj) { 
      DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageAppResponseBodyResultAppList& obj) { 
      DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryMessageAppResponseBodyResultAppList() = default ;
    QueryMessageAppResponseBodyResultAppList(const QueryMessageAppResponseBodyResultAppList &) = default ;
    QueryMessageAppResponseBodyResultAppList(QueryMessageAppResponseBodyResultAppList &&) = default ;
    QueryMessageAppResponseBodyResultAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageAppResponseBodyResultAppList() = default ;
    QueryMessageAppResponseBodyResultAppList& operator=(const QueryMessageAppResponseBodyResultAppList &) = default ;
    QueryMessageAppResponseBodyResultAppList& operator=(QueryMessageAppResponseBodyResultAppList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appConfig_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->createTime_ == nullptr && return this->extension_ == nullptr && return this->status_ == nullptr; };
    // appConfig Field Functions 
    bool hasAppConfig() const { return this->appConfig_ != nullptr;};
    void deleteAppConfig() { this->appConfig_ = nullptr;};
    inline const map<string, string> & appConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, map<string, string>) };
    inline map<string, string> appConfig() { DARABONBA_PTR_GET(appConfig_, map<string, string>) };
    inline QueryMessageAppResponseBodyResultAppList& setAppConfig(const map<string, string> & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
    inline QueryMessageAppResponseBodyResultAppList& setAppConfig(map<string, string> && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline QueryMessageAppResponseBodyResultAppList& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline QueryMessageAppResponseBodyResultAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline QueryMessageAppResponseBodyResultAppList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const map<string, string> & extension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
    inline map<string, string> extension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
    inline QueryMessageAppResponseBodyResultAppList& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline QueryMessageAppResponseBodyResultAppList& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryMessageAppResponseBodyResultAppList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configurations of the application.
    std::shared_ptr<map<string, string>> appConfig_ = nullptr;
    // The ID of the interactive messaging application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the interactive messaging application.
    std::shared_ptr<string> appName_ = nullptr;
    // The time when the interactive messaging application was created. The time is displayed in UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The extended field.
    std::shared_ptr<map<string, string>> extension_ = nullptr;
    // The status of the interactive message application. A value of **1** indicates that the application is normal.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
