// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINESUBMITRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINESUBMITRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class QueryPipelineSubmitResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineSubmitResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineSubmitResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
    };
    QueryPipelineSubmitResultShrinkRequest() = default ;
    QueryPipelineSubmitResultShrinkRequest(const QueryPipelineSubmitResultShrinkRequest &) = default ;
    QueryPipelineSubmitResultShrinkRequest(QueryPipelineSubmitResultShrinkRequest &&) = default ;
    QueryPipelineSubmitResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineSubmitResultShrinkRequest() = default ;
    QueryPipelineSubmitResultShrinkRequest& operator=(const QueryPipelineSubmitResultShrinkRequest &) = default ;
    QueryPipelineSubmitResultShrinkRequest& operator=(QueryPipelineSubmitResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextShrink_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->submitId_ == nullptr; };
    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string getContextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline QueryPipelineSubmitResultShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline QueryPipelineSubmitResultShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline QueryPipelineSubmitResultShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // submitId Field Functions 
    bool hasSubmitId() const { return this->submitId_ != nullptr;};
    void deleteSubmitId() { this->submitId_ = nullptr;};
    inline int64_t getSubmitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
    inline QueryPipelineSubmitResultShrinkRequest& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


  protected:
    // The request context information.
    // 
    // This parameter is required.
    shared_ptr<string> contextShrink_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The submit detail ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> submitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
