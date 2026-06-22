// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ListClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterStates, clusterStates_);
      DARABONBA_PTR_TO_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PaymentTypes, paymentTypes_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterIds, clusterIds_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterStates, clusterStates_);
      DARABONBA_PTR_FROM_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PaymentTypes, paymentTypes_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListClustersRequest() = default ;
    ListClustersRequest(const ListClustersRequest &) = default ;
    ListClustersRequest(ListClustersRequest &&) = default ;
    ListClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersRequest() = default ;
    ListClustersRequest& operator=(const ListClustersRequest &) = default ;
    ListClustersRequest& operator=(ListClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterIds_ == nullptr
        && this->clusterName_ == nullptr && this->clusterStates_ == nullptr && this->clusterTypes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->paymentTypes_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tags_ == nullptr; };
    // clusterIds Field Functions 
    bool hasClusterIds() const { return this->clusterIds_ != nullptr;};
    void deleteClusterIds() { this->clusterIds_ = nullptr;};
    inline const vector<string> & getClusterIds() const { DARABONBA_PTR_GET_CONST(clusterIds_, vector<string>) };
    inline vector<string> getClusterIds() { DARABONBA_PTR_GET(clusterIds_, vector<string>) };
    inline ListClustersRequest& setClusterIds(const vector<string> & clusterIds) { DARABONBA_PTR_SET_VALUE(clusterIds_, clusterIds) };
    inline ListClustersRequest& setClusterIds(vector<string> && clusterIds) { DARABONBA_PTR_SET_RVALUE(clusterIds_, clusterIds) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListClustersRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterStates Field Functions 
    bool hasClusterStates() const { return this->clusterStates_ != nullptr;};
    void deleteClusterStates() { this->clusterStates_ = nullptr;};
    inline const vector<string> & getClusterStates() const { DARABONBA_PTR_GET_CONST(clusterStates_, vector<string>) };
    inline vector<string> getClusterStates() { DARABONBA_PTR_GET(clusterStates_, vector<string>) };
    inline ListClustersRequest& setClusterStates(const vector<string> & clusterStates) { DARABONBA_PTR_SET_VALUE(clusterStates_, clusterStates) };
    inline ListClustersRequest& setClusterStates(vector<string> && clusterStates) { DARABONBA_PTR_SET_RVALUE(clusterStates_, clusterStates) };


    // clusterTypes Field Functions 
    bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
    void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
    inline const vector<string> & getClusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<string>) };
    inline vector<string> getClusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<string>) };
    inline ListClustersRequest& setClusterTypes(const vector<string> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
    inline ListClustersRequest& setClusterTypes(vector<string> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListClustersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListClustersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // paymentTypes Field Functions 
    bool hasPaymentTypes() const { return this->paymentTypes_ != nullptr;};
    void deletePaymentTypes() { this->paymentTypes_ = nullptr;};
    inline const vector<string> & getPaymentTypes() const { DARABONBA_PTR_GET_CONST(paymentTypes_, vector<string>) };
    inline vector<string> getPaymentTypes() { DARABONBA_PTR_GET(paymentTypes_, vector<string>) };
    inline ListClustersRequest& setPaymentTypes(const vector<string> & paymentTypes) { DARABONBA_PTR_SET_VALUE(paymentTypes_, paymentTypes) };
    inline ListClustersRequest& setPaymentTypes(vector<string> && paymentTypes) { DARABONBA_PTR_SET_RVALUE(paymentTypes_, paymentTypes) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListClustersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListClustersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Tag> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Tag>) };
    inline vector<Tag> getTags() { DARABONBA_PTR_GET(tags_, vector<Tag>) };
    inline ListClustersRequest& setTags(const vector<Tag> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListClustersRequest& setTags(vector<Tag> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // A list of cluster IDs. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> clusterIds_ {};
    // The name of the cluster.
    shared_ptr<string> clusterName_ {};
    // An array of cluster states. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> clusterStates_ {};
    // A list of cluster types. The number of array elements N can range from 1 to 100.
    shared_ptr<vector<string>> clusterTypes_ {};
    // The maximum number of entries to return on each page. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token that specifies the position from which to start the query. If you leave this parameter empty, the query starts from the beginning.
    shared_ptr<string> nextToken_ {};
    // The billing methods. The number of array elements N can be 1 or 2.
    shared_ptr<vector<string>> paymentTypes_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // A list of tags. The number of array elements N can range from 1 to 20.
    shared_ptr<vector<Tag>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
