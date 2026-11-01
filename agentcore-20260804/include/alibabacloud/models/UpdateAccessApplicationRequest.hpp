// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEACCESSAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEACCESSAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateAccessApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAccessApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateAccessApplicationRequest() = default ;
    UpdateAccessApplicationRequest(const UpdateAccessApplicationRequest &) = default ;
    UpdateAccessApplicationRequest(UpdateAccessApplicationRequest &&) = default ;
    UpdateAccessApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAccessApplicationRequest() = default ;
    UpdateAccessApplicationRequest& operator=(const UpdateAccessApplicationRequest &) = default ;
    UpdateAccessApplicationRequest& operator=(UpdateAccessApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(applicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(redirectUris, redirectUris_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(applicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(redirectUris, redirectUris_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationName_ == nullptr
        && this->redirectUris_ == nullptr; };
      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Body& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // redirectUris Field Functions 
      bool hasRedirectUris() const { return this->redirectUris_ != nullptr;};
      void deleteRedirectUris() { this->redirectUris_ = nullptr;};
      inline const vector<string> & getRedirectUris() const { DARABONBA_PTR_GET_CONST(redirectUris_, vector<string>) };
      inline vector<string> getRedirectUris() { DARABONBA_PTR_GET(redirectUris_, vector<string>) };
      inline Body& setRedirectUris(const vector<string> & redirectUris) { DARABONBA_PTR_SET_VALUE(redirectUris_, redirectUris) };
      inline Body& setRedirectUris(vector<string> && redirectUris) { DARABONBA_PTR_SET_RVALUE(redirectUris_, redirectUris) };


    protected:
      // The name of the access application.
      shared_ptr<string> applicationName_ {};
      // The list of redirect URIs.
      shared_ptr<vector<string>> redirectUris_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateAccessApplicationRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateAccessApplicationRequest::Body) };
    inline UpdateAccessApplicationRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateAccessApplicationRequest::Body) };
    inline UpdateAccessApplicationRequest& setBody(const UpdateAccessApplicationRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateAccessApplicationRequest& setBody(UpdateAccessApplicationRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body for updating the access application.
    // 
    // This parameter is required.
    shared_ptr<UpdateAccessApplicationRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
