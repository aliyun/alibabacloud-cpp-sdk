// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVALUATORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVALUATORREQUEST_HPP_
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
  class UpdateEvaluatorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEvaluatorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(annotations, annotations_);
      DARABONBA_ANY_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_ANY_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEvaluatorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(annotations, annotations_);
      DARABONBA_ANY_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_ANY_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(versionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateEvaluatorRequest() = default ;
    UpdateEvaluatorRequest(const UpdateEvaluatorRequest &) = default ;
    UpdateEvaluatorRequest(UpdateEvaluatorRequest &&) = default ;
    UpdateEvaluatorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEvaluatorRequest() = default ;
    UpdateEvaluatorRequest& operator=(const UpdateEvaluatorRequest &) = default ;
    UpdateEvaluatorRequest& operator=(UpdateEvaluatorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotations_ == nullptr
        && this->config_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr && this->properties_ == nullptr && this->version_ == nullptr
        && this->versionDescription_ == nullptr && this->clientToken_ == nullptr; };
    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<string> & getAnnotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<string>) };
    inline vector<string> getAnnotations() { DARABONBA_PTR_GET(annotations_, vector<string>) };
    inline UpdateEvaluatorRequest& setAnnotations(const vector<string> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline UpdateEvaluatorRequest& setAnnotations(vector<string> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline     const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
    Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
    inline UpdateEvaluatorRequest& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
    inline UpdateEvaluatorRequest& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateEvaluatorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline UpdateEvaluatorRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & getProperties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & getProperties() { DARABONBA_GET(properties_) };
    inline UpdateEvaluatorRequest& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline UpdateEvaluatorRequest& setProperties(Darabonba::Json && properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline UpdateEvaluatorRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline UpdateEvaluatorRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateEvaluatorRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The list of annotation marks.
    shared_ptr<vector<string>> annotations_ {};
    // The new version configuration. This parameter is typically required when `version` is specified.
    Darabonba::Json config_ {};
    // The evaluator description.
    shared_ptr<string> description_ {};
    // The display name.
    shared_ptr<string> displayName_ {};
    // The evaluator properties.
    Darabonba::Json properties_ {};
    // The new version number. If specified, a new version is created.
    shared_ptr<string> version_ {};
    // The version description.
    shared_ptr<string> versionDescription_ {};
    // The idempotency token. CloudSpec declares this query parameter, but the backend does not currently perform idempotency comparison.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
