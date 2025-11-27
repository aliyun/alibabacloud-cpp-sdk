// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCEREQUESTMIGRATEAZ_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCEREQUESTMIGRATEAZ_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyInstanceRequestMigrateAZ : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyInstanceRequestMigrateAZ& obj) { 
      DARABONBA_PTR_TO_JSON(dbProxyEndpointId, dbProxyEndpointId_);
      DARABONBA_PTR_TO_JSON(destVSwitchId, destVSwitchId_);
      DARABONBA_PTR_TO_JSON(destVpcId, destVpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyInstanceRequestMigrateAZ& obj) { 
      DARABONBA_PTR_FROM_JSON(dbProxyEndpointId, dbProxyEndpointId_);
      DARABONBA_PTR_FROM_JSON(destVSwitchId, destVSwitchId_);
      DARABONBA_PTR_FROM_JSON(destVpcId, destVpcId_);
    };
    ModifyDBProxyInstanceRequestMigrateAZ() = default ;
    ModifyDBProxyInstanceRequestMigrateAZ(const ModifyDBProxyInstanceRequestMigrateAZ &) = default ;
    ModifyDBProxyInstanceRequestMigrateAZ(ModifyDBProxyInstanceRequestMigrateAZ &&) = default ;
    ModifyDBProxyInstanceRequestMigrateAZ(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyInstanceRequestMigrateAZ() = default ;
    ModifyDBProxyInstanceRequestMigrateAZ& operator=(const ModifyDBProxyInstanceRequestMigrateAZ &) = default ;
    ModifyDBProxyInstanceRequestMigrateAZ& operator=(ModifyDBProxyInstanceRequestMigrateAZ &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbProxyEndpointId_ == nullptr
        && return this->destVSwitchId_ == nullptr && return this->destVpcId_ == nullptr; };
    // dbProxyEndpointId Field Functions 
    bool hasDbProxyEndpointId() const { return this->dbProxyEndpointId_ != nullptr;};
    void deleteDbProxyEndpointId() { this->dbProxyEndpointId_ = nullptr;};
    inline string dbProxyEndpointId() const { DARABONBA_PTR_GET_DEFAULT(dbProxyEndpointId_, "") };
    inline ModifyDBProxyInstanceRequestMigrateAZ& setDbProxyEndpointId(string dbProxyEndpointId) { DARABONBA_PTR_SET_VALUE(dbProxyEndpointId_, dbProxyEndpointId) };


    // destVSwitchId Field Functions 
    bool hasDestVSwitchId() const { return this->destVSwitchId_ != nullptr;};
    void deleteDestVSwitchId() { this->destVSwitchId_ = nullptr;};
    inline string destVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(destVSwitchId_, "") };
    inline ModifyDBProxyInstanceRequestMigrateAZ& setDestVSwitchId(string destVSwitchId) { DARABONBA_PTR_SET_VALUE(destVSwitchId_, destVSwitchId) };


    // destVpcId Field Functions 
    bool hasDestVpcId() const { return this->destVpcId_ != nullptr;};
    void deleteDestVpcId() { this->destVpcId_ = nullptr;};
    inline string destVpcId() const { DARABONBA_PTR_GET_DEFAULT(destVpcId_, "") };
    inline ModifyDBProxyInstanceRequestMigrateAZ& setDestVpcId(string destVpcId) { DARABONBA_PTR_SET_VALUE(destVpcId_, destVpcId) };


  protected:
    // The proxy connection address ID. You can obtain it through the DescribeDBProxyEndpoint interface.
    // 
    // > This parameter is required when MigrateAZ is selected.
    std::shared_ptr<string> dbProxyEndpointId_ = nullptr;
    // The target VSwitchId corresponding to the proxy instance migration.
    // 
    // > This parameter is required when MigrateAZ is selected.
    std::shared_ptr<string> destVSwitchId_ = nullptr;
    // The target vpc id corresponding to the proxy instance migration.
    std::shared_ptr<string> destVpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
