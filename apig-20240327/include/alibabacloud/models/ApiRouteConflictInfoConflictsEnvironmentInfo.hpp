// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSENVIRONMENTINFO_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSENVIRONMENTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfoConflictsEnvironmentInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfoConflictsEnvironmentInfo& obj) { 
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfoConflictsEnvironmentInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ApiRouteConflictInfoConflictsEnvironmentInfo() = default ;
    ApiRouteConflictInfoConflictsEnvironmentInfo(const ApiRouteConflictInfoConflictsEnvironmentInfo &) = default ;
    ApiRouteConflictInfoConflictsEnvironmentInfo(ApiRouteConflictInfoConflictsEnvironmentInfo &&) = default ;
    ApiRouteConflictInfoConflictsEnvironmentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfoConflictsEnvironmentInfo() = default ;
    ApiRouteConflictInfoConflictsEnvironmentInfo& operator=(const ApiRouteConflictInfoConflictsEnvironmentInfo &) = default ;
    ApiRouteConflictInfoConflictsEnvironmentInfo& operator=(ApiRouteConflictInfoConflictsEnvironmentInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->name_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ApiRouteConflictInfoConflictsEnvironmentInfo& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ApiRouteConflictInfoConflictsEnvironmentInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
