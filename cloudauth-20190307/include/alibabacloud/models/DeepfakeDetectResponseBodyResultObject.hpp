// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEDETECTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEDETECTRESPONSEBODYRESULTOBJECT_HPP_
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
  class DeepfakeDetectResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeDetectResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_FROM_JSON(RiskTag, riskTag_);
    };
    DeepfakeDetectResponseBodyResultObject() = default ;
    DeepfakeDetectResponseBodyResultObject(const DeepfakeDetectResponseBodyResultObject &) = default ;
    DeepfakeDetectResponseBodyResultObject(DeepfakeDetectResponseBodyResultObject &&) = default ;
    DeepfakeDetectResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeDetectResponseBodyResultObject() = default ;
    DeepfakeDetectResponseBodyResultObject& operator=(const DeepfakeDetectResponseBodyResultObject &) = default ;
    DeepfakeDetectResponseBodyResultObject& operator=(DeepfakeDetectResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->result_ != nullptr
        && this->riskScore_ != nullptr && this->riskTag_ != nullptr; };
    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline DeepfakeDetectResponseBodyResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // riskScore Field Functions 
    bool hasRiskScore() const { return this->riskScore_ != nullptr;};
    void deleteRiskScore() { this->riskScore_ = nullptr;};
    inline const map<string, string> & riskScore() const { DARABONBA_PTR_GET_CONST(riskScore_, map<string, string>) };
    inline map<string, string> riskScore() { DARABONBA_PTR_GET(riskScore_, map<string, string>) };
    inline DeepfakeDetectResponseBodyResultObject& setRiskScore(const map<string, string> & riskScore) { DARABONBA_PTR_SET_VALUE(riskScore_, riskScore) };
    inline DeepfakeDetectResponseBodyResultObject& setRiskScore(map<string, string> && riskScore) { DARABONBA_PTR_SET_RVALUE(riskScore_, riskScore) };


    // riskTag Field Functions 
    bool hasRiskTag() const { return this->riskTag_ != nullptr;};
    void deleteRiskTag() { this->riskTag_ = nullptr;};
    inline string riskTag() const { DARABONBA_PTR_GET_DEFAULT(riskTag_, "") };
    inline DeepfakeDetectResponseBodyResultObject& setRiskTag(string riskTag) { DARABONBA_PTR_SET_VALUE(riskTag_, riskTag) };


  protected:
    // Risk result:
    // 
    // - **0**: Low risk
    // - **1**: High risk
    // - **2**: Suspicious
    std::shared_ptr<string> result_ = nullptr;
    // Risk score map.
    std::shared_ptr<map<string, string>> riskScore_ = nullptr;
    // Risk tags. Multiple tags are separated by commas (,). Includes:
    // 
    // - Suspected deep forgery  SuspectDeepForgery
    // - Suspected synthetic attack  SuspectPSFace
    // - Suspected watermark  SuspectWarterMark
    // - Suspected black industry attack  SuspectTemple
    // - Suspected generated face  SuspectAIGC Face
    // - Suspected rephotographed face  SuspectRemake
    std::shared_ptr<string> riskTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
