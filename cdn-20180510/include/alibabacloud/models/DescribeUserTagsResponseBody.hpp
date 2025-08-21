// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserTagsResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeUserTagsResponseBody() = default ;
    DescribeUserTagsResponseBody(const DescribeUserTagsResponseBody &) = default ;
    DescribeUserTagsResponseBody(DescribeUserTagsResponseBody &&) = default ;
    DescribeUserTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserTagsResponseBody() = default ;
    DescribeUserTagsResponseBody& operator=(const DescribeUserTagsResponseBody &) = default ;
    DescribeUserTagsResponseBody& operator=(DescribeUserTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tags_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeUserTagsResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeUserTagsResponseBodyTags>) };
    inline vector<DescribeUserTagsResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeUserTagsResponseBodyTags>) };
    inline DescribeUserTagsResponseBody& setTags(const vector<DescribeUserTagsResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeUserTagsResponseBody& setTags(vector<DescribeUserTagsResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeUserTagsResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
