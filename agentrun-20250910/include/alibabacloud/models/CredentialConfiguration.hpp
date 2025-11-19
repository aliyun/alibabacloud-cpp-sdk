// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CredentialConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
    };
    CredentialConfiguration() = default ;
    CredentialConfiguration(const CredentialConfiguration &) = default ;
    CredentialConfiguration(CredentialConfiguration &&) = default ;
    CredentialConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfiguration() = default ;
    CredentialConfiguration& operator=(const CredentialConfiguration &) = default ;
    CredentialConfiguration& operator=(CredentialConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CredentialConfiguration& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


  protected:
    // 凭证的唯一标识符
    std::shared_ptr<string> credentialName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
