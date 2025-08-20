// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYACCOUNTPRIVILEGESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAccountPrivilegesRequestAccountPrivileges.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ModifyAccountPrivilegesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAccountPrivilegesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPrivileges, accountPrivileges_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAccountPrivilegesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPrivileges, accountPrivileges_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyAccountPrivilegesRequest() = default ;
    ModifyAccountPrivilegesRequest(const ModifyAccountPrivilegesRequest &) = default ;
    ModifyAccountPrivilegesRequest(ModifyAccountPrivilegesRequest &&) = default ;
    ModifyAccountPrivilegesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAccountPrivilegesRequest() = default ;
    ModifyAccountPrivilegesRequest& operator=(const ModifyAccountPrivilegesRequest &) = default ;
    ModifyAccountPrivilegesRequest& operator=(ModifyAccountPrivilegesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountPrivileges_ != nullptr && this->DBClusterId_ != nullptr && this->regionId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ModifyAccountPrivilegesRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPrivileges Field Functions 
    bool hasAccountPrivileges() const { return this->accountPrivileges_ != nullptr;};
    void deleteAccountPrivileges() { this->accountPrivileges_ = nullptr;};
    inline const vector<ModifyAccountPrivilegesRequestAccountPrivileges> & accountPrivileges() const { DARABONBA_PTR_GET_CONST(accountPrivileges_, vector<ModifyAccountPrivilegesRequestAccountPrivileges>) };
    inline vector<ModifyAccountPrivilegesRequestAccountPrivileges> accountPrivileges() { DARABONBA_PTR_GET(accountPrivileges_, vector<ModifyAccountPrivilegesRequestAccountPrivileges>) };
    inline ModifyAccountPrivilegesRequest& setAccountPrivileges(const vector<ModifyAccountPrivilegesRequestAccountPrivileges> & accountPrivileges) { DARABONBA_PTR_SET_VALUE(accountPrivileges_, accountPrivileges) };
    inline ModifyAccountPrivilegesRequest& setAccountPrivileges(vector<ModifyAccountPrivilegesRequestAccountPrivileges> && accountPrivileges) { DARABONBA_PTR_SET_RVALUE(accountPrivileges_, accountPrivileges) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyAccountPrivilegesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAccountPrivilegesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the database account.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountName_ = nullptr;
    // The permissions that you want to grant to the database account.
    // 
    // This parameter is required.
    std::shared_ptr<vector<ModifyAccountPrivilegesRequestAccountPrivileges>> accountPrivileges_ = nullptr;
    // The ID of the AnalyticDB for MySQL Data Lakehouse Edition (V3.0) cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
