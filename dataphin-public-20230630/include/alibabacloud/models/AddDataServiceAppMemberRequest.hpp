// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASERVICEAPPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASERVICEAPPMEMBERREQUEST_HPP_
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
  class AddDataServiceAppMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDataServiceAppMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDataServiceAppMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddCommand, addCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    AddDataServiceAppMemberRequest() = default ;
    AddDataServiceAppMemberRequest(const AddDataServiceAppMemberRequest &) = default ;
    AddDataServiceAppMemberRequest(AddDataServiceAppMemberRequest &&) = default ;
    AddDataServiceAppMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDataServiceAppMemberRequest() = default ;
    AddDataServiceAppMemberRequest& operator=(const AddDataServiceAppMemberRequest &) = default ;
    AddDataServiceAppMemberRequest& operator=(AddDataServiceAppMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AddCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      };
      friend void from_json(const Darabonba::Json& j, AddCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
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
      class MemberList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
          DARABONBA_PTR_TO_JSON(EffectiveEnd, effectiveEnd_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
        };
        friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
          DARABONBA_PTR_FROM_JSON(EffectiveEnd, effectiveEnd_);
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
        virtual bool empty() const override { return this->effectiveEnd_ == nullptr
        && this->userId_ == nullptr; };
        // effectiveEnd Field Functions 
        bool hasEffectiveEnd() const { return this->effectiveEnd_ != nullptr;};
        void deleteEffectiveEnd() { this->effectiveEnd_ = nullptr;};
        inline string getEffectiveEnd() const { DARABONBA_PTR_GET_DEFAULT(effectiveEnd_, "") };
        inline MemberList& setEffectiveEnd(string effectiveEnd) { DARABONBA_PTR_SET_VALUE(effectiveEnd_, effectiveEnd) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline MemberList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      protected:
        // This parameter is required.
        shared_ptr<string> effectiveEnd_ {};
        // This parameter is required.
        shared_ptr<string> userId_ {};
      };

      virtual bool empty() const override { return this->appId_ == nullptr
        && this->memberList_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline AddCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<AddCommand::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<AddCommand::MemberList>) };
      inline vector<AddCommand::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<AddCommand::MemberList>) };
      inline AddCommand& setMemberList(const vector<AddCommand::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline AddCommand& setMemberList(vector<AddCommand::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      // This parameter is required.
      shared_ptr<vector<AddCommand::MemberList>> memberList_ {};
    };

    virtual bool empty() const override { return this->addCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // addCommand Field Functions 
    bool hasAddCommand() const { return this->addCommand_ != nullptr;};
    void deleteAddCommand() { this->addCommand_ = nullptr;};
    inline const AddDataServiceAppMemberRequest::AddCommand & getAddCommand() const { DARABONBA_PTR_GET_CONST(addCommand_, AddDataServiceAppMemberRequest::AddCommand) };
    inline AddDataServiceAppMemberRequest::AddCommand getAddCommand() { DARABONBA_PTR_GET(addCommand_, AddDataServiceAppMemberRequest::AddCommand) };
    inline AddDataServiceAppMemberRequest& setAddCommand(const AddDataServiceAppMemberRequest::AddCommand & addCommand) { DARABONBA_PTR_SET_VALUE(addCommand_, addCommand) };
    inline AddDataServiceAppMemberRequest& setAddCommand(AddDataServiceAppMemberRequest::AddCommand && addCommand) { DARABONBA_PTR_SET_RVALUE(addCommand_, addCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline AddDataServiceAppMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<AddDataServiceAppMemberRequest::AddCommand> addCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
