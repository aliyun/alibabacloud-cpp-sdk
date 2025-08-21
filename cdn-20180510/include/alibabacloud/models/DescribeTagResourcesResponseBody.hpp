// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagResourcesResponseBodyTagResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    DescribeTagResourcesResponseBody() = default ;
    DescribeTagResourcesResponseBody(const DescribeTagResourcesResponseBody &) = default ;
    DescribeTagResourcesResponseBody(DescribeTagResourcesResponseBody &&) = default ;
    DescribeTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagResourcesResponseBody() = default ;
    DescribeTagResourcesResponseBody& operator=(const DescribeTagResourcesResponseBody &) = default ;
    DescribeTagResourcesResponseBody& operator=(DescribeTagResourcesResponseBody &&) = default ;
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
    inline DescribeTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const vector<DescribeTagResourcesResponseBodyTagResources> & tagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, vector<DescribeTagResourcesResponseBodyTagResources>) };
    inline vector<DescribeTagResourcesResponseBodyTagResources> tagResources() { DARABONBA_PTR_GET(tagResources_, vector<DescribeTagResourcesResponseBodyTagResources>) };
    inline DescribeTagResourcesResponseBody& setTagResources(const vector<DescribeTagResourcesResponseBodyTagResources> & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline DescribeTagResourcesResponseBody& setTagResources(vector<DescribeTagResourcesResponseBodyTagResources> && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tags that are attached to the specified resource.
    std::shared_ptr<vector<DescribeTagResourcesResponseBodyTagResources>> tagResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
