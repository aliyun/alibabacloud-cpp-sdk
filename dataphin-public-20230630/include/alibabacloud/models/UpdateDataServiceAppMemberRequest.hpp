// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASERVICEAPPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASERVICEAPPMEMBERREQUEST_HPP_
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
  class UpdateDataServiceAppMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataServiceAppMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataServiceAppMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateDataServiceAppMemberRequest() = default ;
    UpdateDataServiceAppMemberRequest(const UpdateDataServiceAppMemberRequest &) = default ;
    UpdateDataServiceAppMemberRequest(UpdateDataServiceAppMemberRequest &&) = default ;
    UpdateDataServiceAppMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataServiceAppMemberRequest() = default ;
    UpdateDataServiceAppMemberRequest& operator=(const UpdateDataServiceAppMemberRequest &) = default ;
    UpdateDataServiceAppMemberRequest& operator=(UpdateDataServiceAppMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(MemberList, memberList_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
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
      inline UpdateCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // memberList Field Functions 
      bool hasMemberList() const { return this->memberList_ != nullptr;};
      void deleteMemberList() { this->memberList_ = nullptr;};
      inline const vector<UpdateCommand::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<UpdateCommand::MemberList>) };
      inline vector<UpdateCommand::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<UpdateCommand::MemberList>) };
      inline UpdateCommand& setMemberList(const vector<UpdateCommand::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
      inline UpdateCommand& setMemberList(vector<UpdateCommand::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      // This parameter is required.
      shared_ptr<vector<UpdateCommand::MemberList>> memberList_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateDataServiceAppMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateDataServiceAppMemberRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateDataServiceAppMemberRequest::UpdateCommand) };
    inline UpdateDataServiceAppMemberRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateDataServiceAppMemberRequest::UpdateCommand) };
    inline UpdateDataServiceAppMemberRequest& setUpdateCommand(const UpdateDataServiceAppMemberRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateDataServiceAppMemberRequest& setUpdateCommand(UpdateDataServiceAppMemberRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<UpdateDataServiceAppMemberRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
