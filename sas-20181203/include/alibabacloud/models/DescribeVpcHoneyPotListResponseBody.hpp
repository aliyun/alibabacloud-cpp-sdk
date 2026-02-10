// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODY_HPP_
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
  class DescribeVpcHoneyPotListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VpcHoneyPotDTOList, vpcHoneyPotDTOList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VpcHoneyPotDTOList, vpcHoneyPotDTOList_);
    };
    DescribeVpcHoneyPotListResponseBody() = default ;
    DescribeVpcHoneyPotListResponseBody(const DescribeVpcHoneyPotListResponseBody &) = default ;
    DescribeVpcHoneyPotListResponseBody(DescribeVpcHoneyPotListResponseBody &&) = default ;
    DescribeVpcHoneyPotListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotListResponseBody() = default ;
    DescribeVpcHoneyPotListResponseBody& operator=(const DescribeVpcHoneyPotListResponseBody &) = default ;
    DescribeVpcHoneyPotListResponseBody& operator=(DescribeVpcHoneyPotListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VpcHoneyPotDTOList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VpcHoneyPotDTOList& obj) { 
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(HoneyPotEcsInstanceStatus, honeyPotEcsInstanceStatus_);
        DARABONBA_PTR_TO_JSON(HoneyPotEniInstanceId, honeyPotEniInstanceId_);
        DARABONBA_PTR_TO_JSON(HoneyPotExistence, honeyPotExistence_);
        DARABONBA_PTR_TO_JSON(HoneyPotInstanceStatus, honeyPotInstanceStatus_);
        DARABONBA_PTR_TO_JSON(HoneyPotVpcSwitchId, honeyPotVpcSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
        DARABONBA_PTR_TO_JSON(VpcStatus, vpcStatus_);
        DARABONBA_PTR_TO_JSON(VpcSwitchIdList, vpcSwitchIdList_);
      };
      friend void from_json(const Darabonba::Json& j, VpcHoneyPotDTOList& obj) { 
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(HoneyPotEcsInstanceStatus, honeyPotEcsInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(HoneyPotEniInstanceId, honeyPotEniInstanceId_);
        DARABONBA_PTR_FROM_JSON(HoneyPotExistence, honeyPotExistence_);
        DARABONBA_PTR_FROM_JSON(HoneyPotInstanceStatus, honeyPotInstanceStatus_);
        DARABONBA_PTR_FROM_JSON(HoneyPotVpcSwitchId, honeyPotVpcSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
        DARABONBA_PTR_FROM_JSON(VpcStatus, vpcStatus_);
        DARABONBA_PTR_FROM_JSON(VpcSwitchIdList, vpcSwitchIdList_);
      };
      VpcHoneyPotDTOList() = default ;
      VpcHoneyPotDTOList(const VpcHoneyPotDTOList &) = default ;
      VpcHoneyPotDTOList(VpcHoneyPotDTOList &&) = default ;
      VpcHoneyPotDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VpcHoneyPotDTOList() = default ;
      VpcHoneyPotDTOList& operator=(const VpcHoneyPotDTOList &) = default ;
      VpcHoneyPotDTOList& operator=(VpcHoneyPotDTOList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VpcSwitchIdList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VpcSwitchIdList& obj) { 
          DARABONBA_PTR_TO_JSON(VpcSwitchId, vpcSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcSwitchName, vpcSwitchName_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VpcSwitchIdList& obj) { 
          DARABONBA_PTR_FROM_JSON(VpcSwitchId, vpcSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcSwitchName, vpcSwitchName_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VpcSwitchIdList() = default ;
        VpcSwitchIdList(const VpcSwitchIdList &) = default ;
        VpcSwitchIdList(VpcSwitchIdList &&) = default ;
        VpcSwitchIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VpcSwitchIdList() = default ;
        VpcSwitchIdList& operator=(const VpcSwitchIdList &) = default ;
        VpcSwitchIdList& operator=(VpcSwitchIdList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vpcSwitchId_ == nullptr
        && this->vpcSwitchName_ == nullptr && this->zoneId_ == nullptr; };
        // vpcSwitchId Field Functions 
        bool hasVpcSwitchId() const { return this->vpcSwitchId_ != nullptr;};
        void deleteVpcSwitchId() { this->vpcSwitchId_ = nullptr;};
        inline string getVpcSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vpcSwitchId_, "") };
        inline VpcSwitchIdList& setVpcSwitchId(string vpcSwitchId) { DARABONBA_PTR_SET_VALUE(vpcSwitchId_, vpcSwitchId) };


        // vpcSwitchName Field Functions 
        bool hasVpcSwitchName() const { return this->vpcSwitchName_ != nullptr;};
        void deleteVpcSwitchName() { this->vpcSwitchName_ = nullptr;};
        inline string getVpcSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vpcSwitchName_, "") };
        inline VpcSwitchIdList& setVpcSwitchName(string vpcSwitchName) { DARABONBA_PTR_SET_VALUE(vpcSwitchName_, vpcSwitchName) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VpcSwitchIdList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The ID of the vSwitch.
        shared_ptr<string> vpcSwitchId_ {};
        // The name of the vSwitch.
        shared_ptr<string> vpcSwitchName_ {};
        // The zone ID of the vSwitch.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->cidrBlock_ == nullptr
        && this->createTime_ == nullptr && this->honeyPotEcsInstanceStatus_ == nullptr && this->honeyPotEniInstanceId_ == nullptr && this->honeyPotExistence_ == nullptr && this->honeyPotInstanceStatus_ == nullptr
        && this->honeyPotVpcSwitchId_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr && this->vpcRegionId_ == nullptr && this->vpcStatus_ == nullptr
        && this->vpcSwitchIdList_ == nullptr; };
      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline VpcHoneyPotDTOList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline VpcHoneyPotDTOList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // honeyPotEcsInstanceStatus Field Functions 
      bool hasHoneyPotEcsInstanceStatus() const { return this->honeyPotEcsInstanceStatus_ != nullptr;};
      void deleteHoneyPotEcsInstanceStatus() { this->honeyPotEcsInstanceStatus_ = nullptr;};
      inline string getHoneyPotEcsInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(honeyPotEcsInstanceStatus_, "") };
      inline VpcHoneyPotDTOList& setHoneyPotEcsInstanceStatus(string honeyPotEcsInstanceStatus) { DARABONBA_PTR_SET_VALUE(honeyPotEcsInstanceStatus_, honeyPotEcsInstanceStatus) };


      // honeyPotEniInstanceId Field Functions 
      bool hasHoneyPotEniInstanceId() const { return this->honeyPotEniInstanceId_ != nullptr;};
      void deleteHoneyPotEniInstanceId() { this->honeyPotEniInstanceId_ = nullptr;};
      inline string getHoneyPotEniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(honeyPotEniInstanceId_, "") };
      inline VpcHoneyPotDTOList& setHoneyPotEniInstanceId(string honeyPotEniInstanceId) { DARABONBA_PTR_SET_VALUE(honeyPotEniInstanceId_, honeyPotEniInstanceId) };


      // honeyPotExistence Field Functions 
      bool hasHoneyPotExistence() const { return this->honeyPotExistence_ != nullptr;};
      void deleteHoneyPotExistence() { this->honeyPotExistence_ = nullptr;};
      inline bool getHoneyPotExistence() const { DARABONBA_PTR_GET_DEFAULT(honeyPotExistence_, false) };
      inline VpcHoneyPotDTOList& setHoneyPotExistence(bool honeyPotExistence) { DARABONBA_PTR_SET_VALUE(honeyPotExistence_, honeyPotExistence) };


      // honeyPotInstanceStatus Field Functions 
      bool hasHoneyPotInstanceStatus() const { return this->honeyPotInstanceStatus_ != nullptr;};
      void deleteHoneyPotInstanceStatus() { this->honeyPotInstanceStatus_ = nullptr;};
      inline string getHoneyPotInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(honeyPotInstanceStatus_, "") };
      inline VpcHoneyPotDTOList& setHoneyPotInstanceStatus(string honeyPotInstanceStatus) { DARABONBA_PTR_SET_VALUE(honeyPotInstanceStatus_, honeyPotInstanceStatus) };


      // honeyPotVpcSwitchId Field Functions 
      bool hasHoneyPotVpcSwitchId() const { return this->honeyPotVpcSwitchId_ != nullptr;};
      void deleteHoneyPotVpcSwitchId() { this->honeyPotVpcSwitchId_ = nullptr;};
      inline string getHoneyPotVpcSwitchId() const { DARABONBA_PTR_GET_DEFAULT(honeyPotVpcSwitchId_, "") };
      inline VpcHoneyPotDTOList& setHoneyPotVpcSwitchId(string honeyPotVpcSwitchId) { DARABONBA_PTR_SET_VALUE(honeyPotVpcSwitchId_, honeyPotVpcSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline VpcHoneyPotDTOList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline VpcHoneyPotDTOList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      // vpcRegionId Field Functions 
      bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
      void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
      inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
      inline VpcHoneyPotDTOList& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


      // vpcStatus Field Functions 
      bool hasVpcStatus() const { return this->vpcStatus_ != nullptr;};
      void deleteVpcStatus() { this->vpcStatus_ = nullptr;};
      inline string getVpcStatus() const { DARABONBA_PTR_GET_DEFAULT(vpcStatus_, "") };
      inline VpcHoneyPotDTOList& setVpcStatus(string vpcStatus) { DARABONBA_PTR_SET_VALUE(vpcStatus_, vpcStatus) };


      // vpcSwitchIdList Field Functions 
      bool hasVpcSwitchIdList() const { return this->vpcSwitchIdList_ != nullptr;};
      void deleteVpcSwitchIdList() { this->vpcSwitchIdList_ = nullptr;};
      inline const vector<VpcHoneyPotDTOList::VpcSwitchIdList> & getVpcSwitchIdList() const { DARABONBA_PTR_GET_CONST(vpcSwitchIdList_, vector<VpcHoneyPotDTOList::VpcSwitchIdList>) };
      inline vector<VpcHoneyPotDTOList::VpcSwitchIdList> getVpcSwitchIdList() { DARABONBA_PTR_GET(vpcSwitchIdList_, vector<VpcHoneyPotDTOList::VpcSwitchIdList>) };
      inline VpcHoneyPotDTOList& setVpcSwitchIdList(const vector<VpcHoneyPotDTOList::VpcSwitchIdList> & vpcSwitchIdList) { DARABONBA_PTR_SET_VALUE(vpcSwitchIdList_, vpcSwitchIdList) };
      inline VpcHoneyPotDTOList& setVpcSwitchIdList(vector<VpcHoneyPotDTOList::VpcSwitchIdList> && vpcSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vpcSwitchIdList_, vpcSwitchIdList) };


    protected:
      // The CIDR block of the VPC.
      shared_ptr<string> cidrBlock_ {};
      // The time at which the VPC was created. Unit: milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The status of the server on which the honeypot is deployed. Valid values:
      // 
      // *   **Pending**: The server is being created.
      // *   **Running**: The server is running.
      // *   **Starting**: The server is being started.
      // *   **Stopping**: The server is being stopped.
      // *   **Stopped**: The server is stopped.
      shared_ptr<string> honeyPotEcsInstanceStatus_ {};
      // The ID of the elastic network interface (ENI) used by the honeypot in the VPC.
      shared_ptr<string> honeyPotEniInstanceId_ {};
      // Indicates whether the cloud honeypot feature is enabled for the VPC. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> honeyPotExistence_ {};
      // The status of the honeypot. Valid values:
      // 
      // *   **pending**: The honeypot is being created.
      // *   **deleting**: The honeypot is being deleted.
      // *   **off**: The honeypot is disabled.
      // *   **suspending**: The honeypot is suspended.
      // *   **on**: The honeypot is enabled.
      shared_ptr<string> honeyPotInstanceStatus_ {};
      // The ID of the vSwitch to which the ENI used by the honeypot is connected.
      shared_ptr<string> honeyPotVpcSwitchId_ {};
      // The ID of the VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the VPC.
      shared_ptr<string> vpcName_ {};
      // The region ID of the VPC.
      // 
      // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
      shared_ptr<string> vpcRegionId_ {};
      // The status of the VPC. Valid values:
      // 
      // *   **Available**: The VPC is normal and available.
      // *   **Pending**: The VPC is being configured.
      shared_ptr<string> vpcStatus_ {};
      // An array that consists of the vSwitches in the VPC.
      shared_ptr<vector<VpcHoneyPotDTOList::VpcSwitchIdList>> vpcSwitchIdList_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->vpcHoneyPotDTOList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeVpcHoneyPotListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeVpcHoneyPotListResponseBody::PageInfo) };
    inline DescribeVpcHoneyPotListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeVpcHoneyPotListResponseBody::PageInfo) };
    inline DescribeVpcHoneyPotListResponseBody& setPageInfo(const DescribeVpcHoneyPotListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeVpcHoneyPotListResponseBody& setPageInfo(DescribeVpcHoneyPotListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcHoneyPotListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vpcHoneyPotDTOList Field Functions 
    bool hasVpcHoneyPotDTOList() const { return this->vpcHoneyPotDTOList_ != nullptr;};
    void deleteVpcHoneyPotDTOList() { this->vpcHoneyPotDTOList_ = nullptr;};
    inline const vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList> & getVpcHoneyPotDTOList() const { DARABONBA_PTR_GET_CONST(vpcHoneyPotDTOList_, vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList>) };
    inline vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList> getVpcHoneyPotDTOList() { DARABONBA_PTR_GET(vpcHoneyPotDTOList_, vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList>) };
    inline DescribeVpcHoneyPotListResponseBody& setVpcHoneyPotDTOList(const vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList> & vpcHoneyPotDTOList) { DARABONBA_PTR_SET_VALUE(vpcHoneyPotDTOList_, vpcHoneyPotDTOList) };
    inline DescribeVpcHoneyPotListResponseBody& setVpcHoneyPotDTOList(vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList> && vpcHoneyPotDTOList) { DARABONBA_PTR_SET_RVALUE(vpcHoneyPotDTOList_, vpcHoneyPotDTOList) };


  protected:
    // The pagination information.
    shared_ptr<DescribeVpcHoneyPotListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the honeypots.
    shared_ptr<vector<DescribeVpcHoneyPotListResponseBody::VpcHoneyPotDTOList>> vpcHoneyPotDTOList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
