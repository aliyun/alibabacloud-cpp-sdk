// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GITLABCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GITLABCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class GitLabConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GitLabConfig& obj) { 
      DARABONBA_PTR_TO_JSON(isFixedIP, isFixedIP_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, GitLabConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(isFixedIP, isFixedIP_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(uri, uri_);
    };
    GitLabConfig() = default ;
    GitLabConfig(const GitLabConfig &) = default ;
    GitLabConfig(GitLabConfig &&) = default ;
    GitLabConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GitLabConfig() = default ;
    GitLabConfig& operator=(const GitLabConfig &) = default ;
    GitLabConfig& operator=(GitLabConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isFixedIP_ != nullptr
        && this->token_ != nullptr && this->uri_ != nullptr; };
    // isFixedIP Field Functions 
    bool hasIsFixedIP() const { return this->isFixedIP_ != nullptr;};
    void deleteIsFixedIP() { this->isFixedIP_ = nullptr;};
    inline bool isFixedIP() const { DARABONBA_PTR_GET_DEFAULT(isFixedIP_, false) };
    inline GitLabConfig& setIsFixedIP(bool isFixedIP) { DARABONBA_PTR_SET_VALUE(isFixedIP_, isFixedIP) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GitLabConfig& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline GitLabConfig& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    std::shared_ptr<bool> isFixedIP_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
