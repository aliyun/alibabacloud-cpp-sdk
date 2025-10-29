// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSROUTEINFO_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSROUTEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfoConflictsRouteInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfoConflictsRouteInfo& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfoConflictsRouteInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    ApiRouteConflictInfoConflictsRouteInfo() = default ;
    ApiRouteConflictInfoConflictsRouteInfo(const ApiRouteConflictInfoConflictsRouteInfo &) = default ;
    ApiRouteConflictInfoConflictsRouteInfo(ApiRouteConflictInfoConflictsRouteInfo &&) = default ;
    ApiRouteConflictInfoConflictsRouteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfoConflictsRouteInfo() = default ;
    ApiRouteConflictInfoConflictsRouteInfo& operator=(const ApiRouteConflictInfoConflictsRouteInfo &) = default ;
    ApiRouteConflictInfoConflictsRouteInfo& operator=(ApiRouteConflictInfoConflictsRouteInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->routeId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApiRouteConflictInfoConflictsRouteInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline ApiRouteConflictInfoConflictsRouteInfo& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> routeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
