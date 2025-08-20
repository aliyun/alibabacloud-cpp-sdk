// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRIVATEACCESSTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrivateAccessTagsResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListPrivateAccessTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrivateAccessTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrivateAccessTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
    };
    ListPrivateAccessTagsResponseBody() = default ;
    ListPrivateAccessTagsResponseBody(const ListPrivateAccessTagsResponseBody &) = default ;
    ListPrivateAccessTagsResponseBody(ListPrivateAccessTagsResponseBody &&) = default ;
    ListPrivateAccessTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrivateAccessTagsResponseBody() = default ;
    ListPrivateAccessTagsResponseBody& operator=(const ListPrivateAccessTagsResponseBody &) = default ;
    ListPrivateAccessTagsResponseBody& operator=(ListPrivateAccessTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->tags_ != nullptr && this->totalNum_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrivateAccessTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListPrivateAccessTagsResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListPrivateAccessTagsResponseBodyTags>) };
    inline vector<ListPrivateAccessTagsResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListPrivateAccessTagsResponseBodyTags>) };
    inline ListPrivateAccessTagsResponseBody& setTags(const vector<ListPrivateAccessTagsResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListPrivateAccessTagsResponseBody& setTags(vector<ListPrivateAccessTagsResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // totalNum Field Functions 
    bool hasTotalNum() const { return this->totalNum_ != nullptr;};
    void deleteTotalNum() { this->totalNum_ = nullptr;};
    inline int32_t totalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
    inline ListPrivateAccessTagsResponseBody& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The internal access tags.
    std::shared_ptr<vector<ListPrivateAccessTagsResponseBodyTags>> tags_ = nullptr;
    // The total number of internal access tags.
    std::shared_ptr<int32_t> totalNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
