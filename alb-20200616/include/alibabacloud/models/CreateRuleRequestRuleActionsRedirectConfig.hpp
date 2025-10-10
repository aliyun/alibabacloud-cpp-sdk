// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSREDIRECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATERULEREQUESTRULEACTIONSREDIRECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRuleRequestRuleActionsRedirectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRuleRequestRuleActionsRedirectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRuleRequestRuleActionsRedirectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    CreateRuleRequestRuleActionsRedirectConfig() = default ;
    CreateRuleRequestRuleActionsRedirectConfig(const CreateRuleRequestRuleActionsRedirectConfig &) = default ;
    CreateRuleRequestRuleActionsRedirectConfig(CreateRuleRequestRuleActionsRedirectConfig &&) = default ;
    CreateRuleRequestRuleActionsRedirectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRuleRequestRuleActionsRedirectConfig() = default ;
    CreateRuleRequestRuleActionsRedirectConfig& operator=(const CreateRuleRequestRuleActionsRedirectConfig &) = default ;
    CreateRuleRequestRuleActionsRedirectConfig& operator=(CreateRuleRequestRuleActionsRedirectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->httpCode_ != nullptr && this->path_ != nullptr && this->port_ != nullptr && this->protocol_ != nullptr && this->query_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateRuleRequestRuleActionsRedirectConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline CreateRuleRequestRuleActionsRedirectConfig& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline CreateRuleRequestRuleActionsRedirectConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline CreateRuleRequestRuleActionsRedirectConfig& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline CreateRuleRequestRuleActionsRedirectConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline CreateRuleRequestRuleActionsRedirectConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The hostname to which requests are forwarded. Valid values:
    // 
    // *   **${host}** (default): If you set the value to ${host}, you cannot append other characters.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The hostname must be 3 to 128 characters in length, and can contain lowercase letters, digits, and the following characters: - . \\* = ~ _ + \\ ^ ! $ & | ( ) [ ] ?.
    //     *   The hostname must contain at least one period (.) but cannot start or end with a period (.).
    //     *   The rightmost domain label can contain only letters and wildcard characters, and cannot contain digits or hyphens (-). The leftmost `domain label` can be an asterisk (\\*).
    //     *   The domain labels cannot start or end with hyphens (-).
    //     *   You can use asterisks (\\*) and question marks (?) anywhere in a domain label as wildcard characters.
    std::shared_ptr<string> host_ = nullptr;
    // The HTTP status code that indicates the redirect type. Valid values: **301**, **302**, **303**, **307**, and **308**.
    std::shared_ptr<string> httpCode_ = nullptr;
    // The URL to which requests are redirected. Valid values:
    // 
    // *   Default value: **${path}**. **${host}**, **${protocol}**, and **${port}** are also supported. Each variable can be specified only once. You can specify one or more of the preceding variables in each request. You can also combine them with a custom value.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The URL must be 1 to 128 characters in length, and is case-sensitive. You can use asterisks (\\*) and question marks (?) as wildcard characters.
    //     *   The URL must start with a forward slash (/) and can contain letters, digits, and the following special characters: `$ - _ . + / & ~ @ : \\" * ?`. It cannot contain the following special characters: `% # ; ! ( ) [ ] ^ , \\ "`. You can use asterisks (\\*) and question marks (?) as wildcard characters.
    std::shared_ptr<string> path_ = nullptr;
    // The port to which requests are distributed.
    // 
    // *   **${port}** (default): If you set the value to ${port}, you cannot append other characters to the value.
    // *   You can also enter a port number. Valid values: **1 to 63335**.
    std::shared_ptr<string> port_ = nullptr;
    // The redirect protocol. Valid values:
    // 
    // *   **${protocol}** (default): If you set the value to ${protocol}, you cannot modify the value or append other characters.
    // *   **HTTP**
    // *   **HTTPS**
    // 
    // > *   HTTPS listeners support only HTTPS redirection.
    // >*   HTTP listeners support HTTP and HTTPS redirection.
    std::shared_ptr<string> protocol_ = nullptr;
    // The query string to which requests are redirected.
    // 
    // *   Default value: **${query}**. **${host}**, **${protocol}**, and **${port}** are also supported. Each variable can be specified only once. You can specify one or more of the preceding variables in each request. You can also combine them with a custom value.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The query string must be 1 to 128 characters in length.
    //     *   It can contain printable characters, excluding space characters, the special characters `# [ ] { } \\ | < > "`, and lowercase letters.
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
