// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERVIDEORESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterVideoResourcesResponseBodyVideoResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterVideoResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterVideoResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
      DARABONBA_PTR_TO_JSON(VideoResources, videoResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterVideoResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
      DARABONBA_PTR_FROM_JSON(VideoResources, videoResources_);
    };
    DescribeCasterVideoResourcesResponseBody() = default ;
    DescribeCasterVideoResourcesResponseBody(const DescribeCasterVideoResourcesResponseBody &) = default ;
    DescribeCasterVideoResourcesResponseBody(DescribeCasterVideoResourcesResponseBody &&) = default ;
    DescribeCasterVideoResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterVideoResourcesResponseBody() = default ;
    DescribeCasterVideoResourcesResponseBody& operator=(const DescribeCasterVideoResourcesResponseBody &) = default ;
    DescribeCasterVideoResourcesResponseBody& operator=(DescribeCasterVideoResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->total_ == nullptr && return this->videoResources_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCasterVideoResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline DescribeCasterVideoResourcesResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    // videoResources Field Functions 
    bool hasVideoResources() const { return this->videoResources_ != nullptr;};
    void deleteVideoResources() { this->videoResources_ = nullptr;};
    inline const DescribeCasterVideoResourcesResponseBodyVideoResources & videoResources() const { DARABONBA_PTR_GET_CONST(videoResources_, DescribeCasterVideoResourcesResponseBodyVideoResources) };
    inline DescribeCasterVideoResourcesResponseBodyVideoResources videoResources() { DARABONBA_PTR_GET(videoResources_, DescribeCasterVideoResourcesResponseBodyVideoResources) };
    inline DescribeCasterVideoResourcesResponseBody& setVideoResources(const DescribeCasterVideoResourcesResponseBodyVideoResources & videoResources) { DARABONBA_PTR_SET_VALUE(videoResources_, videoResources) };
    inline DescribeCasterVideoResourcesResponseBody& setVideoResources(DescribeCasterVideoResourcesResponseBodyVideoResources && videoResources) { DARABONBA_PTR_SET_RVALUE(videoResources_, videoResources) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> total_ = nullptr;
    // The input sources.
    std::shared_ptr<DescribeCasterVideoResourcesResponseBodyVideoResources> videoResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
