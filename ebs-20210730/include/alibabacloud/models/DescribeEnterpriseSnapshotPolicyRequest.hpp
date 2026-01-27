// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENTERPRISESNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeEnterpriseSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnterpriseSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiskIds, diskIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeEnterpriseSnapshotPolicyRequest() = default ;
    DescribeEnterpriseSnapshotPolicyRequest(const DescribeEnterpriseSnapshotPolicyRequest &) = default ;
    DescribeEnterpriseSnapshotPolicyRequest(DescribeEnterpriseSnapshotPolicyRequest &&) = default ;
    DescribeEnterpriseSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnterpriseSnapshotPolicyRequest() = default ;
    DescribeEnterpriseSnapshotPolicyRequest& operator=(const DescribeEnterpriseSnapshotPolicyRequest &) = default ;
    DescribeEnterpriseSnapshotPolicyRequest& operator=(DescribeEnterpriseSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N of the enterprise-level snapshot policy.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The value of tag N of the enterprise-level snapshot policy.
      // 
      // This parameter is required.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->diskIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->policyIds_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeEnterpriseSnapshotPolicyRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diskIds Field Functions 
    bool hasDiskIds() const { return this->diskIds_ != nullptr;};
    void deleteDiskIds() { this->diskIds_ = nullptr;};
    inline const vector<string> & getDiskIds() const { DARABONBA_PTR_GET_CONST(diskIds_, vector<string>) };
    inline vector<string> getDiskIds() { DARABONBA_PTR_GET(diskIds_, vector<string>) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setDiskIds(const vector<string> & diskIds) { DARABONBA_PTR_SET_VALUE(diskIds_, diskIds) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setDiskIds(vector<string> && diskIds) { DARABONBA_PTR_SET_RVALUE(diskIds_, diskIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeEnterpriseSnapshotPolicyRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & getPolicyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> getPolicyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEnterpriseSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEnterpriseSnapshotPolicyRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeEnterpriseSnapshotPolicyRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeEnterpriseSnapshotPolicyRequest::Tag>) };
    inline vector<DescribeEnterpriseSnapshotPolicyRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeEnterpriseSnapshotPolicyRequest::Tag>) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setTag(const vector<DescribeEnterpriseSnapshotPolicyRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeEnterpriseSnapshotPolicyRequest& setTag(vector<DescribeEnterpriseSnapshotPolicyRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The IDs of disks.
    shared_ptr<vector<string>> diskIds_ {};
    // The maximum number of entries per page.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken. If you specify NextToken, the PageSize and PageNumber request parameters do not take effect, and the TotalCount response parameter is invalid.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The IDs of enterprise-level snapshot policies.
    shared_ptr<vector<string>> policyIds_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The tags of the enterprise-level snapshot policies. Valid values of N: 1 to 20.
    shared_ptr<vector<DescribeEnterpriseSnapshotPolicyRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
