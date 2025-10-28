// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTS_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExt.hpp>
#include <vector>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResults& obj) { 
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Service, service_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
    };
    ImageBatchModerationResponseBodyDataResults() = default ;
    ImageBatchModerationResponseBodyDataResults(const ImageBatchModerationResponseBodyDataResults &) = default ;
    ImageBatchModerationResponseBodyDataResults(ImageBatchModerationResponseBodyDataResults &&) = default ;
    ImageBatchModerationResponseBodyDataResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResults() = default ;
    ImageBatchModerationResponseBodyDataResults& operator=(const ImageBatchModerationResponseBodyDataResults &) = default ;
    ImageBatchModerationResponseBodyDataResults& operator=(ImageBatchModerationResponseBodyDataResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ext_ == nullptr
        && return this->result_ == nullptr && return this->riskLevel_ == nullptr && return this->service_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline const Models::ImageBatchModerationResponseBodyDataResultsExt & ext() const { DARABONBA_PTR_GET_CONST(ext_, Models::ImageBatchModerationResponseBodyDataResultsExt) };
    inline Models::ImageBatchModerationResponseBodyDataResultsExt ext() { DARABONBA_PTR_GET(ext_, Models::ImageBatchModerationResponseBodyDataResultsExt) };
    inline ImageBatchModerationResponseBodyDataResults& setExt(const Models::ImageBatchModerationResponseBodyDataResultsExt & ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };
    inline ImageBatchModerationResponseBodyDataResults& setExt(Models::ImageBatchModerationResponseBodyDataResultsExt && ext) { DARABONBA_PTR_SET_RVALUE(ext_, ext) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::ImageBatchModerationResponseBodyDataResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::ImageBatchModerationResponseBodyDataResultsResult>) };
    inline vector<Models::ImageBatchModerationResponseBodyDataResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::ImageBatchModerationResponseBodyDataResultsResult>) };
    inline ImageBatchModerationResponseBodyDataResults& setResult(const vector<Models::ImageBatchModerationResponseBodyDataResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ImageBatchModerationResponseBodyDataResults& setResult(vector<Models::ImageBatchModerationResponseBodyDataResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline ImageBatchModerationResponseBodyDataResults& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ImageBatchModerationResponseBodyDataResults& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


  protected:
    // Image supplementary reference information.
    std::shared_ptr<Models::ImageBatchModerationResponseBodyDataResultsExt> ext_ = nullptr;
    // The risk labels, confidence scores, and other parameters of image detection results, in an array structure.
    std::shared_ptr<vector<Models::ImageBatchModerationResponseBodyDataResultsResult>> result_ = nullptr;
    // Risk level.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The enhanced image detection service supports various detection services.
    std::shared_ptr<string> service_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
