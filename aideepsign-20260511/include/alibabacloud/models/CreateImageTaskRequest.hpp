// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIDeepSign20260511
{
namespace Models
{
  class CreateImageTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(N, n_);
      DARABONBA_PTR_TO_JSON(NegativePrompt, negativePrompt_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(PromptExtend, promptExtend_);
      DARABONBA_PTR_TO_JSON(Seed, seed_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(N, n_);
      DARABONBA_PTR_FROM_JSON(NegativePrompt, negativePrompt_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(PromptExtend, promptExtend_);
      DARABONBA_PTR_FROM_JSON(Seed, seed_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Watermark, watermark_);
    };
    CreateImageTaskRequest() = default ;
    CreateImageTaskRequest(const CreateImageTaskRequest &) = default ;
    CreateImageTaskRequest(CreateImageTaskRequest &&) = default ;
    CreateImageTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageTaskRequest() = default ;
    CreateImageTaskRequest& operator=(const CreateImageTaskRequest &) = default ;
    CreateImageTaskRequest& operator=(CreateImageTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->model_ == nullptr && this->n_ == nullptr && this->negativePrompt_ == nullptr && this->prompt_ == nullptr && this->promptExtend_ == nullptr
        && this->seed_ == nullptr && this->size_ == nullptr && this->watermark_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline CreateImageTaskRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // n Field Functions 
    bool hasN() const { return this->n_ != nullptr;};
    void deleteN() { this->n_ = nullptr;};
    inline int32_t getN() const { DARABONBA_PTR_GET_DEFAULT(n_, 0) };
    inline CreateImageTaskRequest& setN(int32_t n) { DARABONBA_PTR_SET_VALUE(n_, n) };


    // negativePrompt Field Functions 
    bool hasNegativePrompt() const { return this->negativePrompt_ != nullptr;};
    void deleteNegativePrompt() { this->negativePrompt_ = nullptr;};
    inline string getNegativePrompt() const { DARABONBA_PTR_GET_DEFAULT(negativePrompt_, "") };
    inline CreateImageTaskRequest& setNegativePrompt(string negativePrompt) { DARABONBA_PTR_SET_VALUE(negativePrompt_, negativePrompt) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateImageTaskRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // promptExtend Field Functions 
    bool hasPromptExtend() const { return this->promptExtend_ != nullptr;};
    void deletePromptExtend() { this->promptExtend_ = nullptr;};
    inline bool getPromptExtend() const { DARABONBA_PTR_GET_DEFAULT(promptExtend_, false) };
    inline CreateImageTaskRequest& setPromptExtend(bool promptExtend) { DARABONBA_PTR_SET_VALUE(promptExtend_, promptExtend) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline CreateImageTaskRequest& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline CreateImageTaskRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline bool getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, false) };
    inline CreateImageTaskRequest& setWatermark(bool watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


  protected:
    // The client token that is used to ensure the idempotence of the request. The value is generated by the client and must be unique across different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The model name. Default value: `qwen-image-2.0-pro`.
    shared_ptr<string> model_ {};
    // The number of images to generate. Valid values: 1 to 6. Default value: `1`.
    shared_ptr<int32_t> n_ {};
    // The negative prompt. Maximum length: 500 characters.
    shared_ptr<string> negativePrompt_ {};
    // The text description of the image (positive prompt). Maximum length: 800 characters.
    shared_ptr<string> prompt_ {};
    // Specifies whether to enable intelligent prompt rewriting. Default value: true.
    shared_ptr<bool> promptExtend_ {};
    // The random seed. Valid values: 0 to 2147483647. A value of 0 indicates random. Default value: `0`.
    shared_ptr<int32_t> seed_ {};
    // The image size (format: width×height). Default value: `2048×2048`.
    shared_ptr<string> size_ {};
    // Specifies whether to add a watermark in the lower-right corner. Default value: false.
    shared_ptr<bool> watermark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIDeepSign20260511
#endif
