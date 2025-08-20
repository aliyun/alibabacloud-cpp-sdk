// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODYSTACKGROUPSAUTODEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPSRESPONSEBODYSTACKGROUPSAUTODEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupsResponseBodyStackGroupsAutoDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupsResponseBodyStackGroupsAutoDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupsResponseBodyStackGroupsAutoDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    ListStackGroupsResponseBodyStackGroupsAutoDeployment() = default ;
    ListStackGroupsResponseBodyStackGroupsAutoDeployment(const ListStackGroupsResponseBodyStackGroupsAutoDeployment &) = default ;
    ListStackGroupsResponseBodyStackGroupsAutoDeployment(ListStackGroupsResponseBodyStackGroupsAutoDeployment &&) = default ;
    ListStackGroupsResponseBodyStackGroupsAutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupsResponseBodyStackGroupsAutoDeployment() = default ;
    ListStackGroupsResponseBodyStackGroupsAutoDeployment& operator=(const ListStackGroupsResponseBodyStackGroupsAutoDeployment &) = default ;
    ListStackGroupsResponseBodyStackGroupsAutoDeployment& operator=(ListStackGroupsResponseBodyStackGroupsAutoDeployment &&) = default ;
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
    inline ListStackGroupsResponseBodyStackGroupsAutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // retainStacksOnAccountRemoval Field Functions 
    bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
    void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
    inline bool retainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
    inline ListStackGroupsResponseBodyStackGroupsAutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


  protected:
    // Indicates whether automatic deployment is enabled.
    // 
    // Valid values:
    // 
    // *   true: Automatic deployment is enabled. If you add a member to the folder to which the stack group belongs after automatic deployment is enabled, Resource Orchestration Service (ROS) automatically adds the stack instances in the stack group to the specified region of the member. If you delete the member from the folder, ROS automatically deletes the stack instances in the stack group from the specified region of the member.
    // *   false: Automatic deployment is disabled. After you disable automatic deployment, the stack instances remain unchanged when you change the member in the folder.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Indicates whether the stacks within a member are retained when you delete the member from the folder.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    // 
    // > This parameter is returned only if Enabled is set to true.
    std::shared_ptr<bool> retainStacksOnAccountRemoval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
