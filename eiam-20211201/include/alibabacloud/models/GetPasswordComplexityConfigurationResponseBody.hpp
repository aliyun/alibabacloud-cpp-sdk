// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPASSWORDCOMPLEXITYCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPASSWORDCOMPLEXITYCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetPasswordComplexityConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPasswordComplexityConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PasswordComplexityConfiguration, passwordComplexityConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPasswordComplexityConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PasswordComplexityConfiguration, passwordComplexityConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPasswordComplexityConfigurationResponseBody() = default ;
    GetPasswordComplexityConfigurationResponseBody(const GetPasswordComplexityConfigurationResponseBody &) = default ;
    GetPasswordComplexityConfigurationResponseBody(GetPasswordComplexityConfigurationResponseBody &&) = default ;
    GetPasswordComplexityConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPasswordComplexityConfigurationResponseBody() = default ;
    GetPasswordComplexityConfigurationResponseBody& operator=(const GetPasswordComplexityConfigurationResponseBody &) = default ;
    GetPasswordComplexityConfigurationResponseBody& operator=(GetPasswordComplexityConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PasswordComplexityConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordComplexityConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(PasswordComplexityRules, passwordComplexityRules_);
        DARABONBA_PTR_TO_JSON(PasswordMinLength, passwordMinLength_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordComplexityConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(PasswordComplexityRules, passwordComplexityRules_);
        DARABONBA_PTR_FROM_JSON(PasswordMinLength, passwordMinLength_);
      };
      PasswordComplexityConfiguration() = default ;
      PasswordComplexityConfiguration(const PasswordComplexityConfiguration &) = default ;
      PasswordComplexityConfiguration(PasswordComplexityConfiguration &&) = default ;
      PasswordComplexityConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordComplexityConfiguration() = default ;
      PasswordComplexityConfiguration& operator=(const PasswordComplexityConfiguration &) = default ;
      PasswordComplexityConfiguration& operator=(PasswordComplexityConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PasswordComplexityRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PasswordComplexityRules& obj) { 
          DARABONBA_PTR_TO_JSON(PasswordCheckType, passwordCheckType_);
        };
        friend void from_json(const Darabonba::Json& j, PasswordComplexityRules& obj) { 
          DARABONBA_PTR_FROM_JSON(PasswordCheckType, passwordCheckType_);
        };
        PasswordComplexityRules() = default ;
        PasswordComplexityRules(const PasswordComplexityRules &) = default ;
        PasswordComplexityRules(PasswordComplexityRules &&) = default ;
        PasswordComplexityRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PasswordComplexityRules() = default ;
        PasswordComplexityRules& operator=(const PasswordComplexityRules &) = default ;
        PasswordComplexityRules& operator=(PasswordComplexityRules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->passwordCheckType_ == nullptr; };
        // passwordCheckType Field Functions 
        bool hasPasswordCheckType() const { return this->passwordCheckType_ != nullptr;};
        void deletePasswordCheckType() { this->passwordCheckType_ = nullptr;};
        inline string getPasswordCheckType() const { DARABONBA_PTR_GET_DEFAULT(passwordCheckType_, "") };
        inline PasswordComplexityRules& setPasswordCheckType(string passwordCheckType) { DARABONBA_PTR_SET_VALUE(passwordCheckType_, passwordCheckType) };


      protected:
        // The type of the password check. Valid values:
        // 
        // *   inclusion_upper_case: The password must contain uppercase letters.
        // *   inclusion_lower_case: The password must contain lowercase letters.
        // *   inclusion_special_case: The password must contain one or more of the following special characters: @ % + \\ / \\" ! # $ ^ ? : , ( ) { } [ ] ~ - _ .
        // *   inclusion_number: The password must contain digits.
        // *   exclusion_username: The password cannot contain a username.
        // *   exclusion_email: The password cannot contain an email prefix.
        // *   exclusion_phone_number: The password cannot contain a mobile number.
        // *   exclusion_display_name: The password cannot contain a display name.
        shared_ptr<string> passwordCheckType_ {};
      };

      virtual bool empty() const override { return this->passwordComplexityRules_ == nullptr
        && this->passwordMinLength_ == nullptr; };
      // passwordComplexityRules Field Functions 
      bool hasPasswordComplexityRules() const { return this->passwordComplexityRules_ != nullptr;};
      void deletePasswordComplexityRules() { this->passwordComplexityRules_ = nullptr;};
      inline const vector<PasswordComplexityConfiguration::PasswordComplexityRules> & getPasswordComplexityRules() const { DARABONBA_PTR_GET_CONST(passwordComplexityRules_, vector<PasswordComplexityConfiguration::PasswordComplexityRules>) };
      inline vector<PasswordComplexityConfiguration::PasswordComplexityRules> getPasswordComplexityRules() { DARABONBA_PTR_GET(passwordComplexityRules_, vector<PasswordComplexityConfiguration::PasswordComplexityRules>) };
      inline PasswordComplexityConfiguration& setPasswordComplexityRules(const vector<PasswordComplexityConfiguration::PasswordComplexityRules> & passwordComplexityRules) { DARABONBA_PTR_SET_VALUE(passwordComplexityRules_, passwordComplexityRules) };
      inline PasswordComplexityConfiguration& setPasswordComplexityRules(vector<PasswordComplexityConfiguration::PasswordComplexityRules> && passwordComplexityRules) { DARABONBA_PTR_SET_RVALUE(passwordComplexityRules_, passwordComplexityRules) };


      // passwordMinLength Field Functions 
      bool hasPasswordMinLength() const { return this->passwordMinLength_ != nullptr;};
      void deletePasswordMinLength() { this->passwordMinLength_ = nullptr;};
      inline int32_t getPasswordMinLength() const { DARABONBA_PTR_GET_DEFAULT(passwordMinLength_, 0) };
      inline PasswordComplexityConfiguration& setPasswordMinLength(int32_t passwordMinLength) { DARABONBA_PTR_SET_VALUE(passwordMinLength_, passwordMinLength) };


    protected:
      // The password complexity rules.
      shared_ptr<vector<PasswordComplexityConfiguration::PasswordComplexityRules>> passwordComplexityRules_ {};
      // The minimum number of characters in a password.
      shared_ptr<int32_t> passwordMinLength_ {};
    };

    virtual bool empty() const override { return this->passwordComplexityConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // passwordComplexityConfiguration Field Functions 
    bool hasPasswordComplexityConfiguration() const { return this->passwordComplexityConfiguration_ != nullptr;};
    void deletePasswordComplexityConfiguration() { this->passwordComplexityConfiguration_ = nullptr;};
    inline const GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration & getPasswordComplexityConfiguration() const { DARABONBA_PTR_GET_CONST(passwordComplexityConfiguration_, GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration) };
    inline GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration getPasswordComplexityConfiguration() { DARABONBA_PTR_GET(passwordComplexityConfiguration_, GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration) };
    inline GetPasswordComplexityConfigurationResponseBody& setPasswordComplexityConfiguration(const GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration & passwordComplexityConfiguration) { DARABONBA_PTR_SET_VALUE(passwordComplexityConfiguration_, passwordComplexityConfiguration) };
    inline GetPasswordComplexityConfigurationResponseBody& setPasswordComplexityConfiguration(GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration && passwordComplexityConfiguration) { DARABONBA_PTR_SET_RVALUE(passwordComplexityConfiguration_, passwordComplexityConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPasswordComplexityConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The password complexity configurations.
    shared_ptr<GetPasswordComplexityConfigurationResponseBody::PasswordComplexityConfiguration> passwordComplexityConfiguration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
