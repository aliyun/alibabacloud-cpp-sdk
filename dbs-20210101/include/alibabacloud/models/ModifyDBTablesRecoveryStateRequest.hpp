// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBTABLESRECOVERYSTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBTABLESRECOVERYSTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class ModifyDBTablesRecoveryStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBTablesRecoveryStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(Retention, retention_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBTablesRecoveryStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(Retention, retention_);
    };
    ModifyDBTablesRecoveryStateRequest() = default ;
    ModifyDBTablesRecoveryStateRequest(const ModifyDBTablesRecoveryStateRequest &) = default ;
    ModifyDBTablesRecoveryStateRequest(ModifyDBTablesRecoveryStateRequest &&) = default ;
    ModifyDBTablesRecoveryStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBTablesRecoveryStateRequest() = default ;
    ModifyDBTablesRecoveryStateRequest& operator=(const ModifyDBTablesRecoveryStateRequest &) = default ;
    ModifyDBTablesRecoveryStateRequest& operator=(ModifyDBTablesRecoveryStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->clusterName_ == nullptr && this->instanceId_ == nullptr && this->regionCode_ == nullptr && this->retention_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ModifyDBTablesRecoveryStateRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ModifyDBTablesRecoveryStateRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyDBTablesRecoveryStateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline ModifyDBTablesRecoveryStateRequest& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // retention Field Functions 
    bool hasRetention() const { return this->retention_ != nullptr;};
    void deleteRetention() { this->retention_ = nullptr;};
    inline string getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, "") };
    inline ModifyDBTablesRecoveryStateRequest& setRetention(string retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


  protected:
    shared_ptr<string> category_ {};
    shared_ptr<string> clusterName_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> regionCode_ {};
    shared_ptr<string> retention_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
