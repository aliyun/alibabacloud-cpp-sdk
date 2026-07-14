// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENOTIFYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENOTIFYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyPolicyConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateNotifyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateNotifyPolicyRequest() = default ;
    CreateNotifyPolicyRequest(const CreateNotifyPolicyRequest &) = default ;
    CreateNotifyPolicyRequest(CreateNotifyPolicyRequest &&) = default ;
    CreateNotifyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNotifyPolicyRequest() = default ;
    CreateNotifyPolicyRequest& operator=(const CreateNotifyPolicyRequest &) = default ;
    CreateNotifyPolicyRequest& operator=(CreateNotifyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->workspace_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const NotifyPolicyConfig & getBody() const { DARABONBA_PTR_GET_CONST(body_, NotifyPolicyConfig) };
    inline NotifyPolicyConfig getBody() { DARABONBA_PTR_GET(body_, NotifyPolicyConfig) };
    inline CreateNotifyPolicyRequest& setBody(const NotifyPolicyConfig & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateNotifyPolicyRequest& setBody(NotifyPolicyConfig && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateNotifyPolicyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The request body, which is the complete notification policy configuration object NotifyPolicyConfig.
    shared_ptr<NotifyPolicyConfig> body_ {};
    // The workspace ID. This parameter is used to isolate notification policy resources across different business spaces.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
