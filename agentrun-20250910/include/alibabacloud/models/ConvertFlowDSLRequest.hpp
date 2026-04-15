// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTFLOWDSLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTFLOWDSLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConvertFlowDSLInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ConvertFlowDSLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertFlowDSLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertFlowDSLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ConvertFlowDSLRequest() = default ;
    ConvertFlowDSLRequest(const ConvertFlowDSLRequest &) = default ;
    ConvertFlowDSLRequest(ConvertFlowDSLRequest &&) = default ;
    ConvertFlowDSLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertFlowDSLRequest() = default ;
    ConvertFlowDSLRequest& operator=(const ConvertFlowDSLRequest &) = default ;
    ConvertFlowDSLRequest& operator=(ConvertFlowDSLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ConvertFlowDSLInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, ConvertFlowDSLInput) };
    inline ConvertFlowDSLInput getBody() { DARABONBA_PTR_GET(body_, ConvertFlowDSLInput) };
    inline ConvertFlowDSLRequest& setBody(const ConvertFlowDSLInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ConvertFlowDSLRequest& setBody(ConvertFlowDSLInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // 包含待转换的工作流DSL内容和转换选项，支持多种DSL格式（如Dify、n8n等）以及inline和base64两种输入方式
    // 
    // This parameter is required.
    shared_ptr<ConvertFlowDSLInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
