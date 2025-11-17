// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEROLESRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEROLESRESPONSEBODYRESULTAUTHCONFIGLIST_HPP_
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
  class ListWorkspaceRolesResponseBodyResultAuthConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceRolesResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ActionAuthKeys, actionAuthKeys_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceRolesResponseBodyResultAuthConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionAuthKeys, actionAuthKeys_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
    };
    ListWorkspaceRolesResponseBodyResultAuthConfigList() = default ;
    ListWorkspaceRolesResponseBodyResultAuthConfigList(const ListWorkspaceRolesResponseBodyResultAuthConfigList &) = default ;
    ListWorkspaceRolesResponseBodyResultAuthConfigList(ListWorkspaceRolesResponseBodyResultAuthConfigList &&) = default ;
    ListWorkspaceRolesResponseBodyResultAuthConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceRolesResponseBodyResultAuthConfigList() = default ;
    ListWorkspaceRolesResponseBodyResultAuthConfigList& operator=(const ListWorkspaceRolesResponseBodyResultAuthConfigList &) = default ;
    ListWorkspaceRolesResponseBodyResultAuthConfigList& operator=(ListWorkspaceRolesResponseBodyResultAuthConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionAuthKeys_ == nullptr
        && return this->authKey_ == nullptr; };
    // actionAuthKeys Field Functions 
    bool hasActionAuthKeys() const { return this->actionAuthKeys_ != nullptr;};
    void deleteActionAuthKeys() { this->actionAuthKeys_ = nullptr;};
    inline const vector<string> & actionAuthKeys() const { DARABONBA_PTR_GET_CONST(actionAuthKeys_, vector<string>) };
    inline vector<string> actionAuthKeys() { DARABONBA_PTR_GET(actionAuthKeys_, vector<string>) };
    inline ListWorkspaceRolesResponseBodyResultAuthConfigList& setActionAuthKeys(const vector<string> & actionAuthKeys) { DARABONBA_PTR_SET_VALUE(actionAuthKeys_, actionAuthKeys) };
    inline ListWorkspaceRolesResponseBodyResultAuthConfigList& setActionAuthKeys(vector<string> && actionAuthKeys) { DARABONBA_PTR_SET_RVALUE(actionAuthKeys_, actionAuthKeys) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline ListWorkspaceRolesResponseBodyResultAuthConfigList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


  protected:
    // Authorization scope.
    std::shared_ptr<vector<string>> actionAuthKeys_ = nullptr;
    // Authorization type:
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
