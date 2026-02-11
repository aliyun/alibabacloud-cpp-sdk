// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class CreateWehookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWehookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_TO_JSON(HttpParams, httpParams_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWehookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_FROM_JSON(HttpParams, httpParams_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateWehookRequest() = default ;
    CreateWehookRequest(const CreateWehookRequest &) = default ;
    CreateWehookRequest(CreateWehookRequest &&) = default ;
    CreateWehookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWehookRequest() = default ;
    CreateWehookRequest& operator=(const CreateWehookRequest &) = default ;
    CreateWehookRequest& operator=(CreateWehookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->contactName_ == nullptr && this->httpHeaders_ == nullptr && this->httpParams_ == nullptr && this->method_ == nullptr && this->regionId_ == nullptr
        && this->url_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateWehookRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateWehookRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // httpHeaders Field Functions 
    bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
    void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
    inline string getHttpHeaders() const { DARABONBA_PTR_GET_DEFAULT(httpHeaders_, "") };
    inline CreateWehookRequest& setHttpHeaders(string httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };


    // httpParams Field Functions 
    bool hasHttpParams() const { return this->httpParams_ != nullptr;};
    void deleteHttpParams() { this->httpParams_ = nullptr;};
    inline string getHttpParams() const { DARABONBA_PTR_GET_DEFAULT(httpParams_, "") };
    inline CreateWehookRequest& setHttpParams(string httpParams) { DARABONBA_PTR_SET_VALUE(httpParams_, httpParams) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateWehookRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWehookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateWehookRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> body_ {};
    // This parameter is required.
    shared_ptr<string> contactName_ {};
    shared_ptr<string> httpHeaders_ {};
    shared_ptr<string> httpParams_ {};
    shared_ptr<string> method_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
