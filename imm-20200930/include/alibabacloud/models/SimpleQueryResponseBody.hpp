// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SimpleQueryResponseBodyAggregations.hpp>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalHits, totalHits_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalHits, totalHits_);
    };
    SimpleQueryResponseBody() = default ;
    SimpleQueryResponseBody(const SimpleQueryResponseBody &) = default ;
    SimpleQueryResponseBody(SimpleQueryResponseBody &&) = default ;
    SimpleQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryResponseBody() = default ;
    SimpleQueryResponseBody& operator=(const SimpleQueryResponseBody &) = default ;
    SimpleQueryResponseBody& operator=(SimpleQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregations_ == nullptr
        && return this->files_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalHits_ == nullptr; };
    // aggregations Field Functions 
    bool hasAggregations() const { return this->aggregations_ != nullptr;};
    void deleteAggregations() { this->aggregations_ = nullptr;};
    inline const vector<SimpleQueryResponseBodyAggregations> & aggregations() const { DARABONBA_PTR_GET_CONST(aggregations_, vector<SimpleQueryResponseBodyAggregations>) };
    inline vector<SimpleQueryResponseBodyAggregations> aggregations() { DARABONBA_PTR_GET(aggregations_, vector<SimpleQueryResponseBodyAggregations>) };
    inline SimpleQueryResponseBody& setAggregations(const vector<SimpleQueryResponseBodyAggregations> & aggregations) { DARABONBA_PTR_SET_VALUE(aggregations_, aggregations) };
    inline SimpleQueryResponseBody& setAggregations(vector<SimpleQueryResponseBodyAggregations> && aggregations) { DARABONBA_PTR_SET_RVALUE(aggregations_, aggregations) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<File> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<File>) };
    inline vector<File> files() { DARABONBA_PTR_GET(files_, vector<File>) };
    inline SimpleQueryResponseBody& setFiles(const vector<File> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SimpleQueryResponseBody& setFiles(vector<File> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SimpleQueryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SimpleQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalHits Field Functions 
    bool hasTotalHits() const { return this->totalHits_ != nullptr;};
    void deleteTotalHits() { this->totalHits_ = nullptr;};
    inline int64_t totalHits() const { DARABONBA_PTR_GET_DEFAULT(totalHits_, 0L) };
    inline SimpleQueryResponseBody& setTotalHits(int64_t totalHits) { DARABONBA_PTR_SET_VALUE(totalHits_, totalHits) };


  protected:
    // The aggregations. This parameter is returned only when the value of the Aggregations request parameter is not empty.
    std::shared_ptr<vector<SimpleQueryResponseBodyAggregations>> aggregations_ = nullptr;
    // The files. This parameter is returned only when the value of the Aggregations request parameter is empty.
    std::shared_ptr<vector<File>> files_ = nullptr;
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter.
    // 
    // It can be used in the next request to retrieve a new page of results.
    // 
    // If NextToken is empty, no next page exists.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of total hits.
    std::shared_ptr<int64_t> totalHits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
