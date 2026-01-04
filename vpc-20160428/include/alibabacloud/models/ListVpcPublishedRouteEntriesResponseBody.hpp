// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPUBLISHEDROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVpcPublishedRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPublishedRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntries, routeEntries_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPublishedRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntries, routeEntries_);
    };
    ListVpcPublishedRouteEntriesResponseBody() = default ;
    ListVpcPublishedRouteEntriesResponseBody(const ListVpcPublishedRouteEntriesResponseBody &) = default ;
    ListVpcPublishedRouteEntriesResponseBody(ListVpcPublishedRouteEntriesResponseBody &&) = default ;
    ListVpcPublishedRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPublishedRouteEntriesResponseBody() = default ;
    ListVpcPublishedRouteEntriesResponseBody& operator=(const ListVpcPublishedRouteEntriesResponseBody &) = default ;
    ListVpcPublishedRouteEntriesResponseBody& operator=(ListVpcPublishedRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
        DARABONBA_PTR_TO_JSON(RoutePublishTargets, routePublishTargets_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
        DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
        DARABONBA_PTR_FROM_JSON(RoutePublishTargets, routePublishTargets_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
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
      class RoutePublishTargets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoutePublishTargets& obj) { 
          DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_TO_JSON(PublishTargetInstanceId, publishTargetInstanceId_);
          DARABONBA_PTR_TO_JSON(PublishTargetType, publishTargetType_);
        };
        friend void from_json(const Darabonba::Json& j, RoutePublishTargets& obj) { 
          DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_FROM_JSON(PublishTargetInstanceId, publishTargetInstanceId_);
          DARABONBA_PTR_FROM_JSON(PublishTargetType, publishTargetType_);
        };
        RoutePublishTargets() = default ;
        RoutePublishTargets(const RoutePublishTargets &) = default ;
        RoutePublishTargets(RoutePublishTargets &&) = default ;
        RoutePublishTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoutePublishTargets() = default ;
        RoutePublishTargets& operator=(const RoutePublishTargets &) = default ;
        RoutePublishTargets& operator=(RoutePublishTargets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->publishStatus_ == nullptr
        && this->publishTargetInstanceId_ == nullptr && this->publishTargetType_ == nullptr; };
        // publishStatus Field Functions 
        bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
        void deletePublishStatus() { this->publishStatus_ = nullptr;};
        inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
        inline RoutePublishTargets& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


        // publishTargetInstanceId Field Functions 
        bool hasPublishTargetInstanceId() const { return this->publishTargetInstanceId_ != nullptr;};
        void deletePublishTargetInstanceId() { this->publishTargetInstanceId_ = nullptr;};
        inline string getPublishTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(publishTargetInstanceId_, "") };
        inline RoutePublishTargets& setPublishTargetInstanceId(string publishTargetInstanceId) { DARABONBA_PTR_SET_VALUE(publishTargetInstanceId_, publishTargetInstanceId) };


        // publishTargetType Field Functions 
        bool hasPublishTargetType() const { return this->publishTargetType_ != nullptr;};
        void deletePublishTargetType() { this->publishTargetType_ = nullptr;};
        inline string getPublishTargetType() const { DARABONBA_PTR_GET_DEFAULT(publishTargetType_, "") };
        inline RoutePublishTargets& setPublishTargetType(string publishTargetType) { DARABONBA_PTR_SET_VALUE(publishTargetType_, publishTargetType) };


      protected:
        // The publishing status of the route entry in the publishing target.
        shared_ptr<string> publishStatus_ {};
        // The ID of the route publishing target instance.
        shared_ptr<string> publishTargetInstanceId_ {};
        // The type of the route publishing target.
        shared_ptr<string> publishTargetType_ {};
      };

      virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->routeEntryId_ == nullptr && this->routePublishTargets_ == nullptr && this->routeTableId_ == nullptr; };
      // destinationCidrBlock Field Functions 
      bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
      void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
      inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
      inline RouteEntries& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


      // routeEntryId Field Functions 
      bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
      void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
      inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
      inline RouteEntries& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


      // routePublishTargets Field Functions 
      bool hasRoutePublishTargets() const { return this->routePublishTargets_ != nullptr;};
      void deleteRoutePublishTargets() { this->routePublishTargets_ = nullptr;};
      inline const vector<RouteEntries::RoutePublishTargets> & getRoutePublishTargets() const { DARABONBA_PTR_GET_CONST(routePublishTargets_, vector<RouteEntries::RoutePublishTargets>) };
      inline vector<RouteEntries::RoutePublishTargets> getRoutePublishTargets() { DARABONBA_PTR_GET(routePublishTargets_, vector<RouteEntries::RoutePublishTargets>) };
      inline RouteEntries& setRoutePublishTargets(const vector<RouteEntries::RoutePublishTargets> & routePublishTargets) { DARABONBA_PTR_SET_VALUE(routePublishTargets_, routePublishTargets) };
      inline RouteEntries& setRoutePublishTargets(vector<RouteEntries::RoutePublishTargets> && routePublishTargets) { DARABONBA_PTR_SET_RVALUE(routePublishTargets_, routePublishTargets) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    protected:
      // The destination CIDR block of the route entry.
      shared_ptr<string> destinationCidrBlock_ {};
      // The ID of the route entry.
      shared_ptr<string> routeEntryId_ {};
      // List of route entry publishing status information in the publishing targets.
      shared_ptr<vector<RouteEntries::RoutePublishTargets>> routePublishTargets_ {};
      // The ID of the route table.
      shared_ptr<string> routeTableId_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->routeEntries_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcPublishedRouteEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcPublishedRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntries Field Functions 
    bool hasRouteEntries() const { return this->routeEntries_ != nullptr;};
    void deleteRouteEntries() { this->routeEntries_ = nullptr;};
    inline const vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries> & getRouteEntries() const { DARABONBA_PTR_GET_CONST(routeEntries_, vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries>) };
    inline vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries> getRouteEntries() { DARABONBA_PTR_GET(routeEntries_, vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries>) };
    inline ListVpcPublishedRouteEntriesResponseBody& setRouteEntries(const vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries> & routeEntries) { DARABONBA_PTR_SET_VALUE(routeEntries_, routeEntries) };
    inline ListVpcPublishedRouteEntriesResponseBody& setRouteEntries(vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries> && routeEntries) { DARABONBA_PTR_SET_RVALUE(routeEntries_, routeEntries) };


  protected:
    // Indicates whether there is a token for the next query. Values:
    // 
    // - If **NextToken** is empty, it means there is no next query.
    // - If **NextToken** has a return value, this value indicates the token for the start of the next query.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of route entry publishing status information.
    shared_ptr<vector<ListVpcPublishedRouteEntriesResponseBody::RouteEntries>> routeEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
