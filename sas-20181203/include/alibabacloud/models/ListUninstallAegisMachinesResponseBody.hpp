// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAEGISMACHINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAEGISMACHINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUninstallAegisMachinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallAegisMachinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(MachineList, machineList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallAegisMachinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(MachineList, machineList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListUninstallAegisMachinesResponseBody() = default ;
    ListUninstallAegisMachinesResponseBody(const ListUninstallAegisMachinesResponseBody &) = default ;
    ListUninstallAegisMachinesResponseBody(ListUninstallAegisMachinesResponseBody &&) = default ;
    ListUninstallAegisMachinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallAegisMachinesResponseBody() = default ;
    ListUninstallAegisMachinesResponseBody& operator=(const ListUninstallAegisMachinesResponseBody &) = default ;
    ListUninstallAegisMachinesResponseBody& operator=(ListUninstallAegisMachinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MachineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(MachineRegion, machineRegion_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
      };
      friend void from_json(const Darabonba::Json& j, MachineList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(MachineRegion, machineRegion_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
      };
      MachineList() = default ;
      MachineList(const MachineList &) = default ;
      MachineList(MachineList &&) = default ;
      MachineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineList() = default ;
      MachineList& operator=(const MachineList &) = default ;
      MachineList& operator=(MachineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->machineRegion_ == nullptr && this->os_ == nullptr
        && this->regionId_ == nullptr && this->uuid_ == nullptr && this->vendor_ == nullptr && this->vendorName_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline MachineList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline MachineList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline MachineList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline MachineList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // machineRegion Field Functions 
      bool hasMachineRegion() const { return this->machineRegion_ != nullptr;};
      void deleteMachineRegion() { this->machineRegion_ = nullptr;};
      inline string getMachineRegion() const { DARABONBA_PTR_GET_DEFAULT(machineRegion_, "") };
      inline MachineList& setMachineRegion(string machineRegion) { DARABONBA_PTR_SET_VALUE(machineRegion_, machineRegion) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline MachineList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MachineList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline MachineList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
      inline MachineList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline MachineList& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    protected:
      // The ID of the server.
      shared_ptr<string> instanceId_ {};
      // The name of the server.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The region in which the server resides.
      shared_ptr<string> machineRegion_ {};
      // The operating system of the server. Valid values:
      // 
      // *   **linux**
      // *   **windows**
      // *   **windows-2003**
      shared_ptr<string> os_ {};
      // The ID of the region in which the server resides.
      shared_ptr<string> regionId_ {};
      // The UUID of the server.
      shared_ptr<string> uuid_ {};
      // The source of the server. Valid values:
      // 
      // *   **0**: an asset provided by Alibaba Cloud
      // *   **1**: a third-party cloud server
      // *   **2**: a server in a data center
      // *   **3**, **4**, **5**, and **7**: other cloud asset
      // *   **8**: a lightweight asset
      shared_ptr<int32_t> vendor_ {};
      // The name of the service provider (SP) for the server.
      // 
      // Valid values:
      // 
      // *   **ALIYUN**: Alibaba Cloud
      // *   **OUT**: a third-party service provider
      // *   **IDC**: a data center
      // *   **TENCENT**: Tencent Cloud
      // *   **HUAWEICLOUD**: Huawei Cloud
      // *   **Microsoft**: Microsoft
      // *   **AWS**: Amazon Web Services (AWS)
      // *   **TRIPARTITE**: a lightweight server
      shared_ptr<string> vendorName_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->machineList_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListUninstallAegisMachinesResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // machineList Field Functions 
    bool hasMachineList() const { return this->machineList_ != nullptr;};
    void deleteMachineList() { this->machineList_ = nullptr;};
    inline const vector<ListUninstallAegisMachinesResponseBody::MachineList> & getMachineList() const { DARABONBA_PTR_GET_CONST(machineList_, vector<ListUninstallAegisMachinesResponseBody::MachineList>) };
    inline vector<ListUninstallAegisMachinesResponseBody::MachineList> getMachineList() { DARABONBA_PTR_GET(machineList_, vector<ListUninstallAegisMachinesResponseBody::MachineList>) };
    inline ListUninstallAegisMachinesResponseBody& setMachineList(const vector<ListUninstallAegisMachinesResponseBody::MachineList> & machineList) { DARABONBA_PTR_SET_VALUE(machineList_, machineList) };
    inline ListUninstallAegisMachinesResponseBody& setMachineList(vector<ListUninstallAegisMachinesResponseBody::MachineList> && machineList) { DARABONBA_PTR_SET_RVALUE(machineList_, machineList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUninstallAegisMachinesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUninstallAegisMachinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUninstallAegisMachinesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // An array that consists of the information about servers.
    shared_ptr<vector<ListUninstallAegisMachinesResponseBody::MachineList>> machineList_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
