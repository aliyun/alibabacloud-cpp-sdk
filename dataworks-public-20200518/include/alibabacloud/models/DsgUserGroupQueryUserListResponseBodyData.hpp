// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYUSERLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DSGUSERGROUPQUERYUSERLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgUserGroupQueryUserListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgUserGroupQueryUserListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(ParentAccountId, parentAccountId_);
      DARABONBA_PTR_TO_JSON(YunAccount, yunAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DsgUserGroupQueryUserListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(ParentAccountId, parentAccountId_);
      DARABONBA_PTR_FROM_JSON(YunAccount, yunAccount_);
    };
    DsgUserGroupQueryUserListResponseBodyData() = default ;
    DsgUserGroupQueryUserListResponseBodyData(const DsgUserGroupQueryUserListResponseBodyData &) = default ;
    DsgUserGroupQueryUserListResponseBodyData(DsgUserGroupQueryUserListResponseBodyData &&) = default ;
    DsgUserGroupQueryUserListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgUserGroupQueryUserListResponseBodyData() = default ;
    DsgUserGroupQueryUserListResponseBodyData& operator=(const DsgUserGroupQueryUserListResponseBodyData &) = default ;
    DsgUserGroupQueryUserListResponseBodyData& operator=(DsgUserGroupQueryUserListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->accountType_ != nullptr && this->baseId_ != nullptr && this->parentAccountId_ != nullptr && this->yunAccount_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DsgUserGroupQueryUserListResponseBodyData& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline int32_t accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, 0) };
    inline DsgUserGroupQueryUserListResponseBodyData& setAccountType(int32_t accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string baseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline DsgUserGroupQueryUserListResponseBodyData& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // parentAccountId Field Functions 
    bool hasParentAccountId() const { return this->parentAccountId_ != nullptr;};
    void deleteParentAccountId() { this->parentAccountId_ = nullptr;};
    inline string parentAccountId() const { DARABONBA_PTR_GET_DEFAULT(parentAccountId_, "") };
    inline DsgUserGroupQueryUserListResponseBodyData& setParentAccountId(string parentAccountId) { DARABONBA_PTR_SET_VALUE(parentAccountId_, parentAccountId) };


    // yunAccount Field Functions 
    bool hasYunAccount() const { return this->yunAccount_ != nullptr;};
    void deleteYunAccount() { this->yunAccount_ = nullptr;};
    inline string yunAccount() const { DARABONBA_PTR_GET_DEFAULT(yunAccount_, "") };
    inline DsgUserGroupQueryUserListResponseBodyData& setYunAccount(string yunAccount) { DARABONBA_PTR_SET_VALUE(yunAccount_, yunAccount) };


  protected:
    // The name of the user.
    std::shared_ptr<string> accountName_ = nullptr;
    // The type of the user. Valid values:
    // 
    // *   1 to 5: Alibaba Cloud account
    // *   6: RAM role
    std::shared_ptr<int32_t> accountType_ = nullptr;
    // The user ID or role ID.
    std::shared_ptr<string> baseId_ = nullptr;
    // The parent user ID. This parameter is required if a RAM user is used.
    std::shared_ptr<string> parentAccountId_ = nullptr;
    // The name of the Alibaba Cloud account or RAM role. The return value of this parameter must be used if the user group is created by using an Alibaba Cloud account or a RAM role.
    std::shared_ptr<string> yunAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
