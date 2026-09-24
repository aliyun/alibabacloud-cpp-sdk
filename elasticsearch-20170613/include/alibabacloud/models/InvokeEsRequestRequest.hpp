// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEESREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEESREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class InvokeEsRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeEsRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(system, system_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeEsRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(system, system_);
    };
    InvokeEsRequestRequest() = default ;
    InvokeEsRequestRequest(const InvokeEsRequestRequest &) = default ;
    InvokeEsRequestRequest(InvokeEsRequestRequest &&) = default ;
    InvokeEsRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeEsRequestRequest() = default ;
    InvokeEsRequestRequest& operator=(const InvokeEsRequestRequest &) = default ;
    InvokeEsRequestRequest& operator=(InvokeEsRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->credentialId_ == nullptr && this->method_ == nullptr && this->path_ == nullptr && this->system_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline InvokeEsRequestRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline InvokeEsRequestRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline InvokeEsRequestRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline InvokeEsRequestRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
    inline InvokeEsRequestRequest& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


  protected:
    // The request body passed through to ES. Set this parameter based on the requirements of the target ES API. This parameter is not required for calls such as GET that do not have a request body.
    shared_ptr<string> body_ {};
    // The ID of the credential to use. If this parameter is not specified, the default credential of the instance is used.
    shared_ptr<string> credentialId_ {};
    // The HTTP method used to access ES. Default value: GET.
    shared_ptr<string> method_ {};
    // The ES path to access. This parameter is required. The leading / can be omitted.
    // 
    // This parameter is required.
    shared_ptr<string> path_ {};
    // Specifies whether to use the Alibaba Cloud ES system credential. Default value: false.
    shared_ptr<bool> system_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
