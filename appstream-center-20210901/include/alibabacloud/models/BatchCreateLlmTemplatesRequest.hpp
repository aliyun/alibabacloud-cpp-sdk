// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATELLMTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATELLMTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class BatchCreateLlmTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateLlmTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LlmTemplateItems, llmTemplateItems_);
      DARABONBA_PTR_TO_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_TO_JSON(ProviderTemplateId, providerTemplateId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateLlmTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LlmTemplateItems, llmTemplateItems_);
      DARABONBA_PTR_FROM_JSON(ModelTemplateId, modelTemplateId_);
      DARABONBA_PTR_FROM_JSON(ProviderTemplateId, providerTemplateId_);
    };
    BatchCreateLlmTemplatesRequest() = default ;
    BatchCreateLlmTemplatesRequest(const BatchCreateLlmTemplatesRequest &) = default ;
    BatchCreateLlmTemplatesRequest(BatchCreateLlmTemplatesRequest &&) = default ;
    BatchCreateLlmTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateLlmTemplatesRequest() = default ;
    BatchCreateLlmTemplatesRequest& operator=(const BatchCreateLlmTemplatesRequest &) = default ;
    BatchCreateLlmTemplatesRequest& operator=(BatchCreateLlmTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LlmTemplateItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LlmTemplateItems& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(IsDefaultModel, isDefaultModel_);
        DARABONBA_PTR_TO_JSON(LlmCode, llmCode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, LlmTemplateItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(IsDefaultModel, isDefaultModel_);
        DARABONBA_PTR_FROM_JSON(LlmCode, llmCode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      LlmTemplateItems() = default ;
      LlmTemplateItems(const LlmTemplateItems &) = default ;
      LlmTemplateItems(LlmTemplateItems &&) = default ;
      LlmTemplateItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LlmTemplateItems() = default ;
      LlmTemplateItems& operator=(const LlmTemplateItems &) = default ;
      LlmTemplateItems& operator=(LlmTemplateItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->description_ == nullptr && this->isDefaultModel_ == nullptr && this->llmCode_ == nullptr && this->name_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline LlmTemplateItems& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline LlmTemplateItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // isDefaultModel Field Functions 
      bool hasIsDefaultModel() const { return this->isDefaultModel_ != nullptr;};
      void deleteIsDefaultModel() { this->isDefaultModel_ = nullptr;};
      inline bool getIsDefaultModel() const { DARABONBA_PTR_GET_DEFAULT(isDefaultModel_, false) };
      inline LlmTemplateItems& setIsDefaultModel(bool isDefaultModel) { DARABONBA_PTR_SET_VALUE(isDefaultModel_, isDefaultModel) };


      // llmCode Field Functions 
      bool hasLlmCode() const { return this->llmCode_ != nullptr;};
      void deleteLlmCode() { this->llmCode_ = nullptr;};
      inline string getLlmCode() const { DARABONBA_PTR_GET_DEFAULT(llmCode_, "") };
      inline LlmTemplateItems& setLlmCode(string llmCode) { DARABONBA_PTR_SET_VALUE(llmCode_, llmCode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline LlmTemplateItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The model configuration JSON object.
      shared_ptr<string> config_ {};
      // The model description.
      shared_ptr<string> description_ {};
      // Specifies whether to set this model as the default model. Each model group can have at most one default model.
      shared_ptr<bool> isDefaultModel_ {};
      // The model code, which must be unique within the same provider.
      shared_ptr<string> llmCode_ {};
      // The model name.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->llmTemplateItems_ == nullptr
        && this->modelTemplateId_ == nullptr && this->providerTemplateId_ == nullptr; };
    // llmTemplateItems Field Functions 
    bool hasLlmTemplateItems() const { return this->llmTemplateItems_ != nullptr;};
    void deleteLlmTemplateItems() { this->llmTemplateItems_ = nullptr;};
    inline const vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems> & getLlmTemplateItems() const { DARABONBA_PTR_GET_CONST(llmTemplateItems_, vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems>) };
    inline vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems> getLlmTemplateItems() { DARABONBA_PTR_GET(llmTemplateItems_, vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems>) };
    inline BatchCreateLlmTemplatesRequest& setLlmTemplateItems(const vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems> & llmTemplateItems) { DARABONBA_PTR_SET_VALUE(llmTemplateItems_, llmTemplateItems) };
    inline BatchCreateLlmTemplatesRequest& setLlmTemplateItems(vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems> && llmTemplateItems) { DARABONBA_PTR_SET_RVALUE(llmTemplateItems_, llmTemplateItems) };


    // modelTemplateId Field Functions 
    bool hasModelTemplateId() const { return this->modelTemplateId_ != nullptr;};
    void deleteModelTemplateId() { this->modelTemplateId_ = nullptr;};
    inline string getModelTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelTemplateId_, "") };
    inline BatchCreateLlmTemplatesRequest& setModelTemplateId(string modelTemplateId) { DARABONBA_PTR_SET_VALUE(modelTemplateId_, modelTemplateId) };


    // providerTemplateId Field Functions 
    bool hasProviderTemplateId() const { return this->providerTemplateId_ != nullptr;};
    void deleteProviderTemplateId() { this->providerTemplateId_ = nullptr;};
    inline string getProviderTemplateId() const { DARABONBA_PTR_GET_DEFAULT(providerTemplateId_, "") };
    inline BatchCreateLlmTemplatesRequest& setProviderTemplateId(string providerTemplateId) { DARABONBA_PTR_SET_VALUE(providerTemplateId_, providerTemplateId) };


  protected:
    // The list of model configurations to create.
    shared_ptr<vector<BatchCreateLlmTemplatesRequest::LlmTemplateItems>> llmTemplateItems_ {};
    // The ID of the associated model group.
    shared_ptr<string> modelTemplateId_ {};
    // The ID of the model provider template to which the models belong.
    // 
    // This parameter is required.
    shared_ptr<string> providerTemplateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
