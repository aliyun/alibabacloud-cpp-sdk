// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERAUTOUPGRADEMINORVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERAUTOUPGRADEMINORVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterAutoUpgradeMinorVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterAutoUpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterAutoUpgradeMinorVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpgradeMinorVersion, autoUpgradeMinorVersion_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
    };
    ModifyDBClusterAutoUpgradeMinorVersionRequest() = default ;
    ModifyDBClusterAutoUpgradeMinorVersionRequest(const ModifyDBClusterAutoUpgradeMinorVersionRequest &) = default ;
    ModifyDBClusterAutoUpgradeMinorVersionRequest(ModifyDBClusterAutoUpgradeMinorVersionRequest &&) = default ;
    ModifyDBClusterAutoUpgradeMinorVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterAutoUpgradeMinorVersionRequest() = default ;
    ModifyDBClusterAutoUpgradeMinorVersionRequest& operator=(const ModifyDBClusterAutoUpgradeMinorVersionRequest &) = default ;
    ModifyDBClusterAutoUpgradeMinorVersionRequest& operator=(ModifyDBClusterAutoUpgradeMinorVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgradeMinorVersion_ == nullptr
        && this->DBClusterId_ == nullptr; };
    // autoUpgradeMinorVersion Field Functions 
    bool hasAutoUpgradeMinorVersion() const { return this->autoUpgradeMinorVersion_ != nullptr;};
    void deleteAutoUpgradeMinorVersion() { this->autoUpgradeMinorVersion_ = nullptr;};
    inline string getAutoUpgradeMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(autoUpgradeMinorVersion_, "") };
    inline ModifyDBClusterAutoUpgradeMinorVersionRequest& setAutoUpgradeMinorVersion(string autoUpgradeMinorVersion) { DARABONBA_PTR_SET_VALUE(autoUpgradeMinorVersion_, autoUpgradeMinorVersion) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterAutoUpgradeMinorVersionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


  protected:
    // The minor engine version update policy. Valid values: Auto: automatic update. Manual: manual update.
    // 
    // This parameter is required.
    shared_ptr<string> autoUpgradeMinorVersion_ {};
    // The ID of the PolarDB cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
