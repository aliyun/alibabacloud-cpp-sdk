// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESRESPONSEBODY_HPP_
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
  class ListTransitRouterRouteTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTables, transitRouterRouteTables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTables, transitRouterRouteTables_);
    };
    ListTransitRouterRouteTablesResponseBody() = default ;
    ListTransitRouterRouteTablesResponseBody(const ListTransitRouterRouteTablesResponseBody &) = default ;
    ListTransitRouterRouteTablesResponseBody(ListTransitRouterRouteTablesResponseBody &&) = default ;
    ListTransitRouterRouteTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablesResponseBody() = default ;
    ListTransitRouterRouteTablesResponseBody& operator=(const ListTransitRouterRouteTablesResponseBody &) = default ;
    ListTransitRouterRouteTablesResponseBody& operator=(ListTransitRouterRouteTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterRouteTables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterRouteTables& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(RouteTableOptions, routeTableOptions_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteTableStatus, transitRouterRouteTableStatus_);
        DARABONBA_PTR_TO_JSON(TransitRouterRouteTableType, transitRouterRouteTableType_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterRouteTables& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(RouteTableOptions, routeTableOptions_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableDescription, transitRouterRouteTableDescription_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableName, transitRouterRouteTableName_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableStatus, transitRouterRouteTableStatus_);
        DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableType, transitRouterRouteTableType_);
      };
      TransitRouterRouteTables() = default ;
      TransitRouterRouteTables(const TransitRouterRouteTables &) = default ;
      TransitRouterRouteTables(TransitRouterRouteTables &&) = default ;
      TransitRouterRouteTables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterRouteTables() = default ;
      TransitRouterRouteTables& operator=(const TransitRouterRouteTables &) = default ;
      TransitRouterRouteTables& operator=(TransitRouterRouteTables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      class RouteTableOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteTableOptions& obj) { 
          DARABONBA_PTR_TO_JSON(MultiRegionECMP, multiRegionECMP_);
        };
        friend void from_json(const Darabonba::Json& j, RouteTableOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(MultiRegionECMP, multiRegionECMP_);
        };
        RouteTableOptions() = default ;
        RouteTableOptions(const RouteTableOptions &) = default ;
        RouteTableOptions(RouteTableOptions &&) = default ;
        RouteTableOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteTableOptions() = default ;
        RouteTableOptions& operator=(const RouteTableOptions &) = default ;
        RouteTableOptions& operator=(RouteTableOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->multiRegionECMP_ == nullptr; };
        // multiRegionECMP Field Functions 
        bool hasMultiRegionECMP() const { return this->multiRegionECMP_ != nullptr;};
        void deleteMultiRegionECMP() { this->multiRegionECMP_ = nullptr;};
        inline string getMultiRegionECMP() const { DARABONBA_PTR_GET_DEFAULT(multiRegionECMP_, "") };
        inline RouteTableOptions& setMultiRegionECMP(string multiRegionECMP) { DARABONBA_PTR_SET_VALUE(multiRegionECMP_, multiRegionECMP) };


      protected:
        // Indicates whether ECMP routing is enabled. Valid values:
        // 
        // *   **disable** If ECMP routing is disabled, routes that are learned from different regions but have the same prefix and attributes select the transit router with the smallest region ID as the next hop. Region IDs are sorted in alphabetic order. The network latency and bandwidth consumption also vary based on the region. Proceed with caution.
        // *   **enable** If ECMP routing is enabled, routes that are learned from different regions but have the same prefix and attributes form an ECMP route. The network latency and bandwidth consumption also vary based on the region. Proceed with caution.
        shared_ptr<string> multiRegionECMP_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->regionId_ == nullptr && this->routeTableOptions_ == nullptr && this->tags_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterRouteTableDescription_ == nullptr
        && this->transitRouterRouteTableId_ == nullptr && this->transitRouterRouteTableName_ == nullptr && this->transitRouterRouteTableStatus_ == nullptr && this->transitRouterRouteTableType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TransitRouterRouteTables& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline TransitRouterRouteTables& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // routeTableOptions Field Functions 
      bool hasRouteTableOptions() const { return this->routeTableOptions_ != nullptr;};
      void deleteRouteTableOptions() { this->routeTableOptions_ = nullptr;};
      inline const TransitRouterRouteTables::RouteTableOptions & getRouteTableOptions() const { DARABONBA_PTR_GET_CONST(routeTableOptions_, TransitRouterRouteTables::RouteTableOptions) };
      inline TransitRouterRouteTables::RouteTableOptions getRouteTableOptions() { DARABONBA_PTR_GET(routeTableOptions_, TransitRouterRouteTables::RouteTableOptions) };
      inline TransitRouterRouteTables& setRouteTableOptions(const TransitRouterRouteTables::RouteTableOptions & routeTableOptions) { DARABONBA_PTR_SET_VALUE(routeTableOptions_, routeTableOptions) };
      inline TransitRouterRouteTables& setRouteTableOptions(TransitRouterRouteTables::RouteTableOptions && routeTableOptions) { DARABONBA_PTR_SET_RVALUE(routeTableOptions_, routeTableOptions) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<TransitRouterRouteTables::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<TransitRouterRouteTables::Tags>) };
      inline vector<TransitRouterRouteTables::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<TransitRouterRouteTables::Tags>) };
      inline TransitRouterRouteTables& setTags(const vector<TransitRouterRouteTables::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline TransitRouterRouteTables& setTags(vector<TransitRouterRouteTables::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // transitRouterId Field Functions 
      bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
      void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
      inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
      inline TransitRouterRouteTables& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


      // transitRouterRouteTableDescription Field Functions 
      bool hasTransitRouterRouteTableDescription() const { return this->transitRouterRouteTableDescription_ != nullptr;};
      void deleteTransitRouterRouteTableDescription() { this->transitRouterRouteTableDescription_ = nullptr;};
      inline string getTransitRouterRouteTableDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableDescription_, "") };
      inline TransitRouterRouteTables& setTransitRouterRouteTableDescription(string transitRouterRouteTableDescription) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableDescription_, transitRouterRouteTableDescription) };


      // transitRouterRouteTableId Field Functions 
      bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
      void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
      inline string getTransitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
      inline TransitRouterRouteTables& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


      // transitRouterRouteTableName Field Functions 
      bool hasTransitRouterRouteTableName() const { return this->transitRouterRouteTableName_ != nullptr;};
      void deleteTransitRouterRouteTableName() { this->transitRouterRouteTableName_ = nullptr;};
      inline string getTransitRouterRouteTableName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableName_, "") };
      inline TransitRouterRouteTables& setTransitRouterRouteTableName(string transitRouterRouteTableName) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableName_, transitRouterRouteTableName) };


      // transitRouterRouteTableStatus Field Functions 
      bool hasTransitRouterRouteTableStatus() const { return this->transitRouterRouteTableStatus_ != nullptr;};
      void deleteTransitRouterRouteTableStatus() { this->transitRouterRouteTableStatus_ = nullptr;};
      inline string getTransitRouterRouteTableStatus() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableStatus_, "") };
      inline TransitRouterRouteTables& setTransitRouterRouteTableStatus(string transitRouterRouteTableStatus) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableStatus_, transitRouterRouteTableStatus) };


      // transitRouterRouteTableType Field Functions 
      bool hasTransitRouterRouteTableType() const { return this->transitRouterRouteTableType_ != nullptr;};
      void deleteTransitRouterRouteTableType() { this->transitRouterRouteTableType_ = nullptr;};
      inline string getTransitRouterRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableType_, "") };
      inline TransitRouterRouteTables& setTransitRouterRouteTableType(string transitRouterRouteTableType) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableType_, transitRouterRouteTableType) };


    protected:
      // The time when the route table was created.
      // 
      // The time follows the ISO8601 standard in the YYYY-MM-DDThh:mmZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The region ID of the Enterprise Edition transit router.
      shared_ptr<string> regionId_ {};
      // The features of the route table.
      shared_ptr<TransitRouterRouteTables::RouteTableOptions> routeTableOptions_ {};
      // The tags.
      shared_ptr<vector<TransitRouterRouteTables::Tags>> tags_ {};
      // The transit router ID.
      shared_ptr<string> transitRouterId_ {};
      // The description of the route table.
      shared_ptr<string> transitRouterRouteTableDescription_ {};
      // The ID of the route table.
      shared_ptr<string> transitRouterRouteTableId_ {};
      // The name of the route table.
      shared_ptr<string> transitRouterRouteTableName_ {};
      // The status of the route table. Valid values:
      // 
      // *   **Creating**
      // *   **Deleting**
      // *   **Active**
      shared_ptr<string> transitRouterRouteTableStatus_ {};
      // The type of the route table. Valid values:
      // 
      // *   **Custom**
      // *   **System**
      shared_ptr<string> transitRouterRouteTableType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterRouteTables_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTablesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTablesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterRouteTables Field Functions 
    bool hasTransitRouterRouteTables() const { return this->transitRouterRouteTables_ != nullptr;};
    void deleteTransitRouterRouteTables() { this->transitRouterRouteTables_ = nullptr;};
    inline const vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables> & getTransitRouterRouteTables() const { DARABONBA_PTR_GET_CONST(transitRouterRouteTables_, vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables>) };
    inline vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables> getTransitRouterRouteTables() { DARABONBA_PTR_GET(transitRouterRouteTables_, vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables>) };
    inline ListTransitRouterRouteTablesResponseBody& setTransitRouterRouteTables(const vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables> & transitRouterRouteTables) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTables_, transitRouterRouteTables) };
    inline ListTransitRouterRouteTablesResponseBody& setTransitRouterRouteTables(vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables> && transitRouterRouteTables) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteTables_, transitRouterRouteTables) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    // *   If a value of **NextToken** is not returned, it indicates that no additional results exist.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // A list of route tables.
    shared_ptr<vector<ListTransitRouterRouteTablesResponseBody::TransitRouterRouteTables>> transitRouterRouteTables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
