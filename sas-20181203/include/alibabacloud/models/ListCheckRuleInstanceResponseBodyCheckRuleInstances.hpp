// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCERESPONSEBODYCHECKRULEINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCERESPONSEBODYCHECKRULEINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckRuleInstanceResponseBodyCheckRuleInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleInstanceResponseBodyCheckRuleInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleInstanceResponseBodyCheckRuleInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListCheckRuleInstanceResponseBodyCheckRuleInstances() = default ;
    ListCheckRuleInstanceResponseBodyCheckRuleInstances(const ListCheckRuleInstanceResponseBodyCheckRuleInstances &) = default ;
    ListCheckRuleInstanceResponseBodyCheckRuleInstances(ListCheckRuleInstanceResponseBodyCheckRuleInstances &&) = default ;
    ListCheckRuleInstanceResponseBodyCheckRuleInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleInstanceResponseBodyCheckRuleInstances() = default ;
    ListCheckRuleInstanceResponseBodyCheckRuleInstances& operator=(const ListCheckRuleInstanceResponseBodyCheckRuleInstances &) = default ;
    ListCheckRuleInstanceResponseBodyCheckRuleInstances& operator=(ListCheckRuleInstanceResponseBodyCheckRuleInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCheckRuleInstanceResponseBodyCheckRuleInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListCheckRuleInstanceResponseBodyCheckRuleInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCheckRuleInstanceResponseBodyCheckRuleInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The instance ID of the asset.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
