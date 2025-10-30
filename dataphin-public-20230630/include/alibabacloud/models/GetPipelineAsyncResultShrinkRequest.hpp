// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineAsyncResultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineAsyncResultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineAsyncResultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetPipelineAsyncResultShrinkRequest() = default ;
    GetPipelineAsyncResultShrinkRequest(const GetPipelineAsyncResultShrinkRequest &) = default ;
    GetPipelineAsyncResultShrinkRequest(GetPipelineAsyncResultShrinkRequest &&) = default ;
    GetPipelineAsyncResultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineAsyncResultShrinkRequest() = default ;
    GetPipelineAsyncResultShrinkRequest& operator=(const GetPipelineAsyncResultShrinkRequest &) = default ;
    GetPipelineAsyncResultShrinkRequest& operator=(GetPipelineAsyncResultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncId_ == nullptr
        && return this->contextShrink_ == nullptr && return this->opTenantId_ == nullptr; };
    // asyncId Field Functions 
    bool hasAsyncId() const { return this->asyncId_ != nullptr;};
    void deleteAsyncId() { this->asyncId_ = nullptr;};
    inline int64_t asyncId() const { DARABONBA_PTR_GET_DEFAULT(asyncId_, 0L) };
    inline GetPipelineAsyncResultShrinkRequest& setAsyncId(int64_t asyncId) { DARABONBA_PTR_SET_VALUE(asyncId_, asyncId) };


    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string contextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline GetPipelineAsyncResultShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPipelineAsyncResultShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> asyncId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
