// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEDATASERVICEAPPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEDATASERVICEAPPMEMBERREQUEST_HPP_
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
  class RemoveDataServiceAppMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveDataServiceAppMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveDataServiceAppMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveDataServiceAppMemberRequest() = default ;
    RemoveDataServiceAppMemberRequest(const RemoveDataServiceAppMemberRequest &) = default ;
    RemoveDataServiceAppMemberRequest(RemoveDataServiceAppMemberRequest &&) = default ;
    RemoveDataServiceAppMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveDataServiceAppMemberRequest() = default ;
    RemoveDataServiceAppMemberRequest& operator=(const RemoveDataServiceAppMemberRequest &) = default ;
    RemoveDataServiceAppMemberRequest& operator=(RemoveDataServiceAppMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(MemberIds, memberIds_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(MemberIds, memberIds_);
      };
      RemoveCommand() = default ;
      RemoveCommand(const RemoveCommand &) = default ;
      RemoveCommand(RemoveCommand &&) = default ;
      RemoveCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveCommand() = default ;
      RemoveCommand& operator=(const RemoveCommand &) = default ;
      RemoveCommand& operator=(RemoveCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appId_ == nullptr
        && this->memberIds_ == nullptr; };
      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
      inline RemoveCommand& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // memberIds Field Functions 
      bool hasMemberIds() const { return this->memberIds_ != nullptr;};
      void deleteMemberIds() { this->memberIds_ = nullptr;};
      inline const vector<string> & getMemberIds() const { DARABONBA_PTR_GET_CONST(memberIds_, vector<string>) };
      inline vector<string> getMemberIds() { DARABONBA_PTR_GET(memberIds_, vector<string>) };
      inline RemoveCommand& setMemberIds(const vector<string> & memberIds) { DARABONBA_PTR_SET_VALUE(memberIds_, memberIds) };
      inline RemoveCommand& setMemberIds(vector<string> && memberIds) { DARABONBA_PTR_SET_RVALUE(memberIds_, memberIds) };


    protected:
      // This parameter is required.
      shared_ptr<int32_t> appId_ {};
      // This parameter is required.
      shared_ptr<vector<string>> memberIds_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->removeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveDataServiceAppMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveDataServiceAppMemberRequest::RemoveCommand & getRemoveCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveDataServiceAppMemberRequest::RemoveCommand) };
    inline RemoveDataServiceAppMemberRequest::RemoveCommand getRemoveCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveDataServiceAppMemberRequest::RemoveCommand) };
    inline RemoveDataServiceAppMemberRequest& setRemoveCommand(const RemoveDataServiceAppMemberRequest::RemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveDataServiceAppMemberRequest& setRemoveCommand(RemoveDataServiceAppMemberRequest::RemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<RemoveDataServiceAppMemberRequest::RemoveCommand> removeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
