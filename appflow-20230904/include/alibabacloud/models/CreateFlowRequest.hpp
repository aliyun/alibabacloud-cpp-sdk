// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
namespace Models
{
  class CreateFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FlowDesc, flowDesc_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(FlowName, flowName_);
      DARABONBA_PTR_TO_JSON(FlowTemplate, flowTemplate_);
      DARABONBA_PTR_TO_JSON(LaunchStatus, launchStatus_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FlowDesc, flowDesc_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
      DARABONBA_PTR_FROM_JSON(FlowTemplate, flowTemplate_);
      DARABONBA_PTR_FROM_JSON(LaunchStatus, launchStatus_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    CreateFlowRequest() = default ;
    CreateFlowRequest(const CreateFlowRequest &) = default ;
    CreateFlowRequest(CreateFlowRequest &&) = default ;
    CreateFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowRequest() = default ;
    CreateFlowRequest& operator=(const CreateFlowRequest &) = default ;
    CreateFlowRequest& operator=(CreateFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
        DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
      // parameterKey Field Functions 
      bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
      void deleteParameterKey() { this->parameterKey_ = nullptr;};
      inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
      inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


      // parameterValue Field Functions 
      bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
      void deleteParameterValue() { this->parameterValue_ = nullptr;};
      inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
      inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


    protected:
      shared_ptr<string> parameterKey_ {};
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->flowDesc_ == nullptr
        && this->flowId_ == nullptr && this->flowName_ == nullptr && this->flowTemplate_ == nullptr && this->launchStatus_ == nullptr && this->parameters_ == nullptr
        && this->tag_ == nullptr && this->templateId_ == nullptr; };
    // flowDesc Field Functions 
    bool hasFlowDesc() const { return this->flowDesc_ != nullptr;};
    void deleteFlowDesc() { this->flowDesc_ = nullptr;};
    inline string getFlowDesc() const { DARABONBA_PTR_GET_DEFAULT(flowDesc_, "") };
    inline CreateFlowRequest& setFlowDesc(string flowDesc) { DARABONBA_PTR_SET_VALUE(flowDesc_, flowDesc) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline CreateFlowRequest& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline CreateFlowRequest& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowTemplate Field Functions 
    bool hasFlowTemplate() const { return this->flowTemplate_ != nullptr;};
    void deleteFlowTemplate() { this->flowTemplate_ = nullptr;};
    inline string getFlowTemplate() const { DARABONBA_PTR_GET_DEFAULT(flowTemplate_, "") };
    inline CreateFlowRequest& setFlowTemplate(string flowTemplate) { DARABONBA_PTR_SET_VALUE(flowTemplate_, flowTemplate) };


    // launchStatus Field Functions 
    bool hasLaunchStatus() const { return this->launchStatus_ != nullptr;};
    void deleteLaunchStatus() { this->launchStatus_ = nullptr;};
    inline bool getLaunchStatus() const { DARABONBA_PTR_GET_DEFAULT(launchStatus_, false) };
    inline CreateFlowRequest& setLaunchStatus(bool launchStatus) { DARABONBA_PTR_SET_VALUE(launchStatus_, launchStatus) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateFlowRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateFlowRequest::Parameters>) };
    inline vector<CreateFlowRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<CreateFlowRequest::Parameters>) };
    inline CreateFlowRequest& setParameters(const vector<CreateFlowRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateFlowRequest& setParameters(vector<CreateFlowRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFlowRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFlowRequest::Tag>) };
    inline vector<CreateFlowRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateFlowRequest::Tag>) };
    inline CreateFlowRequest& setTag(const vector<CreateFlowRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFlowRequest& setTag(vector<CreateFlowRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateFlowRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<string> flowDesc_ {};
    shared_ptr<string> flowId_ {};
    // This parameter is required.
    shared_ptr<string> flowName_ {};
    shared_ptr<string> flowTemplate_ {};
    shared_ptr<bool> launchStatus_ {};
    shared_ptr<vector<CreateFlowRequest::Parameters>> parameters_ {};
    shared_ptr<vector<CreateFlowRequest::Tag>> tag_ {};
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
