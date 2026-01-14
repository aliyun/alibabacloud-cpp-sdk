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
    // Enter the name or ID of the Alibaba Cloud account that you want to query.
    // 
    // *   When you enter an account name:
    // 
    //     *   If the organization user is a master account, such as main_account, the query account format is master account. That is, the main account main_account to be entered.
    //     *   If the organization user is a RAM user, such as a <zhangsan@test.onaliyun.com>, the query account format is the head of the RAM user, that is, the RAM user to be entered is zhangsan.
    // 
    // *   ID:
    // 
    //     *   Enter the UID of the account to query the account information.
    // 
    // This parameter is required.
    shared_ptr<string> account_ {};
    // When a duplicate error occurs while querying the sub-account, enter the primary account\\"s username, for example, zhangsan@test.onaliyun.com.
    shared_ptr<string> parentAccountName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
