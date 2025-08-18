// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERREQUESTADDCOMMANDSOURCEUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERREQUESTADDCOMMANDSOURCEUSERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddTenantMembersBySourceUserRequestAddCommandSourceUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersBySourceUserRequestAddCommandSourceUserList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DingNumber, dingNumber_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Mail, mail_);
      DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersBySourceUserRequestAddCommandSourceUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DingNumber, dingNumber_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Mail, mail_);
      DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
    };
    AddTenantMembersBySourceUserRequestAddCommandSourceUserList() = default ;
    AddTenantMembersBySourceUserRequestAddCommandSourceUserList(const AddTenantMembersBySourceUserRequestAddCommandSourceUserList &) = default ;
    AddTenantMembersBySourceUserRequestAddCommandSourceUserList(AddTenantMembersBySourceUserRequestAddCommandSourceUserList &&) = default ;
    AddTenantMembersBySourceUserRequestAddCommandSourceUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersBySourceUserRequestAddCommandSourceUserList() = default ;
    AddTenantMembersBySourceUserRequestAddCommandSourceUserList& operator=(const AddTenantMembersBySourceUserRequestAddCommandSourceUserList &) = default ;
    AddTenantMembersBySourceUserRequestAddCommandSourceUserList& operator=(AddTenantMembersBySourceUserRequestAddCommandSourceUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->dingNumber_ != nullptr && this->displayName_ != nullptr && this->mail_ != nullptr && this->mobilePhone_ != nullptr && this->sourceId_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline AddTenantMembersBySourceUserRequestAddCommandSourceUserList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // dingNumber Field Functions 
    bool hasDingNumber() const { return this->dingNumber_ != nullptr;};
    void deleteDingNumber() { this->dingNumber_ = nullptr;};
    inline string dingNumber() const { DARABONBA_PTR_GET_DEFAULT(dingNumber_, "") };
    inline AddTenantMembersBySourceUserRequestAddCommandSourceUserList& setDingNumber(string dingNumber) { DARABONBA_PTR_SET_VALUE(dingNumber_, dingNumber) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline AddTenantMembersBySourceUserRequestAddCommandSourceUserList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // mail Field Functions 
    bool hasMail() const { return this->mail_ != nullptr;};
    void deleteMail() { this->mail_ = nullptr;};
    inline string mail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
    inline AddTenantMembersBySourceUserRequestAddCommandSourceUserList& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string mobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline AddTenantMembersBySourceUserRequestAddCommandSourceUserList& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline AddTenantMembersBySourceUserRequestAddCommandSourceUserList& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> dingNumber_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> mail_ = nullptr;
    std::shared_ptr<string> mobilePhone_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
