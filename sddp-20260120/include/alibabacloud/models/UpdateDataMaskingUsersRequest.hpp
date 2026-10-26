// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAMASKINGUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAMASKINGUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class UpdateDataMaskingUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataMaskingUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthRole, authRole_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataMaskingUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthRole, authRole_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    UpdateDataMaskingUsersRequest() = default ;
    UpdateDataMaskingUsersRequest(const UpdateDataMaskingUsersRequest &) = default ;
    UpdateDataMaskingUsersRequest(UpdateDataMaskingUsersRequest &&) = default ;
    UpdateDataMaskingUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataMaskingUsersRequest() = default ;
    UpdateDataMaskingUsersRequest& operator=(const UpdateDataMaskingUsersRequest &) = default ;
    UpdateDataMaskingUsersRequest& operator=(UpdateDataMaskingUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AuthDb, authDb_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AuthDb, authDb_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->authDb_ == nullptr && this->instanceId_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline UserList& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // authDb Field Functions 
      bool hasAuthDb() const { return this->authDb_ != nullptr;};
      void deleteAuthDb() { this->authDb_ = nullptr;};
      inline string getAuthDb() const { DARABONBA_PTR_GET_DEFAULT(authDb_, "") };
      inline UserList& setAuthDb(string authDb) { DARABONBA_PTR_SET_VALUE(authDb_, authDb) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UserList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    protected:
      // The name of the database account. Obtain the value from Items[].AccountName in the records returned by ListDataAssetAccounts and pass it as a string exactly as it is. Do not pass Items[].Id. Each AccountId must correspond to the InstanceId in the same item. Accounts with the same name in different instances are considered different targets.
      shared_ptr<string> accountId_ {};
      // The authentication database of MongoDB.
      shared_ptr<string> authDb_ {};
      // The database instance identity. You can obtain the value from Items[].InstanceId returned by ListDataMaskingInstances.
      shared_ptr<string> instanceId_ {};
    };

    virtual bool empty() const override { return this->authRole_ == nullptr
        && this->expireTime_ == nullptr && this->expireTimeOperation_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr
        && this->userList_ == nullptr; };
    // authRole Field Functions 
    bool hasAuthRole() const { return this->authRole_ != nullptr;};
    void deleteAuthRole() { this->authRole_ = nullptr;};
    inline string getAuthRole() const { DARABONBA_PTR_GET_DEFAULT(authRole_, "") };
    inline UpdateDataMaskingUsersRequest& setAuthRole(string authRole) { DARABONBA_PTR_SET_VALUE(authRole_, authRole) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline UpdateDataMaskingUsersRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeOperation Field Functions 
    bool hasExpireTimeOperation() const { return this->expireTimeOperation_ != nullptr;};
    void deleteExpireTimeOperation() { this->expireTimeOperation_ = nullptr;};
    inline string getExpireTimeOperation() const { DARABONBA_PTR_GET_DEFAULT(expireTimeOperation_, "") };
    inline UpdateDataMaskingUsersRequest& setExpireTimeOperation(string expireTimeOperation) { DARABONBA_PTR_SET_VALUE(expireTimeOperation_, expireTimeOperation) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataMaskingUsersRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline UpdateDataMaskingUsersRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline UpdateDataMaskingUsersRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<UpdateDataMaskingUsersRequest::UserList> & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, vector<UpdateDataMaskingUsersRequest::UserList>) };
    inline vector<UpdateDataMaskingUsersRequest::UserList> getUserList() { DARABONBA_PTR_GET(userList_, vector<UpdateDataMaskingUsersRequest::UserList>) };
    inline UpdateDataMaskingUsersRequest& setUserList(const vector<UpdateDataMaskingUsersRequest::UserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline UpdateDataMaskingUsersRequest& setUserList(vector<UpdateDataMaskingUsersRequest::UserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The column encryption access permissions. Valid values: fullAccess: plaintext access. restrictedAccess: restricted access. noneAccess: prohibits decryption. noneAccess applies only to RDS MySQL instances whose current effective key pattern is client_key.
    shared_ptr<string> authRole_ {};
    // The expiration time of the plaintext access permissions. The value is a UNIX timestamp in milliseconds since 00:00:00 UTC on January 1, 1970. Specify this parameter only when ExpireTimeOperation is set to SET. The value must be later than the current time and no greater than 2145953410000. The server saves the value with second-level precision. Do not specify this parameter when ExpireTimeOperation is set to PRESERVE or CLEAR.
    shared_ptr<int64_t> expireTime_ {};
    // The processing method for the permission expiration time. Valid values: PRESERVE: retains the original expiration time. CLEAR: clears the expiration time. SET: sets the expiration time to the value of ExpireTime. Default value: PRESERVE. Only fullAccess supports setting an expiration time.
    shared_ptr<string> expireTimeOperation_ {};
    // The language of the response description. Valid values: zh: Chinese. en: English.
    shared_ptr<string> lang_ {};
    // The cloud product code. Column encryption supports RDS, POLARDB, and PolarDBX2. If ProductId is also provided, the two parameters must match.
    shared_ptr<string> productCode_ {};
    // The cloud product type identifier. Valid values: 5: RDS. 8: POLARDB. 27: PolarDBX2. If specified together with ProductCode, the values must match.
    shared_ptr<int64_t> productId_ {};
    // The list of database accounts for which you want to set permissions.
    shared_ptr<vector<UpdateDataMaskingUsersRequest::UserList>> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
