// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAccountFactoryBaselineItemsResponseBodyBaselineItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselineItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselineItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselineItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountFactoryBaselineItemsResponseBody() = default ;
    ListAccountFactoryBaselineItemsResponseBody(const ListAccountFactoryBaselineItemsResponseBody &) = default ;
    ListAccountFactoryBaselineItemsResponseBody(ListAccountFactoryBaselineItemsResponseBody &&) = default ;
    ListAccountFactoryBaselineItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselineItemsResponseBody() = default ;
    ListAccountFactoryBaselineItemsResponseBody& operator=(const ListAccountFactoryBaselineItemsResponseBody &) = default ;
    ListAccountFactoryBaselineItemsResponseBody& operator=(ListAccountFactoryBaselineItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baselineItems_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems> & baselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems>) };
    inline vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems> baselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems>) };
    inline ListAccountFactoryBaselineItemsResponseBody& setBaselineItems(const vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline ListAccountFactoryBaselineItemsResponseBody& setBaselineItems(vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccountFactoryBaselineItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountFactoryBaselineItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baseline items.
    std::shared_ptr<vector<ListAccountFactoryBaselineItemsResponseBodyBaselineItems>> baselineItems_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
