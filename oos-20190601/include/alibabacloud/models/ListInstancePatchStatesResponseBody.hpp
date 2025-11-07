// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEPATCHSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEPATCHSTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancePatchStatesResponseBodyInstancePatchStates.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListInstancePatchStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancePatchStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstancePatchStates, instancePatchStates_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancePatchStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstancePatchStates, instancePatchStates_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListInstancePatchStatesResponseBody() = default ;
    ListInstancePatchStatesResponseBody(const ListInstancePatchStatesResponseBody &) = default ;
    ListInstancePatchStatesResponseBody(ListInstancePatchStatesResponseBody &&) = default ;
    ListInstancePatchStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancePatchStatesResponseBody() = default ;
    ListInstancePatchStatesResponseBody& operator=(const ListInstancePatchStatesResponseBody &) = default ;
    ListInstancePatchStatesResponseBody& operator=(ListInstancePatchStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instancePatchStates_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // instancePatchStates Field Functions 
    bool hasInstancePatchStates() const { return this->instancePatchStates_ != nullptr;};
    void deleteInstancePatchStates() { this->instancePatchStates_ = nullptr;};
    inline const vector<ListInstancePatchStatesResponseBodyInstancePatchStates> & instancePatchStates() const { DARABONBA_PTR_GET_CONST(instancePatchStates_, vector<ListInstancePatchStatesResponseBodyInstancePatchStates>) };
    inline vector<ListInstancePatchStatesResponseBodyInstancePatchStates> instancePatchStates() { DARABONBA_PTR_GET(instancePatchStates_, vector<ListInstancePatchStatesResponseBodyInstancePatchStates>) };
    inline ListInstancePatchStatesResponseBody& setInstancePatchStates(const vector<ListInstancePatchStatesResponseBodyInstancePatchStates> & instancePatchStates) { DARABONBA_PTR_SET_VALUE(instancePatchStates_, instancePatchStates) };
    inline ListInstancePatchStatesResponseBody& setInstancePatchStates(vector<ListInstancePatchStatesResponseBodyInstancePatchStates> && instancePatchStates) { DARABONBA_PTR_SET_RVALUE(instancePatchStates_, instancePatchStates) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInstancePatchStatesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInstancePatchStatesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListInstancePatchStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of patches of the instance.
    std::shared_ptr<vector<ListInstancePatchStatesResponseBodyInstancePatchStates>> instancePatchStates_ = nullptr;
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
