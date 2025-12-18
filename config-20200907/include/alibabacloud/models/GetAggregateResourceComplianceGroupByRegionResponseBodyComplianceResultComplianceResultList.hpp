// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Compliances, compliances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList(const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList(GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &&) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& operator=(const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& operator=(GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliances_ == nullptr
        && return this->regionId_ == nullptr; };
    // compliances Field Functions 
    bool hasCompliances() const { return this->compliances_ != nullptr;};
    void deleteCompliances() { this->compliances_ = nullptr;};
    inline const vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> & compliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> compliances() { DARABONBA_PTR_GET(compliances_, vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& setCompliances(const vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& setCompliances(vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The queried evaluation results.
    std::shared_ptr<vector<Models::GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances>> compliances_ = nullptr;
    // The region ID of the evaluated resource.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
