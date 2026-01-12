// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEVSWITCHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEVSWITCHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyInstanceVswitchShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceVswitchShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceVswitchShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIdsShrink_);
    };
    ModifyInstanceVswitchShrinkRequest() = default ;
    ModifyInstanceVswitchShrinkRequest(const ModifyInstanceVswitchShrinkRequest &) = default ;
    ModifyInstanceVswitchShrinkRequest(ModifyInstanceVswitchShrinkRequest &&) = default ;
    ModifyInstanceVswitchShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceVswitchShrinkRequest() = default ;
    ModifyInstanceVswitchShrinkRequest& operator=(const ModifyInstanceVswitchShrinkRequest &) = default ;
    ModifyInstanceVswitchShrinkRequest& operator=(ModifyInstanceVswitchShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVSwitchIdsShrink_ == nullptr
        && this->instanceId_ == nullptr && this->vSwitchIdsShrink_ == nullptr; };
    // haVSwitchIdsShrink Field Functions 
    bool hasHaVSwitchIdsShrink() const { return this->haVSwitchIdsShrink_ != nullptr;};
    void deleteHaVSwitchIdsShrink() { this->haVSwitchIdsShrink_ = nullptr;};
    inline string getHaVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(haVSwitchIdsShrink_, "") };
    inline ModifyInstanceVswitchShrinkRequest& setHaVSwitchIdsShrink(string haVSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(haVSwitchIdsShrink_, haVSwitchIdsShrink) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyInstanceVswitchShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // vSwitchIdsShrink Field Functions 
    bool hasVSwitchIdsShrink() const { return this->vSwitchIdsShrink_ != nullptr;};
    void deleteVSwitchIdsShrink() { this->vSwitchIdsShrink_ = nullptr;};
    inline string getVSwitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIdsShrink_, "") };
    inline ModifyInstanceVswitchShrinkRequest& setVSwitchIdsShrink(string vSwitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vSwitchIdsShrink_, vSwitchIdsShrink) };


  protected:
    shared_ptr<string> haVSwitchIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> vSwitchIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
