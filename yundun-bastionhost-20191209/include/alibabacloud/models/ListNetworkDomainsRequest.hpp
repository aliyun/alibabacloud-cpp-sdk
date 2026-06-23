// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListNetworkDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListNetworkDomainsRequest() = default ;
    ListNetworkDomainsRequest(const ListNetworkDomainsRequest &) = default ;
    ListNetworkDomainsRequest(ListNetworkDomainsRequest &&) = default ;
    ListNetworkDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkDomainsRequest() = default ;
    ListNetworkDomainsRequest& operator=(const ListNetworkDomainsRequest &) = default ;
    ListNetworkDomainsRequest& operator=(ListNetworkDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->networkDomainName_ == nullptr && this->networkDomainType_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListNetworkDomainsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainName Field Functions 
    bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
    void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
    inline string getNetworkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
    inline ListNetworkDomainsRequest& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


    // networkDomainType Field Functions 
    bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
    void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
    inline string getNetworkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
    inline ListNetworkDomainsRequest& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListNetworkDomainsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListNetworkDomainsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNetworkDomainsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Bastionhost instance.
    // 
    // > Call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the network domain.
    shared_ptr<string> networkDomainName_ {};
    // The type of the network domain. Valid values:
    // 
    // - **Direct**: direct connection
    // 
    // - **Proxy**: proxy connection
    shared_ptr<string> networkDomainType_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return on each page.<br> The maximum value is 100. The default value is 20. If you do not specify this parameter, 20 entries are returned on each page.<br>
    // 
    // > Do not leave the PageSize value empty.
    shared_ptr<string> pageSize_ {};
    // The region ID of the Bastionhost instance.
    // 
    // > For more information about regions and zones, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
