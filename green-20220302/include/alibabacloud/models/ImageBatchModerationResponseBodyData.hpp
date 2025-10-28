// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResult.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(ManualTaskId, manualTaskId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    ImageBatchModerationResponseBodyData() = default ;
    ImageBatchModerationResponseBodyData(const ImageBatchModerationResponseBodyData &) = default ;
    ImageBatchModerationResponseBodyData(ImageBatchModerationResponseBodyData &&) = default ;
    ImageBatchModerationResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyData() = default ;
    ImageBatchModerationResponseBodyData& operator=(const ImageBatchModerationResponseBodyData &) = default ;
    ImageBatchModerationResponseBodyData& operator=(ImageBatchModerationResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataId_ == nullptr
        && return this->manualTaskId_ == nullptr && return this->result_ == nullptr && return this->results_ == nullptr && return this->riskLevel_ == nullptr; };
    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ImageBatchModerationResponseBodyData& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // manualTaskId Field Functions 
    bool hasManualTaskId() const { return this->manualTaskId_ != nullptr;};
    void deleteManualTaskId() { this->manualTaskId_ = nullptr;};
    inline string manualTaskId() const { DARABONBA_PTR_GET_DEFAULT(manualTaskId_, "") };
    inline ImageBatchModerationResponseBodyData& setManualTaskId(string manualTaskId) { DARABONBA_PTR_SET_VALUE(manualTaskId_, manualTaskId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImageBatchModerationResponseBodyDataResult>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImageBatchModerationResponseBodyDataResult>) };
    inline ImageBatchModerationResponseBodyData& setResult(const vector<Models::ImageBatchModerationResponseBodyDataResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImageBatchModerationResponseBodyData& setResult(vector<Models::ImageBatchModerationResponseBodyDataResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResults> & results() const { DARABONBA_PTR_GET_CONST(results_, vector<Models::ImageBatchModerationResponseBodyDataResults>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResults> results() { DARABONBA_PTR_GET(results_, vector<Models::ImageBatchModerationResponseBodyDataResults>) };
    inline ImageBatchModerationResponseBodyData& setResults(const vector<Models::ImageBatchModerationResponseBodyDataResults> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ImageBatchModerationResponseBodyData& setResults(vector<Models::ImageBatchModerationResponseBodyDataResults> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ImageBatchModerationResponseBodyData& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // To detect the data ID corresponding to the object.
    std::shared_ptr<string> dataId_ = nullptr;
    std::shared_ptr<string> manualTaskId_ = nullptr;
    // The risk labels, confidence scores, and other parameters of image detection results, in an array structure.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResult>> result_ = nullptr;
    // The risk labels, confidence scores, and other parameters for each service\\"s image detection, in an array structure.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResults>> results_ = nullptr;
    // Risk level.
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
