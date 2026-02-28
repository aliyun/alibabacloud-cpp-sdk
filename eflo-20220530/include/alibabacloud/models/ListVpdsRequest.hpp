// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVPDSREQUEST_HPP_
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
  class ListVpdsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpdsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(FilterErId, filterErId_);
      DARABONBA_PTR_TO_JSON(ForSelect, forSelect_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
      DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
      DARABONBA_PTR_TO_JSON(WithDependence, withDependence_);
      DARABONBA_PTR_TO_JSON(WithoutVcc, withoutVcc_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpdsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(FilterErId, filterErId_);
      DARABONBA_PTR_FROM_JSON(ForSelect, forSelect_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
      DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
      DARABONBA_PTR_FROM_JSON(WithDependence, withDependence_);
      DARABONBA_PTR_FROM_JSON(WithoutVcc, withoutVcc_);
    };
    ListVpdsRequest() = default ;
    ListVpdsRequest(const ListVpdsRequest &) = default ;
    ListVpdsRequest(ListVpdsRequest &&) = default ;
    ListVpdsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpdsRequest() = default ;
    ListVpdsRequest& operator=(const ListVpdsRequest &) = default ;
    ListVpdsRequest& operator=(ListVpdsRequest &&) = default ;
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
        && this->filterErId_ == nullptr && this->forSelect_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->vpdId_ == nullptr && this->vpdName_ == nullptr
        && this->withDependence_ == nullptr && this->withoutVcc_ == nullptr; };
    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListVpdsRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // filterErId Field Functions 
    bool hasFilterErId() const { return this->filterErId_ != nullptr;};
    void deleteFilterErId() { this->filterErId_ = nullptr;};
    inline string getFilterErId() const { DARABONBA_PTR_GET_DEFAULT(filterErId_, "") };
    inline ListVpdsRequest& setFilterErId(string filterErId) { DARABONBA_PTR_SET_VALUE(filterErId_, filterErId) };


    // forSelect Field Functions 
    bool hasForSelect() const { return this->forSelect_ != nullptr;};
    void deleteForSelect() { this->forSelect_ = nullptr;};
    inline bool getForSelect() const { DARABONBA_PTR_GET_DEFAULT(forSelect_, false) };
    inline ListVpdsRequest& setForSelect(bool forSelect) { DARABONBA_PTR_SET_VALUE(forSelect_, forSelect) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVpdsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVpdsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpdsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpdsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVpdsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListVpdsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListVpdsRequest::Tag>) };
    inline vector<ListVpdsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListVpdsRequest::Tag>) };
    inline ListVpdsRequest& setTag(const vector<ListVpdsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListVpdsRequest& setTag(vector<ListVpdsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline ListVpdsRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


    // vpdName Field Functions 
    bool hasVpdName() const { return this->vpdName_ != nullptr;};
    void deleteVpdName() { this->vpdName_ = nullptr;};
    inline string getVpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
    inline ListVpdsRequest& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


    // withDependence Field Functions 
    bool hasWithDependence() const { return this->withDependence_ != nullptr;};
    void deleteWithDependence() { this->withDependence_ = nullptr;};
    inline bool getWithDependence() const { DARABONBA_PTR_GET_DEFAULT(withDependence_, false) };
    inline ListVpdsRequest& setWithDependence(bool withDependence) { DARABONBA_PTR_SET_VALUE(withDependence_, withDependence) };


    // withoutVcc Field Functions 
    bool hasWithoutVcc() const { return this->withoutVcc_ != nullptr;};
    void deleteWithoutVcc() { this->withoutVcc_ = nullptr;};
    inline bool getWithoutVcc() const { DARABONBA_PTR_GET_DEFAULT(withoutVcc_, false) };
    inline ListVpdsRequest& setWithoutVcc(bool withoutVcc) { DARABONBA_PTR_SET_VALUE(withoutVcc_, withoutVcc) };


  protected:
    // Specifies whether to enable paged query.
    shared_ptr<bool> enablePage_ {};
    // Queries the network segments of Lingjun that are not bound to a specified Lingjun HUB.
    shared_ptr<string> filterErId_ {};
    // If you select a drop-down list, only the basic information (including the instance ID and instance name) is returned. Possible values:
    // 
    // *   **true**: Select Query Use from the drop-down list.
    // *   **false**: Normal queries are used.
    shared_ptr<bool> forSelect_ {};
    // The page number of the page to return. Start value: 1 Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    // 
    // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
    shared_ptr<string> resourceGroupId_ {};
    // The status of the CLB instance. Valid values:
    // 
    // *   **Available**: Normal.
    // *   **Not Available**: Not available.
    // *   **Executing**: The task is being executed.
    // *   **Deleting**: The account is being deleted
    shared_ptr<string> status_ {};
    // The tag information.
    // 
    // You can specify up to 20 tags.
    shared_ptr<vector<ListVpdsRequest::Tag>> tag_ {};
    // The ID of the VPD instance.
    shared_ptr<string> vpdId_ {};
    // The name of the VPD instance.
    shared_ptr<string> vpdName_ {};
    // Specifies whether to include the dependent resource information. We recommend that you do not query the dependent resource information when you query by page. You can query the dependent resource information separately when you delete it. Possible values:
    // 
    // *   **true**: with dependency information.
    // *   **false**: does not include dependency information.
    shared_ptr<bool> withDependence_ {};
    // Queries the information about a Lingjun CIDR block that is not bound to a Lingjun connection. Possible values:
    // 
    // *   **true**: filters out VPDs that have been bound to VCC
    // *   **false**: does not filter VPD that has been bound to VCC
    shared_ptr<bool> withoutVcc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
