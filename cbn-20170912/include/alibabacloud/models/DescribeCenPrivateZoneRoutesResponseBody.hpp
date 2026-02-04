// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENPRIVATEZONEROUTESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeCenPrivateZoneRoutesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenPrivateZoneRoutesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrivateZoneDnsServers, privateZoneDnsServers_);
      DARABONBA_PTR_TO_JSON(PrivateZoneInfos, privateZoneInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenPrivateZoneRoutesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneDnsServers, privateZoneDnsServers_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneInfos, privateZoneInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenPrivateZoneRoutesResponseBody() = default ;
    DescribeCenPrivateZoneRoutesResponseBody(const DescribeCenPrivateZoneRoutesResponseBody &) = default ;
    DescribeCenPrivateZoneRoutesResponseBody(DescribeCenPrivateZoneRoutesResponseBody &&) = default ;
    DescribeCenPrivateZoneRoutesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenPrivateZoneRoutesResponseBody() = default ;
    DescribeCenPrivateZoneRoutesResponseBody& operator=(const DescribeCenPrivateZoneRoutesResponseBody &) = default ;
    DescribeCenPrivateZoneRoutesResponseBody& operator=(DescribeCenPrivateZoneRoutesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrivateZoneInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateZoneInfos& obj) { 
        DARABONBA_PTR_TO_JSON(PrivateZoneInfo, privateZoneInfo_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateZoneInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivateZoneInfo, privateZoneInfo_);
      };
      PrivateZoneInfos() = default ;
      PrivateZoneInfos(const PrivateZoneInfos &) = default ;
      PrivateZoneInfos(PrivateZoneInfos &&) = default ;
      PrivateZoneInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateZoneInfos() = default ;
      PrivateZoneInfos& operator=(const PrivateZoneInfos &) = default ;
      PrivateZoneInfos& operator=(PrivateZoneInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PrivateZoneInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateZoneInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccessRegionId, accessRegionId_);
          DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
          DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateZoneInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessRegionId, accessRegionId_);
          DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
          DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrivateZoneInfo() = default ;
        PrivateZoneInfo(const PrivateZoneInfo &) = default ;
        PrivateZoneInfo(PrivateZoneInfo &&) = default ;
        PrivateZoneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateZoneInfo() = default ;
        PrivateZoneInfo& operator=(const PrivateZoneInfo &) = default ;
        PrivateZoneInfo& operator=(PrivateZoneInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accessRegionId_ == nullptr
        && this->hostRegionId_ == nullptr && this->hostVpcId_ == nullptr && this->status_ == nullptr; };
        // accessRegionId Field Functions 
        bool hasAccessRegionId() const { return this->accessRegionId_ != nullptr;};
        void deleteAccessRegionId() { this->accessRegionId_ = nullptr;};
        inline string getAccessRegionId() const { DARABONBA_PTR_GET_DEFAULT(accessRegionId_, "") };
        inline PrivateZoneInfo& setAccessRegionId(string accessRegionId) { DARABONBA_PTR_SET_VALUE(accessRegionId_, accessRegionId) };


        // hostRegionId Field Functions 
        bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
        void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
        inline string getHostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
        inline PrivateZoneInfo& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


        // hostVpcId Field Functions 
        bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
        void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
        inline string getHostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
        inline PrivateZoneInfo& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrivateZoneInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the region where PrivateZone is accessed.
        shared_ptr<string> accessRegionId_ {};
        // The ID of the region where PrivateZone is deployed.
        shared_ptr<string> hostRegionId_ {};
        // The ID of the VPC that is associated with PrivateZone.
        shared_ptr<string> hostVpcId_ {};
        // The status of PrivateZone. Valid values:
        // 
        // *   **Creating**: being created
        // *   **Active**: available
        // *   **Deleting**: being deleted
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->privateZoneInfo_ == nullptr; };
      // privateZoneInfo Field Functions 
      bool hasPrivateZoneInfo() const { return this->privateZoneInfo_ != nullptr;};
      void deletePrivateZoneInfo() { this->privateZoneInfo_ = nullptr;};
      inline const vector<PrivateZoneInfos::PrivateZoneInfo> & getPrivateZoneInfo() const { DARABONBA_PTR_GET_CONST(privateZoneInfo_, vector<PrivateZoneInfos::PrivateZoneInfo>) };
      inline vector<PrivateZoneInfos::PrivateZoneInfo> getPrivateZoneInfo() { DARABONBA_PTR_GET(privateZoneInfo_, vector<PrivateZoneInfos::PrivateZoneInfo>) };
      inline PrivateZoneInfos& setPrivateZoneInfo(const vector<PrivateZoneInfos::PrivateZoneInfo> & privateZoneInfo) { DARABONBA_PTR_SET_VALUE(privateZoneInfo_, privateZoneInfo) };
      inline PrivateZoneInfos& setPrivateZoneInfo(vector<PrivateZoneInfos::PrivateZoneInfo> && privateZoneInfo) { DARABONBA_PTR_SET_RVALUE(privateZoneInfo_, privateZoneInfo) };


    protected:
      shared_ptr<vector<PrivateZoneInfos::PrivateZoneInfo>> privateZoneInfo_ {};
    };

    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->privateZoneDnsServers_ == nullptr && this->privateZoneInfos_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBody& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // privateZoneDnsServers Field Functions 
    bool hasPrivateZoneDnsServers() const { return this->privateZoneDnsServers_ != nullptr;};
    void deletePrivateZoneDnsServers() { this->privateZoneDnsServers_ = nullptr;};
    inline string getPrivateZoneDnsServers() const { DARABONBA_PTR_GET_DEFAULT(privateZoneDnsServers_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPrivateZoneDnsServers(string privateZoneDnsServers) { DARABONBA_PTR_SET_VALUE(privateZoneDnsServers_, privateZoneDnsServers) };


    // privateZoneInfos Field Functions 
    bool hasPrivateZoneInfos() const { return this->privateZoneInfos_ != nullptr;};
    void deletePrivateZoneInfos() { this->privateZoneInfos_ = nullptr;};
    inline const DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos & getPrivateZoneInfos() const { DARABONBA_PTR_GET_CONST(privateZoneInfos_, DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos) };
    inline DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos getPrivateZoneInfos() { DARABONBA_PTR_GET(privateZoneInfos_, DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPrivateZoneInfos(const DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos & privateZoneInfos) { DARABONBA_PTR_SET_VALUE(privateZoneInfos_, privateZoneInfos) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setPrivateZoneInfos(DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos && privateZoneInfos) { DARABONBA_PTR_SET_RVALUE(privateZoneInfos_, privateZoneInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenPrivateZoneRoutesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenPrivateZoneRoutesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The ID of the CEN instance.
    shared_ptr<string> cenId_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The IP address of the DNS server used by PrivateZone.
    shared_ptr<string> privateZoneDnsServers_ {};
    // The detailed configuration of PrivateZone.
    shared_ptr<DescribeCenPrivateZoneRoutesResponseBody::PrivateZoneInfos> privateZoneInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
