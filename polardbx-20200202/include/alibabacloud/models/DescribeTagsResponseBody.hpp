// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsResponseBodyTagInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
    };
    DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody(DescribeTagsResponseBody &&) = default ;
    DescribeTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody& operator=(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody& operator=(DescribeTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tagInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagInfos Field Functions 
    bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
    void deleteTagInfos() { this->tagInfos_ = nullptr;};
    inline const vector<DescribeTagsResponseBodyTagInfos> & tagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, vector<DescribeTagsResponseBodyTagInfos>) };
    inline vector<DescribeTagsResponseBodyTagInfos> tagInfos() { DARABONBA_PTR_GET(tagInfos_, vector<DescribeTagsResponseBodyTagInfos>) };
    inline DescribeTagsResponseBody& setTagInfos(const vector<DescribeTagsResponseBodyTagInfos> & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
    inline DescribeTagsResponseBody& setTagInfos(vector<DescribeTagsResponseBodyTagInfos> && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


  protected:
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeTagsResponseBodyTagInfos>> tagInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
