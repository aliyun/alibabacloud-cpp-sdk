// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXCHANGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXCHANGESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListExchangesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExchangesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(VirtualHost, virtualHost_);
    };
    friend void from_json(const Darabonba::Json& j, ListExchangesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(VirtualHost, virtualHost_);
    };
    ListExchangesRequest() = default ;
    ListExchangesRequest(const ListExchangesRequest &) = default ;
    ListExchangesRequest(ListExchangesRequest &&) = default ;
    ListExchangesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExchangesRequest() = default ;
    ListExchangesRequest& operator=(const ListExchangesRequest &) = default ;
    ListExchangesRequest& operator=(ListExchangesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->virtualHost_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListExchangesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListExchangesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListExchangesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // virtualHost Field Functions 
    bool hasVirtualHost() const { return this->virtualHost_ != nullptr;};
    void deleteVirtualHost() { this->virtualHost_ = nullptr;};
    inline string virtualHost() const { DARABONBA_PTR_GET_DEFAULT(virtualHost_, "") };
    inline ListExchangesRequest& setVirtualHost(string virtualHost) { DARABONBA_PTR_SET_VALUE(virtualHost_, virtualHost) };


  protected:
    // The ID of the ApsaraMQ for RabbitMQ instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum number of entries to return. Valid values: **1 to 100**
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If you call this operation for the first time or a next query is not required, leave this parameter empty.
    // *   If a next query is to be sent, set the value to the value of `NextToken` that is returned from the previous request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The vhost name.
    // 
    // This parameter is required.
    std::shared_ptr<string> virtualHost_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
