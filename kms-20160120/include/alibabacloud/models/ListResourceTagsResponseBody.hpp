// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceTagsResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ListResourceTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListResourceTagsResponseBody() = default ;
    ListResourceTagsResponseBody(const ListResourceTagsResponseBody &) = default ;
    ListResourceTagsResponseBody(ListResourceTagsResponseBody &&) = default ;
    ListResourceTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTagsResponseBody() = default ;
    ListResourceTagsResponseBody& operator=(const ListResourceTagsResponseBody &) = default ;
    ListResourceTagsResponseBody& operator=(ListResourceTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->tags_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const ListResourceTagsResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, ListResourceTagsResponseBodyTags) };
    inline ListResourceTagsResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, ListResourceTagsResponseBodyTags) };
    inline ListResourceTagsResponseBody& setTags(const ListResourceTagsResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListResourceTagsResponseBody& setTags(ListResourceTagsResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tags of the CMK.
    std::shared_ptr<ListResourceTagsResponseBodyTags> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
