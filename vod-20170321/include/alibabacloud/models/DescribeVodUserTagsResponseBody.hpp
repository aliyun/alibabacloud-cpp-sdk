// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserTagsResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeVodUserTagsResponseBody() = default ;
    DescribeVodUserTagsResponseBody(const DescribeVodUserTagsResponseBody &) = default ;
    DescribeVodUserTagsResponseBody(DescribeVodUserTagsResponseBody &&) = default ;
    DescribeVodUserTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserTagsResponseBody() = default ;
    DescribeVodUserTagsResponseBody& operator=(const DescribeVodUserTagsResponseBody &) = default ;
    DescribeVodUserTagsResponseBody& operator=(DescribeVodUserTagsResponseBody &&) = default ;
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
    inline DescribeVodUserTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeVodUserTagsResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeVodUserTagsResponseBodyTags>) };
    inline vector<DescribeVodUserTagsResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeVodUserTagsResponseBodyTags>) };
    inline DescribeVodUserTagsResponseBody& setTags(const vector<DescribeVodUserTagsResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeVodUserTagsResponseBody& setTags(vector<DescribeVodUserTagsResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeVodUserTagsResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
