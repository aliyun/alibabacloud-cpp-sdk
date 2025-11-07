// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2RESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALVERIFYV2RESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/CredentialVerifyV2ResponseBodyResultObjectVlResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialVerifyV2ResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialVerifyV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_TO_JSON(OcrInfo, ocrInfo_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
      DARABONBA_PTR_TO_JSON(VerifyDetail, verifyDetail_);
      DARABONBA_PTR_TO_JSON(VerifyResult, verifyResult_);
      DARABONBA_PTR_TO_JSON(VlResult, vlResult_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialVerifyV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_FROM_JSON(OcrInfo, ocrInfo_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_FROM_JSON(RiskTag, riskTag_);
      DARABONBA_PTR_FROM_JSON(VerifyDetail, verifyDetail_);
      DARABONBA_PTR_FROM_JSON(VerifyResult, verifyResult_);
      DARABONBA_PTR_FROM_JSON(VlResult, vlResult_);
    };
    CredentialVerifyV2ResponseBodyResultObject() = default ;
    CredentialVerifyV2ResponseBodyResultObject(const CredentialVerifyV2ResponseBodyResultObject &) = default ;
    CredentialVerifyV2ResponseBodyResultObject(CredentialVerifyV2ResponseBodyResultObject &&) = default ;
    CredentialVerifyV2ResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialVerifyV2ResponseBodyResultObject() = default ;
    CredentialVerifyV2ResponseBodyResultObject& operator=(const CredentialVerifyV2ResponseBodyResultObject &) = default ;
    CredentialVerifyV2ResponseBodyResultObject& operator=(CredentialVerifyV2ResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->materialInfo_ == nullptr
        && return this->ocrInfo_ == nullptr && return this->result_ == nullptr && return this->riskScore_ == nullptr && return this->riskTag_ == nullptr && return this->verifyDetail_ == nullptr
        && return this->verifyResult_ == nullptr && return this->vlResult_ == nullptr; };
    // materialInfo Field Functions 
    bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
    void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
    inline string materialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
    inline CredentialVerifyV2ResponseBodyResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


    // ocrInfo Field Functions 
    bool hasOcrInfo() const { return this->ocrInfo_ != nullptr;};
    void deleteOcrInfo() { this->ocrInfo_ = nullptr;};
    inline string ocrInfo() const { DARABONBA_PTR_GET_DEFAULT(ocrInfo_, "") };
    inline CredentialVerifyV2ResponseBodyResultObject& setOcrInfo(string ocrInfo) { DARABONBA_PTR_SET_VALUE(ocrInfo_, ocrInfo) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline CredentialVerifyV2ResponseBodyResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // riskScore Field Functions 
    bool hasRiskScore() const { return this->riskScore_ != nullptr;};
    void deleteRiskScore() { this->riskScore_ = nullptr;};
    inline const map<string, string> & riskScore() const { DARABONBA_PTR_GET_CONST(riskScore_, map<string, string>) };
    inline map<string, string> riskScore() { DARABONBA_PTR_GET(riskScore_, map<string, string>) };
    inline CredentialVerifyV2ResponseBodyResultObject& setRiskScore(const map<string, string> & riskScore) { DARABONBA_PTR_SET_VALUE(riskScore_, riskScore) };
    inline CredentialVerifyV2ResponseBodyResultObject& setRiskScore(map<string, string> && riskScore) { DARABONBA_PTR_SET_RVALUE(riskScore_, riskScore) };


    // riskTag Field Functions 
    bool hasRiskTag() const { return this->riskTag_ != nullptr;};
    void deleteRiskTag() { this->riskTag_ = nullptr;};
    inline string riskTag() const { DARABONBA_PTR_GET_DEFAULT(riskTag_, "") };
    inline CredentialVerifyV2ResponseBodyResultObject& setRiskTag(string riskTag) { DARABONBA_PTR_SET_VALUE(riskTag_, riskTag) };


    // verifyDetail Field Functions 
    bool hasVerifyDetail() const { return this->verifyDetail_ != nullptr;};
    void deleteVerifyDetail() { this->verifyDetail_ = nullptr;};
    inline string verifyDetail() const { DARABONBA_PTR_GET_DEFAULT(verifyDetail_, "") };
    inline CredentialVerifyV2ResponseBodyResultObject& setVerifyDetail(string verifyDetail) { DARABONBA_PTR_SET_VALUE(verifyDetail_, verifyDetail) };


    // verifyResult Field Functions 
    bool hasVerifyResult() const { return this->verifyResult_ != nullptr;};
    void deleteVerifyResult() { this->verifyResult_ = nullptr;};
    inline string verifyResult() const { DARABONBA_PTR_GET_DEFAULT(verifyResult_, "") };
    inline CredentialVerifyV2ResponseBodyResultObject& setVerifyResult(string verifyResult) { DARABONBA_PTR_SET_VALUE(verifyResult_, verifyResult) };


    // vlResult Field Functions 
    bool hasVlResult() const { return this->vlResult_ != nullptr;};
    void deleteVlResult() { this->vlResult_ = nullptr;};
    inline const Models::CredentialVerifyV2ResponseBodyResultObjectVlResult & vlResult() const { DARABONBA_PTR_GET_CONST(vlResult_, Models::CredentialVerifyV2ResponseBodyResultObjectVlResult) };
    inline Models::CredentialVerifyV2ResponseBodyResultObjectVlResult vlResult() { DARABONBA_PTR_GET(vlResult_, Models::CredentialVerifyV2ResponseBodyResultObjectVlResult) };
    inline CredentialVerifyV2ResponseBodyResultObject& setVlResult(const Models::CredentialVerifyV2ResponseBodyResultObjectVlResult & vlResult) { DARABONBA_PTR_SET_VALUE(vlResult_, vlResult) };
    inline CredentialVerifyV2ResponseBodyResultObject& setVlResult(Models::CredentialVerifyV2ResponseBodyResultObjectVlResult && vlResult) { DARABONBA_PTR_SET_RVALUE(vlResult_, vlResult) };


  protected:
    // Additional information in JSON format.
    std::shared_ptr<string> materialInfo_ = nullptr;
    // OCR recognition result.
    std::shared_ptr<string> ocrInfo_ = nullptr;
    // Risk result
    // 
    // - 0: Low risk
    // - 1: High risk
    // - 2: Suspicious
    std::shared_ptr<string> result_ = nullptr;
    // Risk score map.
    std::shared_ptr<map<string, string>> riskScore_ = nullptr;
    // Risk tags, separated by commas (,), including:
    // 
    // - PS: Image manipulation.
    // - SCREEN_PHOTO: Screen recapture.
    // - SCREENSHOT: Screenshot.
    // - WATERMARK: Watermark.
    // - SAME_BACKGROUND: Similar background.
    // - ORIGINAL_PHOTO: Not the original image
    std::shared_ptr<string> riskTag_ = nullptr;
    // Authority verification details.
    std::shared_ptr<string> verifyDetail_ = nullptr;
    // Authority verification result
    std::shared_ptr<string> verifyResult_ = nullptr;
    // Qwen interpretation.
    std::shared_ptr<Models::CredentialVerifyV2ResponseBodyResultObjectVlResult> vlResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
