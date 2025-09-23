// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEFEEDBACKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEFEEDBACKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Safconsole20210112
{
namespace Models
{
  class RevokeFeedbackRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeFeedbackRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SampleType, sampleType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeFeedbackRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SampleType, sampleType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    RevokeFeedbackRequest() = default ;
    RevokeFeedbackRequest(const RevokeFeedbackRequest &) = default ;
    RevokeFeedbackRequest(RevokeFeedbackRequest &&) = default ;
    RevokeFeedbackRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeFeedbackRequest() = default ;
    RevokeFeedbackRequest& operator=(const RevokeFeedbackRequest &) = default ;
    RevokeFeedbackRequest& operator=(RevokeFeedbackRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sampleType_ != nullptr
        && this->value_ != nullptr; };
    // sampleType Field Functions 
    bool hasSampleType() const { return this->sampleType_ != nullptr;};
    void deleteSampleType() { this->sampleType_ = nullptr;};
    inline string sampleType() const { DARABONBA_PTR_GET_DEFAULT(sampleType_, "") };
    inline RevokeFeedbackRequest& setSampleType(string sampleType) { DARABONBA_PTR_SET_VALUE(sampleType_, sampleType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline RevokeFeedbackRequest& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
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
