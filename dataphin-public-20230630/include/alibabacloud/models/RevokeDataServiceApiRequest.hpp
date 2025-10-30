// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEDATASERVICEAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RevokeDataServiceApiRequestRevokeCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class RevokeDataServiceApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeDataServiceApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RevokeCommand, revokeCommand_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeDataServiceApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RevokeCommand, revokeCommand_);
    };
    RevokeDataServiceApiRequest() = default ;
    RevokeDataServiceApiRequest(const RevokeDataServiceApiRequest &) = default ;
    RevokeDataServiceApiRequest(RevokeDataServiceApiRequest &&) = default ;
    RevokeDataServiceApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeDataServiceApiRequest() = default ;
    RevokeDataServiceApiRequest& operator=(const RevokeDataServiceApiRequest &) = default ;
    RevokeDataServiceApiRequest& operator=(RevokeDataServiceApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && return this->projectId_ == nullptr && return this->revokeCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline RevokeDataServiceApiRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline RevokeDataServiceApiRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // revokeCommand Field Functions 
    bool hasRevokeCommand() const { return this->revokeCommand_ != nullptr;};
    void deleteRevokeCommand() { this->revokeCommand_ = nullptr;};
    inline const RevokeDataServiceApiRequestRevokeCommand & revokeCommand() const { DARABONBA_PTR_GET_CONST(revokeCommand_, RevokeDataServiceApiRequestRevokeCommand) };
    inline RevokeDataServiceApiRequestRevokeCommand revokeCommand() { DARABONBA_PTR_GET(revokeCommand_, RevokeDataServiceApiRequestRevokeCommand) };
    inline RevokeDataServiceApiRequest& setRevokeCommand(const RevokeDataServiceApiRequestRevokeCommand & revokeCommand) { DARABONBA_PTR_SET_VALUE(revokeCommand_, revokeCommand) };
    inline RevokeDataServiceApiRequest& setRevokeCommand(RevokeDataServiceApiRequestRevokeCommand && revokeCommand) { DARABONBA_PTR_SET_RVALUE(revokeCommand_, revokeCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<RevokeDataServiceApiRequestRevokeCommand> revokeCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
