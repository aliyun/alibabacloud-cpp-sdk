// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVEINPUTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMediaLiveInputsResponseBodyInputs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveInputsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveInputsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Inputs, inputs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveInputsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Inputs, inputs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListMediaLiveInputsResponseBody() = default ;
    ListMediaLiveInputsResponseBody(const ListMediaLiveInputsResponseBody &) = default ;
    ListMediaLiveInputsResponseBody(ListMediaLiveInputsResponseBody &&) = default ;
    ListMediaLiveInputsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveInputsResponseBody() = default ;
    ListMediaLiveInputsResponseBody& operator=(const ListMediaLiveInputsResponseBody &) = default ;
    ListMediaLiveInputsResponseBody& operator=(ListMediaLiveInputsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inputs_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // inputs Field Functions 
    bool hasInputs() const { return this->inputs_ != nullptr;};
    void deleteInputs() { this->inputs_ = nullptr;};
    inline const vector<ListMediaLiveInputsResponseBodyInputs> & inputs() const { DARABONBA_PTR_GET_CONST(inputs_, vector<ListMediaLiveInputsResponseBodyInputs>) };
    inline vector<ListMediaLiveInputsResponseBodyInputs> inputs() { DARABONBA_PTR_GET(inputs_, vector<ListMediaLiveInputsResponseBodyInputs>) };
    inline ListMediaLiveInputsResponseBody& setInputs(const vector<ListMediaLiveInputsResponseBodyInputs> & inputs) { DARABONBA_PTR_SET_VALUE(inputs_, inputs) };
    inline ListMediaLiveInputsResponseBody& setInputs(vector<ListMediaLiveInputsResponseBodyInputs> && inputs) { DARABONBA_PTR_SET_RVALUE(inputs_, inputs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMediaLiveInputsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMediaLiveInputsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMediaLiveInputsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMediaLiveInputsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The inputs.
    std::shared_ptr<vector<ListMediaLiveInputsResponseBodyInputs>> inputs_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
