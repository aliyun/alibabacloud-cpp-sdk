// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OFFLINESTANDARDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OFFLINESTANDARDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OfflineStandardRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OfflineStandardRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, OfflineStandardRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OfflineCommand, offlineCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    OfflineStandardRequest() = default ;
    OfflineStandardRequest(const OfflineStandardRequest &) = default ;
    OfflineStandardRequest(OfflineStandardRequest &&) = default ;
    OfflineStandardRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OfflineStandardRequest() = default ;
    OfflineStandardRequest& operator=(const OfflineStandardRequest &) = default ;
    OfflineStandardRequest& operator=(OfflineStandardRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfflineCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfflineCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Comment, comment_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, OfflineCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Comment, comment_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
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
      virtual bool empty() const override { return this->comment_ == nullptr
        && this->id_ == nullptr; };
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


    protected:
      // This parameter is required.
      shared_ptr<string> comment_ {};
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
    };

    virtual bool empty() const override { return this->offlineCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // offlineCommand Field Functions 
    bool hasOfflineCommand() const { return this->offlineCommand_ != nullptr;};
    void deleteOfflineCommand() { this->offlineCommand_ = nullptr;};
    inline const OfflineStandardRequest::OfflineCommand & getOfflineCommand() const { DARABONBA_PTR_GET_CONST(offlineCommand_, OfflineStandardRequest::OfflineCommand) };
    inline OfflineStandardRequest::OfflineCommand getOfflineCommand() { DARABONBA_PTR_GET(offlineCommand_, OfflineStandardRequest::OfflineCommand) };
    inline OfflineStandardRequest& setOfflineCommand(const OfflineStandardRequest::OfflineCommand & offlineCommand) { DARABONBA_PTR_SET_VALUE(offlineCommand_, offlineCommand) };
    inline OfflineStandardRequest& setOfflineCommand(OfflineStandardRequest::OfflineCommand && offlineCommand) { DARABONBA_PTR_SET_RVALUE(offlineCommand_, offlineCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OfflineStandardRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<OfflineStandardRequest::OfflineCommand> offlineCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
