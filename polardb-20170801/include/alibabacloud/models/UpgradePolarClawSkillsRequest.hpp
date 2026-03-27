// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEPOLARCLAWSKILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEPOLARCLAWSKILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradePolarClawSkillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradePolarClawSkillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UpgradeMethod, upgradeMethod_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradePolarClawSkillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationType, applicationType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UpgradeMethod, upgradeMethod_);
    };
    UpgradePolarClawSkillsRequest() = default ;
    UpgradePolarClawSkillsRequest(const UpgradePolarClawSkillsRequest &) = default ;
    UpgradePolarClawSkillsRequest(UpgradePolarClawSkillsRequest &&) = default ;
    UpgradePolarClawSkillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradePolarClawSkillsRequest() = default ;
    UpgradePolarClawSkillsRequest& operator=(const UpgradePolarClawSkillsRequest &) = default ;
    UpgradePolarClawSkillsRequest& operator=(UpgradePolarClawSkillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationType_ == nullptr && this->regionId_ == nullptr && this->upgradeMethod_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpgradePolarClawSkillsRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationType Field Functions 
    bool hasApplicationType() const { return this->applicationType_ != nullptr;};
    void deleteApplicationType() { this->applicationType_ = nullptr;};
    inline string getApplicationType() const { DARABONBA_PTR_GET_DEFAULT(applicationType_, "") };
    inline UpgradePolarClawSkillsRequest& setApplicationType(string applicationType) { DARABONBA_PTR_SET_VALUE(applicationType_, applicationType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradePolarClawSkillsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // upgradeMethod Field Functions 
    bool hasUpgradeMethod() const { return this->upgradeMethod_ != nullptr;};
    void deleteUpgradeMethod() { this->upgradeMethod_ = nullptr;};
    inline string getUpgradeMethod() const { DARABONBA_PTR_GET_DEFAULT(upgradeMethod_, "") };
    inline UpgradePolarClawSkillsRequest& setUpgradeMethod(string upgradeMethod) { DARABONBA_PTR_SET_VALUE(upgradeMethod_, upgradeMethod) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    shared_ptr<string> applicationType_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<string> upgradeMethod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
