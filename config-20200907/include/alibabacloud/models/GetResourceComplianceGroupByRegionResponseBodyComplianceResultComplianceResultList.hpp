// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Compliances, compliances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList() = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList(const GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList(GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &&) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList() = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& operator=(const GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &) = default ;
    GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& operator=(GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliances_ == nullptr
        && return this->regionId_ == nullptr; };
    // compliances Field Functions 
    bool hasCompliances() const { return this->compliances_ != nullptr;};
    void deleteCompliances() { this->compliances_ = nullptr;};
    inline const vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> & compliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> compliances() { DARABONBA_PTR_GET(compliances_, vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& setCompliances(const vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& setCompliances(vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The queried evaluation results.
    std::shared_ptr<vector<Models::GetResourceComplianceGroupByRegionResponseBodyComplianceResultComplianceResultListCompliances>> compliances_ = nullptr;
    // The region ID of the evaluated resource.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
