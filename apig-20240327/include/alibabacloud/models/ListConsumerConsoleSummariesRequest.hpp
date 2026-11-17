// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERCONSOLESUMMARIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERCONSOLESUMMARIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListConsumerConsoleSummariesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerConsoleSummariesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filter, filter_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nameLike, nameLike_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerConsoleSummariesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filter, filter_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nameLike, nameLike_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
    };
    ListConsumerConsoleSummariesRequest() = default ;
    ListConsumerConsoleSummariesRequest(const ListConsumerConsoleSummariesRequest &) = default ;
    ListConsumerConsoleSummariesRequest(ListConsumerConsoleSummariesRequest &&) = default ;
    ListConsumerConsoleSummariesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerConsoleSummariesRequest() = default ;
    ListConsumerConsoleSummariesRequest& operator=(const ListConsumerConsoleSummariesRequest &) = default ;
    ListConsumerConsoleSummariesRequest& operator=(ListConsumerConsoleSummariesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->gatewayId_ == nullptr && this->maxResults_ == nullptr && this->nameLike_ == nullptr && this->nextToken_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline ListConsumerConsoleSummariesRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline ListConsumerConsoleSummariesRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListConsumerConsoleSummariesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nameLike Field Functions 
    bool hasNameLike() const { return this->nameLike_ != nullptr;};
    void deleteNameLike() { this->nameLike_ = nullptr;};
    inline string getNameLike() const { DARABONBA_PTR_GET_DEFAULT(nameLike_, "") };
    inline ListConsumerConsoleSummariesRequest& setNameLike(string nameLike) { DARABONBA_PTR_SET_VALUE(nameLike_, nameLike) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListConsumerConsoleSummariesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The filter condition. Valid values: all, granted, and disabled. If this parameter is omitted, all is used.
    shared_ptr<string> filter_ {};
    // The target AI gateway instance ID. Consumer identities are shared across the region, and authorizations are isolated by instance.
    // 
    // This parameter is required.
    shared_ptr<string> gatewayId_ {};
    // The maximum number of entries to return per page. Valid values: 1 to 100. This parameter is required. Token-based pagination is used instead of pageNumber and pageSize.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxResults_ {};
    // The fuzzy search keyword for the consumer name. This parameter does not change the total counts.
    shared_ptr<string> nameLike_ {};
    // The pagination token returned from the previous page. Omit this parameter for the first page. For the last page, this value is empty or omitted.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
