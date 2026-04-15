// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHFLOWVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHFLOWVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublishFlowVersionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class PublishFlowVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishFlowVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, PublishFlowVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    PublishFlowVersionRequest() = default ;
    PublishFlowVersionRequest(const PublishFlowVersionRequest &) = default ;
    PublishFlowVersionRequest(PublishFlowVersionRequest &&) = default ;
    PublishFlowVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishFlowVersionRequest() = default ;
    PublishFlowVersionRequest& operator=(const PublishFlowVersionRequest &) = default ;
    PublishFlowVersionRequest& operator=(PublishFlowVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const PublishFlowVersionInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, PublishFlowVersionInput) };
    inline PublishFlowVersionInput getBody() { DARABONBA_PTR_GET(body_, PublishFlowVersionInput) };
    inline PublishFlowVersionRequest& setBody(const PublishFlowVersionInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline PublishFlowVersionRequest& setBody(PublishFlowVersionInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 包含版本描述等信息的请求体
    shared_ptr<PublishFlowVersionInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
