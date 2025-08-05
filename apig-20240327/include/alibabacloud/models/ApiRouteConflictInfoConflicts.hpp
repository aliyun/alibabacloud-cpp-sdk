// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTS_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApiRouteConflictInfoConflictsDetails.hpp>
#include <alibabacloud/models/ApiRouteConflictInfoConflictsEnvironmentInfo.hpp>
#include <alibabacloud/models/ApiRouteConflictInfoConflictsRouteInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfoConflicts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfoConflicts& obj) { 
      DARABONBA_PTR_TO_JSON(details, details_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(routeInfo, routeInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfoConflicts& obj) { 
      DARABONBA_PTR_FROM_JSON(details, details_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(routeInfo, routeInfo_);
    };
    ApiRouteConflictInfoConflicts() = default ;
    ApiRouteConflictInfoConflicts(const ApiRouteConflictInfoConflicts &) = default ;
    ApiRouteConflictInfoConflicts(ApiRouteConflictInfoConflicts &&) = default ;
    ApiRouteConflictInfoConflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfoConflicts() = default ;
    ApiRouteConflictInfoConflicts& operator=(const ApiRouteConflictInfoConflicts &) = default ;
    ApiRouteConflictInfoConflicts& operator=(ApiRouteConflictInfoConflicts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->details_ != nullptr
        && this->environmentInfo_ != nullptr && this->resourceId_ != nullptr && this->resourceName_ != nullptr && this->resourceType_ != nullptr && this->routeInfo_ != nullptr; };
    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::ApiRouteConflictInfoConflictsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::ApiRouteConflictInfoConflictsDetails>) };
    inline vector<Models::ApiRouteConflictInfoConflictsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::ApiRouteConflictInfoConflictsDetails>) };
    inline ApiRouteConflictInfoConflicts& setDetails(const vector<Models::ApiRouteConflictInfoConflictsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline ApiRouteConflictInfoConflicts& setDetails(vector<Models::ApiRouteConflictInfoConflictsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const Models::ApiRouteConflictInfoConflictsEnvironmentInfo & environmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, Models::ApiRouteConflictInfoConflictsEnvironmentInfo) };
    inline Models::ApiRouteConflictInfoConflictsEnvironmentInfo environmentInfo() { DARABONBA_PTR_GET(environmentInfo_, Models::ApiRouteConflictInfoConflictsEnvironmentInfo) };
    inline ApiRouteConflictInfoConflicts& setEnvironmentInfo(const Models::ApiRouteConflictInfoConflictsEnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline ApiRouteConflictInfoConflicts& setEnvironmentInfo(Models::ApiRouteConflictInfoConflictsEnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ApiRouteConflictInfoConflicts& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ApiRouteConflictInfoConflicts& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ApiRouteConflictInfoConflicts& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // routeInfo Field Functions 
    bool hasRouteInfo() const { return this->routeInfo_ != nullptr;};
    void deleteRouteInfo() { this->routeInfo_ = nullptr;};
    inline const Models::ApiRouteConflictInfoConflictsRouteInfo & routeInfo() const { DARABONBA_PTR_GET_CONST(routeInfo_, Models::ApiRouteConflictInfoConflictsRouteInfo) };
    inline Models::ApiRouteConflictInfoConflictsRouteInfo routeInfo() { DARABONBA_PTR_GET(routeInfo_, Models::ApiRouteConflictInfoConflictsRouteInfo) };
    inline ApiRouteConflictInfoConflicts& setRouteInfo(const Models::ApiRouteConflictInfoConflictsRouteInfo & routeInfo) { DARABONBA_PTR_SET_VALUE(routeInfo_, routeInfo) };
    inline ApiRouteConflictInfoConflicts& setRouteInfo(Models::ApiRouteConflictInfoConflictsRouteInfo && routeInfo) { DARABONBA_PTR_SET_RVALUE(routeInfo_, routeInfo) };


  protected:
    std::shared_ptr<vector<Models::ApiRouteConflictInfoConflictsDetails>> details_ = nullptr;
    std::shared_ptr<Models::ApiRouteConflictInfoConflictsEnvironmentInfo> environmentInfo_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<Models::ApiRouteConflictInfoConflictsRouteInfo> routeInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
