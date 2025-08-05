// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDESTINATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListApiDestinationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDestinationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiDestinationNamePrefix, apiDestinationNamePrefix_);
      DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDestinationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiDestinationNamePrefix, apiDestinationNamePrefix_);
      DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListApiDestinationsRequest() = default ;
    ListApiDestinationsRequest(const ListApiDestinationsRequest &) = default ;
    ListApiDestinationsRequest(ListApiDestinationsRequest &&) = default ;
    ListApiDestinationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDestinationsRequest() = default ;
    ListApiDestinationsRequest& operator=(const ListApiDestinationsRequest &) = default ;
    ListApiDestinationsRequest& operator=(ListApiDestinationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiDestinationNamePrefix_ != nullptr
        && this->connectionName_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr; };
    // apiDestinationNamePrefix Field Functions 
    bool hasApiDestinationNamePrefix() const { return this->apiDestinationNamePrefix_ != nullptr;};
    void deleteApiDestinationNamePrefix() { this->apiDestinationNamePrefix_ = nullptr;};
    inline string apiDestinationNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(apiDestinationNamePrefix_, "") };
    inline ListApiDestinationsRequest& setApiDestinationNamePrefix(string apiDestinationNamePrefix) { DARABONBA_PTR_SET_VALUE(apiDestinationNamePrefix_, apiDestinationNamePrefix) };


    // connectionName Field Functions 
    bool hasConnectionName() const { return this->connectionName_ != nullptr;};
    void deleteConnectionName() { this->connectionName_ = nullptr;};
    inline string connectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
    inline ListApiDestinationsRequest& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListApiDestinationsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListApiDestinationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The prefix of the API destination name.
    std::shared_ptr<string> apiDestinationNamePrefix_ = nullptr;
    // The connection name.
    std::shared_ptr<string> connectionName_ = nullptr;
    // The maximum number of entries to be returned in a call. You can use this parameter and NextToken to implement paging.
    // 
    // *   Default value: 10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // If you set Limit and excess return values exist, this parameter is returned.
    // 
    // *   Default value: 0.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
