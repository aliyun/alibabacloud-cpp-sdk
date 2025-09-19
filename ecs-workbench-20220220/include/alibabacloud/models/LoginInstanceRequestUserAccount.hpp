// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTUSERACCOUNT_HPP_
#define ALIBABACLOUD_MODELS_LOGININSTANCEREQUESTUSERACCOUNT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LoginInstanceRequestUserAccountOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EcsWorkbench20220220
{
namespace Models
{
  class LoginInstanceRequestUserAccount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoginInstanceRequestUserAccount& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountPlatform, accountPlatform_);
      DARABONBA_PTR_TO_JSON(AccountStructure, accountStructure_);
      DARABONBA_PTR_TO_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_TO_JSON(EmpId, empId_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, LoginInstanceRequestUserAccount& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountPlatform, accountPlatform_);
      DARABONBA_PTR_FROM_JSON(AccountStructure, accountStructure_);
      DARABONBA_PTR_FROM_JSON(DurationSeconds, durationSeconds_);
      DARABONBA_PTR_FROM_JSON(EmpId, empId_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    LoginInstanceRequestUserAccount() = default ;
    LoginInstanceRequestUserAccount(const LoginInstanceRequestUserAccount &) = default ;
    LoginInstanceRequestUserAccount(LoginInstanceRequestUserAccount &&) = default ;
    LoginInstanceRequestUserAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoginInstanceRequestUserAccount() = default ;
    LoginInstanceRequestUserAccount& operator=(const LoginInstanceRequestUserAccount &) = default ;
    LoginInstanceRequestUserAccount& operator=(LoginInstanceRequestUserAccount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->accountPlatform_ != nullptr && this->accountStructure_ != nullptr && this->durationSeconds_ != nullptr && this->empId_ != nullptr && this->expireTime_ != nullptr
        && this->loginName_ != nullptr && this->options_ != nullptr && this->parentId_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline LoginInstanceRequestUserAccount& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountPlatform Field Functions 
    bool hasAccountPlatform() const { return this->accountPlatform_ != nullptr;};
    void deleteAccountPlatform() { this->accountPlatform_ = nullptr;};
    inline string accountPlatform() const { DARABONBA_PTR_GET_DEFAULT(accountPlatform_, "") };
    inline LoginInstanceRequestUserAccount& setAccountPlatform(string accountPlatform) { DARABONBA_PTR_SET_VALUE(accountPlatform_, accountPlatform) };


    // accountStructure Field Functions 
    bool hasAccountStructure() const { return this->accountStructure_ != nullptr;};
    void deleteAccountStructure() { this->accountStructure_ = nullptr;};
    inline string accountStructure() const { DARABONBA_PTR_GET_DEFAULT(accountStructure_, "") };
    inline LoginInstanceRequestUserAccount& setAccountStructure(string accountStructure) { DARABONBA_PTR_SET_VALUE(accountStructure_, accountStructure) };


    // durationSeconds Field Functions 
    bool hasDurationSeconds() const { return this->durationSeconds_ != nullptr;};
    void deleteDurationSeconds() { this->durationSeconds_ = nullptr;};
    inline int64_t durationSeconds() const { DARABONBA_PTR_GET_DEFAULT(durationSeconds_, 0L) };
    inline LoginInstanceRequestUserAccount& setDurationSeconds(int64_t durationSeconds) { DARABONBA_PTR_SET_VALUE(durationSeconds_, durationSeconds) };


    // empId Field Functions 
    bool hasEmpId() const { return this->empId_ != nullptr;};
    void deleteEmpId() { this->empId_ = nullptr;};
    inline string empId() const { DARABONBA_PTR_GET_DEFAULT(empId_, "") };
    inline LoginInstanceRequestUserAccount& setEmpId(string empId) { DARABONBA_PTR_SET_VALUE(empId_, empId) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline LoginInstanceRequestUserAccount& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline LoginInstanceRequestUserAccount& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline const Models::LoginInstanceRequestUserAccountOptions & options() const { DARABONBA_PTR_GET_CONST(options_, Models::LoginInstanceRequestUserAccountOptions) };
    inline Models::LoginInstanceRequestUserAccountOptions options() { DARABONBA_PTR_GET(options_, Models::LoginInstanceRequestUserAccountOptions) };
    inline LoginInstanceRequestUserAccount& setOptions(const Models::LoginInstanceRequestUserAccountOptions & options) { DARABONBA_PTR_SET_VALUE(options_, options) };
    inline LoginInstanceRequestUserAccount& setOptions(Models::LoginInstanceRequestUserAccountOptions && options) { DARABONBA_PTR_SET_RVALUE(options_, options) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline LoginInstanceRequestUserAccount& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    std::shared_ptr<int64_t> accountId_ = nullptr;
    std::shared_ptr<string> accountPlatform_ = nullptr;
    std::shared_ptr<string> accountStructure_ = nullptr;
    std::shared_ptr<int64_t> durationSeconds_ = nullptr;
    std::shared_ptr<string> empId_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> loginName_ = nullptr;
    std::shared_ptr<Models::LoginInstanceRequestUserAccountOptions> options_ = nullptr;
    std::shared_ptr<int64_t> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EcsWorkbench20220220
#endif
