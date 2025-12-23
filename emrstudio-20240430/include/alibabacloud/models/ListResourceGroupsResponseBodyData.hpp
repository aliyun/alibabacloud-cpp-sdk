// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListResourceGroupsResponseBodyDataAssociatedClusterTemplates.hpp>
#include <alibabacloud/models/ListResourceGroupsResponseBodyDataAssociatedClusters.hpp>
#include <alibabacloud/models/ListResourceGroupsResponseBodyDataAssociatedWorkspaces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListResourceGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(associatedClusterTemplates, associatedClusterTemplates_);
      DARABONBA_PTR_TO_JSON(associatedClusters, associatedClusters_);
      DARABONBA_PTR_TO_JSON(associatedWorkspaces, associatedWorkspaces_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(nodeMaxCount, nodeMaxCount_);
      DARABONBA_PTR_TO_JSON(nodeMinCount, nodeMinCount_);
      DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(resourceGroupName, resourceGroupName_);
      DARABONBA_PTR_TO_JSON(resourceGroupType, resourceGroupType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(associatedClusterTemplates, associatedClusterTemplates_);
      DARABONBA_PTR_FROM_JSON(associatedClusters, associatedClusters_);
      DARABONBA_PTR_FROM_JSON(associatedWorkspaces, associatedWorkspaces_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(nodeMaxCount, nodeMaxCount_);
      DARABONBA_PTR_FROM_JSON(nodeMinCount, nodeMinCount_);
      DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(resourceGroupName, resourceGroupName_);
      DARABONBA_PTR_FROM_JSON(resourceGroupType, resourceGroupType_);
    };
    ListResourceGroupsResponseBodyData() = default ;
    ListResourceGroupsResponseBodyData(const ListResourceGroupsResponseBodyData &) = default ;
    ListResourceGroupsResponseBodyData(ListResourceGroupsResponseBodyData &&) = default ;
    ListResourceGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyData() = default ;
    ListResourceGroupsResponseBodyData& operator=(const ListResourceGroupsResponseBodyData &) = default ;
    ListResourceGroupsResponseBodyData& operator=(ListResourceGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->associatedClusterTemplates_ == nullptr
        && return this->associatedClusters_ == nullptr && return this->associatedWorkspaces_ == nullptr && return this->createTime_ == nullptr && return this->nodeMaxCount_ == nullptr && return this->nodeMinCount_ == nullptr
        && return this->nodeType_ == nullptr && return this->paymentType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceGroupName_ == nullptr && return this->resourceGroupType_ == nullptr; };
    // associatedClusterTemplates Field Functions 
    bool hasAssociatedClusterTemplates() const { return this->associatedClusterTemplates_ != nullptr;};
    void deleteAssociatedClusterTemplates() { this->associatedClusterTemplates_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates> & associatedClusterTemplates() const { DARABONBA_PTR_GET_CONST(associatedClusterTemplates_, vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates>) };
    inline vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates> associatedClusterTemplates() { DARABONBA_PTR_GET(associatedClusterTemplates_, vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates>) };
    inline ListResourceGroupsResponseBodyData& setAssociatedClusterTemplates(const vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates> & associatedClusterTemplates) { DARABONBA_PTR_SET_VALUE(associatedClusterTemplates_, associatedClusterTemplates) };
    inline ListResourceGroupsResponseBodyData& setAssociatedClusterTemplates(vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates> && associatedClusterTemplates) { DARABONBA_PTR_SET_RVALUE(associatedClusterTemplates_, associatedClusterTemplates) };


    // associatedClusters Field Functions 
    bool hasAssociatedClusters() const { return this->associatedClusters_ != nullptr;};
    void deleteAssociatedClusters() { this->associatedClusters_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters> & associatedClusters() const { DARABONBA_PTR_GET_CONST(associatedClusters_, vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters>) };
    inline vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters> associatedClusters() { DARABONBA_PTR_GET(associatedClusters_, vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters>) };
    inline ListResourceGroupsResponseBodyData& setAssociatedClusters(const vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters> & associatedClusters) { DARABONBA_PTR_SET_VALUE(associatedClusters_, associatedClusters) };
    inline ListResourceGroupsResponseBodyData& setAssociatedClusters(vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters> && associatedClusters) { DARABONBA_PTR_SET_RVALUE(associatedClusters_, associatedClusters) };


    // associatedWorkspaces Field Functions 
    bool hasAssociatedWorkspaces() const { return this->associatedWorkspaces_ != nullptr;};
    void deleteAssociatedWorkspaces() { this->associatedWorkspaces_ = nullptr;};
    inline const vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces> & associatedWorkspaces() const { DARABONBA_PTR_GET_CONST(associatedWorkspaces_, vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces>) };
    inline vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces> associatedWorkspaces() { DARABONBA_PTR_GET(associatedWorkspaces_, vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces>) };
    inline ListResourceGroupsResponseBodyData& setAssociatedWorkspaces(const vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces> & associatedWorkspaces) { DARABONBA_PTR_SET_VALUE(associatedWorkspaces_, associatedWorkspaces) };
    inline ListResourceGroupsResponseBodyData& setAssociatedWorkspaces(vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces> && associatedWorkspaces) { DARABONBA_PTR_SET_RVALUE(associatedWorkspaces_, associatedWorkspaces) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceGroupsResponseBodyData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // nodeMaxCount Field Functions 
    bool hasNodeMaxCount() const { return this->nodeMaxCount_ != nullptr;};
    void deleteNodeMaxCount() { this->nodeMaxCount_ = nullptr;};
    inline int32_t nodeMaxCount() const { DARABONBA_PTR_GET_DEFAULT(nodeMaxCount_, 0) };
    inline ListResourceGroupsResponseBodyData& setNodeMaxCount(int32_t nodeMaxCount) { DARABONBA_PTR_SET_VALUE(nodeMaxCount_, nodeMaxCount) };


    // nodeMinCount Field Functions 
    bool hasNodeMinCount() const { return this->nodeMinCount_ != nullptr;};
    void deleteNodeMinCount() { this->nodeMinCount_ = nullptr;};
    inline int32_t nodeMinCount() const { DARABONBA_PTR_GET_DEFAULT(nodeMinCount_, 0) };
    inline ListResourceGroupsResponseBodyData& setNodeMinCount(int32_t nodeMinCount) { DARABONBA_PTR_SET_VALUE(nodeMinCount_, nodeMinCount) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string nodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline ListResourceGroupsResponseBodyData& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListResourceGroupsResponseBodyData& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListResourceGroupsResponseBodyData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceGroupName Field Functions 
    bool hasResourceGroupName() const { return this->resourceGroupName_ != nullptr;};
    void deleteResourceGroupName() { this->resourceGroupName_ = nullptr;};
    inline string resourceGroupName() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupName_, "") };
    inline ListResourceGroupsResponseBodyData& setResourceGroupName(string resourceGroupName) { DARABONBA_PTR_SET_VALUE(resourceGroupName_, resourceGroupName) };


    // resourceGroupType Field Functions 
    bool hasResourceGroupType() const { return this->resourceGroupType_ != nullptr;};
    void deleteResourceGroupType() { this->resourceGroupType_ = nullptr;};
    inline string resourceGroupType() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupType_, "") };
    inline ListResourceGroupsResponseBodyData& setResourceGroupType(string resourceGroupType) { DARABONBA_PTR_SET_VALUE(resourceGroupType_, resourceGroupType) };


  protected:
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusterTemplates>> associatedClusterTemplates_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyDataAssociatedClusters>> associatedClusters_ = nullptr;
    std::shared_ptr<vector<Models::ListResourceGroupsResponseBodyDataAssociatedWorkspaces>> associatedWorkspaces_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> nodeMaxCount_ = nullptr;
    std::shared_ptr<int32_t> nodeMinCount_ = nullptr;
    std::shared_ptr<string> nodeType_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceGroupName_ = nullptr;
    std::shared_ptr<string> resourceGroupType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
