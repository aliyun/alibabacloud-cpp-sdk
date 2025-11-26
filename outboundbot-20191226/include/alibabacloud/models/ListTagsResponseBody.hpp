// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTagsResponseBodyTagGroups.hpp>
#include <alibabacloud/models/ListTagsResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ListTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tagGroups_ == nullptr
        && return this->tags_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTagsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTagsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTagsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagGroups Field Functions 
    bool hasTagGroups() const { return this->tagGroups_ != nullptr;};
    void deleteTagGroups() { this->tagGroups_ = nullptr;};
    inline const vector<ListTagsResponseBodyTagGroups> & tagGroups() const { DARABONBA_PTR_GET_CONST(tagGroups_, vector<ListTagsResponseBodyTagGroups>) };
    inline vector<ListTagsResponseBodyTagGroups> tagGroups() { DARABONBA_PTR_GET(tagGroups_, vector<ListTagsResponseBodyTagGroups>) };
    inline ListTagsResponseBody& setTagGroups(const vector<ListTagsResponseBodyTagGroups> & tagGroups) { DARABONBA_PTR_SET_VALUE(tagGroups_, tagGroups) };
    inline ListTagsResponseBody& setTagGroups(vector<ListTagsResponseBodyTagGroups> && tagGroups) { DARABONBA_PTR_SET_RVALUE(tagGroups_, tagGroups) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTagsResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTagsResponseBodyTags>) };
    inline vector<ListTagsResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListTagsResponseBodyTags>) };
    inline ListTagsResponseBody& setTags(const vector<ListTagsResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTagsResponseBody& setTags(vector<ListTagsResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
    std::shared_ptr<vector<ListTagsResponseBodyTagGroups>> tagGroups_ = nullptr;
    std::shared_ptr<vector<ListTagsResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
