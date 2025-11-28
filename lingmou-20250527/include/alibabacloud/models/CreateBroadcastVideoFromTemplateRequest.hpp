// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROADCASTVIDEOFROMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROADCASTVIDEOFROMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TemplateVariable.hpp>
#include <alibabacloud/models/CreateBroadcastVideoFromTemplateRequestVideoOptions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class CreateBroadcastVideoFromTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBroadcastVideoFromTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(variables, variables_);
      DARABONBA_PTR_TO_JSON(videoOptions, videoOptions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBroadcastVideoFromTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(variables, variables_);
      DARABONBA_PTR_FROM_JSON(videoOptions, videoOptions_);
    };
    CreateBroadcastVideoFromTemplateRequest() = default ;
    CreateBroadcastVideoFromTemplateRequest(const CreateBroadcastVideoFromTemplateRequest &) = default ;
    CreateBroadcastVideoFromTemplateRequest(CreateBroadcastVideoFromTemplateRequest &&) = default ;
    CreateBroadcastVideoFromTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBroadcastVideoFromTemplateRequest() = default ;
    CreateBroadcastVideoFromTemplateRequest& operator=(const CreateBroadcastVideoFromTemplateRequest &) = default ;
    CreateBroadcastVideoFromTemplateRequest& operator=(CreateBroadcastVideoFromTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->templateId_ == nullptr && return this->variables_ == nullptr && return this->videoOptions_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateBroadcastVideoFromTemplateRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateBroadcastVideoFromTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<TemplateVariable> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<TemplateVariable>) };
    inline vector<TemplateVariable> variables() { DARABONBA_PTR_GET(variables_, vector<TemplateVariable>) };
    inline CreateBroadcastVideoFromTemplateRequest& setVariables(const vector<TemplateVariable> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateBroadcastVideoFromTemplateRequest& setVariables(vector<TemplateVariable> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


    // videoOptions Field Functions 
    bool hasVideoOptions() const { return this->videoOptions_ != nullptr;};
    void deleteVideoOptions() { this->videoOptions_ = nullptr;};
    inline const CreateBroadcastVideoFromTemplateRequestVideoOptions & videoOptions() const { DARABONBA_PTR_GET_CONST(videoOptions_, CreateBroadcastVideoFromTemplateRequestVideoOptions) };
    inline CreateBroadcastVideoFromTemplateRequestVideoOptions videoOptions() { DARABONBA_PTR_GET(videoOptions_, CreateBroadcastVideoFromTemplateRequestVideoOptions) };
    inline CreateBroadcastVideoFromTemplateRequest& setVideoOptions(const CreateBroadcastVideoFromTemplateRequestVideoOptions & videoOptions) { DARABONBA_PTR_SET_VALUE(videoOptions_, videoOptions) };
    inline CreateBroadcastVideoFromTemplateRequest& setVideoOptions(CreateBroadcastVideoFromTemplateRequestVideoOptions && videoOptions) { DARABONBA_PTR_SET_RVALUE(videoOptions_, videoOptions) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<vector<TemplateVariable>> variables_ = nullptr;
    std::shared_ptr<CreateBroadcastVideoFromTemplateRequestVideoOptions> videoOptions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
