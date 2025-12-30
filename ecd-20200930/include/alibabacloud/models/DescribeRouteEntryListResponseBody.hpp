// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRouteEntryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntries, routeEntries_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntries, routeEntries_);
    };
    DescribeRouteEntryListResponseBody() = default ;
    DescribeRouteEntryListResponseBody(const DescribeRouteEntryListResponseBody &) = default ;
    DescribeRouteEntryListResponseBody(DescribeRouteEntryListResponseBody &&) = default ;
    DescribeRouteEntryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBody() = default ;
    DescribeRouteEntryListResponseBody& operator=(const DescribeRouteEntryListResponseBody &) = default ;
    DescribeRouteEntryListResponseBody& operator=(DescribeRouteEntryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
        DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
        DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
        DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
        DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      RouteEntries() = default ;
      RouteEntries(const RouteEntries &) = default ;
      RouteEntries(RouteEntries &&) = default ;
      RouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntries() = default ;
      RouteEntries& operator=(const RouteEntries &) = default ;
      RouteEntries& operator=(RouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NextHops : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NextHops& obj) { 
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        };
        friend void from_json(const Darabonba::Json& j, NextHops& obj) { 
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
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
        && this->nextHopType_ == nullptr; };
        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline NextHops& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline NextHops& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      protected:
        shared_ptr<string> nextHopId_ {};
        shared_ptr<string> nextHopType_ {};
      };

      virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->ipVersion_ == nullptr && this->nextHops_ == nullptr && this->routeEntryId_ == nullptr && this->routeEntryName_ == nullptr
        && this->routeTableId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RouteEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline RouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
      inline RouteEntries& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // nextHops Field Functions 
      bool hasNextHops() const { return this->nextHops_ != nullptr;};
      void deleteNextHops() { this->nextHops_ = nullptr;};
      inline const vector<RouteEntries::NextHops> & getNextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, vector<RouteEntries::NextHops>) };
      inline vector<RouteEntries::NextHops> getNextHops() { DARABONBA_PTR_GET(nextHops_, vector<RouteEntries::NextHops>) };
      inline RouteEntries& setNextHops(const vector<RouteEntries::NextHops> & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
      inline RouteEntries& setNextHops(vector<RouteEntries::NextHops> && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


      // routeEntryId Field Functions 
      bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
      void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
      inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
      inline RouteEntries& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


      // routeEntryName Field Functions 
      bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
      void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
      inline string getRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
      inline RouteEntries& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteEntries& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline RouteEntries& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> destinationCidrBlock_ {};
      shared_ptr<string> ipVersion_ {};
      shared_ptr<vector<RouteEntries::NextHops>> nextHops_ {};
      shared_ptr<string> routeEntryId_ {};
      shared_ptr<string> routeEntryName_ {};
      shared_ptr<string> routeTableId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeEntries_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeRouteEntryListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRouteEntryListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteEntryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntries Field Functions 
    bool hasRouteEntries() const { return this->routeEntries_ != nullptr;};
    void deleteRouteEntries() { this->routeEntries_ = nullptr;};
    inline const vector<DescribeRouteEntryListResponseBody::RouteEntries> & getRouteEntries() const { DARABONBA_PTR_GET_CONST(routeEntries_, vector<DescribeRouteEntryListResponseBody::RouteEntries>) };
    inline vector<DescribeRouteEntryListResponseBody::RouteEntries> getRouteEntries() { DARABONBA_PTR_GET(routeEntries_, vector<DescribeRouteEntryListResponseBody::RouteEntries>) };
    inline DescribeRouteEntryListResponseBody& setRouteEntries(const vector<DescribeRouteEntryListResponseBody::RouteEntries> & routeEntries) { DARABONBA_PTR_SET_VALUE(routeEntries_, routeEntries) };
    inline DescribeRouteEntryListResponseBody& setRouteEntries(vector<DescribeRouteEntryListResponseBody::RouteEntries> && routeEntries) { DARABONBA_PTR_SET_RVALUE(routeEntries_, routeEntries) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeRouteEntryListResponseBody::RouteEntries>> routeEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
