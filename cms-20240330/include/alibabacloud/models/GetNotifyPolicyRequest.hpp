// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTIFYPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNOTIFYPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetNotifyPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotifyPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    GetNotifyPolicyRequest() = default ;
    GetNotifyPolicyRequest(const GetNotifyPolicyRequest &) = default ;
    GetNotifyPolicyRequest(GetNotifyPolicyRequest &&) = default ;
    GetNotifyPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotifyPolicyRequest() = default ;
    GetNotifyPolicyRequest& operator=(const GetNotifyPolicyRequest &) = default ;
    GetNotifyPolicyRequest& operator=(GetNotifyPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuid_ == nullptr
        && this->workspace_ == nullptr; };
    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetNotifyPolicyRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline GetNotifyPolicyRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The unique identifier of the notification policy, returned by the create operation.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
    // The workspace ID. Used to isolate notification policy resources across different business spaces. Example: `default-cms-xxxx-ap-southeast-1`.
    // 
    // This parameter is required.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
