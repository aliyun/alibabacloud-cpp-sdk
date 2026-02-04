// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKINSTANCEMODULESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKINSTANCEMODULESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CheckInstanceModuleStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckInstanceModuleStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureKey, featureKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleKey, moduleKey_);
      DARABONBA_PTR_TO_JSON(SubFeatureKey, subFeatureKey_);
    };
    friend void from_json(const Darabonba::Json& j, CheckInstanceModuleStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureKey, featureKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleKey, moduleKey_);
      DARABONBA_PTR_FROM_JSON(SubFeatureKey, subFeatureKey_);
    };
    CheckInstanceModuleStatusRequest() = default ;
    CheckInstanceModuleStatusRequest(const CheckInstanceModuleStatusRequest &) = default ;
    CheckInstanceModuleStatusRequest(CheckInstanceModuleStatusRequest &&) = default ;
    CheckInstanceModuleStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckInstanceModuleStatusRequest() = default ;
    CheckInstanceModuleStatusRequest& operator=(const CheckInstanceModuleStatusRequest &) = default ;
    CheckInstanceModuleStatusRequest& operator=(CheckInstanceModuleStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->featureKey_ == nullptr
        && this->instanceId_ == nullptr && this->moduleKey_ == nullptr && this->subFeatureKey_ == nullptr; };
    // featureKey Field Functions 
    bool hasFeatureKey() const { return this->featureKey_ != nullptr;};
    void deleteFeatureKey() { this->featureKey_ = nullptr;};
    inline string getFeatureKey() const { DARABONBA_PTR_GET_DEFAULT(featureKey_, "") };
    inline CheckInstanceModuleStatusRequest& setFeatureKey(string featureKey) { DARABONBA_PTR_SET_VALUE(featureKey_, featureKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CheckInstanceModuleStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleKey Field Functions 
    bool hasModuleKey() const { return this->moduleKey_ != nullptr;};
    void deleteModuleKey() { this->moduleKey_ = nullptr;};
    inline string getModuleKey() const { DARABONBA_PTR_GET_DEFAULT(moduleKey_, "") };
    inline CheckInstanceModuleStatusRequest& setModuleKey(string moduleKey) { DARABONBA_PTR_SET_VALUE(moduleKey_, moduleKey) };


    // subFeatureKey Field Functions 
    bool hasSubFeatureKey() const { return this->subFeatureKey_ != nullptr;};
    void deleteSubFeatureKey() { this->subFeatureKey_ = nullptr;};
    inline string getSubFeatureKey() const { DARABONBA_PTR_GET_DEFAULT(subFeatureKey_, "") };
    inline CheckInstanceModuleStatusRequest& setSubFeatureKey(string subFeatureKey) { DARABONBA_PTR_SET_VALUE(subFeatureKey_, subFeatureKey) };


  protected:
    // 二级模块标识
    shared_ptr<string> featureKey_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 一级模块标识，必填
    // 
    // This parameter is required.
    shared_ptr<string> moduleKey_ {};
    shared_ptr<string> subFeatureKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
