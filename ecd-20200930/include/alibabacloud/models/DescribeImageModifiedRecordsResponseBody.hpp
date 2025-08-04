// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODIFIEDRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEMODIFIEDRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageModifiedRecordsResponseBodyImageModifiedRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeImageModifiedRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageModifiedRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImageModifiedRecords, imageModifiedRecords_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageModifiedRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageModifiedRecords, imageModifiedRecords_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageModifiedRecordsResponseBody() = default ;
    DescribeImageModifiedRecordsResponseBody(const DescribeImageModifiedRecordsResponseBody &) = default ;
    DescribeImageModifiedRecordsResponseBody(DescribeImageModifiedRecordsResponseBody &&) = default ;
    DescribeImageModifiedRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageModifiedRecordsResponseBody() = default ;
    DescribeImageModifiedRecordsResponseBody& operator=(const DescribeImageModifiedRecordsResponseBody &) = default ;
    DescribeImageModifiedRecordsResponseBody& operator=(DescribeImageModifiedRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageModifiedRecords_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // imageModifiedRecords Field Functions 
    bool hasImageModifiedRecords() const { return this->imageModifiedRecords_ != nullptr;};
    void deleteImageModifiedRecords() { this->imageModifiedRecords_ = nullptr;};
    inline const vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords> & imageModifiedRecords() const { DARABONBA_PTR_GET_CONST(imageModifiedRecords_, vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords>) };
    inline vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords> imageModifiedRecords() { DARABONBA_PTR_GET(imageModifiedRecords_, vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords>) };
    inline DescribeImageModifiedRecordsResponseBody& setImageModifiedRecords(const vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords> & imageModifiedRecords) { DARABONBA_PTR_SET_VALUE(imageModifiedRecords_, imageModifiedRecords) };
    inline DescribeImageModifiedRecordsResponseBody& setImageModifiedRecords(vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords> && imageModifiedRecords) { DARABONBA_PTR_SET_RVALUE(imageModifiedRecords_, imageModifiedRecords) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImageModifiedRecordsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageModifiedRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageModifiedRecordsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The image change records.
    std::shared_ptr<vector<DescribeImageModifiedRecordsResponseBodyImageModifiedRecords>> imageModifiedRecords_ = nullptr;
    // If the NextToken parameter is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of image modification records.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
