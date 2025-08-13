// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListApplicationsWithTagRulesResponseBodyDataResultRouteRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListApplicationsWithTagRulesResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RouteRules, routeRules_);
      DARABONBA_PTR_TO_JSON(RouteStatus, routeStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RouteRules, routeRules_);
      DARABONBA_PTR_FROM_JSON(RouteStatus, routeStatus_);
    };
    ListApplicationsWithTagRulesResponseBodyDataResult() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResult(const ListApplicationsWithTagRulesResponseBodyDataResult &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResult(ListApplicationsWithTagRulesResponseBodyDataResult &&) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBodyDataResult() = default ;
    ListApplicationsWithTagRulesResponseBodyDataResult& operator=(const ListApplicationsWithTagRulesResponseBodyDataResult &) = default ;
    ListApplicationsWithTagRulesResponseBodyDataResult& operator=(ListApplicationsWithTagRulesResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->namespace_ != nullptr && this->routeRules_ != nullptr && this->routeStatus_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResult& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResult& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListApplicationsWithTagRulesResponseBodyDataResult& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // routeRules Field Functions 
    bool hasRouteRules() const { return this->routeRules_ != nullptr;};
    void deleteRouteRules() { this->routeRules_ = nullptr;};
    inline const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules> & routeRules() const { DARABONBA_PTR_GET_CONST(routeRules_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules>) };
    inline vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules> routeRules() { DARABONBA_PTR_GET(routeRules_, vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules>) };
    inline ListApplicationsWithTagRulesResponseBodyDataResult& setRouteRules(const vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules> & routeRules) { DARABONBA_PTR_SET_VALUE(routeRules_, routeRules) };
    inline ListApplicationsWithTagRulesResponseBodyDataResult& setRouteRules(vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules> && routeRules) { DARABONBA_PTR_SET_RVALUE(routeRules_, routeRules) };


    // routeStatus Field Functions 
    bool hasRouteStatus() const { return this->routeStatus_ != nullptr;};
    void deleteRouteStatus() { this->routeStatus_ = nullptr;};
    inline int64_t routeStatus() const { DARABONBA_PTR_GET_DEFAULT(routeStatus_, 0L) };
    inline ListApplicationsWithTagRulesResponseBodyDataResult& setRouteStatus(int64_t routeStatus) { DARABONBA_PTR_SET_VALUE(routeStatus_, routeStatus) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The MSE namespace to which the application belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The queried rules.
    std::shared_ptr<vector<Models::ListApplicationsWithTagRulesResponseBodyDataResultRouteRules>> routeRules_ = nullptr;
    // The route state. Valid values:
    // 
    // *   0: disabled
    // *   1: enabled
    std::shared_ptr<int64_t> routeStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
