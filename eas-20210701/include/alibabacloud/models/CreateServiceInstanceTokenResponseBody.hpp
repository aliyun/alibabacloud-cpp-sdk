// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEINSTANCETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEINSTANCETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateServiceInstanceTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceInstanceTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StreamlogUrl, streamlogUrl_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkbenchUrl, workbenchUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceInstanceTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StreamlogUrl, streamlogUrl_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkbenchUrl, workbenchUrl_);
    };
    CreateServiceInstanceTokenResponseBody() = default ;
    CreateServiceInstanceTokenResponseBody(const CreateServiceInstanceTokenResponseBody &) = default ;
    CreateServiceInstanceTokenResponseBody(CreateServiceInstanceTokenResponseBody &&) = default ;
    CreateServiceInstanceTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceInstanceTokenResponseBody() = default ;
    CreateServiceInstanceTokenResponseBody& operator=(const CreateServiceInstanceTokenResponseBody &) = default ;
    CreateServiceInstanceTokenResponseBody& operator=(CreateServiceInstanceTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->streamlogUrl_ == nullptr && this->token_ == nullptr && this->url_ == nullptr && this->workbenchUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceInstanceTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // streamlogUrl Field Functions 
    bool hasStreamlogUrl() const { return this->streamlogUrl_ != nullptr;};
    void deleteStreamlogUrl() { this->streamlogUrl_ = nullptr;};
    inline string getStreamlogUrl() const { DARABONBA_PTR_GET_DEFAULT(streamlogUrl_, "") };
    inline CreateServiceInstanceTokenResponseBody& setStreamlogUrl(string streamlogUrl) { DARABONBA_PTR_SET_VALUE(streamlogUrl_, streamlogUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateServiceInstanceTokenResponseBody& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateServiceInstanceTokenResponseBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workbenchUrl Field Functions 
    bool hasWorkbenchUrl() const { return this->workbenchUrl_ != nullptr;};
    void deleteWorkbenchUrl() { this->workbenchUrl_ = nullptr;};
    inline string getWorkbenchUrl() const { DARABONBA_PTR_GET_DEFAULT(workbenchUrl_, "") };
    inline CreateServiceInstanceTokenResponseBody& setWorkbenchUrl(string workbenchUrl) { DARABONBA_PTR_SET_VALUE(workbenchUrl_, workbenchUrl) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<string> streamlogUrl_ {};
    shared_ptr<string> token_ {};
    shared_ptr<string> url_ {};
    shared_ptr<string> workbenchUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
