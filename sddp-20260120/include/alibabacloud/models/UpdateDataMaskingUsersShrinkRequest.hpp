// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAMASKINGUSERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAMASKINGUSERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class UpdateDataMaskingUsersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataMaskingUsersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthRole, authRole_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(UserList, userListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataMaskingUsersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthRole, authRole_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(UserList, userListShrink_);
    };
    UpdateDataMaskingUsersShrinkRequest() = default ;
    UpdateDataMaskingUsersShrinkRequest(const UpdateDataMaskingUsersShrinkRequest &) = default ;
    UpdateDataMaskingUsersShrinkRequest(UpdateDataMaskingUsersShrinkRequest &&) = default ;
    UpdateDataMaskingUsersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataMaskingUsersShrinkRequest() = default ;
    UpdateDataMaskingUsersShrinkRequest& operator=(const UpdateDataMaskingUsersShrinkRequest &) = default ;
    UpdateDataMaskingUsersShrinkRequest& operator=(UpdateDataMaskingUsersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authRole_ == nullptr
        && this->expireTime_ == nullptr && this->expireTimeOperation_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr
        && this->userListShrink_ == nullptr; };
    // authRole Field Functions 
    bool hasAuthRole() const { return this->authRole_ != nullptr;};
    void deleteAuthRole() { this->authRole_ = nullptr;};
    inline string getAuthRole() const { DARABONBA_PTR_GET_DEFAULT(authRole_, "") };
    inline UpdateDataMaskingUsersShrinkRequest& setAuthRole(string authRole) { DARABONBA_PTR_SET_VALUE(authRole_, authRole) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline UpdateDataMaskingUsersShrinkRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeOperation Field Functions 
    bool hasExpireTimeOperation() const { return this->expireTimeOperation_ != nullptr;};
    void deleteExpireTimeOperation() { this->expireTimeOperation_ = nullptr;};
    inline string getExpireTimeOperation() const { DARABONBA_PTR_GET_DEFAULT(expireTimeOperation_, "") };
    inline UpdateDataMaskingUsersShrinkRequest& setExpireTimeOperation(string expireTimeOperation) { DARABONBA_PTR_SET_VALUE(expireTimeOperation_, expireTimeOperation) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataMaskingUsersShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline UpdateDataMaskingUsersShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline UpdateDataMaskingUsersShrinkRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // userListShrink Field Functions 
    bool hasUserListShrink() const { return this->userListShrink_ != nullptr;};
    void deleteUserListShrink() { this->userListShrink_ = nullptr;};
    inline string getUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(userListShrink_, "") };
    inline UpdateDataMaskingUsersShrinkRequest& setUserListShrink(string userListShrink) { DARABONBA_PTR_SET_VALUE(userListShrink_, userListShrink) };


  protected:
    // The column encryption access permissions. Valid values:
    // 
    // - fullAccess: plaintext access.
    // - restrictedAccess: restricted access.
    // - noneAccess: decryption denied.
    // 
    // noneAccess applies only to ApsaraDB RDS for MySQL instances whose active key pattern is client_key.
    shared_ptr<string> authRole_ {};
    // The expiration time of the plaintext access permissions. Specify a UNIX timestamp in milliseconds since 1970-01-01 00:00:00 UTC. This parameter is required only when ExpireTimeOperation is set to SET. The value must be later than the current time and no later than 2145953410000. The server stores the value with second-level precision. Do not specify this parameter when ExpireTimeOperation is set to PRESERVE or CLEAR.
    shared_ptr<int64_t> expireTime_ {};
    // The action to take on the permission expiration time. Valid values:
    // 
    // - PRESERVE: Retains the existing expiration time.
    // - CLEAR: Clears the expiration time.
    // - SET: Sets the expiration time to the value specified by ExpireTime.
    // 
    // Default value: PRESERVE. Only fullAccess supports configuring a validity period.
    shared_ptr<string> expireTimeOperation_ {};
    // The language of the response description. Valid values:
    // 
    // - zh: Chinese.
    // - en: English.
    shared_ptr<string> lang_ {};
    // The cloud product code. Column encryption supports RDS, POLARDB, and PolarDBX2. If ProductId is also specified, the two parameters must correspond to each other.
    shared_ptr<string> productCode_ {};
    // The cloud product type identifier. Valid values:
    // 
    // - 5: RDS.
    // - 8: POLARDB.
    // - 27: PolarDBX2.
    // 
    // If both ProductId and ProductCode are specified, they must correspond to each other.
    shared_ptr<int64_t> productId_ {};
    // The list of database accounts for which to set permissions.
    shared_ptr<string> userListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
