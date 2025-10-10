// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSREWRITECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULESATTRIBUTEREQUESTRULESRULEACTIONSREWRITECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig(const UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig(UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig &&) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig() = default ;
    UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& operator=(const UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig &) = default ;
    UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& operator=(UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig &&) = default ;
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
    inline UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline UpdateRulesAttributeRequestRulesRuleActionsRewriteConfig& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
