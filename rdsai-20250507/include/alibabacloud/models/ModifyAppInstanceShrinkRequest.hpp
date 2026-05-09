// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyAppInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Components, componentsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Components, componentsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAppInstanceShrinkRequest() = default ;
    ModifyAppInstanceShrinkRequest(const ModifyAppInstanceShrinkRequest &) = default ;
    ModifyAppInstanceShrinkRequest(ModifyAppInstanceShrinkRequest &&) = default ;
    ModifyAppInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppInstanceShrinkRequest() = default ;
    ModifyAppInstanceShrinkRequest& operator=(const ModifyAppInstanceShrinkRequest &) = default ;
    ModifyAppInstanceShrinkRequest& operator=(ModifyAppInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->componentsShrink_ == nullptr && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // componentsShrink Field Functions 
    bool hasComponentsShrink() const { return this->componentsShrink_ != nullptr;};
    void deleteComponentsShrink() { this->componentsShrink_ = nullptr;};
    inline string getComponentsShrink() const { DARABONBA_PTR_GET_DEFAULT(componentsShrink_, "") };
    inline ModifyAppInstanceShrinkRequest& setComponentsShrink(string componentsShrink) { DARABONBA_PTR_SET_VALUE(componentsShrink_, componentsShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyAppInstanceShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAppInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> componentsShrink_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
