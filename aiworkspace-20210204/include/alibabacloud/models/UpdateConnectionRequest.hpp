// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Models, models_);
      DARABONBA_PTR_TO_JSON(Secrets, secrets_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Models, models_);
      DARABONBA_PTR_FROM_JSON(Secrets, secrets_);
    };
    UpdateConnectionRequest() = default ;
    UpdateConnectionRequest(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest(UpdateConnectionRequest &&) = default ;
    UpdateConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConnectionRequest() = default ;
    UpdateConnectionRequest& operator=(const UpdateConnectionRequest &) = default ;
    UpdateConnectionRequest& operator=(UpdateConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Models : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Models& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Model, model_);
        DARABONBA_PTR_TO_JSON(ModelType, modelType_);
        DARABONBA_PTR_TO_JSON(ToolCall, toolCall_);
      };
      friend void from_json(const Darabonba::Json& j, Models& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Model, model_);
        DARABONBA_PTR_FROM_JSON(ModelType, modelType_);
        DARABONBA_PTR_FROM_JSON(ToolCall, toolCall_);
      };
      Models() = default ;
      Models(const Models &) = default ;
      Models(Models &&) = default ;
      Models(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Models() = default ;
      Models& operator=(const Models &) = default ;
      Models& operator=(Models &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->model_ == nullptr && this->modelType_ == nullptr && this->toolCall_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Models& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // model Field Functions 
      bool hasModel() const { return this->model_ != nullptr;};
      void deleteModel() { this->model_ = nullptr;};
      inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
      inline Models& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


      // modelType Field Functions 
      bool hasModelType() const { return this->modelType_ != nullptr;};
      void deleteModelType() { this->modelType_ = nullptr;};
      inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
      inline Models& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


      // toolCall Field Functions 
      bool hasToolCall() const { return this->toolCall_ != nullptr;};
      void deleteToolCall() { this->toolCall_ = nullptr;};
      inline bool getToolCall() const { DARABONBA_PTR_GET_DEFAULT(toolCall_, false) };
      inline Models& setToolCall(bool toolCall) { DARABONBA_PTR_SET_VALUE(toolCall_, toolCall) };


    protected:
      // The display name of the model.
      shared_ptr<string> displayName_ {};
      // The model identifier.
      shared_ptr<string> model_ {};
      // The model type. Valid values:
      // 
      // *   LLM
      // *   Embedding
      // *   ReRank
      shared_ptr<string> modelType_ {};
      // Indicates whether tool calling is supported. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> toolCall_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->description_ == nullptr && this->models_ == nullptr && this->secrets_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const map<string, string> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, map<string, string>) };
    inline map<string, string> getConfigs() { DARABONBA_PTR_GET(configs_, map<string, string>) };
    inline UpdateConnectionRequest& setConfigs(const map<string, string> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline UpdateConnectionRequest& setConfigs(map<string, string> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // models Field Functions 
    bool hasModels() const { return this->models_ != nullptr;};
    void deleteModels() { this->models_ = nullptr;};
    inline const vector<UpdateConnectionRequest::Models> & getModels() const { DARABONBA_PTR_GET_CONST(models_, vector<UpdateConnectionRequest::Models>) };
    inline vector<UpdateConnectionRequest::Models> getModels() { DARABONBA_PTR_GET(models_, vector<UpdateConnectionRequest::Models>) };
    inline UpdateConnectionRequest& setModels(const vector<UpdateConnectionRequest::Models> & models) { DARABONBA_PTR_SET_VALUE(models_, models) };
    inline UpdateConnectionRequest& setModels(vector<UpdateConnectionRequest::Models> && models) { DARABONBA_PTR_SET_RVALUE(models_, models) };


    // secrets Field Functions 
    bool hasSecrets() const { return this->secrets_ != nullptr;};
    void deleteSecrets() { this->secrets_ = nullptr;};
    inline const map<string, string> & getSecrets() const { DARABONBA_PTR_GET_CONST(secrets_, map<string, string>) };
    inline map<string, string> getSecrets() { DARABONBA_PTR_GET(secrets_, map<string, string>) };
    inline UpdateConnectionRequest& setSecrets(const map<string, string> & secrets) { DARABONBA_PTR_SET_VALUE(secrets_, secrets) };
    inline UpdateConnectionRequest& setSecrets(map<string, string> && secrets) { DARABONBA_PTR_SET_RVALUE(secrets_, secrets) };


  protected:
    // The connection configuration. The connection configuration is in the key-value format. The keys configured for different connection types are different. For more information, see the supplementary description of the request parameters in CreateConnection.
    shared_ptr<map<string, string>> configs_ {};
    // The connection description.
    shared_ptr<string> description_ {};
    // The models.
    shared_ptr<vector<UpdateConnectionRequest::Models>> models_ {};
    // The key-value configuration to be encrypted, such as the database logon password and the key for model connection.
    shared_ptr<map<string, string>> secrets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
