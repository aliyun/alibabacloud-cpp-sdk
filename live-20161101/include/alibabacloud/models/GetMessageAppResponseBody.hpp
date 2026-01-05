// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMESSAGEAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMESSAGEAPPRESPONSEBODY_HPP_
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
  class GetMessageAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMessageAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, GetMessageAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    GetMessageAppResponseBody() = default ;
    GetMessageAppResponseBody(const GetMessageAppResponseBody &) = default ;
    GetMessageAppResponseBody(GetMessageAppResponseBody &&) = default ;
    GetMessageAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMessageAppResponseBody() = default ;
    GetMessageAppResponseBody& operator=(const GetMessageAppResponseBody &) = default ;
    GetMessageAppResponseBody& operator=(GetMessageAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AppConfig, appConfig_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppName, appName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Extension, extension_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AppConfig, appConfig_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppName, appName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Extension, extension_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appConfig_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->createTime_ == nullptr && this->extension_ == nullptr && this->status_ == nullptr; };
      // appConfig Field Functions 
      bool hasAppConfig() const { return this->appConfig_ != nullptr;};
      void deleteAppConfig() { this->appConfig_ = nullptr;};
      inline const map<string, string> & getAppConfig() const { DARABONBA_PTR_GET_CONST(appConfig_, map<string, string>) };
      inline map<string, string> getAppConfig() { DARABONBA_PTR_GET(appConfig_, map<string, string>) };
      inline Result& setAppConfig(const map<string, string> & appConfig) { DARABONBA_PTR_SET_VALUE(appConfig_, appConfig) };
      inline Result& setAppConfig(map<string, string> && appConfig) { DARABONBA_PTR_SET_RVALUE(appConfig_, appConfig) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Result& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appName Field Functions 
      bool hasAppName() const { return this->appName_ != nullptr;};
      void deleteAppName() { this->appName_ = nullptr;};
      inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
      inline Result& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extension Field Functions 
      bool hasExtension() const { return this->extension_ != nullptr;};
      void deleteExtension() { this->extension_ = nullptr;};
      inline const map<string, string> & getExtension() const { DARABONBA_PTR_GET_CONST(extension_, map<string, string>) };
      inline map<string, string> getExtension() { DARABONBA_PTR_GET(extension_, map<string, string>) };
      inline Result& setExtension(const map<string, string> & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
      inline Result& setExtension(map<string, string> && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Result& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The configurations of the application.
      shared_ptr<map<string, string>> appConfig_ {};
      // The ID of the interactive messaging application.
      shared_ptr<string> appId_ {};
      // The name of the interactive messaging application.
      shared_ptr<string> appName_ {};
      // The time when the interactive messaging application was created. The time is displayed in UTC.
      shared_ptr<int64_t> createTime_ {};
      // The extended field.
      shared_ptr<map<string, string>> extension_ {};
      // The status of the interactive message application. A value of 1 indicates that the application is normal.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMessageAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetMessageAppResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetMessageAppResponseBody::Result) };
    inline GetMessageAppResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetMessageAppResponseBody::Result) };
    inline GetMessageAppResponseBody& setResult(const GetMessageAppResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetMessageAppResponseBody& setResult(GetMessageAppResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The returned result.
    shared_ptr<GetMessageAppResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
