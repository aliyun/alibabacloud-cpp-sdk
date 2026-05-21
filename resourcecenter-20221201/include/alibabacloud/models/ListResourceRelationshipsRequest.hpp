// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCERELATIONSHIPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListResourceRelationshipsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceRelationshipsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelatedResourceFilter, relatedResourceFilter_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceRelationshipsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelatedResourceFilter, relatedResourceFilter_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListResourceRelationshipsRequest() = default ;
    ListResourceRelationshipsRequest(const ListResourceRelationshipsRequest &) = default ;
    ListResourceRelationshipsRequest(ListResourceRelationshipsRequest &&) = default ;
    ListResourceRelationshipsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceRelationshipsRequest() = default ;
    ListResourceRelationshipsRequest& operator=(const ListResourceRelationshipsRequest &) = default ;
    ListResourceRelationshipsRequest& operator=(ListResourceRelationshipsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RelatedResourceFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelatedResourceFilter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RelatedResourceFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RelatedResourceFilter() = default ;
      RelatedResourceFilter(const RelatedResourceFilter &) = default ;
      RelatedResourceFilter(RelatedResourceFilter &&) = default ;
      RelatedResourceFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelatedResourceFilter() = default ;
      RelatedResourceFilter& operator=(const RelatedResourceFilter &) = default ;
      RelatedResourceFilter& operator=(RelatedResourceFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline RelatedResourceFilter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline RelatedResourceFilter& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline RelatedResourceFilter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline RelatedResourceFilter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The key of the filter condition. For more information, see `Supported filter parameters`.
      shared_ptr<string> key_ {};
      // The matching method.
      shared_ptr<string> matchType_ {};
      // The values of the filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->relatedResourceFilter_ == nullptr && this->resourceId_ == nullptr && this->resourceType_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceRelationshipsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceRelationshipsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListResourceRelationshipsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relatedResourceFilter Field Functions 
    bool hasRelatedResourceFilter() const { return this->relatedResourceFilter_ != nullptr;};
    void deleteRelatedResourceFilter() { this->relatedResourceFilter_ = nullptr;};
    inline const vector<ListResourceRelationshipsRequest::RelatedResourceFilter> & getRelatedResourceFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceFilter_, vector<ListResourceRelationshipsRequest::RelatedResourceFilter>) };
    inline vector<ListResourceRelationshipsRequest::RelatedResourceFilter> getRelatedResourceFilter() { DARABONBA_PTR_GET(relatedResourceFilter_, vector<ListResourceRelationshipsRequest::RelatedResourceFilter>) };
    inline ListResourceRelationshipsRequest& setRelatedResourceFilter(const vector<ListResourceRelationshipsRequest::RelatedResourceFilter> & relatedResourceFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceFilter_, relatedResourceFilter) };
    inline ListResourceRelationshipsRequest& setRelatedResourceFilter(vector<ListResourceRelationshipsRequest::RelatedResourceFilter> && relatedResourceFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceFilter_, relatedResourceFilter) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourceRelationshipsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceRelationshipsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 500.
    // 
    // Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The filter conditions for resources associated with the resource.
    shared_ptr<vector<ListResourceRelationshipsRequest::RelatedResourceFilter>> relatedResourceFilter_ {};
    // The ID of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The type of the resource.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
