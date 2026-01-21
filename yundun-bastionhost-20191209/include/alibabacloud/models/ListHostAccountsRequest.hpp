// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostIds, hostIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProtocolName, protocolName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListHostAccountsRequest() = default ;
    ListHostAccountsRequest(const ListHostAccountsRequest &) = default ;
    ListHostAccountsRequest(ListHostAccountsRequest &&) = default ;
    ListHostAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostAccountsRequest() = default ;
    ListHostAccountsRequest& operator=(const ListHostAccountsRequest &) = default ;
    ListHostAccountsRequest& operator=(ListHostAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAccountName_ == nullptr
        && this->hostId_ == nullptr && this->hostIds_ == nullptr && this->instanceId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->protocolName_ == nullptr && this->regionId_ == nullptr; };
    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string getHostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline ListHostAccountsRequest& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ListHostAccountsRequest& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline string getHostIds() const { DARABONBA_PTR_GET_DEFAULT(hostIds_, "") };
    inline ListHostAccountsRequest& setHostIds(string hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostAccountsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListHostAccountsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListHostAccountsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protocolName Field Functions 
    bool hasProtocolName() const { return this->protocolName_ != nullptr;};
    void deleteProtocolName() { this->protocolName_ = nullptr;};
    inline string getProtocolName() const { DARABONBA_PTR_GET_DEFAULT(protocolName_, "") };
    inline ListHostAccountsRequest& setProtocolName(string protocolName) { DARABONBA_PTR_SET_VALUE(protocolName_, protocolName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostAccountsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The name of the host account that you want to query. The name can be up to 128 characters in length. Only exact match is supported.
    shared_ptr<string> hostAccountName_ {};
    // The ID of the specified host whose accounts you want to query.
    // 
    // >  You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query the ID of the host.
    // 
    // This parameter is required.
    shared_ptr<string> hostId_ {};
    shared_ptr<string> hostIds_ {};
    // The ID of the bastion host in which you want to query accounts of the specified host.
    // 
    // >  You can call the DescribeInstances operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Maximum value: 100. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<string> pageSize_ {};
    // The protocol used by the host whose accounts you want to query.
    // 
    // Valid values:
    // 
    // *   SSH
    // *   RDP
    shared_ptr<string> protocolName_ {};
    // The region ID of the bastion host in which you want to query accounts of the specified host.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
