// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTagsResponseBodyTagInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class ListTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagInfos, tagInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagInfos, tagInfos_);
    };
    ListTagsResponseBody() = default ;
    ListTagsResponseBody(const ListTagsResponseBody &) = default ;
    ListTagsResponseBody(ListTagsResponseBody &&) = default ;
    ListTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagsResponseBody() = default ;
    ListTagsResponseBody& operator=(const ListTagsResponseBody &) = default ;
    ListTagsResponseBody& operator=(ListTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tagInfos_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagInfos Field Functions 
    bool hasTagInfos() const { return this->tagInfos_ != nullptr;};
    void deleteTagInfos() { this->tagInfos_ = nullptr;};
    inline const ListTagsResponseBodyTagInfos & tagInfos() const { DARABONBA_PTR_GET_CONST(tagInfos_, ListTagsResponseBodyTagInfos) };
    inline ListTagsResponseBodyTagInfos tagInfos() { DARABONBA_PTR_GET(tagInfos_, ListTagsResponseBodyTagInfos) };
    inline ListTagsResponseBody& setTagInfos(const ListTagsResponseBodyTagInfos & tagInfos) { DARABONBA_PTR_SET_VALUE(tagInfos_, tagInfos) };
    inline ListTagsResponseBody& setTagInfos(ListTagsResponseBodyTagInfos && tagInfos) { DARABONBA_PTR_SET_RVALUE(tagInfos_, tagInfos) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<ListTagsResponseBodyTagInfos> tagInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
