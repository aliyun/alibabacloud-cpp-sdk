// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOLVERENDPOINTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOLVERENDPOINTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeResolverEndpointsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResolverEndpointsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResolverEndpointsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeResolverEndpointsResponseBody() = default ;
    DescribeResolverEndpointsResponseBody(const DescribeResolverEndpointsResponseBody &) = default ;
    DescribeResolverEndpointsResponseBody(DescribeResolverEndpointsResponseBody &&) = default ;
    DescribeResolverEndpointsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResolverEndpointsResponseBody() = default ;
    DescribeResolverEndpointsResponseBody& operator=(const DescribeResolverEndpointsResponseBody &) = default ;
    DescribeResolverEndpointsResponseBody& operator=(DescribeResolverEndpointsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Endpoints : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Endpoints& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IpConfigs, ipConfigs_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
        DARABONBA_PTR_TO_JSON(VpcRegionName, vpcRegionName_);
      };
      friend void from_json(const Darabonba::Json& j, Endpoints& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IpConfigs, ipConfigs_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
        DARABONBA_PTR_FROM_JSON(VpcRegionName, vpcRegionName_);
      };
      Endpoints() = default ;
      Endpoints(const Endpoints &) = default ;
      Endpoints(Endpoints &&) = default ;
      Endpoints(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Endpoints() = default ;
      Endpoints& operator=(const Endpoints &) = default ;
      Endpoints& operator=(Endpoints &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class IpConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const IpConfigs& obj) { 
          DARABONBA_PTR_TO_JSON(AzId, azId_);
          DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, IpConfigs& obj) { 
          DARABONBA_PTR_FROM_JSON(AzId, azId_);
          DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        IpConfigs() = default ;
        IpConfigs(const IpConfigs &) = default ;
        IpConfigs(IpConfigs &&) = default ;
        IpConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~IpConfigs() = default ;
        IpConfigs& operator=(const IpConfigs &) = default ;
        IpConfigs& operator=(IpConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->azId_ == nullptr
        && this->cidrBlock_ == nullptr && this->ip_ == nullptr && this->vSwitchId_ == nullptr; };
        // azId Field Functions 
        bool hasAzId() const { return this->azId_ != nullptr;};
        void deleteAzId() { this->azId_ = nullptr;};
        inline string getAzId() const { DARABONBA_PTR_GET_DEFAULT(azId_, "") };
        inline IpConfigs& setAzId(string azId) { DARABONBA_PTR_SET_VALUE(azId_, azId) };


        // cidrBlock Field Functions 
        bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
        void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
        inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
        inline IpConfigs& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline IpConfigs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline IpConfigs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The ID of the zone to which the vSwitch belongs.
        shared_ptr<string> azId_ {};
        // The IPv4 CIDR block of the vSwitch.
        shared_ptr<string> cidrBlock_ {};
        // The source IP address of outbound traffic. The IP address must be within the specified CIDR block.
        shared_ptr<string> ip_ {};
        // The vSwitch ID.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->id_ == nullptr && this->ipConfigs_ == nullptr && this->name_ == nullptr && this->securityGroupId_ == nullptr
        && this->status_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr
        && this->vpcRegionId_ == nullptr && this->vpcRegionName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Endpoints& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Endpoints& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Endpoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // ipConfigs Field Functions 
      bool hasIpConfigs() const { return this->ipConfigs_ != nullptr;};
      void deleteIpConfigs() { this->ipConfigs_ = nullptr;};
      inline const vector<Endpoints::IpConfigs> & getIpConfigs() const { DARABONBA_PTR_GET_CONST(ipConfigs_, vector<Endpoints::IpConfigs>) };
      inline vector<Endpoints::IpConfigs> getIpConfigs() { DARABONBA_PTR_GET(ipConfigs_, vector<Endpoints::IpConfigs>) };
      inline Endpoints& setIpConfigs(const vector<Endpoints::IpConfigs> & ipConfigs) { DARABONBA_PTR_SET_VALUE(ipConfigs_, ipConfigs) };
      inline Endpoints& setIpConfigs(vector<Endpoints::IpConfigs> && ipConfigs) { DARABONBA_PTR_SET_RVALUE(ipConfigs_, ipConfigs) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Endpoints& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Endpoints& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Endpoints& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Endpoints& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Endpoints& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Endpoints& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcName Field Functions 
      bool hasVpcName() const { return this->vpcName_ != nullptr;};
      void deleteVpcName() { this->vpcName_ = nullptr;};
      inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
      inline Endpoints& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      // vpcRegionId Field Functions 
      bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
      void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
      inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
      inline Endpoints& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


      // vpcRegionName Field Functions 
      bool hasVpcRegionName() const { return this->vpcRegionName_ != nullptr;};
      void deleteVpcRegionName() { this->vpcRegionName_ = nullptr;};
      inline string getVpcRegionName() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionName_, "") };
      inline Endpoints& setVpcRegionName(string vpcRegionName) { DARABONBA_PTR_SET_VALUE(vpcRegionName_, vpcRegionName) };


    protected:
      // The time when the endpoint was created.
      shared_ptr<string> createTime_ {};
      // The time when the endpoint was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTimestamp_ {};
      // The endpoint ID.
      shared_ptr<string> id_ {};
      // The source IP addresses of outbound traffic.
      shared_ptr<vector<Endpoints::IpConfigs>> ipConfigs_ {};
      // The name of the endpoint.
      shared_ptr<string> name_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The state of the endpoint that you queried. Valid values:
      // 
      // *   SUCCESS: The endpoint works as expected.
      // *   INIT: The endpoint is being created.
      // *   FAILED: The endpoint failed to be created.
      // *   CHANGE_INIT: The endpoint is being modified.
      // *   CHANGE_FAILED: The endpoint failed to be modified.
      // *   EXCEPTION: The endpoint encountered an exception.
      shared_ptr<string> status_ {};
      // The time when the endpoint was updated.
      shared_ptr<string> updateTime_ {};
      // The time when the endpoint was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTimestamp_ {};
      // The ID of the outbound VPC. All outbound Domain Name System (DNS) requests of the resolver are forwarded by this VPC.
      shared_ptr<string> vpcId_ {};
      // The name of the outbound VPC.
      shared_ptr<string> vpcName_ {};
      // The region ID of the outbound VPC.
      shared_ptr<string> vpcRegionId_ {};
      // The name of the region where the VPC resides.
      shared_ptr<string> vpcRegionName_ {};
    };

    virtual bool empty() const override { return this->endpoints_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<DescribeResolverEndpointsResponseBody::Endpoints> & getEndpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<DescribeResolverEndpointsResponseBody::Endpoints>) };
    inline vector<DescribeResolverEndpointsResponseBody::Endpoints> getEndpoints() { DARABONBA_PTR_GET(endpoints_, vector<DescribeResolverEndpointsResponseBody::Endpoints>) };
    inline DescribeResolverEndpointsResponseBody& setEndpoints(const vector<DescribeResolverEndpointsResponseBody::Endpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline DescribeResolverEndpointsResponseBody& setEndpoints(vector<DescribeResolverEndpointsResponseBody::Endpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeResolverEndpointsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeResolverEndpointsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeResolverEndpointsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeResolverEndpointsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeResolverEndpointsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The endpoints.
    shared_ptr<vector<DescribeResolverEndpointsResponseBody::Endpoints>> endpoints_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of endpoints.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
