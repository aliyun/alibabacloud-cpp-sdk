// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubscriptionForModify.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateSubscriptionRequest() = default ;
    CreateSubscriptionRequest(const CreateSubscriptionRequest &) = default ;
    CreateSubscriptionRequest(CreateSubscriptionRequest &&) = default ;
    CreateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionRequest() = default ;
    CreateSubscriptionRequest& operator=(const CreateSubscriptionRequest &) = default ;
    CreateSubscriptionRequest& operator=(CreateSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->workspace_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SubscriptionForModify & getBody() const { DARABONBA_PTR_GET_CONST(body_, SubscriptionForModify) };
    inline SubscriptionForModify getBody() { DARABONBA_PTR_GET(body_, SubscriptionForModify) };
    inline CreateSubscriptionRequest& setBody(const SubscriptionForModify & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateSubscriptionRequest& setBody(SubscriptionForModify && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateSubscriptionRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The request body.
    shared_ptr<SubscriptionForModify> body_ {};
    // The name of the workspace.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
