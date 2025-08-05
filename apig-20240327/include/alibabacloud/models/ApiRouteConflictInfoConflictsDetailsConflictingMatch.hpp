// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSDETAILSCONFLICTINGMATCH_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFOCONFLICTSDETAILSCONFLICTINGMATCH_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfoConflictsDetailsConflictingMatch : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfoConflictsDetailsConflictingMatch& obj) { 
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(operationInfo, operationInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfoConflictsDetailsConflictingMatch& obj) { 
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(operationInfo, operationInfo_);
    };
    ApiRouteConflictInfoConflictsDetailsConflictingMatch() = default ;
    ApiRouteConflictInfoConflictsDetailsConflictingMatch(const ApiRouteConflictInfoConflictsDetailsConflictingMatch &) = default ;
    ApiRouteConflictInfoConflictsDetailsConflictingMatch(ApiRouteConflictInfoConflictsDetailsConflictingMatch &&) = default ;
    ApiRouteConflictInfoConflictsDetailsConflictingMatch(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfoConflictsDetailsConflictingMatch() = default ;
    ApiRouteConflictInfoConflictsDetailsConflictingMatch& operator=(const ApiRouteConflictInfoConflictsDetailsConflictingMatch &) = default ;
    ApiRouteConflictInfoConflictsDetailsConflictingMatch& operator=(ApiRouteConflictInfoConflictsDetailsConflictingMatch &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->match_ != nullptr
        && this->operationInfo_ != nullptr; };
    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const Models::HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, Models::HttpRouteMatch) };
    inline Models::HttpRouteMatch match() { DARABONBA_PTR_GET(match_, Models::HttpRouteMatch) };
    inline ApiRouteConflictInfoConflictsDetailsConflictingMatch& setMatch(const Models::HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline ApiRouteConflictInfoConflictsDetailsConflictingMatch& setMatch(Models::HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // operationInfo Field Functions 
    bool hasOperationInfo() const { return this->operationInfo_ != nullptr;};
    void deleteOperationInfo() { this->operationInfo_ = nullptr;};
    inline const Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo & operationInfo() const { DARABONBA_PTR_GET_CONST(operationInfo_, Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo) };
    inline Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo operationInfo() { DARABONBA_PTR_GET(operationInfo_, Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo) };
    inline ApiRouteConflictInfoConflictsDetailsConflictingMatch& setOperationInfo(const Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo & operationInfo) { DARABONBA_PTR_SET_VALUE(operationInfo_, operationInfo) };
    inline ApiRouteConflictInfoConflictsDetailsConflictingMatch& setOperationInfo(Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo && operationInfo) { DARABONBA_PTR_SET_RVALUE(operationInfo_, operationInfo) };


  protected:
    std::shared_ptr<Models::HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<Models::ApiRouteConflictInfoConflictsDetailsConflictingMatchOperationInfo> operationInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
