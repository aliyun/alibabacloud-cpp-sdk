// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETENANTMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETENANTMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RemoveTenantMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTenantMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RemoveCommand, removeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTenantMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RemoveCommand, removeCommand_);
    };
    RemoveTenantMemberRequest() = default ;
    RemoveTenantMemberRequest(const RemoveTenantMemberRequest &) = default ;
    RemoveTenantMemberRequest(RemoveTenantMemberRequest &&) = default ;
    RemoveTenantMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTenantMemberRequest() = default ;
    RemoveTenantMemberRequest& operator=(const RemoveTenantMemberRequest &) = default ;
    RemoveTenantMemberRequest& operator=(RemoveTenantMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveCommand& obj) { 
        DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
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
      virtual bool empty() const override { return this->sourceId_ == nullptr; };
      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline RemoveCommand& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    protected:
      // This parameter is required.
      shared_ptr<string> sourceId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->removeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RemoveTenantMemberRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // removeCommand Field Functions 
    bool hasRemoveCommand() const { return this->removeCommand_ != nullptr;};
    void deleteRemoveCommand() { this->removeCommand_ = nullptr;};
    inline const RemoveTenantMemberRequest::RemoveCommand & getRemoveCommand() const { DARABONBA_PTR_GET_CONST(removeCommand_, RemoveTenantMemberRequest::RemoveCommand) };
    inline RemoveTenantMemberRequest::RemoveCommand getRemoveCommand() { DARABONBA_PTR_GET(removeCommand_, RemoveTenantMemberRequest::RemoveCommand) };
    inline RemoveTenantMemberRequest& setRemoveCommand(const RemoveTenantMemberRequest::RemoveCommand & removeCommand) { DARABONBA_PTR_SET_VALUE(removeCommand_, removeCommand) };
    inline RemoveTenantMemberRequest& setRemoveCommand(RemoveTenantMemberRequest::RemoveCommand && removeCommand) { DARABONBA_PTR_SET_RVALUE(removeCommand_, removeCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<RemoveTenantMemberRequest::RemoveCommand> removeCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
