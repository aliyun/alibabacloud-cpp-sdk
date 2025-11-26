// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPONENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPONENTSREQUEST_HPP_
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
  class ListComponentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComponentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationNames, applicationNames_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ComponentNames, componentNames_);
      DARABONBA_PTR_TO_JSON(ComponentStates, componentStates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListComponentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationNames, applicationNames_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ComponentNames, componentNames_);
      DARABONBA_PTR_FROM_JSON(ComponentStates, componentStates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListComponentsRequest() = default ;
    ListComponentsRequest(const ListComponentsRequest &) = default ;
    ListComponentsRequest(ListComponentsRequest &&) = default ;
    ListComponentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComponentsRequest() = default ;
    ListComponentsRequest& operator=(const ListComponentsRequest &) = default ;
    ListComponentsRequest& operator=(ListComponentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationNames_ == nullptr
        && return this->clusterId_ == nullptr && return this->componentNames_ == nullptr && return this->componentStates_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr
        && return this->regionId_ == nullptr; };
    // applicationNames Field Functions 
    bool hasApplicationNames() const { return this->applicationNames_ != nullptr;};
    void deleteApplicationNames() { this->applicationNames_ = nullptr;};
    inline const vector<string> & applicationNames() const { DARABONBA_PTR_GET_CONST(applicationNames_, vector<string>) };
    inline vector<string> applicationNames() { DARABONBA_PTR_GET(applicationNames_, vector<string>) };
    inline ListComponentsRequest& setApplicationNames(const vector<string> & applicationNames) { DARABONBA_PTR_SET_VALUE(applicationNames_, applicationNames) };
    inline ListComponentsRequest& setApplicationNames(vector<string> && applicationNames) { DARABONBA_PTR_SET_RVALUE(applicationNames_, applicationNames) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListComponentsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // componentNames Field Functions 
    bool hasComponentNames() const { return this->componentNames_ != nullptr;};
    void deleteComponentNames() { this->componentNames_ = nullptr;};
    inline const vector<string> & componentNames() const { DARABONBA_PTR_GET_CONST(componentNames_, vector<string>) };
    inline vector<string> componentNames() { DARABONBA_PTR_GET(componentNames_, vector<string>) };
    inline ListComponentsRequest& setComponentNames(const vector<string> & componentNames) { DARABONBA_PTR_SET_VALUE(componentNames_, componentNames) };
    inline ListComponentsRequest& setComponentNames(vector<string> && componentNames) { DARABONBA_PTR_SET_RVALUE(componentNames_, componentNames) };


    // componentStates Field Functions 
    bool hasComponentStates() const { return this->componentStates_ != nullptr;};
    void deleteComponentStates() { this->componentStates_ = nullptr;};
    inline const vector<string> & componentStates() const { DARABONBA_PTR_GET_CONST(componentStates_, vector<string>) };
    inline vector<string> componentStates() { DARABONBA_PTR_GET(componentStates_, vector<string>) };
    inline ListComponentsRequest& setComponentStates(const vector<string> & componentStates) { DARABONBA_PTR_SET_VALUE(componentStates_, componentStates) };
    inline ListComponentsRequest& setComponentStates(vector<string> && componentStates) { DARABONBA_PTR_SET_RVALUE(componentStates_, componentStates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComponentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComponentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListComponentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application name.
    std::shared_ptr<vector<string>> applicationNames_ = nullptr;
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The list of component names.
    std::shared_ptr<vector<string>> componentNames_ = nullptr;
    // The list of component status.
    std::shared_ptr<vector<string>> componentStates_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [ListRegions](url) view.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
