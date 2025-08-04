// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecordingsResponseBodyRecordings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Recordings, recordings_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Recordings, recordings_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRecordingsResponseBody() = default ;
    DescribeRecordingsResponseBody(const DescribeRecordingsResponseBody &) = default ;
    DescribeRecordingsResponseBody(DescribeRecordingsResponseBody &&) = default ;
    DescribeRecordingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordingsResponseBody() = default ;
    DescribeRecordingsResponseBody& operator=(const DescribeRecordingsResponseBody &) = default ;
    DescribeRecordingsResponseBody& operator=(DescribeRecordingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->recordings_ != nullptr && this->requestId_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRecordingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recordings Field Functions 
    bool hasRecordings() const { return this->recordings_ != nullptr;};
    void deleteRecordings() { this->recordings_ = nullptr;};
    inline const vector<DescribeRecordingsResponseBodyRecordings> & recordings() const { DARABONBA_PTR_GET_CONST(recordings_, vector<DescribeRecordingsResponseBodyRecordings>) };
    inline vector<DescribeRecordingsResponseBodyRecordings> recordings() { DARABONBA_PTR_GET(recordings_, vector<DescribeRecordingsResponseBodyRecordings>) };
    inline DescribeRecordingsResponseBody& setRecordings(const vector<DescribeRecordingsResponseBodyRecordings> & recordings) { DARABONBA_PTR_SET_VALUE(recordings_, recordings) };
    inline DescribeRecordingsResponseBody& setRecordings(vector<DescribeRecordingsResponseBodyRecordings> && recordings) { DARABONBA_PTR_SET_RVALUE(recordings_, recordings) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecordingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The screen recording files.
    std::shared_ptr<vector<DescribeRecordingsResponseBodyRecordings>> recordings_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
