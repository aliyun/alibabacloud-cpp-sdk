// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONEXTRACTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONEXTRACTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationExtractShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationExtractShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(extractType, extractType_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(sourceMaterials, sourceMaterialsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationExtractShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(extractType, extractType_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(sourceMaterials, sourceMaterialsShrink_);
    };
    RunMarketingInformationExtractShrinkRequest() = default ;
    RunMarketingInformationExtractShrinkRequest(const RunMarketingInformationExtractShrinkRequest &) = default ;
    RunMarketingInformationExtractShrinkRequest(RunMarketingInformationExtractShrinkRequest &&) = default ;
    RunMarketingInformationExtractShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationExtractShrinkRequest() = default ;
    RunMarketingInformationExtractShrinkRequest& operator=(const RunMarketingInformationExtractShrinkRequest &) = default ;
    RunMarketingInformationExtractShrinkRequest& operator=(RunMarketingInformationExtractShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customPrompt_ != nullptr
        && this->extractType_ != nullptr && this->modelId_ != nullptr && this->sourceMaterialsShrink_ != nullptr; };
    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline RunMarketingInformationExtractShrinkRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // extractType Field Functions 
    bool hasExtractType() const { return this->extractType_ != nullptr;};
    void deleteExtractType() { this->extractType_ = nullptr;};
    inline string extractType() const { DARABONBA_PTR_GET_DEFAULT(extractType_, "") };
    inline RunMarketingInformationExtractShrinkRequest& setExtractType(string extractType) { DARABONBA_PTR_SET_VALUE(extractType_, extractType) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunMarketingInformationExtractShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // sourceMaterialsShrink Field Functions 
    bool hasSourceMaterialsShrink() const { return this->sourceMaterialsShrink_ != nullptr;};
    void deleteSourceMaterialsShrink() { this->sourceMaterialsShrink_ = nullptr;};
    inline string sourceMaterialsShrink() const { DARABONBA_PTR_GET_DEFAULT(sourceMaterialsShrink_, "") };
    inline RunMarketingInformationExtractShrinkRequest& setSourceMaterialsShrink(string sourceMaterialsShrink) { DARABONBA_PTR_SET_VALUE(sourceMaterialsShrink_, sourceMaterialsShrink) };


  protected:
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<string> extractType_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<string> sourceMaterialsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
