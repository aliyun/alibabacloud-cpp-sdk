// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESUBSCRIPTIONREQUEST_HPP_
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
  class UpdateSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest(UpdateSubscriptionRequest &&) = default ;
    UpdateSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSubscriptionRequest() = default ;
    UpdateSubscriptionRequest& operator=(const UpdateSubscriptionRequest &) = default ;
    UpdateSubscriptionRequest& operator=(UpdateSubscriptionRequest &&) = default ;
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
    inline UpdateSubscriptionRequest& setBody(const SubscriptionForModify & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSubscriptionRequest& setBody(SubscriptionForModify && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline UpdateSubscriptionRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<SubscriptionForModify> body_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
