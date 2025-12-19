// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEDEPLOYSCHEMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBINSTANCEDEPLOYSCHEMEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpgradeDBInstanceDeploySchemeRequestMultiZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class UpgradeDBInstanceDeploySchemeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBInstanceDeploySchemeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBInstanceDeploySchemeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(MultiZone, multiZone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    UpgradeDBInstanceDeploySchemeRequest() = default ;
    UpgradeDBInstanceDeploySchemeRequest(const UpgradeDBInstanceDeploySchemeRequest &) = default ;
    UpgradeDBInstanceDeploySchemeRequest(UpgradeDBInstanceDeploySchemeRequest &&) = default ;
    UpgradeDBInstanceDeploySchemeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBInstanceDeploySchemeRequest() = default ;
    UpgradeDBInstanceDeploySchemeRequest& operator=(const UpgradeDBInstanceDeploySchemeRequest &) = default ;
    UpgradeDBInstanceDeploySchemeRequest& operator=(UpgradeDBInstanceDeploySchemeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && return this->multiZone_ == nullptr && return this->regionId_ == nullptr && return this->securityToken_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline UpgradeDBInstanceDeploySchemeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // multiZone Field Functions 
    bool hasMultiZone() const { return this->multiZone_ != nullptr;};
    void deleteMultiZone() { this->multiZone_ = nullptr;};
    inline const vector<UpgradeDBInstanceDeploySchemeRequestMultiZone> & multiZone() const { DARABONBA_PTR_GET_CONST(multiZone_, vector<UpgradeDBInstanceDeploySchemeRequestMultiZone>) };
    inline vector<UpgradeDBInstanceDeploySchemeRequestMultiZone> multiZone() { DARABONBA_PTR_GET(multiZone_, vector<UpgradeDBInstanceDeploySchemeRequestMultiZone>) };
    inline UpgradeDBInstanceDeploySchemeRequest& setMultiZone(const vector<UpgradeDBInstanceDeploySchemeRequestMultiZone> & multiZone) { DARABONBA_PTR_SET_VALUE(multiZone_, multiZone) };
    inline UpgradeDBInstanceDeploySchemeRequest& setMultiZone(vector<UpgradeDBInstanceDeploySchemeRequestMultiZone> && multiZone) { DARABONBA_PTR_SET_RVALUE(multiZone_, multiZone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpgradeDBInstanceDeploySchemeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpgradeDBInstanceDeploySchemeRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpgradeDBInstanceDeploySchemeRequestMultiZone>> multiZone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
