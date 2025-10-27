// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCEREQUESTINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHECKRULEINSTANCEREQUESTINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListCheckRuleInstanceRequestInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCheckRuleInstanceRequestInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCheckRuleInstanceRequestInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListCheckRuleInstanceRequestInstanceList() = default ;
    ListCheckRuleInstanceRequestInstanceList(const ListCheckRuleInstanceRequestInstanceList &) = default ;
    ListCheckRuleInstanceRequestInstanceList(ListCheckRuleInstanceRequestInstanceList &&) = default ;
    ListCheckRuleInstanceRequestInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCheckRuleInstanceRequestInstanceList() = default ;
    ListCheckRuleInstanceRequestInstanceList& operator=(const ListCheckRuleInstanceRequestInstanceList &) = default ;
    ListCheckRuleInstanceRequestInstanceList& operator=(ListCheckRuleInstanceRequestInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListCheckRuleInstanceRequestInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListCheckRuleInstanceRequestInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Asset instance ID.
    // > Call the [ListCheckInstanceResult](~~ListCheckInstanceResult~~) interface to get this parameter.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region where the asset is located.
    // > Call the [ListCheckInstanceResult](~~ListCheckInstanceResult~~) interface to get this parameter.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
