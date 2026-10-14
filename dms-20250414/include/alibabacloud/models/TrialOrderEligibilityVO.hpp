// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIALORDERELIGIBILITYVO_HPP_
#define ALIBABACLOUD_MODELS_TRIALORDERELIGIBILITYVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class TrialOrderEligibilityVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrialOrderEligibilityVO& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Valid, valid_);
    };
    friend void from_json(const Darabonba::Json& j, TrialOrderEligibilityVO& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Valid, valid_);
    };
    TrialOrderEligibilityVO() = default ;
    TrialOrderEligibilityVO(const TrialOrderEligibilityVO &) = default ;
    TrialOrderEligibilityVO(TrialOrderEligibilityVO &&) = default ;
    TrialOrderEligibilityVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrialOrderEligibilityVO() = default ;
    TrialOrderEligibilityVO& operator=(const TrialOrderEligibilityVO &) = default ;
    TrialOrderEligibilityVO& operator=(TrialOrderEligibilityVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->valid_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TrialOrderEligibilityVO& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // valid Field Functions 
    bool hasValid() const { return this->valid_ != nullptr;};
    void deleteValid() { this->valid_ = nullptr;};
    inline bool getValid() const { DARABONBA_PTR_GET_DEFAULT(valid_, false) };
    inline TrialOrderEligibilityVO& setValid(bool valid) { DARABONBA_PTR_SET_VALUE(valid_, valid) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<bool> valid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
