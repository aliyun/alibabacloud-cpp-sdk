// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUZZYQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FUZZYQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FuzzyQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuzzyQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalHits, totalHits_);
    };
    friend void from_json(const Darabonba::Json& j, FuzzyQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalHits, totalHits_);
    };
    FuzzyQueryResponseBody() = default ;
    FuzzyQueryResponseBody(const FuzzyQueryResponseBody &) = default ;
    FuzzyQueryResponseBody(FuzzyQueryResponseBody &&) = default ;
    FuzzyQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuzzyQueryResponseBody() = default ;
    FuzzyQueryResponseBody& operator=(const FuzzyQueryResponseBody &) = default ;
    FuzzyQueryResponseBody& operator=(FuzzyQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->files_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalHits_ != nullptr; };
    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<File> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<File>) };
    inline vector<File> files() { DARABONBA_PTR_GET(files_, vector<File>) };
    inline FuzzyQueryResponseBody& setFiles(const vector<File> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline FuzzyQueryResponseBody& setFiles(vector<File> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline FuzzyQueryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FuzzyQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalHits Field Functions 
    bool hasTotalHits() const { return this->totalHits_ != nullptr;};
    void deleteTotalHits() { this->totalHits_ = nullptr;};
    inline int64_t totalHits() const { DARABONBA_PTR_GET_DEFAULT(totalHits_, 0L) };
    inline FuzzyQueryResponseBody& setTotalHits(int64_t totalHits) { DARABONBA_PTR_SET_VALUE(totalHits_, totalHits) };


  protected:
    // The files.
    std::shared_ptr<vector<File>> files_ = nullptr;
    // A pagination token.
    // 
    // It can be used in the next request to retrieve a new page of results.
    // 
    // If NextToken is empty, no next page exists.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of hits.
    std::shared_ptr<int64_t> totalHits_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
