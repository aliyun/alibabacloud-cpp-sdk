// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETENANTMEMBERREQUEST_HPP_
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
  class UpdateTenantMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTenantMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTenantMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateTenantMemberRequest() = default ;
    UpdateTenantMemberRequest(const UpdateTenantMemberRequest &) = default ;
    UpdateTenantMemberRequest(UpdateTenantMemberRequest &&) = default ;
    UpdateTenantMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTenantMemberRequest() = default ;
    UpdateTenantMemberRequest& operator=(const UpdateTenantMemberRequest &) = default ;
    UpdateTenantMemberRequest& operator=(UpdateTenantMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
          DARABONBA_PTR_TO_JSON(DingNumber, dingNumber_);
          DARABONBA_PTR_TO_JSON(Mail, mail_);
          DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
          DARABONBA_PTR_TO_JSON(RoleList, roleList_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(DingNumber, dingNumber_);
          DARABONBA_PTR_FROM_JSON(Mail, mail_);
          DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
          DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
        };
        MemberList() = default ;
        MemberList(const MemberList &) = default ;
        MemberList(MemberList &&) = default ;
        MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MemberList() = default ;
        MemberList& operator=(const MemberList &) = default ;
        MemberList& operator=(MemberList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dingNumber_ == nullptr
        && this->mail_ == nullptr && this->mobilePhone_ == nullptr && this->roleList_ == nullptr && this->userId_ == nullptr; };
        // dingNumber Field Functions 
        bool hasDingNumber() const { return this->dingNumber_ != nullptr;};
        void deleteDingNumber() { this->dingNumber_ = nullptr;};
        inline string getDingNumber() const { DARABONBA_PTR_GET_DEFAULT(dingNumber_, "") };
        inline MemberList& setDingNumber(string dingNumber) { DARABONBA_PTR_SET_VALUE(dingNumber_, dingNumber) };


        // mail Field Functions 
        bool hasMail() const { return this->mail_ != nullptr;};
        void deleteMail() { this->mail_ = nullptr;};
        inline string getMail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
        inline MemberList& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


        // mobilePhone Field Functions 
        bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
        void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
        inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
        inline MemberList& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


        // roleList Field Functions 
        bool hasRoleList() const { return this->roleList_ != nullptr;};
        void deleteRoleList() { this->roleList_ = nullptr;};
        inline const vector<string> & getRoleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<string>) };
        inline vector<string> getRoleList() { DARABONBA_PTR_GET(roleList_, vector<string>) };
        inline MemberList& setRoleList(const vector<string> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
        inline MemberList& setRoleList(vector<string> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline MemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        shared_ptr<string> dingNumber_ {};
        shared_ptr<string> mail_ {};
        shared_ptr<string> mobilePhone_ {};
        shared_ptr<vector<string>> roleList_ {};
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->memberList_ == nullptr; };
      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<UpdateCommand::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<UpdateCommand::MemberList>) };
      inline vector<UpdateCommand::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<UpdateCommand::MemberList>) };
      inline UpdateCommand& setMemberList(const vector<UpdateCommand::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline UpdateCommand& setMemberList(vector<UpdateCommand::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    protected:
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::MemberList>> memberList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateTenantMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateTenantMemberRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateTenantMemberRequest::UpdateCommand) };
    inline UpdateTenantMemberRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateTenantMemberRequest::UpdateCommand) };
    inline UpdateTenantMemberRequest& setUpdateCommand(const UpdateTenantMemberRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateTenantMemberRequest& setUpdateCommand(UpdateTenantMemberRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateTenantMemberRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
