// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONNECTIONSPEC_HPP_
#define ALIBABACLOUD_MODELS_CONNECTIONSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ConnectionSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConnectionSpec& obj) { 
      DARABONBA_PTR_TO_JSON(account, account_);
      DARABONBA_PTR_TO_JSON(gitlabConfig, gitlabConfig_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
    };
    friend void from_json(const Darabonba::Json& j, ConnectionSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(account, account_);
      DARABONBA_PTR_FROM_JSON(gitlabConfig, gitlabConfig_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
    };
    ConnectionSpec() = default ;
    ConnectionSpec(const ConnectionSpec &) = default ;
    ConnectionSpec(ConnectionSpec &&) = default ;
    ConnectionSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConnectionSpec() = default ;
    ConnectionSpec& operator=(const ConnectionSpec &) = default ;
    ConnectionSpec& operator=(ConnectionSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->account_ != nullptr
        && this->gitlabConfig_ != nullptr && this->platform_ != nullptr; };
    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline const GitAccount & account() const { DARABONBA_PTR_GET_CONST(account_, GitAccount) };
    inline GitAccount account() { DARABONBA_PTR_GET(account_, GitAccount) };
    inline ConnectionSpec& setAccount(const GitAccount & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
    inline ConnectionSpec& setAccount(GitAccount && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    // gitlabConfig Field Functions 
    bool hasGitlabConfig() const { return this->gitlabConfig_ != nullptr;};
    void deleteGitlabConfig() { this->gitlabConfig_ = nullptr;};
    inline const GitLabConfig & gitlabConfig() const { DARABONBA_PTR_GET_CONST(gitlabConfig_, GitLabConfig) };
    inline GitLabConfig gitlabConfig() { DARABONBA_PTR_GET(gitlabConfig_, GitLabConfig) };
    inline ConnectionSpec& setGitlabConfig(const GitLabConfig & gitlabConfig) { DARABONBA_PTR_SET_VALUE(gitlabConfig_, gitlabConfig) };
    inline ConnectionSpec& setGitlabConfig(GitLabConfig && gitlabConfig) { DARABONBA_PTR_SET_RVALUE(gitlabConfig_, gitlabConfig) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ConnectionSpec& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


  protected:
    std::shared_ptr<GitAccount> account_ = nullptr;
    std::shared_ptr<GitLabConfig> gitlabConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> platform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
