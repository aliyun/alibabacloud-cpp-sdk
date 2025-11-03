// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODYTRAFFICMIRRORFILTERS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODYTRAFFICMIRRORFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules.hpp>
#include <alibabacloud/models/ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules.hpp>
#include <alibabacloud/models/ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_TO_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterStatus, trafficMirrorFilterStatus_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EgressRules, egressRules_);
      DARABONBA_PTR_FROM_JSON(IngressRules, ingressRules_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterDescription, trafficMirrorFilterDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterStatus, trafficMirrorFilterStatus_);
    };
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters() = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters(const ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters &) = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters(ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters &&) = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters() = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& operator=(const ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters &) = default ;
    ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& operator=(ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->egressRules_ == nullptr && return this->ingressRules_ == nullptr && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr && return this->trafficMirrorFilterDescription_ == nullptr
        && return this->trafficMirrorFilterId_ == nullptr && return this->trafficMirrorFilterName_ == nullptr && return this->trafficMirrorFilterStatus_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // egressRules Field Functions 
    bool hasEgressRules() const { return this->egressRules_ != nullptr;};
    void deleteEgressRules() { this->egressRules_ = nullptr;};
    inline const vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules> & egressRules() const { DARABONBA_PTR_GET_CONST(egressRules_, vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules>) };
    inline vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules> egressRules() { DARABONBA_PTR_GET(egressRules_, vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules>) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setEgressRules(const vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules> & egressRules) { DARABONBA_PTR_SET_VALUE(egressRules_, egressRules) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setEgressRules(vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules> && egressRules) { DARABONBA_PTR_SET_RVALUE(egressRules_, egressRules) };


    // ingressRules Field Functions 
    bool hasIngressRules() const { return this->ingressRules_ != nullptr;};
    void deleteIngressRules() { this->ingressRules_ = nullptr;};
    inline const vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules> & ingressRules() const { DARABONBA_PTR_GET_CONST(ingressRules_, vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules>) };
    inline vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules> ingressRules() { DARABONBA_PTR_GET(ingressRules_, vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules>) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setIngressRules(const vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules> & ingressRules) { DARABONBA_PTR_SET_VALUE(ingressRules_, ingressRules) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setIngressRules(vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules> && ingressRules) { DARABONBA_PTR_SET_RVALUE(ingressRules_, ingressRules) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags>) };
    inline vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags>) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setTags(const vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setTags(vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trafficMirrorFilterDescription Field Functions 
    bool hasTrafficMirrorFilterDescription() const { return this->trafficMirrorFilterDescription_ != nullptr;};
    void deleteTrafficMirrorFilterDescription() { this->trafficMirrorFilterDescription_ = nullptr;};
    inline string trafficMirrorFilterDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterDescription_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setTrafficMirrorFilterDescription(string trafficMirrorFilterDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterDescription_, trafficMirrorFilterDescription) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string trafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorFilterName Field Functions 
    bool hasTrafficMirrorFilterName() const { return this->trafficMirrorFilterName_ != nullptr;};
    void deleteTrafficMirrorFilterName() { this->trafficMirrorFilterName_ = nullptr;};
    inline string trafficMirrorFilterName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterName_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setTrafficMirrorFilterName(string trafficMirrorFilterName) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterName_, trafficMirrorFilterName) };


    // trafficMirrorFilterStatus Field Functions 
    bool hasTrafficMirrorFilterStatus() const { return this->trafficMirrorFilterStatus_ != nullptr;};
    void deleteTrafficMirrorFilterStatus() { this->trafficMirrorFilterStatus_ = nullptr;};
    inline string trafficMirrorFilterStatus() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterStatus_, "") };
    inline ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters& setTrafficMirrorFilterStatus(string trafficMirrorFilterStatus) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterStatus_, trafficMirrorFilterStatus) };


  protected:
    // The time when the filter is created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The information about the outbound rules.
    std::shared_ptr<vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersEgressRules>> egressRules_ = nullptr;
    // The information about the inbound rules.
    std::shared_ptr<vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersIngressRules>> ingressRules_ = nullptr;
    // The ID of the resource group to which the traffic mirror session belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListTrafficMirrorFiltersResponseBodyTrafficMirrorFiltersTags>> tags_ = nullptr;
    // The description of the filter.
    std::shared_ptr<string> trafficMirrorFilterDescription_ = nullptr;
    // The ID of the filter.
    std::shared_ptr<string> trafficMirrorFilterId_ = nullptr;
    // The filter name.
    std::shared_ptr<string> trafficMirrorFilterName_ = nullptr;
    // The status of the filter. Valid values:
    // 
    // *   **Creating**
    // *   **Created**
    // *   **Modifying**
    // *   **Deleting**
    std::shared_ptr<string> trafficMirrorFilterStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
