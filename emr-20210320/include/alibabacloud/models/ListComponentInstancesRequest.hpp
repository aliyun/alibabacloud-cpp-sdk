// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListComponentInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationNames, applicationNames_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentNames, componentNames_);
      DARABONBA_PTR_TO_JSON(ComponentStates, componentStates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationNames, applicationNames_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentNames, componentNames_);
      DARABONBA_PTR_FROM_JSON(ComponentStates, componentStates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(NodeNames, nodeNames_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListComponentInstancesRequest() = default ;
    ListComponentInstancesRequest(const ListComponentInstancesRequest &) = default ;
    ListComponentInstancesRequest(ListComponentInstancesRequest &&) = default ;
    ListComponentInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentInstancesRequest() = default ;
    ListComponentInstancesRequest& operator=(const ListComponentInstancesRequest &) = default ;
    ListComponentInstancesRequest& operator=(ListComponentInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationNames_ == nullptr
        && return this->clusterId_ == nullptr && return this->componentNames_ == nullptr && return this->componentStates_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->nodeIds_ == nullptr && return this->nodeNames_ == nullptr && return this->regionId_ == nullptr && return this->zoneId_ == nullptr; };
    // applicationNames Field Functions 
    bool hasApplicationNames() const { return this->applicationNames_ != nullptr;};
    void deleteApplicationNames() { this->applicationNames_ = nullptr;};
    inline const vector<string> & applicationNames() const { DARABONBA_PTR_GET_CONST(applicationNames_, vector<string>) };
    inline vector<string> applicationNames() { DARABONBA_PTR_GET(applicationNames_, vector<string>) };
    inline ListComponentInstancesRequest& setApplicationNames(const vector<string> & applicationNames) { DARABONBA_PTR_SET_VALUE(applicationNames_, applicationNames) };
    inline ListComponentInstancesRequest& setApplicationNames(vector<string> && applicationNames) { DARABONBA_PTR_SET_RVALUE(applicationNames_, applicationNames) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListComponentInstancesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentNames Field Functions 
    bool hasComponentNames() const { return this->componentNames_ != nullptr;};
    void deleteComponentNames() { this->componentNames_ = nullptr;};
    inline const vector<string> & componentNames() const { DARABONBA_PTR_GET_CONST(componentNames_, vector<string>) };
    inline vector<string> componentNames() { DARABONBA_PTR_GET(componentNames_, vector<string>) };
    inline ListComponentInstancesRequest& setComponentNames(const vector<string> & componentNames) { DARABONBA_PTR_SET_VALUE(componentNames_, componentNames) };
    inline ListComponentInstancesRequest& setComponentNames(vector<string> && componentNames) { DARABONBA_PTR_SET_RVALUE(componentNames_, componentNames) };


    // componentStates Field Functions 
    bool hasComponentStates() const { return this->componentStates_ != nullptr;};
    void deleteComponentStates() { this->componentStates_ = nullptr;};
    inline const vector<string> & componentStates() const { DARABONBA_PTR_GET_CONST(componentStates_, vector<string>) };
    inline vector<string> componentStates() { DARABONBA_PTR_GET(componentStates_, vector<string>) };
    inline ListComponentInstancesRequest& setComponentStates(const vector<string> & componentStates) { DARABONBA_PTR_SET_VALUE(componentStates_, componentStates) };
    inline ListComponentInstancesRequest& setComponentStates(vector<string> && componentStates) { DARABONBA_PTR_SET_RVALUE(componentStates_, componentStates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline ListComponentInstancesRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ListComponentInstancesRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // nodeNames Field Functions 
    bool hasNodeNames() const { return this->nodeNames_ != nullptr;};
    void deleteNodeNames() { this->nodeNames_ = nullptr;};
    inline const vector<string> & nodeNames() const { DARABONBA_PTR_GET_CONST(nodeNames_, vector<string>) };
    inline vector<string> nodeNames() { DARABONBA_PTR_GET(nodeNames_, vector<string>) };
    inline ListComponentInstancesRequest& setNodeNames(const vector<string> & nodeNames) { DARABONBA_PTR_SET_VALUE(nodeNames_, nodeNames) };
    inline ListComponentInstancesRequest& setNodeNames(vector<string> && nodeNames) { DARABONBA_PTR_SET_RVALUE(nodeNames_, nodeNames) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListComponentInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListComponentInstancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The list of component names.
    std::shared_ptr<vector<string>> applicationNames_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The list of component names.
    std::shared_ptr<vector<string>> componentNames_ = nullptr;
    // The list of component status.
    std::shared_ptr<vector<string>> componentStates_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The list of instance IDs.
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // The instance IDs.
    std::shared_ptr<vector<string>> nodeNames_ = nullptr;
    // The region ID. You can call the [ListRegions](url) view.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
