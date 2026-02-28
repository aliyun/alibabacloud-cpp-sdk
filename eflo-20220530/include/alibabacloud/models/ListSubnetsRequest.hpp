// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBNETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBNETSREQUEST_HPP_
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
  class ListSubnetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubnetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubnetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListSubnetsRequest() = default ;
    ListSubnetsRequest(const ListSubnetsRequest &) = default ;
    ListSubnetsRequest(ListSubnetsRequest &&) = default ;
    ListSubnetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubnetsRequest() = default ;
    ListSubnetsRequest& operator=(const ListSubnetsRequest &) = default ;
    ListSubnetsRequest& operator=(ListSubnetsRequest &&) = default ;
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

    virtual bool empty() const override { return this->enablePage_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr
        && this->subnetId_ == nullptr && this->subnetName_ == nullptr && this->tag_ == nullptr && this->type_ == nullptr && this->vpdId_ == nullptr
        && this->zoneId_ == nullptr; };
    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListSubnetsRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListSubnetsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSubnetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListSubnetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListSubnetsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListSubnetsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline ListSubnetsRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // subnetName Field Functions 
    bool hasSubnetName() const { return this->subnetName_ != nullptr;};
    void deleteSubnetName() { this->subnetName_ = nullptr;};
    inline string getSubnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
    inline ListSubnetsRequest& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListSubnetsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListSubnetsRequest::Tag>) };
    inline vector<ListSubnetsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListSubnetsRequest::Tag>) };
    inline ListSubnetsRequest& setTag(const vector<ListSubnetsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListSubnetsRequest& setTag(vector<ListSubnetsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListSubnetsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline ListSubnetsRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListSubnetsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to query by page. Optional values:
    // 
    // *   **true**: Enable pagination query
    // *   **false**: Pagination query is disabled
    shared_ptr<bool> enablePage_ {};
    // The number of the page to return. The value must be greater than 0. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the disk.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    shared_ptr<string> resourceGroupId_ {};
    // The status of the CLB instance. Valid values:
    // 
    // *   **Available**: Normal
    // *   **Not Available**: Unavailable
    // *   **Executing**: Executing
    // *   **Deleting**: The node is being deleted.
    shared_ptr<string> status_ {};
    // Lingjun subnet instance ID
    shared_ptr<string> subnetId_ {};
    // Lingjun subnet instance name
    shared_ptr<string> subnetName_ {};
    // The tag information.
    // 
    // You can specify up to 20 tags.
    shared_ptr<vector<ListSubnetsRequest::Tag>> tag_ {};
    // Lingjun Subnet Usage Type; optional; optional. Valid values:
    // 
    // *   **If you do not set this field for a common type**
    // *   **OOB** :OOB type
    // *   **LB**: LB type
    shared_ptr<string> type_ {};
    // The ID of the Lingjun CIDR block.
    shared_ptr<string> vpdId_ {};
    // The zone ID of the disk.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
