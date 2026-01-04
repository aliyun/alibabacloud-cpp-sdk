// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALPHYSICALCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVirtualPhysicalConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualPhysicalConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IsConfirmed, isConfirmed_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionAliUids, virtualPhysicalConnectionAliUids_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionBusinessStatus, virtualPhysicalConnectionBusinessStatus_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionIds, virtualPhysicalConnectionIds_);
      DARABONBA_PTR_TO_JSON(VirtualPhysicalConnectionStatuses, virtualPhysicalConnectionStatuses_);
      DARABONBA_PTR_TO_JSON(VlanIds, vlanIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualPhysicalConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IsConfirmed, isConfirmed_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PhysicalConnectionId, physicalConnectionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionAliUids, virtualPhysicalConnectionAliUids_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionBusinessStatus, virtualPhysicalConnectionBusinessStatus_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionIds, virtualPhysicalConnectionIds_);
      DARABONBA_PTR_FROM_JSON(VirtualPhysicalConnectionStatuses, virtualPhysicalConnectionStatuses_);
      DARABONBA_PTR_FROM_JSON(VlanIds, vlanIds_);
    };
    ListVirtualPhysicalConnectionsRequest() = default ;
    ListVirtualPhysicalConnectionsRequest(const ListVirtualPhysicalConnectionsRequest &) = default ;
    ListVirtualPhysicalConnectionsRequest(ListVirtualPhysicalConnectionsRequest &&) = default ;
    ListVirtualPhysicalConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualPhysicalConnectionsRequest() = default ;
    ListVirtualPhysicalConnectionsRequest& operator=(const ListVirtualPhysicalConnectionsRequest &) = default ;
    ListVirtualPhysicalConnectionsRequest& operator=(ListVirtualPhysicalConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
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
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N to add to the resource. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // It can be up to 64 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the resource. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // It can be up to 128 characters in length and can contain digits, periods (.), underscores (_), and hyphens (-). It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->isConfirmed_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->physicalConnectionId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tags_ == nullptr && this->virtualPhysicalConnectionAliUids_ == nullptr && this->virtualPhysicalConnectionBusinessStatus_ == nullptr && this->virtualPhysicalConnectionIds_ == nullptr && this->virtualPhysicalConnectionStatuses_ == nullptr
        && this->vlanIds_ == nullptr; };
    // isConfirmed Field Functions 
    bool hasIsConfirmed() const { return this->isConfirmed_ != nullptr;};
    void deleteIsConfirmed() { this->isConfirmed_ = nullptr;};
    inline bool getIsConfirmed() const { DARABONBA_PTR_GET_DEFAULT(isConfirmed_, false) };
    inline ListVirtualPhysicalConnectionsRequest& setIsConfirmed(bool isConfirmed) { DARABONBA_PTR_SET_VALUE(isConfirmed_, isConfirmed) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVirtualPhysicalConnectionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // physicalConnectionId Field Functions 
    bool hasPhysicalConnectionId() const { return this->physicalConnectionId_ != nullptr;};
    void deletePhysicalConnectionId() { this->physicalConnectionId_ = nullptr;};
    inline string getPhysicalConnectionId() const { DARABONBA_PTR_GET_DEFAULT(physicalConnectionId_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setPhysicalConnectionId(string physicalConnectionId) { DARABONBA_PTR_SET_VALUE(physicalConnectionId_, physicalConnectionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListVirtualPhysicalConnectionsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListVirtualPhysicalConnectionsRequest::Tags>) };
    inline vector<ListVirtualPhysicalConnectionsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListVirtualPhysicalConnectionsRequest::Tags>) };
    inline ListVirtualPhysicalConnectionsRequest& setTags(const vector<ListVirtualPhysicalConnectionsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVirtualPhysicalConnectionsRequest& setTags(vector<ListVirtualPhysicalConnectionsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // virtualPhysicalConnectionAliUids Field Functions 
    bool hasVirtualPhysicalConnectionAliUids() const { return this->virtualPhysicalConnectionAliUids_ != nullptr;};
    void deleteVirtualPhysicalConnectionAliUids() { this->virtualPhysicalConnectionAliUids_ = nullptr;};
    inline const vector<string> & getVirtualPhysicalConnectionAliUids() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnectionAliUids_, vector<string>) };
    inline vector<string> getVirtualPhysicalConnectionAliUids() { DARABONBA_PTR_GET(virtualPhysicalConnectionAliUids_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionAliUids(const vector<string> & virtualPhysicalConnectionAliUids) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionAliUids_, virtualPhysicalConnectionAliUids) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionAliUids(vector<string> && virtualPhysicalConnectionAliUids) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnectionAliUids_, virtualPhysicalConnectionAliUids) };


    // virtualPhysicalConnectionBusinessStatus Field Functions 
    bool hasVirtualPhysicalConnectionBusinessStatus() const { return this->virtualPhysicalConnectionBusinessStatus_ != nullptr;};
    void deleteVirtualPhysicalConnectionBusinessStatus() { this->virtualPhysicalConnectionBusinessStatus_ = nullptr;};
    inline string getVirtualPhysicalConnectionBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(virtualPhysicalConnectionBusinessStatus_, "") };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionBusinessStatus(string virtualPhysicalConnectionBusinessStatus) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionBusinessStatus_, virtualPhysicalConnectionBusinessStatus) };


    // virtualPhysicalConnectionIds Field Functions 
    bool hasVirtualPhysicalConnectionIds() const { return this->virtualPhysicalConnectionIds_ != nullptr;};
    void deleteVirtualPhysicalConnectionIds() { this->virtualPhysicalConnectionIds_ = nullptr;};
    inline const vector<string> & getVirtualPhysicalConnectionIds() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnectionIds_, vector<string>) };
    inline vector<string> getVirtualPhysicalConnectionIds() { DARABONBA_PTR_GET(virtualPhysicalConnectionIds_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionIds(const vector<string> & virtualPhysicalConnectionIds) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionIds_, virtualPhysicalConnectionIds) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionIds(vector<string> && virtualPhysicalConnectionIds) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnectionIds_, virtualPhysicalConnectionIds) };


    // virtualPhysicalConnectionStatuses Field Functions 
    bool hasVirtualPhysicalConnectionStatuses() const { return this->virtualPhysicalConnectionStatuses_ != nullptr;};
    void deleteVirtualPhysicalConnectionStatuses() { this->virtualPhysicalConnectionStatuses_ = nullptr;};
    inline const vector<string> & getVirtualPhysicalConnectionStatuses() const { DARABONBA_PTR_GET_CONST(virtualPhysicalConnectionStatuses_, vector<string>) };
    inline vector<string> getVirtualPhysicalConnectionStatuses() { DARABONBA_PTR_GET(virtualPhysicalConnectionStatuses_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionStatuses(const vector<string> & virtualPhysicalConnectionStatuses) { DARABONBA_PTR_SET_VALUE(virtualPhysicalConnectionStatuses_, virtualPhysicalConnectionStatuses) };
    inline ListVirtualPhysicalConnectionsRequest& setVirtualPhysicalConnectionStatuses(vector<string> && virtualPhysicalConnectionStatuses) { DARABONBA_PTR_SET_RVALUE(virtualPhysicalConnectionStatuses_, virtualPhysicalConnectionStatuses) };


    // vlanIds Field Functions 
    bool hasVlanIds() const { return this->vlanIds_ != nullptr;};
    void deleteVlanIds() { this->vlanIds_ = nullptr;};
    inline const vector<string> & getVlanIds() const { DARABONBA_PTR_GET_CONST(vlanIds_, vector<string>) };
    inline vector<string> getVlanIds() { DARABONBA_PTR_GET(vlanIds_, vector<string>) };
    inline ListVirtualPhysicalConnectionsRequest& setVlanIds(const vector<string> & vlanIds) { DARABONBA_PTR_SET_VALUE(vlanIds_, vlanIds) };
    inline ListVirtualPhysicalConnectionsRequest& setVlanIds(vector<string> && vlanIds) { DARABONBA_PTR_SET_RVALUE(vlanIds_, vlanIds) };


  protected:
    // Specifies whether the hosted connection is accepted by the tenant. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> isConfirmed_ {};
    // The number of entries per page. Valid values: **1** to **100**. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The ID of the Express Connect circuit over which the hosted connections are created.
    // 
    // Express Connect circuits in this topic refer to Express Connect circuits over which hosted connections are created.
    shared_ptr<string> physicalConnectionId_ {};
    // The region ID of the hosted connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the hosted connection belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The tag list.
    shared_ptr<vector<ListVirtualPhysicalConnectionsRequest::Tags>> tags_ {};
    // The information about the Alibaba Cloud account that owns the hosted connection.
    shared_ptr<vector<string>> virtualPhysicalConnectionAliUids_ {};
    // The business status of the hosted connection. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    // *   **SecurityLocked**
    shared_ptr<string> virtualPhysicalConnectionBusinessStatus_ {};
    // The information about the hosted connection.
    shared_ptr<vector<string>> virtualPhysicalConnectionIds_ {};
    // The business status of the hosted connection.
    shared_ptr<vector<string>> virtualPhysicalConnectionStatuses_ {};
    // The VLAN ID of the hosted connection.
    shared_ptr<vector<string>> vlanIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
