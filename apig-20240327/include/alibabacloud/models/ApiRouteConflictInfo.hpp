// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APIROUTECONFLICTINFO_HPP_
#define ALIBABACLOUD_MODELS_APIROUTECONFLICTINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApiRouteConflictInfoConflicts.hpp>
#include <alibabacloud/models/ApiRouteConflictInfoDomainInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ApiRouteConflictInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApiRouteConflictInfo& obj) { 
      DARABONBA_PTR_TO_JSON(conflicts, conflicts_);
      DARABONBA_PTR_TO_JSON(domainInfo, domainInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ApiRouteConflictInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(conflicts, conflicts_);
      DARABONBA_PTR_FROM_JSON(domainInfo, domainInfo_);
    };
    ApiRouteConflictInfo() = default ;
    ApiRouteConflictInfo(const ApiRouteConflictInfo &) = default ;
    ApiRouteConflictInfo(ApiRouteConflictInfo &&) = default ;
    ApiRouteConflictInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApiRouteConflictInfo() = default ;
    ApiRouteConflictInfo& operator=(const ApiRouteConflictInfo &) = default ;
    ApiRouteConflictInfo& operator=(ApiRouteConflictInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conflicts_ != nullptr
        && this->domainInfo_ != nullptr; };
    // conflicts Field Functions 
    bool hasConflicts() const { return this->conflicts_ != nullptr;};
    void deleteConflicts() { this->conflicts_ = nullptr;};
    inline const vector<ApiRouteConflictInfoConflicts> & conflicts() const { DARABONBA_PTR_GET_CONST(conflicts_, vector<ApiRouteConflictInfoConflicts>) };
    inline vector<ApiRouteConflictInfoConflicts> conflicts() { DARABONBA_PTR_GET(conflicts_, vector<ApiRouteConflictInfoConflicts>) };
    inline ApiRouteConflictInfo& setConflicts(const vector<ApiRouteConflictInfoConflicts> & conflicts) { DARABONBA_PTR_SET_VALUE(conflicts_, conflicts) };
    inline ApiRouteConflictInfo& setConflicts(vector<ApiRouteConflictInfoConflicts> && conflicts) { DARABONBA_PTR_SET_RVALUE(conflicts_, conflicts) };


    // domainInfo Field Functions 
    bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
    void deleteDomainInfo() { this->domainInfo_ = nullptr;};
    inline const ApiRouteConflictInfoDomainInfo & domainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, ApiRouteConflictInfoDomainInfo) };
    inline ApiRouteConflictInfoDomainInfo domainInfo() { DARABONBA_PTR_GET(domainInfo_, ApiRouteConflictInfoDomainInfo) };
    inline ApiRouteConflictInfo& setDomainInfo(const ApiRouteConflictInfoDomainInfo & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
    inline ApiRouteConflictInfo& setDomainInfo(ApiRouteConflictInfoDomainInfo && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


  protected:
    std::shared_ptr<vector<ApiRouteConflictInfoConflicts>> conflicts_ = nullptr;
    std::shared_ptr<ApiRouteConflictInfoDomainInfo> domainInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
