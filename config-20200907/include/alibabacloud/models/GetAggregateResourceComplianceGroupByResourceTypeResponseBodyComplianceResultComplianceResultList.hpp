// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Compliances, compliances_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList(const GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList(GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &&) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList() = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& operator=(const GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &) = default ;
    GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& operator=(GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliances_ == nullptr
        && return this->resourceType_ == nullptr; };
    // compliances Field Functions 
    bool hasCompliances() const { return this->compliances_ != nullptr;};
    void deleteCompliances() { this->compliances_ = nullptr;};
    inline const vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> & compliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> compliances() { DARABONBA_PTR_GET(compliances_, vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& setCompliances(const vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& setCompliances(vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The queried evaluation results.
    std::shared_ptr<vector<Models::GetAggregateResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances>> compliances_ = nullptr;
    // The type of the evaluated resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
