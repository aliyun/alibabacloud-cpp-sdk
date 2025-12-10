// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOGROUPINGREMEDIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAutoGroupingRemediationsResponseBodyRemediations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class ListAutoGroupingRemediationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoGroupingRemediationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Remediations, remediations_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoGroupingRemediationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Remediations, remediations_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAutoGroupingRemediationsResponseBody() = default ;
    ListAutoGroupingRemediationsResponseBody(const ListAutoGroupingRemediationsResponseBody &) = default ;
    ListAutoGroupingRemediationsResponseBody(ListAutoGroupingRemediationsResponseBody &&) = default ;
    ListAutoGroupingRemediationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoGroupingRemediationsResponseBody() = default ;
    ListAutoGroupingRemediationsResponseBody& operator=(const ListAutoGroupingRemediationsResponseBody &) = default ;
    ListAutoGroupingRemediationsResponseBody& operator=(ListAutoGroupingRemediationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->remediations_ == nullptr && return this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAutoGroupingRemediationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAutoGroupingRemediationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // remediations Field Functions 
    bool hasRemediations() const { return this->remediations_ != nullptr;};
    void deleteRemediations() { this->remediations_ = nullptr;};
    inline const vector<ListAutoGroupingRemediationsResponseBodyRemediations> & remediations() const { DARABONBA_PTR_GET_CONST(remediations_, vector<ListAutoGroupingRemediationsResponseBodyRemediations>) };
    inline vector<ListAutoGroupingRemediationsResponseBodyRemediations> remediations() { DARABONBA_PTR_GET(remediations_, vector<ListAutoGroupingRemediationsResponseBodyRemediations>) };
    inline ListAutoGroupingRemediationsResponseBody& setRemediations(const vector<ListAutoGroupingRemediationsResponseBodyRemediations> & remediations) { DARABONBA_PTR_SET_VALUE(remediations_, remediations) };
    inline ListAutoGroupingRemediationsResponseBody& setRemediations(vector<ListAutoGroupingRemediationsResponseBodyRemediations> && remediations) { DARABONBA_PTR_SET_RVALUE(remediations_, remediations) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoGroupingRemediationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListAutoGroupingRemediationsResponseBodyRemediations>> remediations_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
