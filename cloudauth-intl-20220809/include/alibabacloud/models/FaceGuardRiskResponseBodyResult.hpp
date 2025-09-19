// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEGUARDRISKRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_FACEGUARDRISKRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class FaceGuardRiskResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceGuardRiskResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(GuardRiskScore, guardRiskScore_);
      DARABONBA_PTR_TO_JSON(RiskExtends, riskExtends_);
      DARABONBA_PTR_TO_JSON(RiskTags, riskTags_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, FaceGuardRiskResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(GuardRiskScore, guardRiskScore_);
      DARABONBA_PTR_FROM_JSON(RiskExtends, riskExtends_);
      DARABONBA_PTR_FROM_JSON(RiskTags, riskTags_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    FaceGuardRiskResponseBodyResult() = default ;
    FaceGuardRiskResponseBodyResult(const FaceGuardRiskResponseBodyResult &) = default ;
    FaceGuardRiskResponseBodyResult(FaceGuardRiskResponseBodyResult &&) = default ;
    FaceGuardRiskResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceGuardRiskResponseBodyResult() = default ;
    FaceGuardRiskResponseBodyResult& operator=(const FaceGuardRiskResponseBodyResult &) = default ;
    FaceGuardRiskResponseBodyResult& operator=(FaceGuardRiskResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->guardRiskScore_ != nullptr
        && this->riskExtends_ != nullptr && this->riskTags_ != nullptr && this->transactionId_ != nullptr; };
    // guardRiskScore Field Functions 
    bool hasGuardRiskScore() const { return this->guardRiskScore_ != nullptr;};
    void deleteGuardRiskScore() { this->guardRiskScore_ = nullptr;};
    inline double guardRiskScore() const { DARABONBA_PTR_GET_DEFAULT(guardRiskScore_, 0.0) };
    inline FaceGuardRiskResponseBodyResult& setGuardRiskScore(double guardRiskScore) { DARABONBA_PTR_SET_VALUE(guardRiskScore_, guardRiskScore) };


    // riskExtends Field Functions 
    bool hasRiskExtends() const { return this->riskExtends_ != nullptr;};
    void deleteRiskExtends() { this->riskExtends_ = nullptr;};
    inline string riskExtends() const { DARABONBA_PTR_GET_DEFAULT(riskExtends_, "") };
    inline FaceGuardRiskResponseBodyResult& setRiskExtends(string riskExtends) { DARABONBA_PTR_SET_VALUE(riskExtends_, riskExtends) };


    // riskTags Field Functions 
    bool hasRiskTags() const { return this->riskTags_ != nullptr;};
    void deleteRiskTags() { this->riskTags_ = nullptr;};
    inline string riskTags() const { DARABONBA_PTR_GET_DEFAULT(riskTags_, "") };
    inline FaceGuardRiskResponseBodyResult& setRiskTags(string riskTags) { DARABONBA_PTR_SET_VALUE(riskTags_, riskTags) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline FaceGuardRiskResponseBodyResult& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // The device risk probability predicted by the Device Guard algorithm. A higher score indicates a higher device risk.
    // 
    // Valid values: 0 to 100.
    std::shared_ptr<double> guardRiskScore_ = nullptr;
    // Extended information. This is empty by default.
    std::shared_ptr<string> riskExtends_ = nullptr;
    // The device risk tags. Multiple risk tags are separated by commas (**,**). For more information about the risk tags and their meanings, expand the **Risk tags (RiskTags)** section below.
    std::shared_ptr<string> riskTags_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
