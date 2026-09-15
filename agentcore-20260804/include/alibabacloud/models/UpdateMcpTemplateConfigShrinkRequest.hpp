// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMCPTEMPLATECONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMCPTEMPLATECONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateMcpTemplateConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMcpTemplateConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, bodyShrink_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(templateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMcpTemplateConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, bodyShrink_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(templateVersion, templateVersion_);
    };
    UpdateMcpTemplateConfigShrinkRequest() = default ;
    UpdateMcpTemplateConfigShrinkRequest(const UpdateMcpTemplateConfigShrinkRequest &) = default ;
    UpdateMcpTemplateConfigShrinkRequest(UpdateMcpTemplateConfigShrinkRequest &&) = default ;
    UpdateMcpTemplateConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMcpTemplateConfigShrinkRequest() = default ;
    UpdateMcpTemplateConfigShrinkRequest& operator=(const UpdateMcpTemplateConfigShrinkRequest &) = default ;
    UpdateMcpTemplateConfigShrinkRequest& operator=(UpdateMcpTemplateConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyShrink_ == nullptr
        && this->clientToken_ == nullptr && this->templateVersion_ == nullptr; };
    // bodyShrink Field Functions 
    bool hasBodyShrink() const { return this->bodyShrink_ != nullptr;};
    void deleteBodyShrink() { this->bodyShrink_ = nullptr;};
    inline string getBodyShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyShrink_, "") };
    inline UpdateMcpTemplateConfigShrinkRequest& setBodyShrink(string bodyShrink) { DARABONBA_PTR_SET_VALUE(bodyShrink_, bodyShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateMcpTemplateConfigShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline UpdateMcpTemplateConfigShrinkRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The MCP configuration to update by the specified template version. The configuration must conform to the input schema of the template.
    shared_ptr<string> bodyShrink_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The template version used for this update.
    // 
    // This parameter is required.
    shared_ptr<string> templateVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
