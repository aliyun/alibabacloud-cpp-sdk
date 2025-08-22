// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserTagsResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeDcdnUserTagsResponseBody() = default ;
    DescribeDcdnUserTagsResponseBody(const DescribeDcdnUserTagsResponseBody &) = default ;
    DescribeDcdnUserTagsResponseBody(DescribeDcdnUserTagsResponseBody &&) = default ;
    DescribeDcdnUserTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserTagsResponseBody() = default ;
    DescribeDcdnUserTagsResponseBody& operator=(const DescribeDcdnUserTagsResponseBody &) = default ;
    DescribeDcdnUserTagsResponseBody& operator=(DescribeDcdnUserTagsResponseBody &&) = default ;
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
    inline DescribeDcdnUserTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeDcdnUserTagsResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeDcdnUserTagsResponseBodyTags>) };
    inline vector<DescribeDcdnUserTagsResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeDcdnUserTagsResponseBodyTags>) };
    inline DescribeDcdnUserTagsResponseBody& setTags(const vector<DescribeDcdnUserTagsResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDcdnUserTagsResponseBody& setTags(vector<DescribeDcdnUserTagsResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tag.
    std::shared_ptr<vector<DescribeDcdnUserTagsResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
