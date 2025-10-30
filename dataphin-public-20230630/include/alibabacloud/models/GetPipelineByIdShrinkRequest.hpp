// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEBYIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEBYIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineByIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineByIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, contextShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryIdShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineByIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, contextShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryIdShrink_);
    };
    GetPipelineByIdShrinkRequest() = default ;
    GetPipelineByIdShrinkRequest(const GetPipelineByIdShrinkRequest &) = default ;
    GetPipelineByIdShrinkRequest(GetPipelineByIdShrinkRequest &&) = default ;
    GetPipelineByIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineByIdShrinkRequest() = default ;
    GetPipelineByIdShrinkRequest& operator=(const GetPipelineByIdShrinkRequest &) = default ;
    GetPipelineByIdShrinkRequest& operator=(GetPipelineByIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contextShrink_ == nullptr
        && return this->opTenantId_ == nullptr && return this->queryIdShrink_ == nullptr; };
    // contextShrink Field Functions 
    bool hasContextShrink() const { return this->contextShrink_ != nullptr;};
    void deleteContextShrink() { this->contextShrink_ = nullptr;};
    inline string contextShrink() const { DARABONBA_PTR_GET_DEFAULT(contextShrink_, "") };
    inline GetPipelineByIdShrinkRequest& setContextShrink(string contextShrink) { DARABONBA_PTR_SET_VALUE(contextShrink_, contextShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPipelineByIdShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // queryIdShrink Field Functions 
    bool hasQueryIdShrink() const { return this->queryIdShrink_ != nullptr;};
    void deleteQueryIdShrink() { this->queryIdShrink_ = nullptr;};
    inline string queryIdShrink() const { DARABONBA_PTR_GET_DEFAULT(queryIdShrink_, "") };
    inline GetPipelineByIdShrinkRequest& setQueryIdShrink(string queryIdShrink) { DARABONBA_PTR_SET_VALUE(queryIdShrink_, queryIdShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contextShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> queryIdShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
