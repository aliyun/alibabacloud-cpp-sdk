// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAccountPrivilegesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivileges, accountPrivilegesShrink_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(PromqlInsertPrivileges, promqlInsertPrivilegesShrink_);
      DARABONBA_PTR_TO_JSON(PromqlSelectNodePercentage, promqlSelectNodePercentage_);
      DARABONBA_PTR_TO_JSON(PromqlSelectPrivileges, promqlSelectPrivilegesShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupName, resourceGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivileges, accountPrivilegesShrink_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(PromqlInsertPrivileges, promqlInsertPrivilegesShrink_);
      DARABONBA_PTR_FROM_JSON(PromqlSelectNodePercentage, promqlSelectNodePercentage_);
      DARABONBA_PTR_FROM_JSON(PromqlSelectPrivileges, promqlSelectPrivilegesShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupName, resourceGroupName_);
    };
    ModifyAccountPrivilegesShrinkRequest() = default ;
    ModifyAccountPrivilegesShrinkRequest(const ModifyAccountPrivilegesShrinkRequest &) = default ;
    ModifyAccountPrivilegesShrinkRequest(ModifyAccountPrivilegesShrinkRequest &&) = default ;
    ModifyAccountPrivilegesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegesShrinkRequest() = default ;
    ModifyAccountPrivilegesShrinkRequest& operator=(const ModifyAccountPrivilegesShrinkRequest &) = default ;
    ModifyAccountPrivilegesShrinkRequest& operator=(ModifyAccountPrivilegesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPrivilegesShrink_ == nullptr && this->DBClusterId_ == nullptr && this->promqlInsertPrivilegesShrink_ == nullptr && this->promqlSelectNodePercentage_ == nullptr && this->promqlSelectPrivilegesShrink_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupName_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivilegesShrink Field Functions 
    bool hasAccountPrivilegesShrink() const { return this->accountPrivilegesShrink_ != nullptr;};
    void deleteAccountPrivilegesShrink() { this->accountPrivilegesShrink_ = nullptr;};
    inline string getAccountPrivilegesShrink() const { DARABONBA_PTR_GET_DEFAULT(accountPrivilegesShrink_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setAccountPrivilegesShrink(string accountPrivilegesShrink) { DARABONBA_PTR_SET_VALUE(accountPrivilegesShrink_, accountPrivilegesShrink) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // promqlInsertPrivilegesShrink Field Functions 
    bool hasPromqlInsertPrivilegesShrink() const { return this->promqlInsertPrivilegesShrink_ != nullptr;};
    void deletePromqlInsertPrivilegesShrink() { this->promqlInsertPrivilegesShrink_ = nullptr;};
    inline string getPromqlInsertPrivilegesShrink() const { DARABONBA_PTR_GET_DEFAULT(promqlInsertPrivilegesShrink_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setPromqlInsertPrivilegesShrink(string promqlInsertPrivilegesShrink) { DARABONBA_PTR_SET_VALUE(promqlInsertPrivilegesShrink_, promqlInsertPrivilegesShrink) };


    // promqlSelectNodePercentage Field Functions 
    bool hasPromqlSelectNodePercentage() const { return this->promqlSelectNodePercentage_ != nullptr;};
    void deletePromqlSelectNodePercentage() { this->promqlSelectNodePercentage_ = nullptr;};
    inline double getPromqlSelectNodePercentage() const { DARABONBA_PTR_GET_DEFAULT(promqlSelectNodePercentage_, 0.0) };
    inline ModifyAccountPrivilegesShrinkRequest& setPromqlSelectNodePercentage(double promqlSelectNodePercentage) { DARABONBA_PTR_SET_VALUE(promqlSelectNodePercentage_, promqlSelectNodePercentage) };


    // promqlSelectPrivilegesShrink Field Functions 
    bool hasPromqlSelectPrivilegesShrink() const { return this->promqlSelectPrivilegesShrink_ != nullptr;};
    void deletePromqlSelectPrivilegesShrink() { this->promqlSelectPrivilegesShrink_ = nullptr;};
    inline string getPromqlSelectPrivilegesShrink() const { DARABONBA_PTR_GET_DEFAULT(promqlSelectPrivilegesShrink_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setPromqlSelectPrivilegesShrink(string promqlSelectPrivilegesShrink) { DARABONBA_PTR_SET_VALUE(promqlSelectPrivilegesShrink_, promqlSelectPrivilegesShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string getResourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ModifyAccountPrivilegesShrinkRequest& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    shared_ptr<string> accountName_ {};
    // The list of granted permissions.
    shared_ptr<string> accountPrivilegesShrink_ {};
    // <props="china">The cluster ID of the Enterprise Edition, Basic Edition, or Data Lakehouse Edition cluster.
    // <props="intl">The cluster ID of the Data Lakehouse Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> promqlInsertPrivilegesShrink_ {};
    shared_ptr<double> promqlSelectNodePercentage_ {};
    shared_ptr<string> promqlSelectPrivilegesShrink_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
