// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYWORKSPACEROLECONFIGRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYWORKSPACEROLECONFIGRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionAuthKeys, actionAuthKeys_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionAuthKeys, actionAuthKeys_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
    };
    QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList() = default ;
    QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList(const QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList &) = default ;
    QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList(QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList &&) = default ;
    QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList() = default ;
    QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& operator=(const QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList &) = default ;
    QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& operator=(QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionAuthKeys_ != nullptr
        && this->authKey_ != nullptr; };
    // actionAuthKeys Field Functions 
    bool hasActionAuthKeys() const { return this->actionAuthKeys_ != nullptr;};
    void deleteActionAuthKeys() { this->actionAuthKeys_ = nullptr;};
    inline const vector<string> & actionAuthKeys() const { DARABONBA_PTR_GET_CONST(actionAuthKeys_, vector<string>) };
    inline vector<string> actionAuthKeys() { DARABONBA_PTR_GET(actionAuthKeys_, vector<string>) };
    inline QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& setActionAuthKeys(const vector<string> & actionAuthKeys) { DARABONBA_PTR_SET_VALUE(actionAuthKeys_, actionAuthKeys) };
    inline QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& setActionAuthKeys(vector<string> && actionAuthKeys) { DARABONBA_PTR_SET_RVALUE(actionAuthKeys_, actionAuthKeys) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline QueryWorkspaceRoleConfigResponseBodyResultAuthConfigList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


  protected:
    // Permission scope.
    std::shared_ptr<vector<string>> actionAuthKeys_ = nullptr;
    // Permission type:
    // - portal_create: Data Portal
    // - dashboard_create: Dashboard
    // - report_create: Spreadsheet
    // - screen_create: Data Screen
    // - analysis: Ad-hoc Analysis
    // - offline_download: Self-service Data Retrieval
    // - data_form: Data Entry
    // - quick_etl: Data Preparation
    // - cube: Dataset
    // - datasource: Data Source
    std::shared_ptr<string> authKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
