// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDHISTORYCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDHISTORYCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordHistoryConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordHistoryConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordHistoryConfiguration, passwordHistoryConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordHistoryConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordHistoryConfiguration, passwordHistoryConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordHistoryConfigurationResponseBody() = default ;
    GetPasswordHistoryConfigurationResponseBody(const GetPasswordHistoryConfigurationResponseBody &) = default ;
    GetPasswordHistoryConfigurationResponseBody(GetPasswordHistoryConfigurationResponseBody &&) = default ;
    GetPasswordHistoryConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordHistoryConfigurationResponseBody() = default ;
    GetPasswordHistoryConfigurationResponseBody& operator=(const GetPasswordHistoryConfigurationResponseBody &) = default ;
    GetPasswordHistoryConfigurationResponseBody& operator=(GetPasswordHistoryConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordHistoryConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordHistoryConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(PasswordHistoryMaxRetention, passwordHistoryMaxRetention_);
        DARABONBA_PTR_TO_JSON(PasswordHistoryStatus, passwordHistoryStatus_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordHistoryConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(PasswordHistoryMaxRetention, passwordHistoryMaxRetention_);
        DARABONBA_PTR_FROM_JSON(PasswordHistoryStatus, passwordHistoryStatus_);
      };
      PasswordHistoryConfiguration() = default ;
      PasswordHistoryConfiguration(const PasswordHistoryConfiguration &) = default ;
      PasswordHistoryConfiguration(PasswordHistoryConfiguration &&) = default ;
      PasswordHistoryConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordHistoryConfiguration() = default ;
      PasswordHistoryConfiguration& operator=(const PasswordHistoryConfiguration &) = default ;
      PasswordHistoryConfiguration& operator=(PasswordHistoryConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->passwordHistoryMaxRetention_ == nullptr
        && this->passwordHistoryStatus_ == nullptr; };
      // passwordHistoryMaxRetention Field Functions 
      bool hasPasswordHistoryMaxRetention() const { return this->passwordHistoryMaxRetention_ != nullptr;};
      void deletePasswordHistoryMaxRetention() { this->passwordHistoryMaxRetention_ = nullptr;};
      inline int32_t getPasswordHistoryMaxRetention() const { DARABONBA_PTR_GET_DEFAULT(passwordHistoryMaxRetention_, 0) };
      inline PasswordHistoryConfiguration& setPasswordHistoryMaxRetention(int32_t passwordHistoryMaxRetention) { DARABONBA_PTR_SET_VALUE(passwordHistoryMaxRetention_, passwordHistoryMaxRetention) };


      // passwordHistoryStatus Field Functions 
      bool hasPasswordHistoryStatus() const { return this->passwordHistoryStatus_ != nullptr;};
      void deletePasswordHistoryStatus() { this->passwordHistoryStatus_ = nullptr;};
      inline string getPasswordHistoryStatus() const { DARABONBA_PTR_GET_DEFAULT(passwordHistoryStatus_, "") };
      inline PasswordHistoryConfiguration& setPasswordHistoryStatus(string passwordHistoryStatus) { DARABONBA_PTR_SET_VALUE(passwordHistoryStatus_, passwordHistoryStatus) };


    protected:
      // The maximum number of recent passwords that are retained.
      shared_ptr<int32_t> passwordHistoryMaxRetention_ {};
      // Indicates whether the password history feature is enabled. Valid values:
      // 
      // *   enabled
      // *   disabled
      shared_ptr<string> passwordHistoryStatus_ {};
    };

    virtual bool empty() const override { return this->passwordHistoryConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // passwordHistoryConfiguration Field Functions 
    bool hasPasswordHistoryConfiguration() const { return this->passwordHistoryConfiguration_ != nullptr;};
    void deletePasswordHistoryConfiguration() { this->passwordHistoryConfiguration_ = nullptr;};
    inline const GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration & getPasswordHistoryConfiguration() const { DARABONBA_PTR_GET_CONST(passwordHistoryConfiguration_, GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration) };
    inline GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration getPasswordHistoryConfiguration() { DARABONBA_PTR_GET(passwordHistoryConfiguration_, GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration) };
    inline GetPasswordHistoryConfigurationResponseBody& setPasswordHistoryConfiguration(const GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration & passwordHistoryConfiguration) { DARABONBA_PTR_SET_VALUE(passwordHistoryConfiguration_, passwordHistoryConfiguration) };
    inline GetPasswordHistoryConfigurationResponseBody& setPasswordHistoryConfiguration(GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration && passwordHistoryConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordHistoryConfiguration_, passwordHistoryConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordHistoryConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password history configurations.
    shared_ptr<GetPasswordHistoryConfigurationResponseBody::PasswordHistoryConfiguration> passwordHistoryConfiguration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
