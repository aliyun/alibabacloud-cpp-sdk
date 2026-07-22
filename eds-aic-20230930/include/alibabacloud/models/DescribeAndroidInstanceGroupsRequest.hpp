// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_TO_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(SortKey, sortKey_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_FROM_JSON(InstanceVersion, instanceVersion_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(SortKey, sortKey_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeAndroidInstanceGroupsRequest() = default ;
    DescribeAndroidInstanceGroupsRequest(const DescribeAndroidInstanceGroupsRequest &) = default ;
    DescribeAndroidInstanceGroupsRequest(DescribeAndroidInstanceGroupsRequest &&) = default ;
    DescribeAndroidInstanceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsRequest() = default ;
    DescribeAndroidInstanceGroupsRequest& operator=(const DescribeAndroidInstanceGroupsRequest &) = default ;
    DescribeAndroidInstanceGroupsRequest& operator=(DescribeAndroidInstanceGroupsRequest &&) = default ;
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
      // The tag key. You can specify 1 to 20 tag keys.
      // >Notice: The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value.
      // >Notice: The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:` and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bizRegionId_ == nullptr
        && this->chargeType_ == nullptr && this->instanceGroupIds_ == nullptr && this->instanceGroupName_ == nullptr && this->instanceVersion_ == nullptr && this->keyPairId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->policyGroupId_ == nullptr && this->saleMode_ == nullptr && this->sortKey_ == nullptr
        && this->sortType_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & getInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> getInstanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string getInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // instanceVersion Field Functions 
    bool hasInstanceVersion() const { return this->instanceVersion_ != nullptr;};
    void deleteInstanceVersion() { this->instanceVersion_ = nullptr;};
    inline string getInstanceVersion() const { DARABONBA_PTR_GET_DEFAULT(instanceVersion_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceVersion(string instanceVersion) { DARABONBA_PTR_SET_VALUE(instanceVersion_, instanceVersion) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAndroidInstanceGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string getPolicyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // sortKey Field Functions 
    bool hasSortKey() const { return this->sortKey_ != nullptr;};
    void deleteSortKey() { this->sortKey_ = nullptr;};
    inline string getSortKey() const { DARABONBA_PTR_GET_DEFAULT(sortKey_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setSortKey(string sortKey) { DARABONBA_PTR_SET_VALUE(sortKey_, sortKey) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline string getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setSortType(string sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeAndroidInstanceGroupsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeAndroidInstanceGroupsRequest::Tags>) };
    inline vector<DescribeAndroidInstanceGroupsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DescribeAndroidInstanceGroupsRequest::Tags>) };
    inline DescribeAndroidInstanceGroupsRequest& setTags(const vector<DescribeAndroidInstanceGroupsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAndroidInstanceGroupsRequest& setTags(vector<DescribeAndroidInstanceGroupsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The region ID.
    shared_ptr<string> bizRegionId_ {};
    // The billing type.
    // [_single.params.ChargeType.enum. PrePaid]subscription
    shared_ptr<string> chargeType_ {};
    // The list of instance group IDs.
    shared_ptr<vector<string>> instanceGroupIds_ {};
    // The instance group name. Fuzzy match is supported.
    shared_ptr<string> instanceGroupName_ {};
    shared_ptr<string> instanceVersion_ {};
    // The ID of the key pair.
    shared_ptr<string> keyPairId_ {};
    // The maximum number of entries per page for a paged query. Valid values: 1 to 100. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that indicates the position from which to start reading. An empty value indicates reading from the beginning.
    shared_ptr<string> nextToken_ {};
    // The policy ID.
    shared_ptr<string> policyGroupId_ {};
    // The purchase mode of the cloud phone.
    shared_ptr<string> saleMode_ {};
    shared_ptr<string> sortKey_ {};
    shared_ptr<string> sortType_ {};
    // The instance group status.
    shared_ptr<string> status_ {};
    // The tags of the instance group. You can bind up to 20 tags to each instance.
    shared_ptr<vector<DescribeAndroidInstanceGroupsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
