// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERINFOBYACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERINFOBYACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserInfoByAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserInfoByAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Account, account_);
      DARABONBA_PTR_TO_JSON(ParentAccountName, parentAccountName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserInfoByAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Account, account_);
      DARABONBA_PTR_FROM_JSON(ParentAccountName, parentAccountName_);
    };
    QueryUserInfoByAccountRequest() = default ;
    QueryUserInfoByAccountRequest(const QueryUserInfoByAccountRequest &) = default ;
    QueryUserInfoByAccountRequest(QueryUserInfoByAccountRequest &&) = default ;
    QueryUserInfoByAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserInfoByAccountRequest() = default ;
    QueryUserInfoByAccountRequest& operator=(const QueryUserInfoByAccountRequest &) = default ;
    QueryUserInfoByAccountRequest& operator=(QueryUserInfoByAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->account_ == nullptr
        && this->parentAccountName_ == nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string getAccount() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline QueryUserInfoByAccountRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // parentAccountName Field Functions 
    bool hasParentAccountName() const { return this->parentAccountName_ != nullptr;};
    void deleteParentAccountName() { this->parentAccountName_ = nullptr;};
    inline string getParentAccountName() const { DARABONBA_PTR_GET_DEFAULT(parentAccountName_, "") };
    inline QueryUserInfoByAccountRequest& setParentAccountName(string parentAccountName) { DARABONBA_PTR_SET_VALUE(parentAccountName_, parentAccountName) };


  protected:
    // The Alibaba Cloud account name or Alibaba Cloud ID of the user.
    // 
    // - If you enter an account name:
    // 
    //   - If the organization member is a root account, such as `main_account`, enter the root account name. For example, `main_account`.
    // 
    //   - If the organization member is a RAM user, such as `zhangsan@test.onaliyun.com`, enter the prefix of the username before the at sign (@). For example, `zhangsan`.
    // 
    // - If you enter an Alibaba Cloud ID:
    // 
    //   - Enter the complete user ID (UID) of the account.
    // 
    // This parameter is required.
    shared_ptr<string> account_ {};
    // To resolve a "duplicate user" error when querying a RAM user, specify the name of the root account to which the user belongs.
    shared_ptr<string> parentAccountName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
