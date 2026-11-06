// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAPROCESSJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAPROCESSJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDataProcessJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataProcessJobTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Captioning, captioning_);
      DARABONBA_PTR_TO_JSON(CaptioningPrompt, captioningPrompt_);
      DARABONBA_PTR_TO_JSON(Embedding, embedding_);
      DARABONBA_PTR_TO_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataProcessJobTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Captioning, captioning_);
      DARABONBA_PTR_FROM_JSON(CaptioningPrompt, captioningPrompt_);
      DARABONBA_PTR_FROM_JSON(Embedding, embedding_);
      DARABONBA_PTR_FROM_JSON(EmbeddingDimension, embeddingDimension_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    CreateDataProcessJobTemplateRequest() = default ;
    CreateDataProcessJobTemplateRequest(const CreateDataProcessJobTemplateRequest &) = default ;
    CreateDataProcessJobTemplateRequest(CreateDataProcessJobTemplateRequest &&) = default ;
    CreateDataProcessJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataProcessJobTemplateRequest() = default ;
    CreateDataProcessJobTemplateRequest& operator=(const CreateDataProcessJobTemplateRequest &) = default ;
    CreateDataProcessJobTemplateRequest& operator=(CreateDataProcessJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->captioning_ == nullptr
        && this->captioningPrompt_ == nullptr && this->embedding_ == nullptr && this->embeddingDimension_ == nullptr && this->regionId_ == nullptr && this->templateConfig_ == nullptr
        && this->templateName_ == nullptr && this->templateType_ == nullptr; };
    // captioning Field Functions 
    bool hasCaptioning() const { return this->captioning_ != nullptr;};
    void deleteCaptioning() { this->captioning_ = nullptr;};
    inline bool getCaptioning() const { DARABONBA_PTR_GET_DEFAULT(captioning_, false) };
    inline CreateDataProcessJobTemplateRequest& setCaptioning(bool captioning) { DARABONBA_PTR_SET_VALUE(captioning_, captioning) };


    // captioningPrompt Field Functions 
    bool hasCaptioningPrompt() const { return this->captioningPrompt_ != nullptr;};
    void deleteCaptioningPrompt() { this->captioningPrompt_ = nullptr;};
    inline string getCaptioningPrompt() const { DARABONBA_PTR_GET_DEFAULT(captioningPrompt_, "") };
    inline CreateDataProcessJobTemplateRequest& setCaptioningPrompt(string captioningPrompt) { DARABONBA_PTR_SET_VALUE(captioningPrompt_, captioningPrompt) };


    // embedding Field Functions 
    bool hasEmbedding() const { return this->embedding_ != nullptr;};
    void deleteEmbedding() { this->embedding_ = nullptr;};
    inline bool getEmbedding() const { DARABONBA_PTR_GET_DEFAULT(embedding_, false) };
    inline CreateDataProcessJobTemplateRequest& setEmbedding(bool embedding) { DARABONBA_PTR_SET_VALUE(embedding_, embedding) };


    // embeddingDimension Field Functions 
    bool hasEmbeddingDimension() const { return this->embeddingDimension_ != nullptr;};
    void deleteEmbeddingDimension() { this->embeddingDimension_ = nullptr;};
    inline int32_t getEmbeddingDimension() const { DARABONBA_PTR_GET_DEFAULT(embeddingDimension_, 0) };
    inline CreateDataProcessJobTemplateRequest& setEmbeddingDimension(int32_t embeddingDimension) { DARABONBA_PTR_SET_VALUE(embeddingDimension_, embeddingDimension) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataProcessJobTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline string getTemplateConfig() const { DARABONBA_PTR_GET_DEFAULT(templateConfig_, "") };
    inline CreateDataProcessJobTemplateRequest& setTemplateConfig(string templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline CreateDataProcessJobTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline CreateDataProcessJobTemplateRequest& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // Specifies whether to fetch the image summary or video synopsis. When Settings is set to true, CaptioningPrompt must be specified.
    shared_ptr<bool> captioning_ {};
    // The prompt used for extracting summaries. This parameter takes effect only when Captioning is set to true.
    shared_ptr<string> captioningPrompt_ {};
    // Specifies whether to convert the content into vectors.
    shared_ptr<bool> embedding_ {};
    // The output dimension of the vector. Valid values when Embedding is set to true: 512, 768, 1024, and 2048.
    shared_ptr<int32_t> embeddingDimension_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The JSON string for additional template configurations.
    // 
    // This parameter is required.
    shared_ptr<string> templateConfig_ {};
    // The name of the task template.
    shared_ptr<string> templateName_ {};
    // The templatetype of the node. Valid values: image.
    // 
    // This parameter is required.
    shared_ptr<string> templateType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
