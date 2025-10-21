// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTAUTHORITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAccountAuthorityRequestDmlAuthSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyAccountAuthorityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountAuthorityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DmlAuthSetting, dmlAuthSetting_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountAuthorityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DmlAuthSetting, dmlAuthSetting_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAccountAuthorityRequest() = default ;
    ModifyAccountAuthorityRequest(const ModifyAccountAuthorityRequest &) = default ;
    ModifyAccountAuthorityRequest(ModifyAccountAuthorityRequest &&) = default ;
    ModifyAccountAuthorityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountAuthorityRequest() = default ;
    ModifyAccountAuthorityRequest& operator=(const ModifyAccountAuthorityRequest &) = default ;
    ModifyAccountAuthorityRequest& operator=(ModifyAccountAuthorityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && return this->DBInstanceId_ == nullptr && return this->dmlAuthSetting_ == nullptr && return this->regionId_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline ModifyAccountAuthorityRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAccountAuthorityRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // dmlAuthSetting Field Functions 
    bool hasDmlAuthSetting() const { return this->dmlAuthSetting_ != nullptr;};
    void deleteDmlAuthSetting() { this->dmlAuthSetting_ = nullptr;};
    inline const ModifyAccountAuthorityRequestDmlAuthSetting & dmlAuthSetting() const { DARABONBA_PTR_GET_CONST(dmlAuthSetting_, ModifyAccountAuthorityRequestDmlAuthSetting) };
    inline ModifyAccountAuthorityRequestDmlAuthSetting dmlAuthSetting() { DARABONBA_PTR_GET(dmlAuthSetting_, ModifyAccountAuthorityRequestDmlAuthSetting) };
    inline ModifyAccountAuthorityRequest& setDmlAuthSetting(const ModifyAccountAuthorityRequestDmlAuthSetting & dmlAuthSetting) { DARABONBA_PTR_SET_VALUE(dmlAuthSetting_, dmlAuthSetting) };
    inline ModifyAccountAuthorityRequest& setDmlAuthSetting(ModifyAccountAuthorityRequestDmlAuthSetting && dmlAuthSetting) { DARABONBA_PTR_SET_RVALUE(dmlAuthSetting_, dmlAuthSetting) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountAuthorityRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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
    std::shared_ptr<ModifyAccountAuthorityRequestDmlAuthSetting> dmlAuthSetting_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
