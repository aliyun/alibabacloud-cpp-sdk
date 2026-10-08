// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPPIPELINEINTEGRATEDTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPPIPELINEINTEGRATEDTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class StopPipelineIntegratedTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopPipelineIntegratedTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(StopCommand, stopCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StopPipelineIntegratedTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(StopCommand, stopCommandShrink_);
    };
    StopPipelineIntegratedTaskShrinkRequest() = default ;
    StopPipelineIntegratedTaskShrinkRequest(const StopPipelineIntegratedTaskShrinkRequest &) = default ;
    StopPipelineIntegratedTaskShrinkRequest(StopPipelineIntegratedTaskShrinkRequest &&) = default ;
    StopPipelineIntegratedTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopPipelineIntegratedTaskShrinkRequest() = default ;
    StopPipelineIntegratedTaskShrinkRequest& operator=(const StopPipelineIntegratedTaskShrinkRequest &) = default ;
    StopPipelineIntegratedTaskShrinkRequest& operator=(StopPipelineIntegratedTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->stopCommandShrink_ == nullptr; };
    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string getContextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline StopPipelineIntegratedTaskShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline StopPipelineIntegratedTaskShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline StopPipelineIntegratedTaskShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // stopCommandShrink Field Functions 
    bool hasStopCommandShrink() const { return this->stopCommandShrink_ != nullptr;};
    void deleteStopCommandShrink() { this->stopCommandShrink_ = nullptr;};
    inline string getStopCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(stopCommandShrink_, "") };
    inline StopPipelineIntegratedTaskShrinkRequest& setStopCommandShrink(string stopCommandShrink) { DARABONBA_PTR_SET_VALUE(stopCommandShrink_, stopCommandShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> contextShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // This parameter is required.
    shared_ptr<string> stopCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
