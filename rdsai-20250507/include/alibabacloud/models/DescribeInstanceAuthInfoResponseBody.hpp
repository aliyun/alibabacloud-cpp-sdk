// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTHINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTHINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeInstanceAuthInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(JwtSecret, jwtSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAuthInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiKeys, apiKeys_);
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(JwtSecret, jwtSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAuthInfoResponseBody() = default ;
    DescribeInstanceAuthInfoResponseBody(const DescribeInstanceAuthInfoResponseBody &) = default ;
    DescribeInstanceAuthInfoResponseBody(DescribeInstanceAuthInfoResponseBody &&) = default ;
    DescribeInstanceAuthInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAuthInfoResponseBody() = default ;
    DescribeInstanceAuthInfoResponseBody& operator=(const DescribeInstanceAuthInfoResponseBody &) = default ;
    DescribeInstanceAuthInfoResponseBody& operator=(DescribeInstanceAuthInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConfigList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the configuration item. Valid values:
      // 
      // *   **GOTRUE_EXTERNAL_EMAIL_ENABLED**: Enables authentication via external email addresses.
      // *   **GOTRUE_SITE_URL**: the URL that is displayed in the emails sent from the instance.
      // *   **GOTRUE_SMTP_PORT**: the port of the SMTP service provider.
      // *   **GOTRUE_SMTP_SENDER_NAME**: the name of the sender of the email.
      // *   **GOTRUE_SMTP_USER**: the username of the SMTP service provider.
      // *   **GOTRUE_SMTP_PASS**: the key of the SMTP service provider.
      // *   **GOTRUE_SMTP_ADMIN_EMAIL**: the email address of the SMTP service provider.
      // *   **GOTRUE_SMTP_HOST**: The host address of the SMTP service provider.
      // *   **GOTRUE_MAILER_AUTOCONFIRM**: specifies whether to enable automatic confirmation.
      // *   **GOTRUE_MAILER_OTP_EXP**: The validity period of the one-time password (OTP). Unit: seconds.
      // *   **GOTRUE_MAILER_OTP_LENGTH**: The verification code length of the one-time password (OTP). The value must be an integer greater than or equal to 6.
      shared_ptr<string> name_ {};
      // The value of the configuration item.
      shared_ptr<string> value_ {};
    };

    class ApiKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiKeys& obj) { 
        DARABONBA_PTR_TO_JSON(AnonKey, anonKey_);
        DARABONBA_PTR_TO_JSON(ServiceKey, serviceKey_);
      };
      friend void from_json(const Darabonba::Json& j, ApiKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(AnonKey, anonKey_);
        DARABONBA_PTR_FROM_JSON(ServiceKey, serviceKey_);
      };
      ApiKeys() = default ;
      ApiKeys(const ApiKeys &) = default ;
      ApiKeys(ApiKeys &&) = default ;
      ApiKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiKeys() = default ;
      ApiKeys& operator=(const ApiKeys &) = default ;
      ApiKeys& operator=(ApiKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->anonKey_ == nullptr
        && this->serviceKey_ == nullptr; };
      // anonKey Field Functions 
      bool hasAnonKey() const { return this->anonKey_ != nullptr;};
      void deleteAnonKey() { this->anonKey_ = nullptr;};
      inline string getAnonKey() const { DARABONBA_PTR_GET_DEFAULT(anonKey_, "") };
      inline ApiKeys& setAnonKey(string anonKey) { DARABONBA_PTR_SET_VALUE(anonKey_, anonKey) };


      // serviceKey Field Functions 
      bool hasServiceKey() const { return this->serviceKey_ != nullptr;};
      void deleteServiceKey() { this->serviceKey_ = nullptr;};
      inline string getServiceKey() const { DARABONBA_PTR_GET_DEFAULT(serviceKey_, "") };
      inline ApiKeys& setServiceKey(string serviceKey) { DARABONBA_PTR_SET_VALUE(serviceKey_, serviceKey) };


    protected:
      // The ANON_KEY of Supabase.
      shared_ptr<string> anonKey_ {};
      // The SERVICE_ROLE_KEY of Supabase.
      shared_ptr<string> serviceKey_ {};
    };

    virtual bool empty() const override { return this->apiKeys_ == nullptr
        && this->configList_ == nullptr && this->instanceName_ == nullptr && this->jwtSecret_ == nullptr && this->requestId_ == nullptr; };
    // apiKeys Field Functions 
    bool hasApiKeys() const { return this->apiKeys_ != nullptr;};
    void deleteApiKeys() { this->apiKeys_ = nullptr;};
    inline const DescribeInstanceAuthInfoResponseBody::ApiKeys & getApiKeys() const { DARABONBA_PTR_GET_CONST(apiKeys_, DescribeInstanceAuthInfoResponseBody::ApiKeys) };
    inline DescribeInstanceAuthInfoResponseBody::ApiKeys getApiKeys() { DARABONBA_PTR_GET(apiKeys_, DescribeInstanceAuthInfoResponseBody::ApiKeys) };
    inline DescribeInstanceAuthInfoResponseBody& setApiKeys(const DescribeInstanceAuthInfoResponseBody::ApiKeys & apiKeys) { DARABONBA_PTR_SET_VALUE(apiKeys_, apiKeys) };
    inline DescribeInstanceAuthInfoResponseBody& setApiKeys(DescribeInstanceAuthInfoResponseBody::ApiKeys && apiKeys) { DARABONBA_PTR_SET_RVALUE(apiKeys_, apiKeys) };


    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<DescribeInstanceAuthInfoResponseBody::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<DescribeInstanceAuthInfoResponseBody::ConfigList>) };
    inline vector<DescribeInstanceAuthInfoResponseBody::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<DescribeInstanceAuthInfoResponseBody::ConfigList>) };
    inline DescribeInstanceAuthInfoResponseBody& setConfigList(const vector<DescribeInstanceAuthInfoResponseBody::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline DescribeInstanceAuthInfoResponseBody& setConfigList(vector<DescribeInstanceAuthInfoResponseBody::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstanceAuthInfoResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // jwtSecret Field Functions 
    bool hasJwtSecret() const { return this->jwtSecret_ != nullptr;};
    void deleteJwtSecret() { this->jwtSecret_ = nullptr;};
    inline string getJwtSecret() const { DARABONBA_PTR_GET_DEFAULT(jwtSecret_, "") };
    inline DescribeInstanceAuthInfoResponseBody& setJwtSecret(string jwtSecret) { DARABONBA_PTR_SET_VALUE(jwtSecret_, jwtSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAuthInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The API keys.
    shared_ptr<DescribeInstanceAuthInfoResponseBody::ApiKeys> apiKeys_ {};
    // The authentication configurations.
    shared_ptr<vector<DescribeInstanceAuthInfoResponseBody::ConfigList>> configList_ {};
    // The ID of the RDS Supabase instance.
    shared_ptr<string> instanceName_ {};
    // The JWT key.
    shared_ptr<string> jwtSecret_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
