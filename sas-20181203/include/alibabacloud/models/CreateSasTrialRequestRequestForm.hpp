// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESASTRIALREQUESTREQUESTFORM_HPP_
#define ALIBABACLOUD_MODELS_CREATESASTRIALREQUESTREQUESTFORM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateSasTrialRequestRequestForm : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSasTrialRequestRequestForm& obj) { 
      DARABONBA_PTR_TO_JSON(TryReason, tryReason_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSasTrialRequestRequestForm& obj) { 
      DARABONBA_PTR_FROM_JSON(TryReason, tryReason_);
    };
    CreateSasTrialRequestRequestForm() = default ;
    CreateSasTrialRequestRequestForm(const CreateSasTrialRequestRequestForm &) = default ;
    CreateSasTrialRequestRequestForm(CreateSasTrialRequestRequestForm &&) = default ;
    CreateSasTrialRequestRequestForm(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSasTrialRequestRequestForm() = default ;
    CreateSasTrialRequestRequestForm& operator=(const CreateSasTrialRequestRequestForm &) = default ;
    CreateSasTrialRequestRequestForm& operator=(CreateSasTrialRequestRequestForm &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tryReason_ == nullptr; };
    // tryReason Field Functions 
    bool hasTryReason() const { return this->tryReason_ != nullptr;};
    void deleteTryReason() { this->tryReason_ = nullptr;};
    inline string tryReason() const { DARABONBA_PTR_GET_DEFAULT(tryReason_, "") };
    inline CreateSasTrialRequestRequestForm& setTryReason(string tryReason) { DARABONBA_PTR_SET_VALUE(tryReason_, tryReason) };


  protected:
    // The reason why you apply for the trial.
    std::shared_ptr<string> tryReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
