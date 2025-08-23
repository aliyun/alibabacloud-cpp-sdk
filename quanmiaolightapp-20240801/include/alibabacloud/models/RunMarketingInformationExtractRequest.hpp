// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONEXTRACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNMARKETINGINFORMATIONEXTRACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunMarketingInformationExtractRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunMarketingInformationExtractRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_TO_JSON(extractType, extractType_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(sourceMaterials, sourceMaterials_);
    };
    friend void from_json(const Darabonba::Json& j, RunMarketingInformationExtractRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customPrompt, customPrompt_);
      DARABONBA_PTR_FROM_JSON(extractType, extractType_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(sourceMaterials, sourceMaterials_);
    };
    RunMarketingInformationExtractRequest() = default ;
    RunMarketingInformationExtractRequest(const RunMarketingInformationExtractRequest &) = default ;
    RunMarketingInformationExtractRequest(RunMarketingInformationExtractRequest &&) = default ;
    RunMarketingInformationExtractRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunMarketingInformationExtractRequest() = default ;
    RunMarketingInformationExtractRequest& operator=(const RunMarketingInformationExtractRequest &) = default ;
    RunMarketingInformationExtractRequest& operator=(RunMarketingInformationExtractRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customPrompt_ != nullptr
        && this->extractType_ != nullptr && this->modelId_ != nullptr && this->sourceMaterials_ != nullptr; };
    // customPrompt Field Functions 
    bool hasCustomPrompt() const { return this->customPrompt_ != nullptr;};
    void deleteCustomPrompt() { this->customPrompt_ = nullptr;};
    inline string customPrompt() const { DARABONBA_PTR_GET_DEFAULT(customPrompt_, "") };
    inline RunMarketingInformationExtractRequest& setCustomPrompt(string customPrompt) { DARABONBA_PTR_SET_VALUE(customPrompt_, customPrompt) };


    // extractType Field Functions 
    bool hasExtractType() const { return this->extractType_ != nullptr;};
    void deleteExtractType() { this->extractType_ = nullptr;};
    inline string extractType() const { DARABONBA_PTR_GET_DEFAULT(extractType_, "") };
    inline RunMarketingInformationExtractRequest& setExtractType(string extractType) { DARABONBA_PTR_SET_VALUE(extractType_, extractType) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunMarketingInformationExtractRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // sourceMaterials Field Functions 
    bool hasSourceMaterials() const { return this->sourceMaterials_ != nullptr;};
    void deleteSourceMaterials() { this->sourceMaterials_ = nullptr;};
    inline const vector<string> & sourceMaterials() const { DARABONBA_PTR_GET_CONST(sourceMaterials_, vector<string>) };
    inline vector<string> sourceMaterials() { DARABONBA_PTR_GET(sourceMaterials_, vector<string>) };
    inline RunMarketingInformationExtractRequest& setSourceMaterials(const vector<string> & sourceMaterials) { DARABONBA_PTR_SET_VALUE(sourceMaterials_, sourceMaterials) };
    inline RunMarketingInformationExtractRequest& setSourceMaterials(vector<string> && sourceMaterials) { DARABONBA_PTR_SET_RVALUE(sourceMaterials_, sourceMaterials) };


  protected:
    std::shared_ptr<string> customPrompt_ = nullptr;
    std::shared_ptr<string> extractType_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<vector<string>> sourceMaterials_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
