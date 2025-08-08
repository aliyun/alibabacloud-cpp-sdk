// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELINPUTMODELCONFIGFMKOLLAMACONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYOLLAMAMODELINPUTMODELCONFIGFMKOLLAMACONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class DeployOllamaModelInputModelConfigFmkOllamaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployOllamaModelInputModelConfigFmkOllamaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(minP, minP_);
      DARABONBA_PTR_TO_JSON(mirostat, mirostat_);
      DARABONBA_PTR_TO_JSON(mirostatEta, mirostatEta_);
      DARABONBA_PTR_TO_JSON(mirostatTau, mirostatTau_);
      DARABONBA_PTR_TO_JSON(modelName, modelName_);
      DARABONBA_PTR_TO_JSON(modelfileAdapter, modelfileAdapter_);
      DARABONBA_PTR_TO_JSON(modelfileAdditionalFromsString, modelfileAdditionalFromsString_);
      DARABONBA_PTR_TO_JSON(modelfileFullTextPostfix, modelfileFullTextPostfix_);
      DARABONBA_PTR_TO_JSON(modelfileParams, modelfileParams_);
      DARABONBA_PTR_TO_JSON(modelfileSystem, modelfileSystem_);
      DARABONBA_PTR_TO_JSON(modelfileTemplate, modelfileTemplate_);
      DARABONBA_PTR_TO_JSON(numCtx, numCtx_);
      DARABONBA_PTR_TO_JSON(numPredict, numPredict_);
      DARABONBA_PTR_TO_JSON(quantize, quantize_);
      DARABONBA_PTR_TO_JSON(repeatLastN, repeatLastN_);
      DARABONBA_PTR_TO_JSON(repeatPenalty, repeatPenalty_);
      DARABONBA_PTR_TO_JSON(seed, seed_);
      DARABONBA_PTR_TO_JSON(singleModelFile, singleModelFile_);
      DARABONBA_PTR_TO_JSON(splitedModelStartFile, splitedModelStartFile_);
      DARABONBA_PTR_TO_JSON(stop, stop_);
      DARABONBA_PTR_TO_JSON(stream, stream_);
      DARABONBA_PTR_TO_JSON(temperature, temperature_);
      DARABONBA_PTR_TO_JSON(tfsZ, tfsZ_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(topP, topP_);
    };
    friend void from_json(const Darabonba::Json& j, DeployOllamaModelInputModelConfigFmkOllamaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(minP, minP_);
      DARABONBA_PTR_FROM_JSON(mirostat, mirostat_);
      DARABONBA_PTR_FROM_JSON(mirostatEta, mirostatEta_);
      DARABONBA_PTR_FROM_JSON(mirostatTau, mirostatTau_);
      DARABONBA_PTR_FROM_JSON(modelName, modelName_);
      DARABONBA_PTR_FROM_JSON(modelfileAdapter, modelfileAdapter_);
      DARABONBA_PTR_FROM_JSON(modelfileAdditionalFromsString, modelfileAdditionalFromsString_);
      DARABONBA_PTR_FROM_JSON(modelfileFullTextPostfix, modelfileFullTextPostfix_);
      DARABONBA_PTR_FROM_JSON(modelfileParams, modelfileParams_);
      DARABONBA_PTR_FROM_JSON(modelfileSystem, modelfileSystem_);
      DARABONBA_PTR_FROM_JSON(modelfileTemplate, modelfileTemplate_);
      DARABONBA_PTR_FROM_JSON(numCtx, numCtx_);
      DARABONBA_PTR_FROM_JSON(numPredict, numPredict_);
      DARABONBA_PTR_FROM_JSON(quantize, quantize_);
      DARABONBA_PTR_FROM_JSON(repeatLastN, repeatLastN_);
      DARABONBA_PTR_FROM_JSON(repeatPenalty, repeatPenalty_);
      DARABONBA_PTR_FROM_JSON(seed, seed_);
      DARABONBA_PTR_FROM_JSON(singleModelFile, singleModelFile_);
      DARABONBA_PTR_FROM_JSON(splitedModelStartFile, splitedModelStartFile_);
      DARABONBA_PTR_FROM_JSON(stop, stop_);
      DARABONBA_PTR_FROM_JSON(stream, stream_);
      DARABONBA_PTR_FROM_JSON(temperature, temperature_);
      DARABONBA_PTR_FROM_JSON(tfsZ, tfsZ_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(topP, topP_);
    };
    DeployOllamaModelInputModelConfigFmkOllamaConfig() = default ;
    DeployOllamaModelInputModelConfigFmkOllamaConfig(const DeployOllamaModelInputModelConfigFmkOllamaConfig &) = default ;
    DeployOllamaModelInputModelConfigFmkOllamaConfig(DeployOllamaModelInputModelConfigFmkOllamaConfig &&) = default ;
    DeployOllamaModelInputModelConfigFmkOllamaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployOllamaModelInputModelConfigFmkOllamaConfig() = default ;
    DeployOllamaModelInputModelConfigFmkOllamaConfig& operator=(const DeployOllamaModelInputModelConfigFmkOllamaConfig &) = default ;
    DeployOllamaModelInputModelConfigFmkOllamaConfig& operator=(DeployOllamaModelInputModelConfigFmkOllamaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->minP_ != nullptr
        && this->mirostat_ != nullptr && this->mirostatEta_ != nullptr && this->mirostatTau_ != nullptr && this->modelName_ != nullptr && this->modelfileAdapter_ != nullptr
        && this->modelfileAdditionalFromsString_ != nullptr && this->modelfileFullTextPostfix_ != nullptr && this->modelfileParams_ != nullptr && this->modelfileSystem_ != nullptr && this->modelfileTemplate_ != nullptr
        && this->numCtx_ != nullptr && this->numPredict_ != nullptr && this->quantize_ != nullptr && this->repeatLastN_ != nullptr && this->repeatPenalty_ != nullptr
        && this->seed_ != nullptr && this->singleModelFile_ != nullptr && this->splitedModelStartFile_ != nullptr && this->stop_ != nullptr && this->stream_ != nullptr
        && this->temperature_ != nullptr && this->tfsZ_ != nullptr && this->topK_ != nullptr && this->topP_ != nullptr; };
    // minP Field Functions 
    bool hasMinP() const { return this->minP_ != nullptr;};
    void deleteMinP() { this->minP_ = nullptr;};
    inline float minP() const { DARABONBA_PTR_GET_DEFAULT(minP_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setMinP(float minP) { DARABONBA_PTR_SET_VALUE(minP_, minP) };


    // mirostat Field Functions 
    bool hasMirostat() const { return this->mirostat_ != nullptr;};
    void deleteMirostat() { this->mirostat_ = nullptr;};
    inline int32_t mirostat() const { DARABONBA_PTR_GET_DEFAULT(mirostat_, 0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setMirostat(int32_t mirostat) { DARABONBA_PTR_SET_VALUE(mirostat_, mirostat) };


    // mirostatEta Field Functions 
    bool hasMirostatEta() const { return this->mirostatEta_ != nullptr;};
    void deleteMirostatEta() { this->mirostatEta_ = nullptr;};
    inline float mirostatEta() const { DARABONBA_PTR_GET_DEFAULT(mirostatEta_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setMirostatEta(float mirostatEta) { DARABONBA_PTR_SET_VALUE(mirostatEta_, mirostatEta) };


    // mirostatTau Field Functions 
    bool hasMirostatTau() const { return this->mirostatTau_ != nullptr;};
    void deleteMirostatTau() { this->mirostatTau_ = nullptr;};
    inline float mirostatTau() const { DARABONBA_PTR_GET_DEFAULT(mirostatTau_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setMirostatTau(float mirostatTau) { DARABONBA_PTR_SET_VALUE(mirostatTau_, mirostatTau) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelfileAdapter Field Functions 
    bool hasModelfileAdapter() const { return this->modelfileAdapter_ != nullptr;};
    void deleteModelfileAdapter() { this->modelfileAdapter_ = nullptr;};
    inline string modelfileAdapter() const { DARABONBA_PTR_GET_DEFAULT(modelfileAdapter_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelfileAdapter(string modelfileAdapter) { DARABONBA_PTR_SET_VALUE(modelfileAdapter_, modelfileAdapter) };


    // modelfileAdditionalFromsString Field Functions 
    bool hasModelfileAdditionalFromsString() const { return this->modelfileAdditionalFromsString_ != nullptr;};
    void deleteModelfileAdditionalFromsString() { this->modelfileAdditionalFromsString_ = nullptr;};
    inline string modelfileAdditionalFromsString() const { DARABONBA_PTR_GET_DEFAULT(modelfileAdditionalFromsString_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelfileAdditionalFromsString(string modelfileAdditionalFromsString) { DARABONBA_PTR_SET_VALUE(modelfileAdditionalFromsString_, modelfileAdditionalFromsString) };


    // modelfileFullTextPostfix Field Functions 
    bool hasModelfileFullTextPostfix() const { return this->modelfileFullTextPostfix_ != nullptr;};
    void deleteModelfileFullTextPostfix() { this->modelfileFullTextPostfix_ = nullptr;};
    inline string modelfileFullTextPostfix() const { DARABONBA_PTR_GET_DEFAULT(modelfileFullTextPostfix_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelfileFullTextPostfix(string modelfileFullTextPostfix) { DARABONBA_PTR_SET_VALUE(modelfileFullTextPostfix_, modelfileFullTextPostfix) };


    // modelfileParams Field Functions 
    bool hasModelfileParams() const { return this->modelfileParams_ != nullptr;};
    void deleteModelfileParams() { this->modelfileParams_ = nullptr;};
    inline string modelfileParams() const { DARABONBA_PTR_GET_DEFAULT(modelfileParams_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelfileParams(string modelfileParams) { DARABONBA_PTR_SET_VALUE(modelfileParams_, modelfileParams) };


    // modelfileSystem Field Functions 
    bool hasModelfileSystem() const { return this->modelfileSystem_ != nullptr;};
    void deleteModelfileSystem() { this->modelfileSystem_ = nullptr;};
    inline string modelfileSystem() const { DARABONBA_PTR_GET_DEFAULT(modelfileSystem_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelfileSystem(string modelfileSystem) { DARABONBA_PTR_SET_VALUE(modelfileSystem_, modelfileSystem) };


    // modelfileTemplate Field Functions 
    bool hasModelfileTemplate() const { return this->modelfileTemplate_ != nullptr;};
    void deleteModelfileTemplate() { this->modelfileTemplate_ = nullptr;};
    inline string modelfileTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelfileTemplate_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setModelfileTemplate(string modelfileTemplate) { DARABONBA_PTR_SET_VALUE(modelfileTemplate_, modelfileTemplate) };


    // numCtx Field Functions 
    bool hasNumCtx() const { return this->numCtx_ != nullptr;};
    void deleteNumCtx() { this->numCtx_ = nullptr;};
    inline int32_t numCtx() const { DARABONBA_PTR_GET_DEFAULT(numCtx_, 0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setNumCtx(int32_t numCtx) { DARABONBA_PTR_SET_VALUE(numCtx_, numCtx) };


    // numPredict Field Functions 
    bool hasNumPredict() const { return this->numPredict_ != nullptr;};
    void deleteNumPredict() { this->numPredict_ = nullptr;};
    inline int32_t numPredict() const { DARABONBA_PTR_GET_DEFAULT(numPredict_, 0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setNumPredict(int32_t numPredict) { DARABONBA_PTR_SET_VALUE(numPredict_, numPredict) };


    // quantize Field Functions 
    bool hasQuantize() const { return this->quantize_ != nullptr;};
    void deleteQuantize() { this->quantize_ = nullptr;};
    inline string quantize() const { DARABONBA_PTR_GET_DEFAULT(quantize_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setQuantize(string quantize) { DARABONBA_PTR_SET_VALUE(quantize_, quantize) };


    // repeatLastN Field Functions 
    bool hasRepeatLastN() const { return this->repeatLastN_ != nullptr;};
    void deleteRepeatLastN() { this->repeatLastN_ = nullptr;};
    inline int32_t repeatLastN() const { DARABONBA_PTR_GET_DEFAULT(repeatLastN_, 0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setRepeatLastN(int32_t repeatLastN) { DARABONBA_PTR_SET_VALUE(repeatLastN_, repeatLastN) };


    // repeatPenalty Field Functions 
    bool hasRepeatPenalty() const { return this->repeatPenalty_ != nullptr;};
    void deleteRepeatPenalty() { this->repeatPenalty_ = nullptr;};
    inline float repeatPenalty() const { DARABONBA_PTR_GET_DEFAULT(repeatPenalty_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setRepeatPenalty(float repeatPenalty) { DARABONBA_PTR_SET_VALUE(repeatPenalty_, repeatPenalty) };


    // seed Field Functions 
    bool hasSeed() const { return this->seed_ != nullptr;};
    void deleteSeed() { this->seed_ = nullptr;};
    inline int32_t seed() const { DARABONBA_PTR_GET_DEFAULT(seed_, 0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setSeed(int32_t seed) { DARABONBA_PTR_SET_VALUE(seed_, seed) };


    // singleModelFile Field Functions 
    bool hasSingleModelFile() const { return this->singleModelFile_ != nullptr;};
    void deleteSingleModelFile() { this->singleModelFile_ = nullptr;};
    inline string singleModelFile() const { DARABONBA_PTR_GET_DEFAULT(singleModelFile_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setSingleModelFile(string singleModelFile) { DARABONBA_PTR_SET_VALUE(singleModelFile_, singleModelFile) };


    // splitedModelStartFile Field Functions 
    bool hasSplitedModelStartFile() const { return this->splitedModelStartFile_ != nullptr;};
    void deleteSplitedModelStartFile() { this->splitedModelStartFile_ = nullptr;};
    inline string splitedModelStartFile() const { DARABONBA_PTR_GET_DEFAULT(splitedModelStartFile_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setSplitedModelStartFile(string splitedModelStartFile) { DARABONBA_PTR_SET_VALUE(splitedModelStartFile_, splitedModelStartFile) };


    // stop Field Functions 
    bool hasStop() const { return this->stop_ != nullptr;};
    void deleteStop() { this->stop_ = nullptr;};
    inline string stop() const { DARABONBA_PTR_GET_DEFAULT(stop_, "") };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setStop(string stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline bool stream() const { DARABONBA_PTR_GET_DEFAULT(stream_, false) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setStream(bool stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


    // temperature Field Functions 
    bool hasTemperature() const { return this->temperature_ != nullptr;};
    void deleteTemperature() { this->temperature_ = nullptr;};
    inline float temperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setTemperature(float temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


    // tfsZ Field Functions 
    bool hasTfsZ() const { return this->tfsZ_ != nullptr;};
    void deleteTfsZ() { this->tfsZ_ = nullptr;};
    inline float tfsZ() const { DARABONBA_PTR_GET_DEFAULT(tfsZ_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setTfsZ(float tfsZ) { DARABONBA_PTR_SET_VALUE(tfsZ_, tfsZ) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // topP Field Functions 
    bool hasTopP() const { return this->topP_ != nullptr;};
    void deleteTopP() { this->topP_ = nullptr;};
    inline float topP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
    inline DeployOllamaModelInputModelConfigFmkOllamaConfig& setTopP(float topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


  protected:
    std::shared_ptr<float> minP_ = nullptr;
    std::shared_ptr<int32_t> mirostat_ = nullptr;
    std::shared_ptr<float> mirostatEta_ = nullptr;
    std::shared_ptr<float> mirostatTau_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> modelfileAdapter_ = nullptr;
    std::shared_ptr<string> modelfileAdditionalFromsString_ = nullptr;
    std::shared_ptr<string> modelfileFullTextPostfix_ = nullptr;
    std::shared_ptr<string> modelfileParams_ = nullptr;
    std::shared_ptr<string> modelfileSystem_ = nullptr;
    std::shared_ptr<string> modelfileTemplate_ = nullptr;
    std::shared_ptr<int32_t> numCtx_ = nullptr;
    std::shared_ptr<int32_t> numPredict_ = nullptr;
    std::shared_ptr<string> quantize_ = nullptr;
    std::shared_ptr<int32_t> repeatLastN_ = nullptr;
    std::shared_ptr<float> repeatPenalty_ = nullptr;
    std::shared_ptr<int32_t> seed_ = nullptr;
    std::shared_ptr<string> singleModelFile_ = nullptr;
    std::shared_ptr<string> splitedModelStartFile_ = nullptr;
    std::shared_ptr<string> stop_ = nullptr;
    std::shared_ptr<bool> stream_ = nullptr;
    std::shared_ptr<float> temperature_ = nullptr;
    std::shared_ptr<float> tfsZ_ = nullptr;
    std::shared_ptr<int32_t> topK_ = nullptr;
    std::shared_ptr<float> topP_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
