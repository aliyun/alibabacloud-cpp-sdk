// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPipelineByIdRequestContext.hpp>
#include <alibabacloud/models/GetPipelineByIdRequestQueryId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    GetPipelineByIdRequest() = default ;
    GetPipelineByIdRequest(const GetPipelineByIdRequest &) = default ;
    GetPipelineByIdRequest(GetPipelineByIdRequest &&) = default ;
    GetPipelineByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineByIdRequest() = default ;
    GetPipelineByIdRequest& operator=(const GetPipelineByIdRequest &) = default ;
    GetPipelineByIdRequest& operator=(GetPipelineByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->context_ == nullptr
        && return this->opTenantId_ == nullptr && return this->queryId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const GetPipelineByIdRequestContext & context() const { DARABONBA_PTR_GET_CONST(context_, GetPipelineByIdRequestContext) };
    inline GetPipelineByIdRequestContext context() { DARABONBA_PTR_GET(context_, GetPipelineByIdRequestContext) };
    inline GetPipelineByIdRequest& setContext(const GetPipelineByIdRequestContext & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetPipelineByIdRequest& setContext(GetPipelineByIdRequestContext && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPipelineByIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline const GetPipelineByIdRequestQueryId & queryId() const { DARABONBA_PTR_GET_CONST(queryId_, GetPipelineByIdRequestQueryId) };
    inline GetPipelineByIdRequestQueryId queryId() { DARABONBA_PTR_GET(queryId_, GetPipelineByIdRequestQueryId) };
    inline GetPipelineByIdRequest& setQueryId(const GetPipelineByIdRequestQueryId & queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };
    inline GetPipelineByIdRequest& setQueryId(GetPipelineByIdRequestQueryId && queryId) { DARABONBA_PTR_SET_RVALUE(queryId_, queryId) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetPipelineByIdRequestContext> context_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetPipelineByIdRequestQueryId> queryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
