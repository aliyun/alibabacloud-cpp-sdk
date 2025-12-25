// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPREPAYINSTANCESPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyPrepayInstanceSpecRequestHaResourceSpec.hpp>
#include <vector>
#include <alibabacloud/models/ModifyPrepayInstanceSpecRequestResourceSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class ModifyPrepayInstanceSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPrepayInstanceSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
    };
    ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest(ModifyPrepayInstanceSpecRequest &&) = default ;
    ModifyPrepayInstanceSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPrepayInstanceSpecRequest() = default ;
    ModifyPrepayInstanceSpecRequest& operator=(const ModifyPrepayInstanceSpecRequest &) = default ;
    ModifyPrepayInstanceSpecRequest& operator=(ModifyPrepayInstanceSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ha_ == nullptr
        && return this->haResourceSpec_ == nullptr && return this->haVSwitchIds_ == nullptr && return this->haZoneId_ == nullptr && return this->instanceId_ == nullptr && return this->region_ == nullptr
        && return this->resourceSpec_ == nullptr; };
    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline ModifyPrepayInstanceSpecRequest& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpec Field Functions 
    bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
    void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
    inline const ModifyPrepayInstanceSpecRequestHaResourceSpec & haResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, ModifyPrepayInstanceSpecRequestHaResourceSpec) };
    inline ModifyPrepayInstanceSpecRequestHaResourceSpec haResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, ModifyPrepayInstanceSpecRequestHaResourceSpec) };
    inline ModifyPrepayInstanceSpecRequest& setHaResourceSpec(const ModifyPrepayInstanceSpecRequestHaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
    inline ModifyPrepayInstanceSpecRequest& setHaResourceSpec(ModifyPrepayInstanceSpecRequestHaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


    // haVSwitchIds Field Functions 
    bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
    void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
    inline const vector<string> & haVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
    inline vector<string> haVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
    inline ModifyPrepayInstanceSpecRequest& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
    inline ModifyPrepayInstanceSpecRequest& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


    // haZoneId Field Functions 
    bool hasHaZoneId() const { return this->haZoneId_ != nullptr;};
    void deleteHaZoneId() { this->haZoneId_ = nullptr;};
    inline string haZoneId() const { DARABONBA_PTR_GET_DEFAULT(haZoneId_, "") };
    inline ModifyPrepayInstanceSpecRequest& setHaZoneId(string haZoneId) { DARABONBA_PTR_SET_VALUE(haZoneId_, haZoneId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyPrepayInstanceSpecRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ModifyPrepayInstanceSpecRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const ModifyPrepayInstanceSpecRequestResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, ModifyPrepayInstanceSpecRequestResourceSpec) };
    inline ModifyPrepayInstanceSpecRequestResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, ModifyPrepayInstanceSpecRequestResourceSpec) };
    inline ModifyPrepayInstanceSpecRequest& setResourceSpec(const ModifyPrepayInstanceSpecRequestResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline ModifyPrepayInstanceSpecRequest& setResourceSpec(ModifyPrepayInstanceSpecRequestResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


  protected:
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<ModifyPrepayInstanceSpecRequestHaResourceSpec> haResourceSpec_ = nullptr;
    std::shared_ptr<vector<string>> haVSwitchIds_ = nullptr;
    std::shared_ptr<string> haZoneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyPrepayInstanceSpecRequestResourceSpec> resourceSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
