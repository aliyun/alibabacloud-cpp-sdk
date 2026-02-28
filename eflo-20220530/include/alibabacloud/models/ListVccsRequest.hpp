// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(ExStatus, exStatus_);
      DARABONBA_PTR_TO_JSON(FilterErId, filterErId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VccId, vccId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(ExStatus, exStatus_);
      DARABONBA_PTR_FROM_JSON(FilterErId, filterErId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VccId, vccId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    ListVccsRequest() = default ;
    ListVccsRequest(const ListVccsRequest &) = default ;
    ListVccsRequest(ListVccsRequest &&) = default ;
    ListVccsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccsRequest() = default ;
    ListVccsRequest& operator=(const ListVccsRequest &) = default ;
    ListVccsRequest& operator=(ListVccsRequest &&) = default ;
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
      // The tag key of the VPN attachment.
      // 
      // You cannot specify an empty string as a tag key. It can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      // 
      // You can specify at most 20 tag keys in each call.
      shared_ptr<string> key_ {};
      // The tag value of the VPN connection.
      // 
      // The tag value can be empty or a string of up to 128 characters. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
      // 
      // Each key-value pair must be unique. You can specify values for at most 20 tag keys in each call.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->cenId_ == nullptr && this->enablePage_ == nullptr && this->exStatus_ == nullptr && this->filterErId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr
        && this->vccId_ == nullptr && this->vpcId_ == nullptr && this->vpdId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ListVccsRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListVccsRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListVccsRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // exStatus Field Functions 
    bool hasExStatus() const { return this->exStatus_ != nullptr;};
    void deleteExStatus() { this->exStatus_ = nullptr;};
    inline string getExStatus() const { DARABONBA_PTR_GET_DEFAULT(exStatus_, "") };
    inline ListVccsRequest& setExStatus(string exStatus) { DARABONBA_PTR_SET_VALUE(exStatus_, exStatus) };


    // filterErId Field Functions 
    bool hasFilterErId() const { return this->filterErId_ != nullptr;};
    void deleteFilterErId() { this->filterErId_ = nullptr;};
    inline string getFilterErId() const { DARABONBA_PTR_GET_DEFAULT(filterErId_, "") };
    inline ListVccsRequest& setFilterErId(string filterErId) { DARABONBA_PTR_SET_VALUE(filterErId_, filterErId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVccsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVccsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVccsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVccsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVccsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListVccsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListVccsRequest::Tag>) };
    inline vector<ListVccsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListVccsRequest::Tag>) };
    inline ListVccsRequest& setTag(const vector<ListVccsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListVccsRequest& setTag(vector<ListVccsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vccId Field Functions 
    bool hasVccId() const { return this->vccId_ != nullptr;};
    void deleteVccId() { this->vccId_ = nullptr;};
    inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
    inline ListVccsRequest& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListVccsRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline ListVccsRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The peak bandwidth of the Lingjun connection instance. Unit: Mbit/s. Valid values: 1000 to 400000
    shared_ptr<int32_t> bandwidth_ {};
    // The ID of the CEN instance; [What is the CEN?](https://help.aliyun.com/document_detail/181681.html)
    // 
    // You can call the [DescribeCens](https://help.aliyun.com/document_detail/468215.htm) to query the information of CEN instances under the current Alibaba Cloud account.
    shared_ptr<string> cenId_ {};
    // Specifies whether to enable paged query. Optional values:
    // 
    // *   **true**: Enable pagination query
    // *   **false**: Pagination query is disabled
    shared_ptr<bool> enablePage_ {};
    // Excludes all data in the specified status. If the status parameter exists, ExStatus does not take effect.
    shared_ptr<string> exStatus_ {};
    // Filter queries by Lingjun HUB instance ID
    shared_ptr<string> filterErId_ {};
    // The page number of the page to return. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    shared_ptr<string> resourceGroupId_ {};
    // The instance status.
    shared_ptr<string> status_ {};
    // The tag information.
    // 
    // You can specify up to 20 tags.
    shared_ptr<vector<ListVccsRequest::Tag>> tag_ {};
    // The ID of the Lingjun connection instance.
    shared_ptr<string> vccId_ {};
    // Virtual Private Cloud IDs; [What is Virtual Private Cloud](https://help.aliyun.com/document_detail/34217.html)
    // 
    // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html#demo-0) operation to query the specified VPC.
    shared_ptr<string> vpcId_ {};
    // Lingjun CIDR block instance ID
    shared_ptr<string> vpdId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
