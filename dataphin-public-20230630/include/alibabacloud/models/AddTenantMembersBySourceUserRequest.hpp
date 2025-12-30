// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTENANTMEMBERSBYSOURCEUSERREQUEST_HPP_
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
  class AddTenantMembersBySourceUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTenantMembersBySourceUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddTenantMembersBySourceUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddTenantMembersBySourceUserRequest() = default ;
    AddTenantMembersBySourceUserRequest(const AddTenantMembersBySourceUserRequest &) = default ;
    AddTenantMembersBySourceUserRequest(AddTenantMembersBySourceUserRequest &&) = default ;
    AddTenantMembersBySourceUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTenantMembersBySourceUserRequest() = default ;
    AddTenantMembersBySourceUserRequest& operator=(const AddTenantMembersBySourceUserRequest &) = default ;
    AddTenantMembersBySourceUserRequest& operator=(AddTenantMembersBySourceUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddCommand& obj) { 
        DARABONBA_PTR_TO_JSON(SourceUserList, sourceUserList_);
      };
      friend void from_json(const Darabonba::Json& j, AddCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceUserList, sourceUserList_);
      };
      AddCommand() = default ;
      AddCommand(const AddCommand &) = default ;
      AddCommand(AddCommand &&) = default ;
      AddCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddCommand() = default ;
      AddCommand& operator=(const AddCommand &) = default ;
      AddCommand& operator=(AddCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceUserList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceUserList& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(DingNumber, dingNumber_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Mail, mail_);
          DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
          DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceUserList& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(DingNumber, dingNumber_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Mail, mail_);
          DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
          DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
        };
        SourceUserList() = default ;
        SourceUserList(const SourceUserList &) = default ;
        SourceUserList(SourceUserList &&) = default ;
        SourceUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceUserList() = default ;
        SourceUserList& operator=(const SourceUserList &) = default ;
        SourceUserList& operator=(SourceUserList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->dingNumber_ == nullptr && this->displayName_ == nullptr && this->mail_ == nullptr && this->mobilePhone_ == nullptr && this->sourceId_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline SourceUserList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // dingNumber Field Functions 
        bool hasDingNumber() const { return this->dingNumber_ != nullptr;};
        void deleteDingNumber() { this->dingNumber_ = nullptr;};
        inline string getDingNumber() const { DARABONBA_PTR_GET_DEFAULT(dingNumber_, "") };
        inline SourceUserList& setDingNumber(string dingNumber) { DARABONBA_PTR_SET_VALUE(dingNumber_, dingNumber) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline SourceUserList& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // mail Field Functions 
        bool hasMail() const { return this->mail_ != nullptr;};
        void deleteMail() { this->mail_ = nullptr;};
        inline string getMail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
        inline SourceUserList& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


        // mobilePhone Field Functions 
        bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
        void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
        inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
        inline SourceUserList& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


        // sourceId Field Functions 
        bool hasSourceId() const { return this->sourceId_ != nullptr;};
        void deleteSourceId() { this->sourceId_ = nullptr;};
        inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
        inline SourceUserList& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> dingNumber_ {};
        shared_ptr<string> displayName_ {};
        shared_ptr<string> mail_ {};
        shared_ptr<string> mobilePhone_ {};
        shared_ptr<string> sourceId_ {};
      };

      virtual bool empty() const override { return this->sourceUserList_ == nullptr; };
      // sourceUserList Field Functions 
      bool hasSourceUserList() const { return this->sourceUserList_ != nullptr;};
      void deleteSourceUserList() { this->sourceUserList_ = nullptr;};
      inline const vector<AddCommand::SourceUserList> & getSourceUserList() const { DARABONBA_PTR_GET_CONST(sourceUserList_, vector<AddCommand::SourceUserList>) };
      inline vector<AddCommand::SourceUserList> getSourceUserList() { DARABONBA_PTR_GET(sourceUserList_, vector<AddCommand::SourceUserList>) };
      inline AddCommand& setSourceUserList(const vector<AddCommand::SourceUserList> & sourceUserList) { DARABONBA_PTR_SET_VALUE(sourceUserList_, sourceUserList) };
      inline AddCommand& setSourceUserList(vector<AddCommand::SourceUserList> && sourceUserList) { DARABONBA_PTR_SET_RVALUE(sourceUserList_, sourceUserList) };


    protected:
      shared_ptr<vector<AddCommand::SourceUserList>> sourceUserList_ {};
    };

    virtual bool empty() const override { return this->addCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddTenantMembersBySourceUserRequest::AddCommand & getAddCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddTenantMembersBySourceUserRequest::AddCommand) };
    inline AddTenantMembersBySourceUserRequest::AddCommand getAddCommand() { DARABONBA_PTR_GET(addCommand_, AddTenantMembersBySourceUserRequest::AddCommand) };
    inline AddTenantMembersBySourceUserRequest& setAddCommand(const AddTenantMembersBySourceUserRequest::AddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddTenantMembersBySourceUserRequest& setAddCommand(AddTenantMembersBySourceUserRequest::AddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddTenantMembersBySourceUserRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    shared_ptr<AddTenantMembersBySourceUserRequest::AddCommand> addCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
