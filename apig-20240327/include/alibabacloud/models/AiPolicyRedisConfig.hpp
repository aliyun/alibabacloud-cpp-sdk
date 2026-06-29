// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIPOLICYREDISCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIPOLICYREDISCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiPolicyRedisConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiPolicyRedisConfig& obj) { 
      DARABONBA_PTR_TO_JSON(databaseNumber, databaseNumber_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(password, password_);
      DARABONBA_PTR_TO_JSON(port, port_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, AiPolicyRedisConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(databaseNumber, databaseNumber_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(password, password_);
      DARABONBA_PTR_FROM_JSON(port, port_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    AiPolicyRedisConfig() = default ;
    AiPolicyRedisConfig(const AiPolicyRedisConfig &) = default ;
    AiPolicyRedisConfig(AiPolicyRedisConfig &&) = default ;
    AiPolicyRedisConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiPolicyRedisConfig() = default ;
    AiPolicyRedisConfig& operator=(const AiPolicyRedisConfig &) = default ;
    AiPolicyRedisConfig& operator=(AiPolicyRedisConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseNumber_ == nullptr
        && this->host_ == nullptr && this->password_ == nullptr && this->port_ == nullptr && this->timeout_ == nullptr && this->username_ == nullptr; };
    // databaseNumber Field Functions 
    bool hasDatabaseNumber() const { return this->databaseNumber_ != nullptr;};
    void deleteDatabaseNumber() { this->databaseNumber_ = nullptr;};
    inline int32_t getDatabaseNumber() const { DARABONBA_PTR_GET_DEFAULT(databaseNumber_, 0) };
    inline AiPolicyRedisConfig& setDatabaseNumber(int32_t databaseNumber) { DARABONBA_PTR_SET_VALUE(databaseNumber_, databaseNumber) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline AiPolicyRedisConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline AiPolicyRedisConfig& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline AiPolicyRedisConfig& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline AiPolicyRedisConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline AiPolicyRedisConfig& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // The Redis database number.
    shared_ptr<int32_t> databaseNumber_ {};
    // The Redis host address.
    shared_ptr<string> host_ {};
    // The Redis password.
    shared_ptr<string> password_ {};
    // The Redis port.
    shared_ptr<int32_t> port_ {};
    // The timeout period, in milliseconds.
    shared_ptr<int32_t> timeout_ {};
    // The Redis username.
    shared_ptr<string> username_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
