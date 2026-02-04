// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTESERVICESINCENRESPONSEBODY_HPP_
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
  class DescribeRouteServicesInCenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteServicesInCenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteServiceEntries, routeServiceEntries_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteServicesInCenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteServiceEntries, routeServiceEntries_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteServicesInCenResponseBody() = default ;
    DescribeRouteServicesInCenResponseBody(const DescribeRouteServicesInCenResponseBody &) = default ;
    DescribeRouteServicesInCenResponseBody(DescribeRouteServicesInCenResponseBody &&) = default ;
    DescribeRouteServicesInCenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteServicesInCenResponseBody() = default ;
    DescribeRouteServicesInCenResponseBody& operator=(const DescribeRouteServicesInCenResponseBody &) = default ;
    DescribeRouteServicesInCenResponseBody& operator=(DescribeRouteServicesInCenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteServiceEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteServiceEntries& obj) { 
        DARABONBA_PTR_TO_JSON(RouteServiceEntry, routeServiceEntry_);
      };
      friend void from_json(const Darabonba::Json& j, RouteServiceEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteServiceEntry, routeServiceEntry_);
      };
      RouteServiceEntries() = default ;
      RouteServiceEntries(const RouteServiceEntries &) = default ;
      RouteServiceEntries(RouteServiceEntries &&) = default ;
      RouteServiceEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteServiceEntries() = default ;
      RouteServiceEntries& operator=(const RouteServiceEntries &) = default ;
      RouteServiceEntries& operator=(RouteServiceEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouteServiceEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteServiceEntry& obj) { 
          DARABONBA_PTR_TO_JSON(AccessRegionId, accessRegionId_);
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(Cidrs, cidrs_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(HostRegionId, hostRegionId_);
          DARABONBA_PTR_TO_JSON(HostVpcId, hostVpcId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RouteServiceEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessRegionId, accessRegionId_);
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(Cidrs, cidrs_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(HostRegionId, hostRegionId_);
          DARABONBA_PTR_FROM_JSON(HostVpcId, hostVpcId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RouteServiceEntry() = default ;
        RouteServiceEntry(const RouteServiceEntry &) = default ;
        RouteServiceEntry(RouteServiceEntry &&) = default ;
        RouteServiceEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteServiceEntry() = default ;
        RouteServiceEntry& operator=(const RouteServiceEntry &) = default ;
        RouteServiceEntry& operator=(RouteServiceEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Cidrs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cidrs& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
          };
          friend void from_json(const Darabonba::Json& j, Cidrs& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
          };
          Cidrs() = default ;
          Cidrs(const Cidrs &) = default ;
          Cidrs(Cidrs &&) = default ;
          Cidrs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cidrs() = default ;
          Cidrs& operator=(const Cidrs &) = default ;
          Cidrs& operator=(Cidrs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline const vector<string> & getCidr() const { DARABONBA_PTR_GET_CONST(cidr_, vector<string>) };
          inline vector<string> getCidr() { DARABONBA_PTR_GET(cidr_, vector<string>) };
          inline Cidrs& setCidr(const vector<string> & cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };
          inline Cidrs& setCidr(vector<string> && cidr) { DARABONBA_PTR_SET_RVALUE(cidr_, cidr) };


        protected:
          shared_ptr<vector<string>> cidr_ {};
        };

        virtual bool empty() const override { return this->accessRegionId_ == nullptr
        && this->cenId_ == nullptr && this->cidrs_ == nullptr && this->description_ == nullptr && this->host_ == nullptr && this->hostRegionId_ == nullptr
        && this->hostVpcId_ == nullptr && this->status_ == nullptr; };
        // accessRegionId Field Functions 
        bool hasAccessRegionId() const { return this->accessRegionId_ != nullptr;};
        void deleteAccessRegionId() { this->accessRegionId_ = nullptr;};
        inline string getAccessRegionId() const { DARABONBA_PTR_GET_DEFAULT(accessRegionId_, "") };
        inline RouteServiceEntry& setAccessRegionId(string accessRegionId) { DARABONBA_PTR_SET_VALUE(accessRegionId_, accessRegionId) };


        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline RouteServiceEntry& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cidrs Field Functions 
        bool hasCidrs() const { return this->cidrs_ != nullptr;};
        void deleteCidrs() { this->cidrs_ = nullptr;};
        inline const RouteServiceEntry::Cidrs & getCidrs() const { DARABONBA_PTR_GET_CONST(cidrs_, RouteServiceEntry::Cidrs) };
        inline RouteServiceEntry::Cidrs getCidrs() { DARABONBA_PTR_GET(cidrs_, RouteServiceEntry::Cidrs) };
        inline RouteServiceEntry& setCidrs(const RouteServiceEntry::Cidrs & cidrs) { DARABONBA_PTR_SET_VALUE(cidrs_, cidrs) };
        inline RouteServiceEntry& setCidrs(RouteServiceEntry::Cidrs && cidrs) { DARABONBA_PTR_SET_RVALUE(cidrs_, cidrs) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RouteServiceEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline RouteServiceEntry& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // hostRegionId Field Functions 
        bool hasHostRegionId() const { return this->hostRegionId_ != nullptr;};
        void deleteHostRegionId() { this->hostRegionId_ = nullptr;};
        inline string getHostRegionId() const { DARABONBA_PTR_GET_DEFAULT(hostRegionId_, "") };
        inline RouteServiceEntry& setHostRegionId(string hostRegionId) { DARABONBA_PTR_SET_VALUE(hostRegionId_, hostRegionId) };


        // hostVpcId Field Functions 
        bool hasHostVpcId() const { return this->hostVpcId_ != nullptr;};
        void deleteHostVpcId() { this->hostVpcId_ = nullptr;};
        inline string getHostVpcId() const { DARABONBA_PTR_GET_DEFAULT(hostVpcId_, "") };
        inline RouteServiceEntry& setHostVpcId(string hostVpcId) { DARABONBA_PTR_SET_VALUE(hostVpcId_, hostVpcId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouteServiceEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The ID of the region where the cloud service is accessed.
        shared_ptr<string> accessRegionId_ {};
        // The ID of the CEN instance.
        shared_ptr<string> cenId_ {};
        // The service addresses of the cloud service.
        shared_ptr<RouteServiceEntry::Cidrs> cidrs_ {};
        // The description of the cloud service.
        shared_ptr<string> description_ {};
        // The service address of the cloud service.
        shared_ptr<string> host_ {};
        // The region ID of the cloud service.
        shared_ptr<string> hostRegionId_ {};
        // The ID of the VPC associated with the cloud service.
        shared_ptr<string> hostVpcId_ {};
        // The status of the cloud service. Valid values:
        // 
        // *   **Creating**
        // *   **Active**
        // *   **Deleting**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->routeServiceEntry_ == nullptr; };
      // routeServiceEntry Field Functions 
      bool hasRouteServiceEntry() const { return this->routeServiceEntry_ != nullptr;};
      void deleteRouteServiceEntry() { this->routeServiceEntry_ = nullptr;};
      inline const vector<RouteServiceEntries::RouteServiceEntry> & getRouteServiceEntry() const { DARABONBA_PTR_GET_CONST(routeServiceEntry_, vector<RouteServiceEntries::RouteServiceEntry>) };
      inline vector<RouteServiceEntries::RouteServiceEntry> getRouteServiceEntry() { DARABONBA_PTR_GET(routeServiceEntry_, vector<RouteServiceEntries::RouteServiceEntry>) };
      inline RouteServiceEntries& setRouteServiceEntry(const vector<RouteServiceEntries::RouteServiceEntry> & routeServiceEntry) { DARABONBA_PTR_SET_VALUE(routeServiceEntry_, routeServiceEntry) };
      inline RouteServiceEntries& setRouteServiceEntry(vector<RouteServiceEntries::RouteServiceEntry> && routeServiceEntry) { DARABONBA_PTR_SET_RVALUE(routeServiceEntry_, routeServiceEntry) };


    protected:
      shared_ptr<vector<RouteServiceEntries::RouteServiceEntry>> routeServiceEntry_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routeServiceEntries_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteServicesInCenResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteServicesInCenResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteServicesInCenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeServiceEntries Field Functions 
    bool hasRouteServiceEntries() const { return this->routeServiceEntries_ != nullptr;};
    void deleteRouteServiceEntries() { this->routeServiceEntries_ = nullptr;};
    inline const DescribeRouteServicesInCenResponseBody::RouteServiceEntries & getRouteServiceEntries() const { DARABONBA_PTR_GET_CONST(routeServiceEntries_, DescribeRouteServicesInCenResponseBody::RouteServiceEntries) };
    inline DescribeRouteServicesInCenResponseBody::RouteServiceEntries getRouteServiceEntries() { DARABONBA_PTR_GET(routeServiceEntries_, DescribeRouteServicesInCenResponseBody::RouteServiceEntries) };
    inline DescribeRouteServicesInCenResponseBody& setRouteServiceEntries(const DescribeRouteServicesInCenResponseBody::RouteServiceEntries & routeServiceEntries) { DARABONBA_PTR_SET_VALUE(routeServiceEntries_, routeServiceEntries) };
    inline DescribeRouteServicesInCenResponseBody& setRouteServiceEntries(DescribeRouteServicesInCenResponseBody::RouteServiceEntries && routeServiceEntries) { DARABONBA_PTR_SET_RVALUE(routeServiceEntries_, routeServiceEntries) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteServicesInCenResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the cloud services.
    shared_ptr<DescribeRouteServicesInCenResponseBody::RouteServiceEntries> routeServiceEntries_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
