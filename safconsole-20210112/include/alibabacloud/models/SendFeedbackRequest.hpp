// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20210112
{
namespace Models
{
  class SendFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RiskLabel, riskLabel_);
      DARABONBA_PTR_TO_JSON(SampleType, sampleType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, SendFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RiskLabel, riskLabel_);
      DARABONBA_PTR_FROM_JSON(SampleType, sampleType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    SendFeedbackRequest() = default ;
    SendFeedbackRequest(const SendFeedbackRequest &) = default ;
    SendFeedbackRequest(SendFeedbackRequest &&) = default ;
    SendFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendFeedbackRequest() = default ;
    SendFeedbackRequest& operator=(const SendFeedbackRequest &) = default ;
    SendFeedbackRequest& operator=(SendFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->reason_ != nullptr
        && this->riskLabel_ != nullptr && this->sampleType_ != nullptr && this->value_ != nullptr; };
    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline SendFeedbackRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // riskLabel Field Functions 
    bool hasRiskLabel() const { return this->riskLabel_ != nullptr;};
    void deleteRiskLabel() { this->riskLabel_ = nullptr;};
    inline string riskLabel() const { DARABONBA_PTR_GET_DEFAULT(riskLabel_, "") };
    inline SendFeedbackRequest& setRiskLabel(string riskLabel) { DARABONBA_PTR_SET_VALUE(riskLabel_, riskLabel) };


    // sampleType Field Functions 
    bool hasSampleType() const { return this->sampleType_ != nullptr;};
    void deleteSampleType() { this->sampleType_ = nullptr;};
    inline string sampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
    inline SendFeedbackRequest& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SendFeedbackRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> reason_ = nullptr;
    // Sample labels. User-defined, separated by commas.
    std::shared_ptr<string> riskLabel_ = nullptr;
    // Sample type. For phone number type samples, input PHONE; for email type samples, input EMAIL; for account type samples, input ACCOUNT.
    // 
    // This parameter is required.
    std::shared_ptr<string> sampleType_ = nullptr;
    // Sample value.
    // 
    // This parameter is required.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Safconsole20210112
#endif
