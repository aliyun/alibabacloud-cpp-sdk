// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTECONFLICTRESPONSEBODY_HPP_
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
  class DescribeRouteConflictResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteConflictResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteConflicts, routeConflicts_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteConflictResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteConflicts, routeConflicts_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteConflictResponseBody() = default ;
    DescribeRouteConflictResponseBody(const DescribeRouteConflictResponseBody &) = default ;
    DescribeRouteConflictResponseBody(DescribeRouteConflictResponseBody &&) = default ;
    DescribeRouteConflictResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteConflictResponseBody() = default ;
    DescribeRouteConflictResponseBody& operator=(const DescribeRouteConflictResponseBody &) = default ;
    DescribeRouteConflictResponseBody& operator=(DescribeRouteConflictResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteConflicts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteConflicts& obj) { 
        DARABONBA_PTR_TO_JSON(RouteConflict, routeConflict_);
      };
      friend void from_json(const Darabonba::Json& j, RouteConflicts& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteConflict, routeConflict_);
      };
      RouteConflicts() = default ;
      RouteConflicts(const RouteConflicts &) = default ;
      RouteConflicts(RouteConflicts &&) = default ;
      RouteConflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteConflicts() = default ;
      RouteConflicts& operator=(const RouteConflicts &) = default ;
      RouteConflicts& operator=(RouteConflicts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouteConflict : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteConflict& obj) { 
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RouteConflict& obj) { 
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RouteConflict() = default ;
        RouteConflict(const RouteConflict &) = default ;
        RouteConflict(RouteConflict &&) = default ;
        RouteConflict(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteConflict() = default ;
        RouteConflict& operator=(const RouteConflict &) = default ;
        RouteConflict& operator=(RouteConflict &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline RouteConflict& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline RouteConflict& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline RouteConflict& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RouteConflict& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouteConflict& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The destination CIDR block of the overlapping route.
        shared_ptr<string> destinationCidrBlock_ {};
        // The ID of the peer network instance on which the overlapping routes are found.
        shared_ptr<string> instanceId_ {};
        // The type of the peer network instance on which the overlapping routes are found.
        // 
        // *   **VPC**: VPC
        // *   **VBR**: VBR
        // *   **CCN**: CCN instance
        shared_ptr<string> instanceType_ {};
        // The region ID of the peer network instance on which the overlapping routes are found is deployed.
        shared_ptr<string> regionId_ {};
        // The cause of the route error. Valid values:
        // 
        // *   **conflict**: The routes have the same destination CIDR block.
        // *   **overflow**: The number of routes in the route table configured on another network instance has reached the upper limit.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->routeConflict_ == nullptr; };
      // routeConflict Field Functions 
      bool hasRouteConflict() const { return this->routeConflict_ != nullptr;};
      void deleteRouteConflict() { this->routeConflict_ = nullptr;};
      inline const vector<RouteConflicts::RouteConflict> & getRouteConflict() const { DARABONBA_PTR_GET_CONST(routeConflict_, vector<RouteConflicts::RouteConflict>) };
      inline vector<RouteConflicts::RouteConflict> getRouteConflict() { DARABONBA_PTR_GET(routeConflict_, vector<RouteConflicts::RouteConflict>) };
      inline RouteConflicts& setRouteConflict(const vector<RouteConflicts::RouteConflict> & routeConflict) { DARABONBA_PTR_SET_VALUE(routeConflict_, routeConflict) };
      inline RouteConflicts& setRouteConflict(vector<RouteConflicts::RouteConflict> && routeConflict) { DARABONBA_PTR_SET_RVALUE(routeConflict_, routeConflict) };


    protected:
      shared_ptr<vector<RouteConflicts::RouteConflict>> routeConflict_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routeConflicts_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteConflictResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteConflictResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteConflictResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeConflicts Field Functions 
    bool hasRouteConflicts() const { return this->routeConflicts_ != nullptr;};
    void deleteRouteConflicts() { this->routeConflicts_ = nullptr;};
    inline const DescribeRouteConflictResponseBody::RouteConflicts & getRouteConflicts() const { DARABONBA_PTR_GET_CONST(routeConflicts_, DescribeRouteConflictResponseBody::RouteConflicts) };
    inline DescribeRouteConflictResponseBody::RouteConflicts getRouteConflicts() { DARABONBA_PTR_GET(routeConflicts_, DescribeRouteConflictResponseBody::RouteConflicts) };
    inline DescribeRouteConflictResponseBody& setRouteConflicts(const DescribeRouteConflictResponseBody::RouteConflicts & routeConflicts) { DARABONBA_PTR_SET_VALUE(routeConflicts_, routeConflicts) };
    inline DescribeRouteConflictResponseBody& setRouteConflicts(DescribeRouteConflictResponseBody::RouteConflicts && routeConflicts) { DARABONBA_PTR_SET_RVALUE(routeConflicts_, routeConflicts) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteConflictResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // A list of overlapping routes.
    shared_ptr<DescribeRouteConflictResponseBody::RouteConflicts> routeConflicts_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
