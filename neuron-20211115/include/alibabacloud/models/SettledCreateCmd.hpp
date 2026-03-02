// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTLEDCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_SETTLEDCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SettledCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SettledCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(application, application_);
      DARABONBA_PTR_TO_JSON(developerName, developerName_);
      DARABONBA_PTR_TO_JSON(email, email_);
      DARABONBA_PTR_TO_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_TO_JSON(phone, phone_);
      DARABONBA_PTR_TO_JSON(usage, usage_);
    };
    friend void from_json(const Darabonba::Json& j, SettledCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(application, application_);
      DARABONBA_PTR_FROM_JSON(developerName, developerName_);
      DARABONBA_PTR_FROM_JSON(email, email_);
      DARABONBA_PTR_FROM_JSON(enterpriseName, enterpriseName_);
      DARABONBA_PTR_FROM_JSON(phone, phone_);
      DARABONBA_PTR_FROM_JSON(usage, usage_);
    };
    SettledCreateCmd() = default ;
    SettledCreateCmd(const SettledCreateCmd &) = default ;
    SettledCreateCmd(SettledCreateCmd &&) = default ;
    SettledCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SettledCreateCmd() = default ;
    SettledCreateCmd& operator=(const SettledCreateCmd &) = default ;
    SettledCreateCmd& operator=(SettledCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->application_ == nullptr && this->developerName_ == nullptr && this->email_ == nullptr && this->enterpriseName_ == nullptr && this->phone_ == nullptr
        && this->usage_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline SettledCreateCmd& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // application Field Functions 
    bool hasApplication() const { return this->application_ != nullptr;};
    void deleteApplication() { this->application_ = nullptr;};
    inline string getApplication() const { DARABONBA_PTR_GET_DEFAULT(application_, "") };
    inline SettledCreateCmd& setApplication(string application) { DARABONBA_PTR_SET_VALUE(application_, application) };


    // developerName Field Functions 
    bool hasDeveloperName() const { return this->developerName_ != nullptr;};
    void deleteDeveloperName() { this->developerName_ = nullptr;};
    inline string getDeveloperName() const { DARABONBA_PTR_GET_DEFAULT(developerName_, "") };
    inline SettledCreateCmd& setDeveloperName(string developerName) { DARABONBA_PTR_SET_VALUE(developerName_, developerName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SettledCreateCmd& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // enterpriseName Field Functions 
    bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
    void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
    inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
    inline SettledCreateCmd& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline SettledCreateCmd& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // usage Field Functions 
    bool hasUsage() const { return this->usage_ != nullptr;};
    void deleteUsage() { this->usage_ = nullptr;};
    inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
    inline SettledCreateCmd& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


  protected:
    shared_ptr<string> accountId_ {};
    shared_ptr<string> application_ {};
    shared_ptr<string> developerName_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> enterpriseName_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<string> usage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
