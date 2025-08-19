// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2RESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPRODUCTVERIFYV2RESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class CredentialProductVerifyV2ResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialProductVerifyV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialProductVerifyV2ResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(MaterialInfo, materialInfo_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_FROM_JSON(RiskTag, riskTag_);
    };
    CredentialProductVerifyV2ResponseBodyResultObject() = default ;
    CredentialProductVerifyV2ResponseBodyResultObject(const CredentialProductVerifyV2ResponseBodyResultObject &) = default ;
    CredentialProductVerifyV2ResponseBodyResultObject(CredentialProductVerifyV2ResponseBodyResultObject &&) = default ;
    CredentialProductVerifyV2ResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialProductVerifyV2ResponseBodyResultObject() = default ;
    CredentialProductVerifyV2ResponseBodyResultObject& operator=(const CredentialProductVerifyV2ResponseBodyResultObject &) = default ;
    CredentialProductVerifyV2ResponseBodyResultObject& operator=(CredentialProductVerifyV2ResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->materialInfo_ != nullptr
        && this->result_ != nullptr && this->riskScore_ != nullptr && this->riskTag_ != nullptr; };
    // materialInfo Field Functions 
    bool hasMaterialInfo() const { return this->materialInfo_ != nullptr;};
    void deleteMaterialInfo() { this->materialInfo_ = nullptr;};
    inline string materialInfo() const { DARABONBA_PTR_GET_DEFAULT(materialInfo_, "") };
    inline CredentialProductVerifyV2ResponseBodyResultObject& setMaterialInfo(string materialInfo) { DARABONBA_PTR_SET_VALUE(materialInfo_, materialInfo) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline CredentialProductVerifyV2ResponseBodyResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // riskScore Field Functions 
    bool hasRiskScore() const { return this->riskScore_ != nullptr;};
    void deleteRiskScore() { this->riskScore_ = nullptr;};
    inline const map<string, string> & riskScore() const { DARABONBA_PTR_GET_CONST(riskScore_, map<string, string>) };
    inline map<string, string> riskScore() { DARABONBA_PTR_GET(riskScore_, map<string, string>) };
    inline CredentialProductVerifyV2ResponseBodyResultObject& setRiskScore(const map<string, string> & riskScore) { DARABONBA_PTR_SET_VALUE(riskScore_, riskScore) };
    inline CredentialProductVerifyV2ResponseBodyResultObject& setRiskScore(map<string, string> && riskScore) { DARABONBA_PTR_SET_RVALUE(riskScore_, riskScore) };


    // riskTag Field Functions 
    bool hasRiskTag() const { return this->riskTag_ != nullptr;};
    void deleteRiskTag() { this->riskTag_ = nullptr;};
    inline string riskTag() const { DARABONBA_PTR_GET_DEFAULT(riskTag_, "") };
    inline CredentialProductVerifyV2ResponseBodyResultObject& setRiskTag(string riskTag) { DARABONBA_PTR_SET_VALUE(riskTag_, riskTag) };


  protected:
    // Additional information in JSON format.
    std::shared_ptr<string> materialInfo_ = nullptr;
    // - 0: Low risk
    // - 1: High risk
    // - 2: Suspicious
    std::shared_ptr<string> result_ = nullptr;
    // Map of risk scores.
    std::shared_ptr<map<string, string>> riskScore_ = nullptr;
    // Risk tags, separated by commas, including:
    // - PS: Image has been photoshopped
    // - LOW_QUALITY_PRODUCT: Low quality (low clarity)
    // - SAME_BACKGROUND: Similar background
    std::shared_ptr<string> riskTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
