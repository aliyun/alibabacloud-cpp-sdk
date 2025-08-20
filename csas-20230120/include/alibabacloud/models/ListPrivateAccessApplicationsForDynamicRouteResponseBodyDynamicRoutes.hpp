// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTERESPONSEBODYDYNAMICROUTES_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSAPPLICATIONSFORDYNAMICROUTERESPONSEBODYDYNAMICROUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(DynamicRouteId, dynamicRouteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(DynamicRouteId, dynamicRouteId_);
    };
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes() = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes(const ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes(ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes &&) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes() = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& operator=(const ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes &) = default ;
    ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& operator=(ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applications_ != nullptr
        && this->dynamicRouteId_ != nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications> & applications() const { DARABONBA_PTR_GET_CONST(applications_, vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications>) };
    inline vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications> applications() { DARABONBA_PTR_GET(applications_, vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications>) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& setApplications(const vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& setApplications(vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // dynamicRouteId Field Functions 
    bool hasDynamicRouteId() const { return this->dynamicRouteId_ != nullptr;};
    void deleteDynamicRouteId() { this->dynamicRouteId_ = nullptr;};
    inline string dynamicRouteId() const { DARABONBA_PTR_GET_DEFAULT(dynamicRouteId_, "") };
    inline ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutes& setDynamicRouteId(string dynamicRouteId) { DARABONBA_PTR_SET_VALUE(dynamicRouteId_, dynamicRouteId) };


  protected:
    std::shared_ptr<vector<Models::ListPrivateAccessApplicationsForDynamicRouteResponseBodyDynamicRoutesApplications>> applications_ = nullptr;
    std::shared_ptr<string> dynamicRouteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
