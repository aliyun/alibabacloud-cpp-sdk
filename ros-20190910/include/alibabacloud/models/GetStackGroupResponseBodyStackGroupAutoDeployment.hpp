// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODYSTACKGROUPAUTODEPLOYMENT_HPP_
#define ALIBABACLOUD_MODELS_GETSTACKGROUPRESPONSEBODYSTACKGROUPAUTODEPLOYMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetStackGroupResponseBodyStackGroupAutoDeployment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStackGroupResponseBodyStackGroupAutoDeployment& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    friend void from_json(const Darabonba::Json& j, GetStackGroupResponseBodyStackGroupAutoDeployment& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(RetainStacksOnAccountRemoval, retainStacksOnAccountRemoval_);
    };
    GetStackGroupResponseBodyStackGroupAutoDeployment() = default ;
    GetStackGroupResponseBodyStackGroupAutoDeployment(const GetStackGroupResponseBodyStackGroupAutoDeployment &) = default ;
    GetStackGroupResponseBodyStackGroupAutoDeployment(GetStackGroupResponseBodyStackGroupAutoDeployment &&) = default ;
    GetStackGroupResponseBodyStackGroupAutoDeployment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStackGroupResponseBodyStackGroupAutoDeployment() = default ;
    GetStackGroupResponseBodyStackGroupAutoDeployment& operator=(const GetStackGroupResponseBodyStackGroupAutoDeployment &) = default ;
    GetStackGroupResponseBodyStackGroupAutoDeployment& operator=(GetStackGroupResponseBodyStackGroupAutoDeployment &&) = default ;
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
    inline GetStackGroupResponseBodyStackGroupAutoDeployment& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // retainStacksOnAccountRemoval Field Functions 
    bool hasRetainStacksOnAccountRemoval() const { return this->retainStacksOnAccountRemoval_ != nullptr;};
    void deleteRetainStacksOnAccountRemoval() { this->retainStacksOnAccountRemoval_ = nullptr;};
    inline bool retainStacksOnAccountRemoval() const { DARABONBA_PTR_GET_DEFAULT(retainStacksOnAccountRemoval_, false) };
    inline GetStackGroupResponseBodyStackGroupAutoDeployment& setRetainStacksOnAccountRemoval(bool retainStacksOnAccountRemoval) { DARABONBA_PTR_SET_VALUE(retainStacksOnAccountRemoval_, retainStacksOnAccountRemoval) };


  protected:
    // Indicates whether stacks in the member account are retained when the member account is deleted from the folder.
    // 
    // Valid values:
    // 
    // *   true: The stacks are retained.
    // *   false: The stacks are deleted.
    // 
    // >  This parameter is returned only when the Enabled parameter is set to true.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The folder IDs of the resource directory. This parameter is used to deploy stack instances within all the accounts in the folders.
    // 
    // >  This parameter is returned only when the PermissionModel parameter is set to SERVICE_MANAGED.
    std::shared_ptr<bool> retainStacksOnAccountRemoval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
