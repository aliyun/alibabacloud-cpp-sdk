// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountAuthorityShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountAuthorityShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DmlAuthSetting, dmlAuthSettingShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountAuthorityShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DmlAuthSetting, dmlAuthSettingShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAccountAuthorityShrinkRequest() = default ;
    ModifyAccountAuthorityShrinkRequest(const ModifyAccountAuthorityShrinkRequest &) = default ;
    ModifyAccountAuthorityShrinkRequest(ModifyAccountAuthorityShrinkRequest &&) = default ;
    ModifyAccountAuthorityShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountAuthorityShrinkRequest() = default ;
    ModifyAccountAuthorityShrinkRequest& operator=(const ModifyAccountAuthorityShrinkRequest &) = default ;
    ModifyAccountAuthorityShrinkRequest& operator=(ModifyAccountAuthorityShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->DBInstanceId_ != nullptr && this->dmlAuthSettingShrink_ != nullptr && this->regionId_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyAccountAuthorityShrinkRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAccountAuthorityShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dmlAuthSettingShrink Field Functions 
    bool hasDmlAuthSettingShrink() const { return this->dmlAuthSettingShrink_ != nullptr;};
    void deleteDmlAuthSettingShrink() { this->dmlAuthSettingShrink_ = nullptr;};
    inline string dmlAuthSettingShrink() const { DARABONBA_PTR_GET_DEFAULT(dmlAuthSettingShrink_, "") };
    inline ModifyAccountAuthorityShrinkRequest& setDmlAuthSettingShrink(string dmlAuthSettingShrink) { DARABONBA_PTR_SET_VALUE(dmlAuthSettingShrink_, dmlAuthSettingShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountAuthorityShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> account_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The information about permissions.
    // 
    // This parameter is required.
    std::shared_ptr<string> dmlAuthSettingShrink_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
