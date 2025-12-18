// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPERESPONSEBODYCOMPLIANCERESULTCOMPLIANCERESULTLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Compliances, compliances_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Compliances, compliances_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList() = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList(const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList(GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &&) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList() = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& operator=(const GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &) = default ;
    GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& operator=(GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliances_ == nullptr
        && return this->resourceType_ == nullptr; };
    // compliances Field Functions 
    bool hasCompliances() const { return this->compliances_ != nullptr;};
    void deleteCompliances() { this->compliances_ = nullptr;};
    inline const vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> & compliances() const { DARABONBA_PTR_GET_CONST(compliances_, vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> compliances() { DARABONBA_PTR_GET(compliances_, vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances>) };
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& setCompliances(const vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> & compliances) { DARABONBA_PTR_SET_VALUE(compliances_, compliances) };
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& setCompliances(vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances> && compliances) { DARABONBA_PTR_SET_RVALUE(compliances_, compliances) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The queried evaluation results.
    std::shared_ptr<vector<Models::GetResourceComplianceGroupByResourceTypeResponseBodyComplianceResultComplianceResultListCompliances>> compliances_ = nullptr;
    // The type of the evaluated resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
