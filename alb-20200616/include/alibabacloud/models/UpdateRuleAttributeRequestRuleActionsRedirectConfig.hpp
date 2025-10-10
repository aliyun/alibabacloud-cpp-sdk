// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSREDIRECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSREDIRECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsRedirectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsRedirectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsRedirectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(HttpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    UpdateRuleAttributeRequestRuleActionsRedirectConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsRedirectConfig(const UpdateRuleAttributeRequestRuleActionsRedirectConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsRedirectConfig(UpdateRuleAttributeRequestRuleActionsRedirectConfig &&) = default ;
    UpdateRuleAttributeRequestRuleActionsRedirectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsRedirectConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsRedirectConfig& operator=(const UpdateRuleAttributeRequestRuleActionsRedirectConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsRedirectConfig& operator=(UpdateRuleAttributeRequestRuleActionsRedirectConfig &&) = default ;
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
    inline UpdateRuleAttributeRequestRuleActionsRedirectConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline string httpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRedirectConfig& setHttpCode(string httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRedirectConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline string port() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRedirectConfig& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRedirectConfig& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRedirectConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The hostname to which requests are redirected. Valid values:
    // 
    // *   **${host}** (default): If ${host} is returned, no other character is appended.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The hostname must be 3 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), periods (.), asterisks (\\*), and question marks (?).
    //     *   The hostname contains at least one period (.) but does not start or end with a period (.).
    //     *   The rightmost domain label can contain only letters and wildcard characters. It cannot contain digits or hyphens (-).
    //     *   The domain labels do not start or end with a hyphen (-).
    //     *   You can use asterisks (\\*) and question marks (?) anywhere in a domain label as wildcard characters.
    std::shared_ptr<string> host_ = nullptr;
    // The forwarding method. Valid values: **301**, **302**, **303**, **307**, and **308**.
    std::shared_ptr<string> httpCode_ = nullptr;
    // The URL to which requests are redirected. Valid values:
    // 
    // *   Default value: **${path}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The header value must be 1 to 128 characters in length.
    //     *   It must start with a forward slash (/) and can contain letters, digits, and the following special characters: `$ - _ . + / & ~ @ :`. It does not contain the following special characters: `% # ; ! ( ) [ ] ^ , \\ "`. You can use asterisks (\\*) and question marks (?) as wildcard characters.
    std::shared_ptr<string> path_ = nullptr;
    // The port to which requests are redirected. Valid values:
    // 
    // *   **${port}** (default): If you set the value to ${port}, you cannot append other characters.
    // *   Other valid values: **1 to 63335**.
    std::shared_ptr<string> port_ = nullptr;
    // The redirect protocol. Valid values:
    // 
    // *   **${protocol}** (default): If you set the value to ${protocol}, you cannot append other characters.
    // *   **HTTP** or **HTTPS**.
    // 
    // >  HTTPS listeners support only HTTPS redirects.
    std::shared_ptr<string> protocol_ = nullptr;
    // The query string of the URL to which requests are forwarded. Valid values:
    // 
    // *   Default value: **${query}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The header value must be 1 to 128 characters in length.
    //     *   It can contain printable characters, excluding space characters, the special characters `# [ ] { } \\ | < > "`, and uppercase letters.
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
