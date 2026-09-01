// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLICTEMPLATESTATUSREASON_HPP_
#define ALIBABACLOUD_MODELS_PUBLICTEMPLATESTATUSREASON_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class PublicTemplateStatusReason : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublicTemplateStatusReason& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(step, step_);
    };
    friend void from_json(const Darabonba::Json& j, PublicTemplateStatusReason& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(step, step_);
    };
    PublicTemplateStatusReason() = default ;
    PublicTemplateStatusReason(const PublicTemplateStatusReason &) = default ;
    PublicTemplateStatusReason(PublicTemplateStatusReason &&) = default ;
    PublicTemplateStatusReason(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublicTemplateStatusReason() = default ;
    PublicTemplateStatusReason& operator=(const PublicTemplateStatusReason &) = default ;
    PublicTemplateStatusReason& operator=(PublicTemplateStatusReason &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->step_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline PublicTemplateStatusReason& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
    inline PublicTemplateStatusReason& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


  protected:
    // The details of the failure reason.
    shared_ptr<string> message_ {};
    // The identity of the failed step.
    shared_ptr<string> step_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
