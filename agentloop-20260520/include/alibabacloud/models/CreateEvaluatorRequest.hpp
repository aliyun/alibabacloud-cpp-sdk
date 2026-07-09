// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVALUATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVALUATORREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class CreateEvaluatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEvaluatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEvaluatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    CreateEvaluatorRequest() = default ;
    CreateEvaluatorRequest(const CreateEvaluatorRequest &) = default ;
    CreateEvaluatorRequest(CreateEvaluatorRequest &&) = default ;
    CreateEvaluatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEvaluatorRequest() = default ;
    CreateEvaluatorRequest& operator=(const CreateEvaluatorRequest &) = default ;
    CreateEvaluatorRequest& operator=(CreateEvaluatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->config_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->metricName_ == nullptr && this->name_ == nullptr
        && this->properties_ == nullptr && this->type_ == nullptr && this->version_ == nullptr && this->versionDescription_ == nullptr && this->clientToken_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<string>) };
    inline vector<string> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<string>) };
    inline CreateEvaluatorRequest& setAnnotations(const vector<string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline CreateEvaluatorRequest& setAnnotations(vector<string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline CreateEvaluatorRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline CreateEvaluatorRequest& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEvaluatorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateEvaluatorRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateEvaluatorRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateEvaluatorRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
    inline CreateEvaluatorRequest& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline CreateEvaluatorRequest& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateEvaluatorRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateEvaluatorRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline CreateEvaluatorRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEvaluatorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The list of annotation tags.
    shared_ptr<vector<string>> annotations_ {};
    // The evaluator configuration. For LLM/AGENT evaluators, this typically contains prompt, variables, and outputSchema. For CODE evaluators, this typically contains codeType, faasConfig, variables, and parameters.
    Darabonba::Json config_ {};
    // The evaluator description. The description can be up to 256 characters in length.
    shared_ptr<string> description_ {};
    // The display name. The name can be up to 128 characters in length.
    shared_ptr<string> displayName_ {};
    // The evaluation metric name.
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The evaluator name. The name cannot start with a system-reserved prefix and can be up to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The evaluator properties.
    Darabonba::Json properties_ {};
    // The evaluator type. Valid values:
    // 
    // - LLM: an inner join large language model evaluation evaluator.
    // - AGENT: a StarOps digital human evaluator.
    // - CODE: a code evaluator.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The initial version number.
    // 
    // This parameter is required.
    shared_ptr<string> version_ {};
    // The version description.
    shared_ptr<string> versionDescription_ {};
    // The idempotency token. A unique string generated by the client to ensure idempotent creation. This query parameter is declared in CloudSpec, but the backend does not currently perform idempotency checks.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
