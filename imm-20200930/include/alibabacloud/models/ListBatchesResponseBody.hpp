// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBATCHESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBATCHESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DataIngestion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListBatchesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBatchesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Batches, batches_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListBatchesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Batches, batches_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListBatchesResponseBody() = default ;
    ListBatchesResponseBody(const ListBatchesResponseBody &) = default ;
    ListBatchesResponseBody(ListBatchesResponseBody &&) = default ;
    ListBatchesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBatchesResponseBody() = default ;
    ListBatchesResponseBody& operator=(const ListBatchesResponseBody &) = default ;
    ListBatchesResponseBody& operator=(ListBatchesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batches_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // batches Field Functions 
    bool hasBatches() const { return this->batches_ != nullptr;};
    void deleteBatches() { this->batches_ = nullptr;};
    inline const vector<DataIngestion> & batches() const { DARABONBA_PTR_GET_CONST(batches_, vector<DataIngestion>) };
    inline vector<DataIngestion> batches() { DARABONBA_PTR_GET(batches_, vector<DataIngestion>) };
    inline ListBatchesResponseBody& setBatches(const vector<DataIngestion> & batches) { DARABONBA_PTR_SET_VALUE(batches_, batches) };
    inline ListBatchesResponseBody& setBatches(vector<DataIngestion> && batches) { DARABONBA_PTR_SET_RVALUE(batches_, batches) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBatchesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBatchesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The batch processing tasks.
    std::shared_ptr<vector<DataIngestion>> batches_ = nullptr;
    // The pagination token.
    // 
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter. The next call to the operation returns results lexicographically after the NextToken parameter value.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
