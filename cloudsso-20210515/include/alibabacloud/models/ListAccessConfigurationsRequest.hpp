// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSCONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class ListAccessConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StatusNotifications, statusNotifications_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StatusNotifications, statusNotifications_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAccessConfigurationsRequest() = default ;
    ListAccessConfigurationsRequest(const ListAccessConfigurationsRequest &) = default ;
    ListAccessConfigurationsRequest(ListAccessConfigurationsRequest &&) = default ;
    ListAccessConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessConfigurationsRequest() = default ;
    ListAccessConfigurationsRequest& operator=(const ListAccessConfigurationsRequest &) = default ;
    ListAccessConfigurationsRequest& operator=(ListAccessConfigurationsRequest &&) = default ;
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

    virtual bool empty() const override { return this->directoryId_ == nullptr
        && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->statusNotifications_ == nullptr && this->tags_ == nullptr; };
    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ListAccessConfigurationsRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListAccessConfigurationsRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessConfigurationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessConfigurationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // statusNotifications Field Functions 
    bool hasStatusNotifications() const { return this->statusNotifications_ != nullptr;};
    void deleteStatusNotifications() { this->statusNotifications_ = nullptr;};
    inline string getStatusNotifications() const { DARABONBA_PTR_GET_DEFAULT(statusNotifications_, "") };
    inline ListAccessConfigurationsRequest& setStatusNotifications(string statusNotifications) { DARABONBA_PTR_SET_VALUE(statusNotifications_, statusNotifications) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListAccessConfigurationsRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListAccessConfigurationsRequest::Tags>) };
    inline vector<ListAccessConfigurationsRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListAccessConfigurationsRequest::Tags>) };
    inline ListAccessConfigurationsRequest& setTags(const vector<ListAccessConfigurationsRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAccessConfigurationsRequest& setTags(vector<ListAccessConfigurationsRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The directory ID.
    shared_ptr<string> directoryId_ {};
    // The filter condition.
    // 
    // Format: <Attribute> <Operator> <Value>. The filter is case-insensitive. Currently, <Attribute> supports only AccessConfigurationName, and <Operator> supports only eq (Equals) and sw (Start With).
    // 
    // Example: Filter = "AccessConfigurationName sw test" queries all access configurations whose names start with test. Filter = "AccessConfigurationName eq TestAccessConfiguration" queries the access configuration named TestAccessConfiguration.
    shared_ptr<string> filter_ {};
    // The maximum number of entries per page.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next page of results. You do not need to specify `NextToken` for the first API call.
    // 
    // When you call this API operation for the first time, if the total number of results exceeds the `MaxResults` limit, the results are truncated and only `MaxResults` entries are returned. In this case, the `IsTruncated` parameter is set to `true` and a `NextToken` is returned. You can use the `NextToken` returned from the previous call to continue calling this API operation while keeping other request parameters unchanged to query the truncated results. You can repeat this process until `IsTruncated` is `false`, which indicates that all data has been retrieved.
    shared_ptr<string> nextToken_ {};
    // The status notification information, which is used as a filter condition for the query.
    // 
    // Valid values: ReprovisionRequired, which queries access configurations that need to be reprovisioned.
    shared_ptr<string> statusNotifications_ {};
    // The list of tags.
    shared_ptr<vector<ListAccessConfigurationsRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
