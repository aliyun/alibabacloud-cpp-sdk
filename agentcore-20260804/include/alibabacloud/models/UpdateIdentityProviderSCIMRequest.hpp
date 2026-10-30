// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERSCIMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIDENTITYPROVIDERSCIMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateIdentityProviderSCIMRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIdentityProviderSCIMRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIdentityProviderSCIMRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateIdentityProviderSCIMRequest() = default ;
    UpdateIdentityProviderSCIMRequest(const UpdateIdentityProviderSCIMRequest &) = default ;
    UpdateIdentityProviderSCIMRequest(UpdateIdentityProviderSCIMRequest &&) = default ;
    UpdateIdentityProviderSCIMRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIdentityProviderSCIMRequest() = default ;
    UpdateIdentityProviderSCIMRequest& operator=(const UpdateIdentityProviderSCIMRequest &) = default ;
    UpdateIdentityProviderSCIMRequest& operator=(UpdateIdentityProviderSCIMRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(syncEnabled, syncEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(syncEnabled, syncEnabled_);
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
      virtual bool empty() const override { return this->syncEnabled_ == nullptr; };
      // syncEnabled Field Functions 
      bool hasSyncEnabled() const { return this->syncEnabled_ != nullptr;};
      void deleteSyncEnabled() { this->syncEnabled_ = nullptr;};
      inline bool getSyncEnabled() const { DARABONBA_PTR_GET_DEFAULT(syncEnabled_, false) };
      inline Body& setSyncEnabled(bool syncEnabled) { DARABONBA_PTR_SET_VALUE(syncEnabled_, syncEnabled) };


    protected:
      // Specifies whether to enable synchronization. Do not set this parameter to true during CustomSSO initialization. You can only update this parameter by calling UpdateIdentityProviderSCIM later. Determine the result based on the operationStatus field.
      // 
      // This parameter is required.
      shared_ptr<bool> syncEnabled_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateIdentityProviderSCIMRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateIdentityProviderSCIMRequest::Body) };
    inline UpdateIdentityProviderSCIMRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateIdentityProviderSCIMRequest::Body) };
    inline UpdateIdentityProviderSCIMRequest& setBody(const UpdateIdentityProviderSCIMRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateIdentityProviderSCIMRequest& setBody(UpdateIdentityProviderSCIMRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // Submits the business parameters as described in this API. The body parameters of the public API are mapped to the backend wrapper by the gateway. Do not mix them with the backend direct connection body wrapper.
    // 
    // This parameter is required.
    shared_ptr<UpdateIdentityProviderSCIMRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
