// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSREWRITECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEATTRIBUTEREQUESTRULEACTIONSREWRITECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRuleAttributeRequestRuleActionsRewriteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleAttributeRequestRuleActionsRewriteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleAttributeRequestRuleActionsRewriteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    UpdateRuleAttributeRequestRuleActionsRewriteConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsRewriteConfig(const UpdateRuleAttributeRequestRuleActionsRewriteConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsRewriteConfig(UpdateRuleAttributeRequestRuleActionsRewriteConfig &&) = default ;
    UpdateRuleAttributeRequestRuleActionsRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleAttributeRequestRuleActionsRewriteConfig() = default ;
    UpdateRuleAttributeRequestRuleActionsRewriteConfig& operator=(const UpdateRuleAttributeRequestRuleActionsRewriteConfig &) = default ;
    UpdateRuleAttributeRequestRuleActionsRewriteConfig& operator=(UpdateRuleAttributeRequestRuleActionsRewriteConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->host_ != nullptr
        && this->path_ != nullptr && this->query_ != nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRewriteConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRewriteConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline UpdateRuleAttributeRequestRuleActionsRewriteConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The hostname to which requests are rewritten. Valid values:
    // 
    // *   **${host}** (default): If you set the value to ${host}, you cannot append other characters.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The hostname must be 3 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), periods (.), asterisks (\\*), and question marks (?).
    //     *   The hostname contains at least one period (.) but does not start or end with a period (.).
    //     *   The rightmost domain label can contain only letters and wildcard characters. It cannot contain digits or hyphens (-).
    //     *   The domain labels do not start or end with a hyphen (-). You can use asterisks (\\*) and question marks (?) anywhere in a domain label as wildcard characters.
    std::shared_ptr<string> host_ = nullptr;
    // The URL to which requests are redirected. Valid values:
    // 
    // *   Default value: **${path}**. \\*\\*${host}**, **${protocol}**, and **${port}\\*\\* are also supported. Each variable can be specified only once. The preceding variables can be used at the same time or combined with a custom value.
    // 
    // *   If you want to specify a custom value, make sure that the following requirements are met:
    // 
    //     *   The header value must be 1 to 128 characters in length.
    //     *   It must start with a forward slash (/) and can contain letters, digits, and the following special characters: `$ - _ . + / & ~ @ :`. It does not contain the following special characters: `% # ; ! ( ) [ ] ^ , \\ "`. You can use asterisks (\\*) and question marks (?) as wildcard characters.
    std::shared_ptr<string> path_ = nullptr;
    // The query string to which requests are redirected. Valid values:
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
