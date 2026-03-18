// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDINFERENCEJOBCMD_HPP_
#define ALIBABACLOUD_MODELS_PERSONALIZEDTXT2IMGADDINFERENCEJOBCMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class Personalizedtxt2imgAddInferenceJobCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Personalizedtxt2imgAddInferenceJobCmd& obj) { 
      DARABONBA_PTR_TO_JSON(imageNumber, imageNumber_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(seed, seed_);
    };
    friend void from_json(const Darabonba::Json& j, Personalizedtxt2imgAddInferenceJobCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(imageNumber, imageNumber_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(seed, seed_);
    };
    Personalizedtxt2imgAddInferenceJobCmd() = default ;
    Personalizedtxt2imgAddInferenceJobCmd(const Personalizedtxt2imgAddInferenceJobCmd &) = default ;
    Personalizedtxt2imgAddInferenceJobCmd(Personalizedtxt2imgAddInferenceJobCmd &&) = default ;
    Personalizedtxt2imgAddInferenceJobCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Personalizedtxt2imgAddInferenceJobCmd() = default ;
    Personalizedtxt2imgAddInferenceJobCmd& operator=(const Personalizedtxt2imgAddInferenceJobCmd &) = default ;
    Personalizedtxt2imgAddInferenceJobCmd& operator=(Personalizedtxt2imgAddInferenceJobCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageNumber_ == nullptr
        && this->modelId_ == nullptr && this->prompt_ == nullptr && this->seed_ == nullptr; };
    // imageNumber Field Functions 
    bool hasImageNumber() const { return this->imageNumber_ != nullptr;};
    void deleteImageNumber() { this->imageNumber_ = nullptr;};
    inline int32_t getImageNumber() const { DARABONBA_PTR_GET_DEFAULT(imageNumber_, 0) };
    inline Personalizedtxt2imgAddInferenceJobCmd& setImageNumber(int32_t imageNumber) { DARABONBA_PTR_SET_VALUE(imageNumber_, imageNumber) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline Personalizedtxt2imgAddInferenceJobCmd& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline Personalizedtxt2imgAddInferenceJobCmd& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t getSeed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline Personalizedtxt2imgAddInferenceJobCmd& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


  protected:
    shared_ptr<int32_t> imageNumber_ {};
    // This parameter is required.
    shared_ptr<string> modelId_ {};
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    shared_ptr<int32_t> seed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
