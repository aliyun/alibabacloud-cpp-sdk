// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSREWRITECONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYRULESRULEACTIONSREWRITECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListRulesResponseBodyRulesRuleActionsRewriteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyRulesRuleActionsRewriteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyRulesRuleActionsRewriteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    ListRulesResponseBodyRulesRuleActionsRewriteConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsRewriteConfig(const ListRulesResponseBodyRulesRuleActionsRewriteConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsRewriteConfig(ListRulesResponseBodyRulesRuleActionsRewriteConfig &&) = default ;
    ListRulesResponseBodyRulesRuleActionsRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyRulesRuleActionsRewriteConfig() = default ;
    ListRulesResponseBodyRulesRuleActionsRewriteConfig& operator=(const ListRulesResponseBodyRulesRuleActionsRewriteConfig &) = default ;
    ListRulesResponseBodyRulesRuleActionsRewriteConfig& operator=(ListRulesResponseBodyRulesRuleActionsRewriteConfig &&) = default ;
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
    inline ListRulesResponseBodyRulesRuleActionsRewriteConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListRulesResponseBodyRulesRuleActionsRewriteConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListRulesResponseBodyRulesRuleActionsRewriteConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The hostname to which requests are redirected. Valid values:
    // 
    // *   **${host}** (default): If ${host} is returned, no other characters are appended.
    // 
    // *   A custom value. Make sure that the custom value meets the following requirements:
    // 
    //     *   The hostname must be 3 to 128 characters in length, and can contain lowercase letters, digits, hyphens (-), periods (.), asterisks (\\*), and question marks (?).
    //     *   The hostname must contain at least one period (.) but cannot start or end with a period (.).
    //     *   The rightmost domain label can contain only letters and wildcard characters. It cannot contain digits or hyphens (-).
    //     *   The domain labels cannot start or end with a hyphen (-).
    //     *   You can use asterisks (\\*) and question marks (?) anywhere in a domain label as wildcard characters.
    std::shared_ptr<string> host_ = nullptr;
    // The URL to which requests are redirected. The URL must be 1 to 128 characters in length, and can contain letters, digits, asterisks (\\*), question marks (?), and the following special characters: `$ - _ . + / & ~ @ :`. It must start with a forward slash (/) and does not contain the following special characters: `" % # ; ! ( ) [ ] ^ , "`.
    std::shared_ptr<string> path_ = nullptr;
    // The query string of the URL to which requests are redirected. The query string must be 1 to 128 characters in length, and can contain printable characters, excluding uppercase letters and the following special characters: `# [ ] { } \\ | < > &`.
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
