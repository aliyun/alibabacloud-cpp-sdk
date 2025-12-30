// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBIZMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEBIZMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteBizMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBizMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteBizMetricCommand, deleteBizMetricCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBizMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteBizMetricCommand, deleteBizMetricCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    DeleteBizMetricRequest() = default ;
    DeleteBizMetricRequest(const DeleteBizMetricRequest &) = default ;
    DeleteBizMetricRequest(DeleteBizMetricRequest &&) = default ;
    DeleteBizMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBizMetricRequest() = default ;
    DeleteBizMetricRequest& operator=(const DeleteBizMetricRequest &) = default ;
    DeleteBizMetricRequest& operator=(DeleteBizMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteBizMetricCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteBizMetricCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteBizMetricCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      DeleteBizMetricCommand() = default ;
      DeleteBizMetricCommand(const DeleteBizMetricCommand &) = default ;
      DeleteBizMetricCommand(DeleteBizMetricCommand &&) = default ;
      DeleteBizMetricCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteBizMetricCommand() = default ;
      DeleteBizMetricCommand& operator=(const DeleteBizMetricCommand &) = default ;
      DeleteBizMetricCommand& operator=(DeleteBizMetricCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DeleteBizMetricCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // This parameter is required.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->deleteBizMetricCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // deleteBizMetricCommand Field Functions 
    bool hasDeleteBizMetricCommand() const { return this->deleteBizMetricCommand_ != nullptr;};
    void deleteDeleteBizMetricCommand() { this->deleteBizMetricCommand_ = nullptr;};
    inline const DeleteBizMetricRequest::DeleteBizMetricCommand & getDeleteBizMetricCommand() const { DARABONBA_PTR_GET_CONST(deleteBizMetricCommand_, DeleteBizMetricRequest::DeleteBizMetricCommand) };
    inline DeleteBizMetricRequest::DeleteBizMetricCommand getDeleteBizMetricCommand() { DARABONBA_PTR_GET(deleteBizMetricCommand_, DeleteBizMetricRequest::DeleteBizMetricCommand) };
    inline DeleteBizMetricRequest& setDeleteBizMetricCommand(const DeleteBizMetricRequest::DeleteBizMetricCommand & deleteBizMetricCommand) { DARABONBA_PTR_SET_VALUE(deleteBizMetricCommand_, deleteBizMetricCommand) };
    inline DeleteBizMetricRequest& setDeleteBizMetricCommand(DeleteBizMetricRequest::DeleteBizMetricCommand && deleteBizMetricCommand) { DARABONBA_PTR_SET_RVALUE(deleteBizMetricCommand_, deleteBizMetricCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline DeleteBizMetricRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<DeleteBizMetricRequest::DeleteBizMetricCommand> deleteBizMetricCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
