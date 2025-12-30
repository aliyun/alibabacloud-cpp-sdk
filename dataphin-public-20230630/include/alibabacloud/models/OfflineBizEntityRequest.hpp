// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINEBIZENTITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINEBIZENTITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflineBizEntityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineBizEntityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineBizEntityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflineBizEntityRequest() = default ;
    OfflineBizEntityRequest(const OfflineBizEntityRequest &) = default ;
    OfflineBizEntityRequest(OfflineBizEntityRequest &&) = default ;
    OfflineBizEntityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineBizEntityRequest() = default ;
    OfflineBizEntityRequest& operator=(const OfflineBizEntityRequest &) = default ;
    OfflineBizEntityRequest& operator=(OfflineBizEntityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfflineCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfflineCommand& obj) { 
        DARABONBA_PTR_TO_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OfflineCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(BizUnitId, bizUnitId_);
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OfflineCommand() = default ;
      OfflineCommand(const OfflineCommand &) = default ;
      OfflineCommand(OfflineCommand &&) = default ;
      OfflineCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfflineCommand() = default ;
      OfflineCommand& operator=(const OfflineCommand &) = default ;
      OfflineCommand& operator=(OfflineCommand &&) = default ;
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
      inline OfflineCommand& setBizUnitId(int64_t bizUnitId) { DARABONBA_PTR_SET_VALUE(bizUnitId_, bizUnitId) };


      // comment Field Functions 
      bool hasComment() const { return this->comment_ != nullptr;};
      void deleteComment() { this->comment_ = nullptr;};
      inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
      inline OfflineCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline OfflineCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OfflineCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


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

    virtual bool empty() const override { return this->offlineCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // offlineCommand Field Functions 
    bool hasOfflineCommand() const { return this->offlineCommand_ != nullptr;};
    void deleteOfflineCommand() { this->offlineCommand_ = nullptr;};
    inline const OfflineBizEntityRequest::OfflineCommand & getOfflineCommand() const { DARABONBA_PTR_GET_CONST(offlineCommand_, OfflineBizEntityRequest::OfflineCommand) };
    inline OfflineBizEntityRequest::OfflineCommand getOfflineCommand() { DARABONBA_PTR_GET(offlineCommand_, OfflineBizEntityRequest::OfflineCommand) };
    inline OfflineBizEntityRequest& setOfflineCommand(const OfflineBizEntityRequest::OfflineCommand & offlineCommand) { DARABONBA_PTR_SET_VALUE(offlineCommand_, offlineCommand) };
    inline OfflineBizEntityRequest& setOfflineCommand(OfflineBizEntityRequest::OfflineCommand && offlineCommand) { DARABONBA_PTR_SET_RVALUE(offlineCommand_, offlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflineBizEntityRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<OfflineBizEntityRequest::OfflineCommand> offlineCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
