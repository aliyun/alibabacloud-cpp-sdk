// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTACKGROUPREQUESTAUTODEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_CREATESTACKGROUPREQUESTAUTODEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateStackGroupRequestAutoDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStackGroupRequestAutoDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStackGroupRequestAutoDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    CreateStackGroupRequestAutoDeployment() = default ;
    CreateStackGroupRequestAutoDeployment(const CreateStackGroupRequestAutoDeployment &) = default ;
    CreateStackGroupRequestAutoDeployment(CreateStackGroupRequestAutoDeployment &&) = default ;
    CreateStackGroupRequestAutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStackGroupRequestAutoDeployment() = default ;
    CreateStackGroupRequestAutoDeployment& operator=(const CreateStackGroupRequestAutoDeployment &) = default ;
    CreateStackGroupRequestAutoDeployment& operator=(CreateStackGroupRequestAutoDeployment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->retainStacksOnAccountRemoval_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateStackGroupRequestAutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // retainStacksOnAccountRemoval Field Functions 
    bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
    void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
    inline bool retainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
    inline CreateStackGroupRequestAutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


  protected:
    // Indicates whether automatic deployment is enabled.
    // 
    // Valid values:
    // 
    // *   true: Automatic deployment is enabled. If you add a member account to the folder to which the stack group belongs after you enable automatic deployment, ROS automatically adds the stacks in the stack group to the member account. If you remove a member account from the folder, ROS automatically deletes the stacks from the member account.
    // *   false: Automatic deployment is disabled. After you disable automatic deployment, the stacks remain unchanged when you add member accounts to or remove member accounts from the folder.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Indicates whether the stacks within a member account are retained when you remove the member account from the folder.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // > You must specify RetainStacksOnAccountRemoval if Enabled is set to true.
    std::shared_ptr<bool> retainStacksOnAccountRemoval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
