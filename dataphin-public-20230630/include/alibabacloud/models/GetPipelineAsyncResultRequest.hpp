// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineAsyncResultRequestContext.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineAsyncResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineAsyncResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineAsyncResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetPipelineAsyncResultRequest() = default ;
    GetPipelineAsyncResultRequest(const GetPipelineAsyncResultRequest &) = default ;
    GetPipelineAsyncResultRequest(GetPipelineAsyncResultRequest &&) = default ;
    GetPipelineAsyncResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineAsyncResultRequest() = default ;
    GetPipelineAsyncResultRequest& operator=(const GetPipelineAsyncResultRequest &) = default ;
    GetPipelineAsyncResultRequest& operator=(GetPipelineAsyncResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncId_ == nullptr
        && return this->context_ == nullptr && return this->opTenantId_ == nullptr; };
    // asyncId Field Functions 
    bool hasAsyncId() const { return this->asyncId_ != nullptr;};
    void deleteAsyncId() { this->asyncId_ = nullptr;};
    inline int64_t asyncId() const { DARABONBA_PTR_GET_DEFAULT(asyncId_, 0L) };
    inline GetPipelineAsyncResultRequest& setAsyncId(int64_t asyncId) { DARABONBA_PTR_SET_VALUE(asyncId_, asyncId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const GetPipelineAsyncResultRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, GetPipelineAsyncResultRequestContext) };
    inline GetPipelineAsyncResultRequestContext context() { DARABONBA_PTR_GET(context_, GetPipelineAsyncResultRequestContext) };
    inline GetPipelineAsyncResultRequest& setContext(const GetPipelineAsyncResultRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetPipelineAsyncResultRequest& setContext(GetPipelineAsyncResultRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPipelineAsyncResultRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> asyncId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetPipelineAsyncResultRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
