// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONLINEBIZENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONLINEBIZENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OnlineBizEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnlineBizEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OnlineCommand, onlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OnlineBizEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OnlineCommand, onlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OnlineBizEntityRequest() = default ;
    OnlineBizEntityRequest(const OnlineBizEntityRequest &) = default ;
    OnlineBizEntityRequest(OnlineBizEntityRequest &&) = default ;
    OnlineBizEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnlineBizEntityRequest() = default ;
    OnlineBizEntityRequest& operator=(const OnlineBizEntityRequest &) = default ;
    OnlineBizEntityRequest& operator=(OnlineBizEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OnlineCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OnlineCommand() = default ;
      OnlineCommand(const OnlineCommand &) = default ;
      OnlineCommand(OnlineCommand &&) = default ;
      OnlineCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineCommand() = default ;
      OnlineCommand& operator=(const OnlineCommand &) = default ;
      OnlineCommand& operator=(OnlineCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bizUnitId_ == nullptr
        && this->comment_ == nullptr && this->id_ == nullptr && this->type_ == nullptr; };
      // bizUnitId Field Functions 
      bool hasBizUnitId() const { return this->bizUnitId_ != nullptr;};
      void deleteBizUnitId() { this->bizUnitId_ = nullptr;};
      inline int64_t getBizUnitId() const { DARABONBA_PTR_GET_DEFAULT(bizUnitId_, 0L) };
      inline OnlineCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline OnlineCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline OnlineCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OnlineCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> bizUnitId_ {};
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->onlineCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // onlineCommand Field Functions 
    bool hasOnlineCommand() const { return this->onlineCommand_ != nullptr;};
    void deleteOnlineCommand() { this->onlineCommand_ = nullptr;};
    inline const OnlineBizEntityRequest::OnlineCommand & getOnlineCommand() const { DARABONBA_PTR_GET_CONST(onlineCommand_, OnlineBizEntityRequest::OnlineCommand) };
    inline OnlineBizEntityRequest::OnlineCommand getOnlineCommand() { DARABONBA_PTR_GET(onlineCommand_, OnlineBizEntityRequest::OnlineCommand) };
    inline OnlineBizEntityRequest& setOnlineCommand(const OnlineBizEntityRequest::OnlineCommand & onlineCommand) { DARABONBA_PTR_SET_VALUE(onlineCommand_, onlineCommand) };
    inline OnlineBizEntityRequest& setOnlineCommand(OnlineBizEntityRequest::OnlineCommand && onlineCommand) { DARABONBA_PTR_SET_RVALUE(onlineCommand_, onlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OnlineBizEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<OnlineBizEntityRequest::OnlineCommand> onlineCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
