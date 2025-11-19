// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIGREMOTECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALPUBLICCONFIGREMOTECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CredentialPublicConfigRemoteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialPublicConfigRemoteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(ttl, ttl_);
      DARABONBA_PTR_TO_JSON(uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialPublicConfigRemoteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(uri, uri_);
    };
    CredentialPublicConfigRemoteConfig() = default ;
    CredentialPublicConfigRemoteConfig(const CredentialPublicConfigRemoteConfig &) = default ;
    CredentialPublicConfigRemoteConfig(CredentialPublicConfigRemoteConfig &&) = default ;
    CredentialPublicConfigRemoteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialPublicConfigRemoteConfig() = default ;
    CredentialPublicConfigRemoteConfig& operator=(const CredentialPublicConfigRemoteConfig &) = default ;
    CredentialPublicConfigRemoteConfig& operator=(CredentialPublicConfigRemoteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->timeout_ == nullptr
        && return this->ttl_ == nullptr && return this->uri_ == nullptr; };
    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline CredentialPublicConfigRemoteConfig& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline CredentialPublicConfigRemoteConfig& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline CredentialPublicConfigRemoteConfig& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<int32_t> timeout_ = nullptr;
    std::shared_ptr<int32_t> ttl_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
