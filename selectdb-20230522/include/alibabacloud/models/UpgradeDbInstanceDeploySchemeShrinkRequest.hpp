// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEDEPLOYSCHEMESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEDEPLOYSCHEMESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class UpgradeDBInstanceDeploySchemeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceDeploySchemeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZoneShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceDeploySchemeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZoneShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    UpgradeDBInstanceDeploySchemeShrinkRequest() = default ;
    UpgradeDBInstanceDeploySchemeShrinkRequest(const UpgradeDBInstanceDeploySchemeShrinkRequest &) = default ;
    UpgradeDBInstanceDeploySchemeShrinkRequest(UpgradeDBInstanceDeploySchemeShrinkRequest &&) = default ;
    UpgradeDBInstanceDeploySchemeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceDeploySchemeShrinkRequest() = default ;
    UpgradeDBInstanceDeploySchemeShrinkRequest& operator=(const UpgradeDBInstanceDeploySchemeShrinkRequest &) = default ;
    UpgradeDBInstanceDeploySchemeShrinkRequest& operator=(UpgradeDBInstanceDeploySchemeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->multiZoneShrink_ == nullptr && return this->regionId_ == nullptr && return this->securityToken_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceDeploySchemeShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // multiZoneShrink Field Functions 
    bool hasMultiZoneShrink() const { return this->multiZoneShrink_ != nullptr;};
    void deleteMultiZoneShrink() { this->multiZoneShrink_ = nullptr;};
    inline string multiZoneShrink() const { DARABONBA_PTR_GET_DEFAULT(multiZoneShrink_, "") };
    inline UpgradeDBInstanceDeploySchemeShrinkRequest& setMultiZoneShrink(string multiZoneShrink) { DARABONBA_PTR_SET_VALUE(multiZoneShrink_, multiZoneShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeDBInstanceDeploySchemeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpgradeDBInstanceDeploySchemeShrinkRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> multiZoneShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
