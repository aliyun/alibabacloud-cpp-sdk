// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODETASKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODETASKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class GetTranscodeTaskStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeTaskStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
      DARABONBA_PTR_TO_JSON(TranscodingTemplate, transcodingTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeTaskStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
      DARABONBA_PTR_FROM_JSON(TranscodingTemplate, transcodingTemplate_);
    };
    GetTranscodeTaskStatusRequest() = default ;
    GetTranscodeTaskStatusRequest(const GetTranscodeTaskStatusRequest &) = default ;
    GetTranscodeTaskStatusRequest(GetTranscodeTaskStatusRequest &&) = default ;
    GetTranscodeTaskStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeTaskStatusRequest() = default ;
    GetTranscodeTaskStatusRequest& operator=(const GetTranscodeTaskStatusRequest &) = default ;
    GetTranscodeTaskStatusRequest& operator=(GetTranscodeTaskStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->pushDomain_ == nullptr && this->securityToken_ == nullptr && this->streamName_ == nullptr && this->transcodingTemplate_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline GetTranscodeTaskStatusRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // pushDomain Field Functions 
    bool hasPushDomain() const { return this->pushDomain_ != nullptr;};
    void deletePushDomain() { this->pushDomain_ = nullptr;};
    inline string getPushDomain() const { DARABONBA_PTR_GET_DEFAULT(pushDomain_, "") };
    inline GetTranscodeTaskStatusRequest& setPushDomain(string pushDomain) { DARABONBA_PTR_SET_VALUE(pushDomain_, pushDomain) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline GetTranscodeTaskStatusRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline GetTranscodeTaskStatusRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


    // transcodingTemplate Field Functions 
    bool hasTranscodingTemplate() const { return this->transcodingTemplate_ != nullptr;};
    void deleteTranscodingTemplate() { this->transcodingTemplate_ = nullptr;};
    inline string getTranscodingTemplate() const { DARABONBA_PTR_GET_DEFAULT(transcodingTemplate_, "") };
    inline GetTranscodeTaskStatusRequest& setTranscodingTemplate(string transcodingTemplate) { DARABONBA_PTR_SET_VALUE(transcodingTemplate_, transcodingTemplate) };


  protected:
    shared_ptr<string> app_ {};
    shared_ptr<string> pushDomain_ {};
    shared_ptr<string> securityToken_ {};
    shared_ptr<string> streamName_ {};
    shared_ptr<string> transcodingTemplate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
