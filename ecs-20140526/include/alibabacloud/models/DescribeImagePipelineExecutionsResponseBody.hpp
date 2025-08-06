// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINEEXECUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelineExecutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelineExecutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipelineExecution, imagePipelineExecution_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelineExecutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipelineExecution, imagePipelineExecution_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImagePipelineExecutionsResponseBody() = default ;
    DescribeImagePipelineExecutionsResponseBody(const DescribeImagePipelineExecutionsResponseBody &) = default ;
    DescribeImagePipelineExecutionsResponseBody(DescribeImagePipelineExecutionsResponseBody &&) = default ;
    DescribeImagePipelineExecutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelineExecutionsResponseBody() = default ;
    DescribeImagePipelineExecutionsResponseBody& operator=(const DescribeImagePipelineExecutionsResponseBody &) = default ;
    DescribeImagePipelineExecutionsResponseBody& operator=(DescribeImagePipelineExecutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imagePipelineExecution_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // imagePipelineExecution Field Functions 
    bool hasImagePipelineExecution() const { return this->imagePipelineExecution_ != nullptr;};
    void deleteImagePipelineExecution() { this->imagePipelineExecution_ = nullptr;};
    inline const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution & imagePipelineExecution() const { DARABONBA_PTR_GET_CONST(imagePipelineExecution_, DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution) };
    inline DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution imagePipelineExecution() { DARABONBA_PTR_GET(imagePipelineExecution_, DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution) };
    inline DescribeImagePipelineExecutionsResponseBody& setImagePipelineExecution(const DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution & imagePipelineExecution) { DARABONBA_PTR_SET_VALUE(imagePipelineExecution_, imagePipelineExecution) };
    inline DescribeImagePipelineExecutionsResponseBody& setImagePipelineExecution(DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution && imagePipelineExecution) { DARABONBA_PTR_SET_RVALUE(imagePipelineExecution_, imagePipelineExecution) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImagePipelineExecutionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImagePipelineExecutionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagePipelineExecutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImagePipelineExecutionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details of the image creation tasks.
    std::shared_ptr<DescribeImagePipelineExecutionsResponseBodyImagePipelineExecution> imagePipelineExecution_ = nullptr;
    // The maximum number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists. For information about how to use the returned value, see the "Usage notes" section in this topic.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned image components.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
