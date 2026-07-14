// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLENOTIFYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLENOTIFYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class EnableNotifyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, EnableNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    EnableNotifyPolicyRequest() = default ;
    EnableNotifyPolicyRequest(const EnableNotifyPolicyRequest &) = default ;
    EnableNotifyPolicyRequest(EnableNotifyPolicyRequest &&) = default ;
    EnableNotifyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableNotifyPolicyRequest() = default ;
    EnableNotifyPolicyRequest& operator=(const EnableNotifyPolicyRequest &) = default ;
    EnableNotifyPolicyRequest& operator=(EnableNotifyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->workspace_ == nullptr; };
    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline EnableNotifyPolicyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
