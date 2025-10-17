// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeImagePipelinesResponseBodyImagePipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ImagePipeline, imagePipeline_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ImagePipeline, imagePipeline_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImagePipelinesResponseBody() = default ;
    DescribeImagePipelinesResponseBody(const DescribeImagePipelinesResponseBody &) = default ;
    DescribeImagePipelinesResponseBody(DescribeImagePipelinesResponseBody &&) = default ;
    DescribeImagePipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBody() = default ;
    DescribeImagePipelinesResponseBody& operator=(const DescribeImagePipelinesResponseBody &) = default ;
    DescribeImagePipelinesResponseBody& operator=(DescribeImagePipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imagePipeline_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // imagePipeline Field Functions 
    bool hasImagePipeline() const { return this->imagePipeline_ != nullptr;};
    void deleteImagePipeline() { this->imagePipeline_ = nullptr;};
    inline const DescribeImagePipelinesResponseBodyImagePipeline & imagePipeline() const { DARABONBA_PTR_GET_CONST(imagePipeline_, DescribeImagePipelinesResponseBodyImagePipeline) };
    inline DescribeImagePipelinesResponseBodyImagePipeline imagePipeline() { DARABONBA_PTR_GET(imagePipeline_, DescribeImagePipelinesResponseBodyImagePipeline) };
    inline DescribeImagePipelinesResponseBody& setImagePipeline(const DescribeImagePipelinesResponseBodyImagePipeline & imagePipeline) { DARABONBA_PTR_SET_VALUE(imagePipeline_, imagePipeline) };
    inline DescribeImagePipelinesResponseBody& setImagePipeline(DescribeImagePipelinesResponseBodyImagePipeline && imagePipeline) { DARABONBA_PTR_SET_RVALUE(imagePipeline_, imagePipeline) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeImagePipelinesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeImagePipelinesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImagePipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImagePipelinesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the image templates.
    std::shared_ptr<DescribeImagePipelinesResponseBodyImagePipeline> imagePipeline_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. For information about how to use the return value, see the "Usage notes" section of this topic.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of image templates returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
