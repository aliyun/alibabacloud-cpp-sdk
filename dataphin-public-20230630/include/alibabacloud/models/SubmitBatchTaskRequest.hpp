// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitBatchTaskRequestSubmitCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SubmitCommand, submitCommand_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SubmitCommand, submitCommand_);
    };
    SubmitBatchTaskRequest() = default ;
    SubmitBatchTaskRequest(const SubmitBatchTaskRequest &) = default ;
    SubmitBatchTaskRequest(SubmitBatchTaskRequest &&) = default ;
    SubmitBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitBatchTaskRequest() = default ;
    SubmitBatchTaskRequest& operator=(const SubmitBatchTaskRequest &) = default ;
    SubmitBatchTaskRequest& operator=(SubmitBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->opTenantId_ != nullptr
        && this->submitCommand_ != nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // submitCommand Field Functions 
    bool hasSubmitCommand() const { return this->submitCommand_ != nullptr;};
    void deleteSubmitCommand() { this->submitCommand_ = nullptr;};
    inline const SubmitBatchTaskRequestSubmitCommand & submitCommand() const { DARABONBA_PTR_GET_CONST(submitCommand_, SubmitBatchTaskRequestSubmitCommand) };
    inline SubmitBatchTaskRequestSubmitCommand submitCommand() { DARABONBA_PTR_GET(submitCommand_, SubmitBatchTaskRequestSubmitCommand) };
    inline SubmitBatchTaskRequest& setSubmitCommand(const SubmitBatchTaskRequestSubmitCommand & submitCommand) { DARABONBA_PTR_SET_VALUE(submitCommand_, submitCommand) };
    inline SubmitBatchTaskRequest& setSubmitCommand(SubmitBatchTaskRequestSubmitCommand && submitCommand) { DARABONBA_PTR_SET_RVALUE(submitCommand_, submitCommand) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SubmitBatchTaskRequestSubmitCommand> submitCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
