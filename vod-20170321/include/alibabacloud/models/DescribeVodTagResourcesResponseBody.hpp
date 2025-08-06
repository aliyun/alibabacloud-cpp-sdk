// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodTagResourcesResponseBodyTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    DescribeVodTagResourcesResponseBody() = default ;
    DescribeVodTagResourcesResponseBody(const DescribeVodTagResourcesResponseBody &) = default ;
    DescribeVodTagResourcesResponseBody(DescribeVodTagResourcesResponseBody &&) = default ;
    DescribeVodTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTagResourcesResponseBody() = default ;
    DescribeVodTagResourcesResponseBody& operator=(const DescribeVodTagResourcesResponseBody &) = default ;
    DescribeVodTagResourcesResponseBody& operator=(DescribeVodTagResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tagResources_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<DescribeVodTagResourcesResponseBodyTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<DescribeVodTagResourcesResponseBodyTagResources>) };
    inline vector<DescribeVodTagResourcesResponseBodyTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<DescribeVodTagResourcesResponseBodyTagResources>) };
    inline DescribeVodTagResourcesResponseBody& setTagResources(const vector<DescribeVodTagResourcesResponseBodyTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline DescribeVodTagResourcesResponseBody& setTagResources(vector<DescribeVodTagResourcesResponseBodyTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeVodTagResourcesResponseBodyTagResources>> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
