// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApiRouteConflictInfoConflictsDetailsConflictingMatch.hpp>
#include <alibabacloud/models/ApiRouteConflictInfoConflictsDetailsDetectedMatch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfoConflictsDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfoConflictsDetails& obj) { 
      DARABONBA_PTR_TO_JSON(conflictingMatch, conflictingMatch_);
      DARABONBA_PTR_TO_JSON(detectedMatch, detectedMatch_);
      DARABONBA_PTR_TO_JSON(level, level_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfoConflictsDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(conflictingMatch, conflictingMatch_);
      DARABONBA_PTR_FROM_JSON(detectedMatch, detectedMatch_);
      DARABONBA_PTR_FROM_JSON(level, level_);
    };
    ApiRouteConflictInfoConflictsDetails() = default ;
    ApiRouteConflictInfoConflictsDetails(const ApiRouteConflictInfoConflictsDetails &) = default ;
    ApiRouteConflictInfoConflictsDetails(ApiRouteConflictInfoConflictsDetails &&) = default ;
    ApiRouteConflictInfoConflictsDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfoConflictsDetails() = default ;
    ApiRouteConflictInfoConflictsDetails& operator=(const ApiRouteConflictInfoConflictsDetails &) = default ;
    ApiRouteConflictInfoConflictsDetails& operator=(ApiRouteConflictInfoConflictsDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conflictingMatch_ == nullptr
        && return this->detectedMatch_ == nullptr && return this->level_ == nullptr; };
    // conflictingMatch Field Functions 
    bool hasConflictingMatch() const { return this->conflictingMatch_ != nullptr;};
    void deleteConflictingMatch() { this->conflictingMatch_ = nullptr;};
    inline const Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch & conflictingMatch() const { DARABONBA_PTR_GET_CONST(conflictingMatch_, Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch) };
    inline Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch conflictingMatch() { DARABONBA_PTR_GET(conflictingMatch_, Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch) };
    inline ApiRouteConflictInfoConflictsDetails& setConflictingMatch(const Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch & conflictingMatch) { DARABONBA_PTR_SET_VALUE(conflictingMatch_, conflictingMatch) };
    inline ApiRouteConflictInfoConflictsDetails& setConflictingMatch(Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch && conflictingMatch) { DARABONBA_PTR_SET_RVALUE(conflictingMatch_, conflictingMatch) };


    // detectedMatch Field Functions 
    bool hasDetectedMatch() const { return this->detectedMatch_ != nullptr;};
    void deleteDetectedMatch() { this->detectedMatch_ = nullptr;};
    inline const Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch & detectedMatch() const { DARABONBA_PTR_GET_CONST(detectedMatch_, Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch) };
    inline Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch detectedMatch() { DARABONBA_PTR_GET(detectedMatch_, Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch) };
    inline ApiRouteConflictInfoConflictsDetails& setDetectedMatch(const Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch & detectedMatch) { DARABONBA_PTR_SET_VALUE(detectedMatch_, detectedMatch) };
    inline ApiRouteConflictInfoConflictsDetails& setDetectedMatch(Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch && detectedMatch) { DARABONBA_PTR_SET_RVALUE(detectedMatch_, detectedMatch) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ApiRouteConflictInfoConflictsDetails& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


  protected:
    std::shared_ptr<Models::ApiRouteConflictInfoConflictsDetailsConflictingMatch> conflictingMatch_ = nullptr;
    std::shared_ptr<Models::ApiRouteConflictInfoConflictsDetailsDetectedMatch> detectedMatch_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
