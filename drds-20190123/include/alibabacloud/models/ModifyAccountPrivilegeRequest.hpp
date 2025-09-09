// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAccountPrivilegeRequestDbPrivilege.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class ModifyAccountPrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DbPrivilege, dbPrivilege_);
      DARABONBA_PTR_TO_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DbPrivilege, dbPrivilege_);
      DARABONBA_PTR_FROM_JSON(DrdsInstanceId, drdsInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAccountPrivilegeRequest() = default ;
    ModifyAccountPrivilegeRequest(const ModifyAccountPrivilegeRequest &) = default ;
    ModifyAccountPrivilegeRequest(ModifyAccountPrivilegeRequest &&) = default ;
    ModifyAccountPrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegeRequest() = default ;
    ModifyAccountPrivilegeRequest& operator=(const ModifyAccountPrivilegeRequest &) = default ;
    ModifyAccountPrivilegeRequest& operator=(ModifyAccountPrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dbPrivilege_ != nullptr && this->drdsInstanceId_ != nullptr && this->regionId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountPrivilegeRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dbPrivilege Field Functions 
    bool hasDbPrivilege() const { return this->dbPrivilege_ != nullptr;};
    void deleteDbPrivilege() { this->dbPrivilege_ = nullptr;};
    inline const vector<ModifyAccountPrivilegeRequestDbPrivilege> & dbPrivilege() const { DARABONBA_PTR_GET_CONST(dbPrivilege_, vector<ModifyAccountPrivilegeRequestDbPrivilege>) };
    inline vector<ModifyAccountPrivilegeRequestDbPrivilege> dbPrivilege() { DARABONBA_PTR_GET(dbPrivilege_, vector<ModifyAccountPrivilegeRequestDbPrivilege>) };
    inline ModifyAccountPrivilegeRequest& setDbPrivilege(const vector<ModifyAccountPrivilegeRequestDbPrivilege> & dbPrivilege) { DARABONBA_PTR_SET_VALUE(dbPrivilege_, dbPrivilege) };
    inline ModifyAccountPrivilegeRequest& setDbPrivilege(vector<ModifyAccountPrivilegeRequestDbPrivilege> && dbPrivilege) { DARABONBA_PTR_SET_RVALUE(dbPrivilege_, dbPrivilege) };


    // drdsInstanceId Field Functions 
    bool hasDrdsInstanceId() const { return this->drdsInstanceId_ != nullptr;};
    void deleteDrdsInstanceId() { this->drdsInstanceId_ = nullptr;};
    inline string drdsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(drdsInstanceId_, "") };
    inline ModifyAccountPrivilegeRequest& setDrdsInstanceId(string drdsInstanceId) { DARABONBA_PTR_SET_VALUE(drdsInstanceId_, drdsInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountPrivilegeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The username of the account that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<vector<ModifyAccountPrivilegeRequestDbPrivilege>> dbPrivilege_ = nullptr;
    // The ID of the PolarDB-X 1.0 instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> drdsInstanceId_ = nullptr;
    // The ID of the region in which the PolarDB-X 1.0 instance is located.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
