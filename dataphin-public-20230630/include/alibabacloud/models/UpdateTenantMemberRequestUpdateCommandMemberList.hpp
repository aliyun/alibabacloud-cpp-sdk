// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUESTUPDATECOMMANDMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUESTUPDATECOMMANDMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateTenantMemberRequestUpdateCommandMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantMemberRequestUpdateCommandMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(DingNumber, dingNumber_);
      DARABONBA_PTR_TO_JSON(Mail, mail_);
      DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantMemberRequestUpdateCommandMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(DingNumber, dingNumber_);
      DARABONBA_PTR_FROM_JSON(Mail, mail_);
      DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    UpdateTenantMemberRequestUpdateCommandMemberList() = default ;
    UpdateTenantMemberRequestUpdateCommandMemberList(const UpdateTenantMemberRequestUpdateCommandMemberList &) = default ;
    UpdateTenantMemberRequestUpdateCommandMemberList(UpdateTenantMemberRequestUpdateCommandMemberList &&) = default ;
    UpdateTenantMemberRequestUpdateCommandMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantMemberRequestUpdateCommandMemberList() = default ;
    UpdateTenantMemberRequestUpdateCommandMemberList& operator=(const UpdateTenantMemberRequestUpdateCommandMemberList &) = default ;
    UpdateTenantMemberRequestUpdateCommandMemberList& operator=(UpdateTenantMemberRequestUpdateCommandMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dingNumber_ != nullptr
        && this->mail_ != nullptr && this->mobilePhone_ != nullptr && this->roleList_ != nullptr && this->userId_ != nullptr; };
    // dingNumber Field Functions 
    bool hasDingNumber() const { return this->dingNumber_ != nullptr;};
    void deleteDingNumber() { this->dingNumber_ = nullptr;};
    inline string dingNumber() const { DARABONBA_PTR_GET_DEFAULT(dingNumber_, "") };
    inline UpdateTenantMemberRequestUpdateCommandMemberList& setDingNumber(string dingNumber) { DARABONBA_PTR_SET_VALUE(dingNumber_, dingNumber) };


    // mail Field Functions 
    bool hasMail() const { return this->mail_ != nullptr;};
    void deleteMail() { this->mail_ = nullptr;};
    inline string mail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
    inline UpdateTenantMemberRequestUpdateCommandMemberList& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string mobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline UpdateTenantMemberRequestUpdateCommandMemberList& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<string> & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<string>) };
    inline vector<string> roleList() { DARABONBA_PTR_GET(roleList_, vector<string>) };
    inline UpdateTenantMemberRequestUpdateCommandMemberList& setRoleList(const vector<string> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline UpdateTenantMemberRequestUpdateCommandMemberList& setRoleList(vector<string> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline UpdateTenantMemberRequestUpdateCommandMemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> dingNumber_ = nullptr;
    std::shared_ptr<string> mail_ = nullptr;
    std::shared_ptr<string> mobilePhone_ = nullptr;
    std::shared_ptr<vector<string>> roleList_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
