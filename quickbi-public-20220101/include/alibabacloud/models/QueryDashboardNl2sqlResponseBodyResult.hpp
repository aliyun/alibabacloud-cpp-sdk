// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_QUERYDASHBOARDNL2SQLRESPONSEBODYRESULT_HPP_
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
  class QueryDashboardNl2sqlResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDashboardNl2sqlResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(Authorities, authorities_);
      DARABONBA_PTR_TO_JSON(DashboardName, dashboardName_);
      DARABONBA_PTR_TO_JSON(DashboardNl2sqlId, dashboardNl2sqlId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDashboardNl2sqlResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorities, authorities_);
      DARABONBA_PTR_FROM_JSON(DashboardName, dashboardName_);
      DARABONBA_PTR_FROM_JSON(DashboardNl2sqlId, dashboardNl2sqlId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    QueryDashboardNl2sqlResponseBodyResult() = default ;
    QueryDashboardNl2sqlResponseBodyResult(const QueryDashboardNl2sqlResponseBodyResult &) = default ;
    QueryDashboardNl2sqlResponseBodyResult(QueryDashboardNl2sqlResponseBodyResult &&) = default ;
    QueryDashboardNl2sqlResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDashboardNl2sqlResponseBodyResult() = default ;
    QueryDashboardNl2sqlResponseBodyResult& operator=(const QueryDashboardNl2sqlResponseBodyResult &) = default ;
    QueryDashboardNl2sqlResponseBodyResult& operator=(QueryDashboardNl2sqlResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorities_ == nullptr
        && return this->dashboardName_ == nullptr && return this->dashboardNl2sqlId_ == nullptr && return this->ownerId_ == nullptr; };
    // authorities Field Functions 
    bool hasAuthorities() const { return this->authorities_ != nullptr;};
    void deleteAuthorities() { this->authorities_ = nullptr;};
    inline const vector<string> & authorities() const { DARABONBA_PTR_GET_CONST(authorities_, vector<string>) };
    inline vector<string> authorities() { DARABONBA_PTR_GET(authorities_, vector<string>) };
    inline QueryDashboardNl2sqlResponseBodyResult& setAuthorities(const vector<string> & authorities) { DARABONBA_PTR_SET_VALUE(authorities_, authorities) };
    inline QueryDashboardNl2sqlResponseBodyResult& setAuthorities(vector<string> && authorities) { DARABONBA_PTR_SET_RVALUE(authorities_, authorities) };


    // dashboardName Field Functions 
    bool hasDashboardName() const { return this->dashboardName_ != nullptr;};
    void deleteDashboardName() { this->dashboardName_ = nullptr;};
    inline string dashboardName() const { DARABONBA_PTR_GET_DEFAULT(dashboardName_, "") };
    inline QueryDashboardNl2sqlResponseBodyResult& setDashboardName(string dashboardName) { DARABONBA_PTR_SET_VALUE(dashboardName_, dashboardName) };


    // dashboardNl2sqlId Field Functions 
    bool hasDashboardNl2sqlId() const { return this->dashboardNl2sqlId_ != nullptr;};
    void deleteDashboardNl2sqlId() { this->dashboardNl2sqlId_ = nullptr;};
    inline string dashboardNl2sqlId() const { DARABONBA_PTR_GET_DEFAULT(dashboardNl2sqlId_, "") };
    inline QueryDashboardNl2sqlResponseBodyResult& setDashboardNl2sqlId(string dashboardNl2sqlId) { DARABONBA_PTR_SET_VALUE(dashboardNl2sqlId_, dashboardNl2sqlId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline QueryDashboardNl2sqlResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // If this parameter has a value and includes "READ", it indicates that the user has read permission for the dashboard question resource.
    std::shared_ptr<vector<string>> authorities_ = nullptr;
    // Dashboard name
    std::shared_ptr<string> dashboardName_ = nullptr;
    // Dashboard question resource ID
    std::shared_ptr<string> dashboardNl2sqlId_ = nullptr;
    // UserID of the dashboard creator
    std::shared_ptr<string> ownerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
