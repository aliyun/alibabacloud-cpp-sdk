// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLSTREAMRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DEEPFAKEDETECTINTLSTREAMRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeepfakeDetectIntlStreamResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeepfakeDetectIntlStreamResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_TO_JSON(RiskTag, riskTag_);
    };
    friend void from_json(const Darabonba::Json& j, DeepfakeDetectIntlStreamResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(RiskScore, riskScore_);
      DARABONBA_PTR_FROM_JSON(RiskTag, riskTag_);
    };
    DeepfakeDetectIntlStreamResponseBodyResultObject() = default ;
    DeepfakeDetectIntlStreamResponseBodyResultObject(const DeepfakeDetectIntlStreamResponseBodyResultObject &) = default ;
    DeepfakeDetectIntlStreamResponseBodyResultObject(DeepfakeDetectIntlStreamResponseBodyResultObject &&) = default ;
    DeepfakeDetectIntlStreamResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeepfakeDetectIntlStreamResponseBodyResultObject() = default ;
    DeepfakeDetectIntlStreamResponseBodyResultObject& operator=(const DeepfakeDetectIntlStreamResponseBodyResultObject &) = default ;
    DeepfakeDetectIntlStreamResponseBodyResultObject& operator=(DeepfakeDetectIntlStreamResponseBodyResultObject &&) = default ;
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
    inline DeepfakeDetectIntlStreamResponseBodyResultObject& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // riskScore Field Functions 
    bool hasRiskScore() const { return this->riskScore_ != nullptr;};
    void deleteRiskScore() { this->riskScore_ = nullptr;};
    inline const map<string, string> & riskScore() const { DARABONBA_PTR_GET_CONST(riskScore_, map<string, string>) };
    inline map<string, string> riskScore() { DARABONBA_PTR_GET(riskScore_, map<string, string>) };
    inline DeepfakeDetectIntlStreamResponseBodyResultObject& setRiskScore(const map<string, string> & riskScore) { DARABONBA_PTR_SET_VALUE(riskScore_, riskScore) };
    inline DeepfakeDetectIntlStreamResponseBodyResultObject& setRiskScore(map<string, string> && riskScore) { DARABONBA_PTR_SET_RVALUE(riskScore_, riskScore) };


    // riskTag Field Functions 
    bool hasRiskTag() const { return this->riskTag_ != nullptr;};
    void deleteRiskTag() { this->riskTag_ = nullptr;};
    inline string riskTag() const { DARABONBA_PTR_GET_DEFAULT(riskTag_, "") };
    inline DeepfakeDetectIntlStreamResponseBodyResultObject& setRiskTag(string riskTag) { DARABONBA_PTR_SET_VALUE(riskTag_, riskTag) };


  protected:
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<map<string, string>> riskScore_ = nullptr;
    std::shared_ptr<string> riskTag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
