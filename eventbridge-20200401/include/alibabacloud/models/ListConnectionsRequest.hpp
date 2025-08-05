// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListConnectionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionNamePrefix, connectionNamePrefix_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionNamePrefix, connectionNamePrefix_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListConnectionsRequest() = default ;
    ListConnectionsRequest(const ListConnectionsRequest &) = default ;
    ListConnectionsRequest(ListConnectionsRequest &&) = default ;
    ListConnectionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectionsRequest() = default ;
    ListConnectionsRequest& operator=(const ListConnectionsRequest &) = default ;
    ListConnectionsRequest& operator=(ListConnectionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionNamePrefix_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // connectionNamePrefix Field Functions 
    bool hasConnectionNamePrefix() const { return this->connectionNamePrefix_ != nullptr;};
    void deleteConnectionNamePrefix() { this->connectionNamePrefix_ = nullptr;};
    inline string connectionNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(connectionNamePrefix_, "") };
    inline ListConnectionsRequest& setConnectionNamePrefix(string connectionNamePrefix) { DARABONBA_PTR_SET_VALUE(connectionNamePrefix_, connectionNamePrefix) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListConnectionsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConnectionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The key word that you specify to query connections. Connections can be queried by prefixes.
    std::shared_ptr<string> connectionNamePrefix_ = nullptr;
    // The maximum number of entries to be returned in a single call. You can use this parameter and the NextToken parameter to implement paging.
    // 
    // *   Default value: 10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // If you set the Limit parameter and excess return values exist, this parameter is returned.
    // 
    // *   Default value: 0.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
