// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROUTEMAPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTROUTEMAPSRESPONSEBODY_HPP_
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
  class ListRouteMapsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRouteMapsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteMaps, routeMaps_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRouteMapsResponseBody() = default ;
    ListRouteMapsResponseBody(const ListRouteMapsResponseBody &) = default ;
    ListRouteMapsResponseBody(ListRouteMapsResponseBody &&) = default ;
    ListRouteMapsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRouteMapsResponseBody() = default ;
    ListRouteMapsResponseBody& operator=(const ListRouteMapsResponseBody &) = default ;
    ListRouteMapsResponseBody& operator=(ListRouteMapsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteMaps : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteMaps& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Direction, direction_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, RouteMaps& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Direction, direction_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      RouteMaps() = default ;
      RouteMaps(const RouteMaps &) = default ;
      RouteMaps(RouteMaps &&) = default ;
      RouteMaps(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteMaps() = default ;
      RouteMaps& operator=(const RouteMaps &) = default ;
      RouteMaps& operator=(RouteMaps &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tag() = default ;
        Tag(const Tag &) = default ;
        Tag(Tag &&) = default ;
        Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tag() = default ;
        Tag& operator=(const Tag &) = default ;
        Tag& operator=(Tag &&) = default ;
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
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->direction_ == nullptr && this->name_ == nullptr && this->priority_ == nullptr && this->resourceGroupId_ == nullptr
        && this->routeMapId_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->version_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline RouteMaps& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RouteMaps& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // direction Field Functions 
      bool hasDirection() const { return this->direction_ != nullptr;};
      void deleteDirection() { this->direction_ = nullptr;};
      inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
      inline RouteMaps& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RouteMaps& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline RouteMaps& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline RouteMaps& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // routeMapId Field Functions 
      bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
      void deleteRouteMapId() { this->routeMapId_ = nullptr;};
      inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
      inline RouteMaps& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RouteMaps& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<RouteMaps::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RouteMaps::Tag>) };
      inline vector<RouteMaps::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<RouteMaps::Tag>) };
      inline RouteMaps& setTag(const vector<RouteMaps::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline RouteMaps& setTag(vector<RouteMaps::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
      inline RouteMaps& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The time when the route map was created.
      // 
      // The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mmZ` format. The time is displayed in UTC.
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ssZ
      shared_ptr<string> creationTime_ {};
      // The description of the route map.
      shared_ptr<string> description_ {};
      // The direction of the route map. Valid values: 
      // - Inbound: inbound.
      // - Outbound: outbound.
      shared_ptr<string> direction_ {};
      // The name of the route map.
      shared_ptr<string> name_ {};
      // The priority of the route map. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the route map.
      shared_ptr<string> routeMapId_ {};
      // The status of the route map. Valid values:
      // 
      // - **Creating**: The route map is being created.
      // - **Updating**: The route map is being updated.
      // - **Active**: The route map is available.
      // - **Deleting**: The route map is being deleted.
      shared_ptr<string> status_ {};
      // The list of tags.
      shared_ptr<vector<RouteMaps::Tag>> tag_ {};
      // The version number of the route map configuration.
      // The version number increases each time the route map and its associated route map rules are modified.
      shared_ptr<int32_t> version_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->routeMaps_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListRouteMapsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRouteMapsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRouteMapsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeMaps Field Functions 
    bool hasRouteMaps() const { return this->routeMaps_ != nullptr;};
    void deleteRouteMaps() { this->routeMaps_ = nullptr;};
    inline const vector<ListRouteMapsResponseBody::RouteMaps> & getRouteMaps() const { DARABONBA_PTR_GET_CONST(routeMaps_, vector<ListRouteMapsResponseBody::RouteMaps>) };
    inline vector<ListRouteMapsResponseBody::RouteMaps> getRouteMaps() { DARABONBA_PTR_GET(routeMaps_, vector<ListRouteMapsResponseBody::RouteMaps>) };
    inline ListRouteMapsResponseBody& setRouteMaps(const vector<ListRouteMapsResponseBody::RouteMaps> & routeMaps) { DARABONBA_PTR_SET_VALUE(routeMaps_, routeMaps) };
    inline ListRouteMapsResponseBody& setRouteMaps(vector<ListRouteMapsResponseBody::RouteMaps> && routeMaps) { DARABONBA_PTR_SET_RVALUE(routeMaps_, routeMaps) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListRouteMapsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on each page. Default value: **20**.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. Valid values:
    // 
    // - If **NextToken** is empty, no next query is available.
    // - If **NextToken** returns a value, the value is the token for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the route maps.
    shared_ptr<vector<ListRouteMapsResponseBody::RouteMaps>> routeMaps_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
