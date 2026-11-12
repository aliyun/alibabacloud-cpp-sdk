// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NoResourceId, noResourceId_);
      DARABONBA_PTR_TO_JSON(PropertyKeyList, propertyKeyList_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StateList, stateList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NoResourceId, noResourceId_);
      DARABONBA_PTR_FROM_JSON(PropertyKeyList, propertyKeyList_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StateList, stateList_);
    };
    DescribeInstancesRequest() = default ;
    DescribeInstancesRequest(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest(DescribeInstancesRequest &&) = default ;
    DescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequest() = default ;
    DescribeInstancesRequest& operator=(const DescribeInstancesRequest &) = default ;
    DescribeInstancesRequest& operator=(DescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->noResourceId_ == nullptr && this->propertyKeyList_ == nullptr && this->resourceIds_ == nullptr
        && this->resourceType_ == nullptr && this->stateList_ == nullptr; };
    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // noResourceId Field Functions 
    bool hasNoResourceId() const { return this->noResourceId_ != nullptr;};
    void deleteNoResourceId() { this->noResourceId_ = nullptr;};
    inline bool getNoResourceId() const { DARABONBA_PTR_GET_DEFAULT(noResourceId_, false) };
    inline DescribeInstancesRequest& setNoResourceId(bool noResourceId) { DARABONBA_PTR_SET_VALUE(noResourceId_, noResourceId) };


    // propertyKeyList Field Functions 
    bool hasPropertyKeyList() const { return this->propertyKeyList_ != nullptr;};
    void deletePropertyKeyList() { this->propertyKeyList_ = nullptr;};
    inline const vector<string> & getPropertyKeyList() const { DARABONBA_PTR_GET_CONST(propertyKeyList_, vector<string>) };
    inline vector<string> getPropertyKeyList() { DARABONBA_PTR_GET(propertyKeyList_, vector<string>) };
    inline DescribeInstancesRequest& setPropertyKeyList(const vector<string> & propertyKeyList) { DARABONBA_PTR_SET_VALUE(propertyKeyList_, propertyKeyList) };
    inline DescribeInstancesRequest& setPropertyKeyList(vector<string> && propertyKeyList) { DARABONBA_PTR_SET_RVALUE(propertyKeyList_, propertyKeyList) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeInstancesRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeInstancesRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeInstancesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // stateList Field Functions 
    bool hasStateList() const { return this->stateList_ != nullptr;};
    void deleteStateList() { this->stateList_ = nullptr;};
    inline const vector<string> & getStateList() const { DARABONBA_PTR_GET_CONST(stateList_, vector<string>) };
    inline vector<string> getStateList() { DARABONBA_PTR_GET(stateList_, vector<string>) };
    inline DescribeInstancesRequest& setStateList(const vector<string> & stateList) { DARABONBA_PTR_SET_VALUE(stateList_, stateList) };
    inline DescribeInstancesRequest& setStateList(vector<string> && stateList) { DARABONBA_PTR_SET_RVALUE(stateList_, stateList) };


  protected:
    // The list of sold instance IDs, which is used to specify the instances for this operation.
    shared_ptr<vector<string>> instanceIds_ {};
    // The maximum number of records to return per query.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Leave it empty for the first query. For subsequent queries, pass the NextToken value returned in the previous response as is. Do not construct or decode it yourself.
    shared_ptr<string> nextToken_ {};
    // Specifies whether to query only instances that are not associated with a business resource ID. Valid values:
    // - true: Queries only unassociated instances.
    // - false or empty: Does not filter by this condition.
    shared_ptr<bool> noResourceId_ {};
    // The list of instance property names to be filtered.
    shared_ptr<vector<string>> propertyKeyList_ {};
    // The list of associated business resource IDs.
    shared_ptr<vector<string>> resourceIds_ {};
    // The resource type. For example, CorePackage indicates a core-hour package. It must be consistent with the resource type of the target instance.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The list of instance statuses used for filtering. You can use NORMAL, DELETED, PENDING, and EXPIRED. ARCHIVED indicates the historical archived status.
    shared_ptr<vector<string>> stateList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
