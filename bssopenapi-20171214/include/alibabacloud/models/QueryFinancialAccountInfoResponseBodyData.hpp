// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFINANCIALACCOUNTINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYFINANCIALACCOUNTINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryFinancialAccountInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFinancialAccountInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(IsFinancialAccount, isFinancialAccount_);
      DARABONBA_PTR_TO_JSON(MemberGroupId, memberGroupId_);
      DARABONBA_PTR_TO_JSON(MemberGroupName, memberGroupName_);
      DARABONBA_PTR_TO_JSON(MemberNickName, memberNickName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFinancialAccountInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(IsFinancialAccount, isFinancialAccount_);
      DARABONBA_PTR_FROM_JSON(MemberGroupId, memberGroupId_);
      DARABONBA_PTR_FROM_JSON(MemberGroupName, memberGroupName_);
      DARABONBA_PTR_FROM_JSON(MemberNickName, memberNickName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    QueryFinancialAccountInfoResponseBodyData() = default ;
    QueryFinancialAccountInfoResponseBodyData(const QueryFinancialAccountInfoResponseBodyData &) = default ;
    QueryFinancialAccountInfoResponseBodyData(QueryFinancialAccountInfoResponseBodyData &&) = default ;
    QueryFinancialAccountInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFinancialAccountInfoResponseBodyData() = default ;
    QueryFinancialAccountInfoResponseBodyData& operator=(const QueryFinancialAccountInfoResponseBodyData &) = default ;
    QueryFinancialAccountInfoResponseBodyData& operator=(QueryFinancialAccountInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountType_ != nullptr
        && this->isFinancialAccount_ != nullptr && this->memberGroupId_ != nullptr && this->memberGroupName_ != nullptr && this->memberNickName_ != nullptr && this->userName_ != nullptr; };
    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline QueryFinancialAccountInfoResponseBodyData& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // isFinancialAccount Field Functions 
    bool hasIsFinancialAccount() const { return this->isFinancialAccount_ != nullptr;};
    void deleteIsFinancialAccount() { this->isFinancialAccount_ = nullptr;};
    inline bool isFinancialAccount() const { DARABONBA_PTR_GET_DEFAULT(isFinancialAccount_, false) };
    inline QueryFinancialAccountInfoResponseBodyData& setIsFinancialAccount(bool isFinancialAccount) { DARABONBA_PTR_SET_VALUE(isFinancialAccount_, isFinancialAccount) };


    // memberGroupId Field Functions 
    bool hasMemberGroupId() const { return this->memberGroupId_ != nullptr;};
    void deleteMemberGroupId() { this->memberGroupId_ = nullptr;};
    inline int64_t memberGroupId() const { DARABONBA_PTR_GET_DEFAULT(memberGroupId_, 0L) };
    inline QueryFinancialAccountInfoResponseBodyData& setMemberGroupId(int64_t memberGroupId) { DARABONBA_PTR_SET_VALUE(memberGroupId_, memberGroupId) };


    // memberGroupName Field Functions 
    bool hasMemberGroupName() const { return this->memberGroupName_ != nullptr;};
    void deleteMemberGroupName() { this->memberGroupName_ = nullptr;};
    inline string memberGroupName() const { DARABONBA_PTR_GET_DEFAULT(memberGroupName_, "") };
    inline QueryFinancialAccountInfoResponseBodyData& setMemberGroupName(string memberGroupName) { DARABONBA_PTR_SET_VALUE(memberGroupName_, memberGroupName) };


    // memberNickName Field Functions 
    bool hasMemberNickName() const { return this->memberNickName_ != nullptr;};
    void deleteMemberNickName() { this->memberNickName_ = nullptr;};
    inline string memberNickName() const { DARABONBA_PTR_GET_DEFAULT(memberNickName_, "") };
    inline QueryFinancialAccountInfoResponseBodyData& setMemberNickName(string memberNickName) { DARABONBA_PTR_SET_VALUE(memberNickName_, memberNickName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline QueryFinancialAccountInfoResponseBodyData& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The type of the financial account. A value of MASTER indicates that the account is a management account. A value of MEMBER indicates that the account is a member.
    std::shared_ptr<string> accountType_ = nullptr;
    // Indicates whether the account is a financial account. A value of true indicates that the account is a financial account. A value of false indicates that the account is not a financial account.
    std::shared_ptr<bool> isFinancialAccount_ = nullptr;
    // The ID of the group to which the member belongs.
    std::shared_ptr<int64_t> memberGroupId_ = nullptr;
    // The name of the group to which the member belongs.
    std::shared_ptr<string> memberGroupName_ = nullptr;
    // The display name of the member.
    std::shared_ptr<string> memberNickName_ = nullptr;
    // The username of the account.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
