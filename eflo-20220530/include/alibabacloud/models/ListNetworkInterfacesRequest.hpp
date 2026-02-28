// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESREQUEST_HPP_
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
  class ListNetworkInterfacesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkInterfacesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkInterfacesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnablePage, enablePage_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    ListNetworkInterfacesRequest() = default ;
    ListNetworkInterfacesRequest(const ListNetworkInterfacesRequest &) = default ;
    ListNetworkInterfacesRequest(ListNetworkInterfacesRequest &&) = default ;
    ListNetworkInterfacesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkInterfacesRequest() = default ;
    ListNetworkInterfacesRequest& operator=(const ListNetworkInterfacesRequest &) = default ;
    ListNetworkInterfacesRequest& operator=(ListNetworkInterfacesRequest &&) = default ;
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
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->enablePage_ == nullptr
        && this->ip_ == nullptr && this->networkInterfaceId_ == nullptr && this->nodeId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->subnetId_ == nullptr && this->tag_ == nullptr && this->vpdId_ == nullptr; };
    // enablePage Field Functions 
    bool hasEnablePage() const { return this->enablePage_ != nullptr;};
    void deleteEnablePage() { this->enablePage_ = nullptr;};
    inline bool getEnablePage() const { DARABONBA_PTR_GET_DEFAULT(enablePage_, false) };
    inline ListNetworkInterfacesRequest& setEnablePage(bool enablePage) { DARABONBA_PTR_SET_VALUE(enablePage_, enablePage) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListNetworkInterfacesRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListNetworkInterfacesRequest& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListNetworkInterfacesRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNetworkInterfacesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNetworkInterfacesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNetworkInterfacesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListNetworkInterfacesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline ListNetworkInterfacesRequest& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListNetworkInterfacesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListNetworkInterfacesRequest::Tag>) };
    inline vector<ListNetworkInterfacesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListNetworkInterfacesRequest::Tag>) };
    inline ListNetworkInterfacesRequest& setTag(const vector<ListNetworkInterfacesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListNetworkInterfacesRequest& setTag(vector<ListNetworkInterfacesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline ListNetworkInterfacesRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // Specifies whether pagination is required.
    shared_ptr<bool> enablePage_ {};
    // network interface controller the IP address.
    shared_ptr<string> ip_ {};
    // Lingjun network interface controller ID.
    shared_ptr<string> networkInterfaceId_ {};
    // The ID of the machine to which the instance belongs.
    shared_ptr<string> nodeId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The current number of pages.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Resource group instance ID
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the instance to which the Lingjun subnet belongs.
    shared_ptr<string> subnetId_ {};
    // The list of tags
    shared_ptr<vector<ListNetworkInterfacesRequest::Tag>> tag_ {};
    // The ID of the VPD.
    shared_ptr<string> vpdId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
