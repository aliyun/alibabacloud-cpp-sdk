// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERALIMAGEGENERATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERALIMAGEGENERATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class GeneralImageGenerationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GeneralImageGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptExtend, promptExtend_);
      DARABONBA_PTR_TO_JSON(Ratio, ratio_);
      DARABONBA_PTR_TO_JSON(ReferenceUrl, referenceUrlShrink_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, GeneralImageGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptExtend, promptExtend_);
      DARABONBA_PTR_FROM_JSON(Ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(ReferenceUrl, referenceUrlShrink_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    GeneralImageGenerationShrinkRequest() = default ;
    GeneralImageGenerationShrinkRequest(const GeneralImageGenerationShrinkRequest &) = default ;
    GeneralImageGenerationShrinkRequest(GeneralImageGenerationShrinkRequest &&) = default ;
    GeneralImageGenerationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GeneralImageGenerationShrinkRequest() = default ;
    GeneralImageGenerationShrinkRequest& operator=(const GeneralImageGenerationShrinkRequest &) = default ;
    GeneralImageGenerationShrinkRequest& operator=(GeneralImageGenerationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobType_ == nullptr
        && this->mode_ == nullptr && this->n_ == nullptr && this->operation_ == nullptr && this->prompt_ == nullptr && this->promptExtend_ == nullptr
        && this->ratio_ == nullptr && this->referenceUrlShrink_ == nullptr && this->resolution_ == nullptr && this->scene_ == nullptr && this->watermark_ == nullptr; };
    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GeneralImageGenerationShrinkRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GeneralImageGenerationShrinkRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
    inline GeneralImageGenerationShrinkRequest& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline GeneralImageGenerationShrinkRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline GeneralImageGenerationShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptExtend Field Functions 
    bool hasPromptExtend() const { return this->promptExtend_ != nullptr;};
    void deletePromptExtend() { this->promptExtend_ = nullptr;};
    inline bool getPromptExtend() const { DARABONBA_PTR_GET_DEFAULT(promptExtend_, false) };
    inline GeneralImageGenerationShrinkRequest& setPromptExtend(bool promptExtend) { DARABONBA_PTR_SET_VALUE(promptExtend_, promptExtend) };


    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline GeneralImageGenerationShrinkRequest& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // referenceUrlShrink Field Functions 
    bool hasReferenceUrlShrink() const { return this->referenceUrlShrink_ != nullptr;};
    void deleteReferenceUrlShrink() { this->referenceUrlShrink_ = nullptr;};
    inline string getReferenceUrlShrink() const { DARABONBA_PTR_GET_DEFAULT(referenceUrlShrink_, "") };
    inline GeneralImageGenerationShrinkRequest& setReferenceUrlShrink(string referenceUrlShrink) { DARABONBA_PTR_SET_VALUE(referenceUrlShrink_, referenceUrlShrink) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline GeneralImageGenerationShrinkRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GeneralImageGenerationShrinkRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline bool getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, false) };
    inline GeneralImageGenerationShrinkRequest& setWatermark(bool watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


  protected:
    // The task type. Select the generation method.   
    // text_to_image: Generate images using only text descriptions.   
    // image_to_image: Generate or edit images based on existing images.
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
    // The generation mode. The lite mode is faster and more cost-effective. The plus mode produces finer visual effects and supports more reference images.
    // 
    // This parameter is required.
    shared_ptr<string> mode_ {};
    // The number of images generated per call. Valid values: 1 to 4. Default value: 1.
    shared_ptr<int32_t> n_ {};
    // The specific operation for image generation or editing. Only one operation can be selected. Valid values:   
    // [general] scenario
    // *   general_generate (General generation)
    //     
    // *   outpaint (AI outpainting)
    //     
    // [product_ecommerce] scenario
    //     
    // *   scene_generate (Scene image generation)
    //     
    // *   product_replace (Product replacement)
    //     
    // [cloth_ecommerce] scenario
    //     
    // *   model_generate (Model image generation)
    //     
    // [product_ecommerce] scenario & [cloth_ecommerce] scenario
    //     
    // *   detail_generate (Detail image generation)
    //     
    // *   selling_point_generate (Selling point image generation)
    //     
    // *   scene_variation (Scene variation)
    //     
    // *   subject_extract (Subject extraction)
    //     
    // *   recolor (Recolor)
    // 
    // This parameter is required.
    shared_ptr<string> operation_ {};
    // The content of the image you want to generate. Enter only one prompt, up to 5,000 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    // Specifies whether automatic optimization is enabled for the entered prompt. When the optimization is enabled, it completes image details to make the generated effect closer to the description. Default value: true.
    shared_ptr<bool> promptExtend_ {};
    // The aspect ratio of the image. Valid values: 1:1, 2:3, 3:2, 4:3, 3:4, 16:9, and 9:16. Default value: 1:1.
    shared_ptr<string> ratio_ {};
    // The URLs of the reference images. Enter publicly accessible links.
    // Used only for image-to-image generation. Not supported for text-to-image generation.
    // The number of images that can be uploaded varies by mode: up to 3 images in lite mode, and up to 9 images in plus mode.
    shared_ptr<string> referenceUrlShrink_ {};
    // The resolution of the output image. Valid values: 1K and 2K. Default value: 1K.
    shared_ptr<string> resolution_ {};
    // The scenario. Valid values: general (general scenario), product_ecommerce (general product scenario), and cloth_ecommerce (apparel and accessories scenario). Only one scenario can be selected.
    // *   If the task type is text_to_image, only general is supported.
    //     
    // *   If the task type is image_to_image, general, product_ecommerce, and cloth_ecommerce are supported.
    // 
    // This parameter is required.
    shared_ptr<string> scene_ {};
    // Specifies whether to add a watermark to the generated image. Default value: false.
    shared_ptr<bool> watermark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
