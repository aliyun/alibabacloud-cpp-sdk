// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSROUTEENTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRouteEntryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEnsRouteEntryListResponseBody() = default ;
    DescribeEnsRouteEntryListResponseBody(const DescribeEnsRouteEntryListResponseBody &) = default ;
    DescribeEnsRouteEntryListResponseBody(DescribeEnsRouteEntryListResponseBody &&) = default ;
    DescribeEnsRouteEntryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRouteEntryListResponseBody() = default ;
    DescribeEnsRouteEntryListResponseBody& operator=(const DescribeEnsRouteEntryListResponseBody &) = default ;
    DescribeEnsRouteEntryListResponseBody& operator=(DescribeEnsRouteEntryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntrys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntrys& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
        DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
        DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_TO_JSON(SourceCidrBlock, sourceCidrBlock_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntrys& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
        DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
        DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_FROM_JSON(SourceCidrBlock, sourceCidrBlock_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RouteEntrys() = default ;
      RouteEntrys(const RouteEntrys &) = default ;
      RouteEntrys(RouteEntrys &&) = default ;
      RouteEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntrys() = default ;
      RouteEntrys& operator=(const RouteEntrys &) = default ;
      RouteEntrys& operator=(RouteEntrys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NextHops : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NextHops& obj) { 
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopName, nextHopName_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        };
        friend void from_json(const Darabonba::Json& j, NextHops& obj) { 
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_FROM_JSON(NextHopName, nextHopName_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        };
        NextHops() = default ;
        NextHops(const NextHops &) = default ;
        NextHops(NextHops &&) = default ;
        NextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NextHops() = default ;
        NextHops& operator=(const NextHops &) = default ;
        NextHops& operator=(NextHops &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nextHopId_ == nullptr
        && this->nextHopName_ == nullptr && this->nextHopType_ == nullptr; };
        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline NextHops& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopName Field Functions 
        bool hasNextHopName() const { return this->nextHopName_ != nullptr;};
        void deleteNextHopName() { this->nextHopName_ = nullptr;};
        inline string getNextHopName() const { DARABONBA_PTR_GET_DEFAULT(nextHopName_, "") };
        inline NextHops& setNextHopName(string nextHopName) { DARABONBA_PTR_SET_VALUE(nextHopName_, nextHopName) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline NextHops& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      protected:
        // The ID of the next hop.
        shared_ptr<string> nextHopId_ {};
        // The instance ID of the next hop.
        shared_ptr<string> nextHopName_ {};
        // The type of the next hop. Valid values:
        shared_ptr<string> nextHopType_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->nextHops_ == nullptr && this->routeEntryId_ == nullptr && this->routeEntryName_ == nullptr
        && this->routeTableId_ == nullptr && this->sourceCidrBlock_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline RouteEntrys& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RouteEntrys& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline RouteEntrys& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // nextHops Field Functions 
      bool hasNextHops() const { return this->nextHops_ != nullptr;};
      void deleteNextHops() { this->nextHops_ = nullptr;};
      inline const vector<RouteEntrys::NextHops> & getNextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, vector<RouteEntrys::NextHops>) };
      inline vector<RouteEntrys::NextHops> getNextHops() { DARABONBA_PTR_GET(nextHops_, vector<RouteEntrys::NextHops>) };
      inline RouteEntrys& setNextHops(const vector<RouteEntrys::NextHops> & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
      inline RouteEntrys& setNextHops(vector<RouteEntrys::NextHops> && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


      // routeEntryId Field Functions 
      bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
      void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
      inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
      inline RouteEntrys& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


      // routeEntryName Field Functions 
      bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
      void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
      inline string getRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
      inline RouteEntrys& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteEntrys& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      // sourceCidrBlock Field Functions 
      bool hasSourceCidrBlock() const { return this->sourceCidrBlock_ != nullptr;};
      void deleteSourceCidrBlock() { this->sourceCidrBlock_ = nullptr;};
      inline string getSourceCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(sourceCidrBlock_, "") };
      inline RouteEntrys& setSourceCidrBlock(string sourceCidrBlock) { DARABONBA_PTR_SET_VALUE(sourceCidrBlock_, sourceCidrBlock) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteEntrys& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RouteEntrys& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The time when the IP address was created. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // Enter a description for the route.
      shared_ptr<string> description_ {};
      // The destination CIDR block of the route.
      shared_ptr<string> destinationCidrBlock_ {};
      // The information about the next hop.
      shared_ptr<vector<RouteEntrys::NextHops>> nextHops_ {};
      // The ID of the route.
      shared_ptr<string> routeEntryId_ {};
      // The name of the route.
      shared_ptr<string> routeEntryName_ {};
      // The ID of the route table.
      shared_ptr<string> routeTableId_ {};
      // The source CIDR block. This field is used when you configure a route entry in the gateway route table. This field is not supported in the vSwitch route table.
      shared_ptr<string> sourceCidrBlock_ {};
      // The status of the route entry. Valid values:
      shared_ptr<string> status_ {};
      // The type of the route entry.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routeEntrys_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEnsRouteEntryListResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEnsRouteEntryListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEnsRouteEntryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntrys Field Functions 
    bool hasRouteEntrys() const { return this->routeEntrys_ != nullptr;};
    void deleteRouteEntrys() { this->routeEntrys_ = nullptr;};
    inline const vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys> & getRouteEntrys() const { DARABONBA_PTR_GET_CONST(routeEntrys_, vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys>) };
    inline vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys> getRouteEntrys() { DARABONBA_PTR_GET(routeEntrys_, vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys>) };
    inline DescribeEnsRouteEntryListResponseBody& setRouteEntrys(const vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys> & routeEntrys) { DARABONBA_PTR_SET_VALUE(routeEntrys_, routeEntrys) };
    inline DescribeEnsRouteEntryListResponseBody& setRouteEntrys(vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys> && routeEntrys) { DARABONBA_PTR_SET_RVALUE(routeEntrys_, routeEntrys) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeEnsRouteEntryListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the routes.
    shared_ptr<vector<DescribeEnsRouteEntryListResponseBody::RouteEntrys>> routeEntrys_ {};
    // The number of returned entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
