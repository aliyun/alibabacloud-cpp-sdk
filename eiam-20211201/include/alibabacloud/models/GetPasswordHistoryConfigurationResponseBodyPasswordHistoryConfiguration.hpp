// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDHISTORYCONFIGURATIONRESPONSEBODYPASSWORDHISTORYCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDHISTORYCONFIGURATIONRESPONSEBODYPASSWORDHISTORYCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordHistoryMaxRetention, passwordHistoryMaxRetention_);
      DARABONBA_PTR_TO_JSON(PasswordHistoryStatus, passwordHistoryStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordHistoryMaxRetention, passwordHistoryMaxRetention_);
      DARABONBA_PTR_FROM_JSON(PasswordHistoryStatus, passwordHistoryStatus_);
    };
    GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration() = default ;
    GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration(const GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration &) = default ;
    GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration(GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration &&) = default ;
    GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration() = default ;
    GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration& operator=(const GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration &) = default ;
    GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration& operator=(GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->passwordHistoryMaxRetention_ != nullptr
        && this->passwordHistoryStatus_ != nullptr; };
    // passwordHistoryMaxRetention Field Functions 
    bool hasPasswordHistoryMaxRetention() const { return this->passwordHistoryMaxRetention_ != nullptr;};
    void deletePasswordHistoryMaxRetention() { this->passwordHistoryMaxRetention_ = nullptr;};
    inline int32_t passwordHistoryMaxRetention() const { DARABONBA_PTR_GET_DEFAULT(passwordHistoryMaxRetention_, 0) };
    inline GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration& setPasswordHistoryMaxRetention(int32_t passwordHistoryMaxRetention) { DARABONBA_PTR_SET_VALUE(passwordHistoryMaxRetention_, passwordHistoryMaxRetention) };


    // passwordHistoryStatus Field Functions 
    bool hasPasswordHistoryStatus() const { return this->passwordHistoryStatus_ != nullptr;};
    void deletePasswordHistoryStatus() { this->passwordHistoryStatus_ = nullptr;};
    inline string passwordHistoryStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordHistoryStatus_, "") };
    inline GetPasswordHistoryConfigurationResponseBodyPasswordHistoryConfiguration& setPasswordHistoryStatus(string passwordHistoryStatus) { DARABONBA_PTR_SET_VALUE(passwordHistoryStatus_, passwordHistoryStatus) };


  protected:
    // The maximum number of recent passwords that are retained.
    std::shared_ptr<int32_t> passwordHistoryMaxRetention_ = nullptr;
    // Indicates whether the password history feature is enabled. Valid values:
    // 
    // *   enabled
    // *   disabled
    std::shared_ptr<string> passwordHistoryStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
