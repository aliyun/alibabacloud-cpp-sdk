// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFLOWDRAFTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFLOWDRAFTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFlowDraftInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateFlowDraftRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFlowDraftRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFlowDraftRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateFlowDraftRequest() = default ;
    UpdateFlowDraftRequest(const UpdateFlowDraftRequest &) = default ;
    UpdateFlowDraftRequest(UpdateFlowDraftRequest &&) = default ;
    UpdateFlowDraftRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFlowDraftRequest() = default ;
    UpdateFlowDraftRequest& operator=(const UpdateFlowDraftRequest &) = default ;
    UpdateFlowDraftRequest& operator=(UpdateFlowDraftRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateFlowDraftInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateFlowDraftInput) };
    inline UpdateFlowDraftInput getBody() { DARABONBA_PTR_GET(body_, UpdateFlowDraftInput) };
    inline UpdateFlowDraftRequest& setBody(const UpdateFlowDraftInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateFlowDraftRequest& setBody(UpdateFlowDraftInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 包含要更新的工作流草稿配置信息的请求体
    // 
    // This parameter is required.
    shared_ptr<UpdateFlowDraftInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
