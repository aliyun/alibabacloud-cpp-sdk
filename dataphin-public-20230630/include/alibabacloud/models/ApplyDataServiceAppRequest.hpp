// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_APPLYDATASERVICEAPPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApplyDataServiceAppRequestApplyCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ApplyDataServiceAppRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApplyDataServiceAppRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ApplyDataServiceAppRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplyCommand, applyCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ApplyDataServiceAppRequest() = default ;
    ApplyDataServiceAppRequest(const ApplyDataServiceAppRequest &) = default ;
    ApplyDataServiceAppRequest(ApplyDataServiceAppRequest &&) = default ;
    ApplyDataServiceAppRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApplyDataServiceAppRequest() = default ;
    ApplyDataServiceAppRequest& operator=(const ApplyDataServiceAppRequest &) = default ;
    ApplyDataServiceAppRequest& operator=(ApplyDataServiceAppRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyCommand_ != nullptr
        && this->opTenantId_ != nullptr && this->projectId_ != nullptr; };
    // applyCommand Field Functions 
    bool hasApplyCommand() const { return this->applyCommand_ != nullptr;};
    void deleteApplyCommand() { this->applyCommand_ = nullptr;};
    inline const ApplyDataServiceAppRequestApplyCommand & applyCommand() const { DARABONBA_PTR_GET_CONST(applyCommand_, ApplyDataServiceAppRequestApplyCommand) };
    inline ApplyDataServiceAppRequestApplyCommand applyCommand() { DARABONBA_PTR_GET(applyCommand_, ApplyDataServiceAppRequestApplyCommand) };
    inline ApplyDataServiceAppRequest& setApplyCommand(const ApplyDataServiceAppRequestApplyCommand & applyCommand) { DARABONBA_PTR_SET_VALUE(applyCommand_, applyCommand) };
    inline ApplyDataServiceAppRequest& setApplyCommand(ApplyDataServiceAppRequestApplyCommand && applyCommand) { DARABONBA_PTR_SET_RVALUE(applyCommand_, applyCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ApplyDataServiceAppRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int32_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0) };
    inline ApplyDataServiceAppRequest& setProjectId(int32_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ApplyDataServiceAppRequestApplyCommand> applyCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
