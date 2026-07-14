// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLENOTIFYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLENOTIFYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class DisableNotifyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, DisableNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    DisableNotifyPolicyRequest() = default ;
    DisableNotifyPolicyRequest(const DisableNotifyPolicyRequest &) = default ;
    DisableNotifyPolicyRequest(DisableNotifyPolicyRequest &&) = default ;
    DisableNotifyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableNotifyPolicyRequest() = default ;
    DisableNotifyPolicyRequest& operator=(const DisableNotifyPolicyRequest &) = default ;
    DisableNotifyPolicyRequest& operator=(DisableNotifyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspace_ == nullptr; };
    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline DisableNotifyPolicyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The workspace ID. Used to isolate notification policy resources across different business spaces.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
