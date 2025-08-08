// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTMODELCONFIGFMKVLLMCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYVLLMMODELINPUTMODELCONFIGFMKVLLMCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployVllmModelInputModelConfigFmkVllmConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployVllmModelInputModelConfigFmkVllmConfig& obj) { 
      DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
      DARABONBA_PTR_TO_JSON(blockSize, blockSize_);
      DARABONBA_PTR_TO_JSON(chatTemplate, chatTemplate_);
      DARABONBA_PTR_TO_JSON(dtype, dtype_);
      DARABONBA_PTR_TO_JSON(fullTextPostfix, fullTextPostfix_);
      DARABONBA_PTR_TO_JSON(gpuMemoryUtilization, gpuMemoryUtilization_);
      DARABONBA_PTR_TO_JSON(loadFormat, loadFormat_);
      DARABONBA_PTR_TO_JSON(maxModelLen, maxModelLen_);
      DARABONBA_PTR_TO_JSON(maxParallelLoadingWorkers, maxParallelLoadingWorkers_);
      DARABONBA_PTR_TO_JSON(quantization, quantization_);
      DARABONBA_PTR_TO_JSON(servedModelName, servedModelName_);
      DARABONBA_PTR_TO_JSON(swapSpace, swapSpace_);
    };
    friend void from_json(const Darabonba::Json& j, DeployVllmModelInputModelConfigFmkVllmConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
      DARABONBA_PTR_FROM_JSON(blockSize, blockSize_);
      DARABONBA_PTR_FROM_JSON(chatTemplate, chatTemplate_);
      DARABONBA_PTR_FROM_JSON(dtype, dtype_);
      DARABONBA_PTR_FROM_JSON(fullTextPostfix, fullTextPostfix_);
      DARABONBA_PTR_FROM_JSON(gpuMemoryUtilization, gpuMemoryUtilization_);
      DARABONBA_PTR_FROM_JSON(loadFormat, loadFormat_);
      DARABONBA_PTR_FROM_JSON(maxModelLen, maxModelLen_);
      DARABONBA_PTR_FROM_JSON(maxParallelLoadingWorkers, maxParallelLoadingWorkers_);
      DARABONBA_PTR_FROM_JSON(quantization, quantization_);
      DARABONBA_PTR_FROM_JSON(servedModelName, servedModelName_);
      DARABONBA_PTR_FROM_JSON(swapSpace, swapSpace_);
    };
    DeployVllmModelInputModelConfigFmkVllmConfig() = default ;
    DeployVllmModelInputModelConfigFmkVllmConfig(const DeployVllmModelInputModelConfigFmkVllmConfig &) = default ;
    DeployVllmModelInputModelConfigFmkVllmConfig(DeployVllmModelInputModelConfigFmkVllmConfig &&) = default ;
    DeployVllmModelInputModelConfigFmkVllmConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployVllmModelInputModelConfigFmkVllmConfig() = default ;
    DeployVllmModelInputModelConfigFmkVllmConfig& operator=(const DeployVllmModelInputModelConfigFmkVllmConfig &) = default ;
    DeployVllmModelInputModelConfigFmkVllmConfig& operator=(DeployVllmModelInputModelConfigFmkVllmConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiKey_ != nullptr
        && this->blockSize_ != nullptr && this->chatTemplate_ != nullptr && this->dtype_ != nullptr && this->fullTextPostfix_ != nullptr && this->gpuMemoryUtilization_ != nullptr
        && this->loadFormat_ != nullptr && this->maxModelLen_ != nullptr && this->maxParallelLoadingWorkers_ != nullptr && this->quantization_ != nullptr && this->servedModelName_ != nullptr
        && this->swapSpace_ != nullptr; };
    // apiKey Field Functions 
    bool hasApiKey() const { return this->apiKey_ != nullptr;};
    void deleteApiKey() { this->apiKey_ = nullptr;};
    inline string apiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


    // blockSize Field Functions 
    bool hasBlockSize() const { return this->blockSize_ != nullptr;};
    void deleteBlockSize() { this->blockSize_ = nullptr;};
    inline int32_t blockSize() const { DARABONBA_PTR_GET_DEFAULT(blockSize_, 0) };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setBlockSize(int32_t blockSize) { DARABONBA_PTR_SET_VALUE(blockSize_, blockSize) };


    // chatTemplate Field Functions 
    bool hasChatTemplate() const { return this->chatTemplate_ != nullptr;};
    void deleteChatTemplate() { this->chatTemplate_ = nullptr;};
    inline string chatTemplate() const { DARABONBA_PTR_GET_DEFAULT(chatTemplate_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setChatTemplate(string chatTemplate) { DARABONBA_PTR_SET_VALUE(chatTemplate_, chatTemplate) };


    // dtype Field Functions 
    bool hasDtype() const { return this->dtype_ != nullptr;};
    void deleteDtype() { this->dtype_ = nullptr;};
    inline string dtype() const { DARABONBA_PTR_GET_DEFAULT(dtype_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setDtype(string dtype) { DARABONBA_PTR_SET_VALUE(dtype_, dtype) };


    // fullTextPostfix Field Functions 
    bool hasFullTextPostfix() const { return this->fullTextPostfix_ != nullptr;};
    void deleteFullTextPostfix() { this->fullTextPostfix_ = nullptr;};
    inline string fullTextPostfix() const { DARABONBA_PTR_GET_DEFAULT(fullTextPostfix_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setFullTextPostfix(string fullTextPostfix) { DARABONBA_PTR_SET_VALUE(fullTextPostfix_, fullTextPostfix) };


    // gpuMemoryUtilization Field Functions 
    bool hasGpuMemoryUtilization() const { return this->gpuMemoryUtilization_ != nullptr;};
    void deleteGpuMemoryUtilization() { this->gpuMemoryUtilization_ = nullptr;};
    inline float gpuMemoryUtilization() const { DARABONBA_PTR_GET_DEFAULT(gpuMemoryUtilization_, 0.0) };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setGpuMemoryUtilization(float gpuMemoryUtilization) { DARABONBA_PTR_SET_VALUE(gpuMemoryUtilization_, gpuMemoryUtilization) };


    // loadFormat Field Functions 
    bool hasLoadFormat() const { return this->loadFormat_ != nullptr;};
    void deleteLoadFormat() { this->loadFormat_ = nullptr;};
    inline string loadFormat() const { DARABONBA_PTR_GET_DEFAULT(loadFormat_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setLoadFormat(string loadFormat) { DARABONBA_PTR_SET_VALUE(loadFormat_, loadFormat) };


    // maxModelLen Field Functions 
    bool hasMaxModelLen() const { return this->maxModelLen_ != nullptr;};
    void deleteMaxModelLen() { this->maxModelLen_ = nullptr;};
    inline int32_t maxModelLen() const { DARABONBA_PTR_GET_DEFAULT(maxModelLen_, 0) };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setMaxModelLen(int32_t maxModelLen) { DARABONBA_PTR_SET_VALUE(maxModelLen_, maxModelLen) };


    // maxParallelLoadingWorkers Field Functions 
    bool hasMaxParallelLoadingWorkers() const { return this->maxParallelLoadingWorkers_ != nullptr;};
    void deleteMaxParallelLoadingWorkers() { this->maxParallelLoadingWorkers_ = nullptr;};
    inline int32_t maxParallelLoadingWorkers() const { DARABONBA_PTR_GET_DEFAULT(maxParallelLoadingWorkers_, 0) };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setMaxParallelLoadingWorkers(int32_t maxParallelLoadingWorkers) { DARABONBA_PTR_SET_VALUE(maxParallelLoadingWorkers_, maxParallelLoadingWorkers) };


    // quantization Field Functions 
    bool hasQuantization() const { return this->quantization_ != nullptr;};
    void deleteQuantization() { this->quantization_ = nullptr;};
    inline string quantization() const { DARABONBA_PTR_GET_DEFAULT(quantization_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setQuantization(string quantization) { DARABONBA_PTR_SET_VALUE(quantization_, quantization) };


    // servedModelName Field Functions 
    bool hasServedModelName() const { return this->servedModelName_ != nullptr;};
    void deleteServedModelName() { this->servedModelName_ = nullptr;};
    inline string servedModelName() const { DARABONBA_PTR_GET_DEFAULT(servedModelName_, "") };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setServedModelName(string servedModelName) { DARABONBA_PTR_SET_VALUE(servedModelName_, servedModelName) };


    // swapSpace Field Functions 
    bool hasSwapSpace() const { return this->swapSpace_ != nullptr;};
    void deleteSwapSpace() { this->swapSpace_ = nullptr;};
    inline int32_t swapSpace() const { DARABONBA_PTR_GET_DEFAULT(swapSpace_, 0) };
    inline DeployVllmModelInputModelConfigFmkVllmConfig& setSwapSpace(int32_t swapSpace) { DARABONBA_PTR_SET_VALUE(swapSpace_, swapSpace) };


  protected:
    std::shared_ptr<string> apiKey_ = nullptr;
    std::shared_ptr<int32_t> blockSize_ = nullptr;
    std::shared_ptr<string> chatTemplate_ = nullptr;
    std::shared_ptr<string> dtype_ = nullptr;
    std::shared_ptr<string> fullTextPostfix_ = nullptr;
    std::shared_ptr<float> gpuMemoryUtilization_ = nullptr;
    std::shared_ptr<string> loadFormat_ = nullptr;
    std::shared_ptr<int32_t> maxModelLen_ = nullptr;
    std::shared_ptr<int32_t> maxParallelLoadingWorkers_ = nullptr;
    std::shared_ptr<string> quantization_ = nullptr;
    std::shared_ptr<string> servedModelName_ = nullptr;
    std::shared_ptr<int32_t> swapSpace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
