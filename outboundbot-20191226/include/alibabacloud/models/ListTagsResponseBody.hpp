// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_TO_JSON(TagId, tagId_);
        DARABONBA_PTR_TO_JSON(TagIndex, tagIndex_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_FROM_JSON(TagId, tagId_);
        DARABONBA_PTR_FROM_JSON(TagIndex, tagIndex_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scriptId_ == nullptr
        && this->tagGroup_ == nullptr && this->tagId_ == nullptr && this->tagIndex_ == nullptr && this->tagName_ == nullptr; };
      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline Tags& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // tagGroup Field Functions 
      bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
      void deleteTagGroup() { this->tagGroup_ = nullptr;};
      inline string getTagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
      inline Tags& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


      // tagId Field Functions 
      bool hasTagId() const { return this->tagId_ != nullptr;};
      void deleteTagId() { this->tagId_ = nullptr;};
      inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
      inline Tags& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


      // tagIndex Field Functions 
      bool hasTagIndex() const { return this->tagIndex_ != nullptr;};
      void deleteTagIndex() { this->tagIndex_ = nullptr;};
      inline int32_t getTagIndex() const { DARABONBA_PTR_GET_DEFAULT(tagIndex_, 0) };
      inline Tags& setTagIndex(int32_t tagIndex) { DARABONBA_PTR_SET_VALUE(tagIndex_, tagIndex) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline Tags& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> tagGroup_ {};
      shared_ptr<string> tagId_ {};
      shared_ptr<int32_t> tagIndex_ {};
      shared_ptr<string> tagName_ {};
    };

    class TagGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_TO_JSON(TagGroupId, tagGroupId_);
        DARABONBA_PTR_TO_JSON(TagGroupIndex, tagGroupIndex_);
      };
      friend void from_json(const Darabonba::Json& j, TagGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_FROM_JSON(TagGroupId, tagGroupId_);
        DARABONBA_PTR_FROM_JSON(TagGroupIndex, tagGroupIndex_);
      };
      TagGroups() = default ;
      TagGroups(const TagGroups &) = default ;
      TagGroups(TagGroups &&) = default ;
      TagGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagGroups() = default ;
      TagGroups& operator=(const TagGroups &) = default ;
      TagGroups& operator=(TagGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->scriptId_ == nullptr
        && this->tagGroup_ == nullptr && this->tagGroupId_ == nullptr && this->tagGroupIndex_ == nullptr; };
      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline TagGroups& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // tagGroup Field Functions 
      bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
      void deleteTagGroup() { this->tagGroup_ = nullptr;};
      inline string getTagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
      inline TagGroups& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


      // tagGroupId Field Functions 
      bool hasTagGroupId() const { return this->tagGroupId_ != nullptr;};
      void deleteTagGroupId() { this->tagGroupId_ = nullptr;};
      inline string getTagGroupId() const { DARABONBA_PTR_GET_DEFAULT(tagGroupId_, "") };
      inline TagGroups& setTagGroupId(string tagGroupId) { DARABONBA_PTR_SET_VALUE(tagGroupId_, tagGroupId) };


      // tagGroupIndex Field Functions 
      bool hasTagGroupIndex() const { return this->tagGroupIndex_ != nullptr;};
      void deleteTagGroupIndex() { this->tagGroupIndex_ = nullptr;};
      inline int32_t getTagGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(tagGroupIndex_, 0) };
      inline TagGroups& setTagGroupIndex(int32_t tagGroupIndex) { DARABONBA_PTR_SET_VALUE(tagGroupIndex_, tagGroupIndex) };


    protected:
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> tagGroup_ {};
      shared_ptr<string> tagGroupId_ {};
      shared_ptr<int32_t> tagGroupIndex_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tagGroups_ == nullptr
        && this->tags_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTagsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListTagsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTagsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListTagsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagGroups Field Functions 
    bool hasTagGroups() const { return this->tagGroups_ != nullptr;};
    void deleteTagGroups() { this->tagGroups_ = nullptr;};
    inline const vector<ListTagsResponseBody::TagGroups> & getTagGroups() const { DARABONBA_PTR_GET_CONST(tagGroups_, vector<ListTagsResponseBody::TagGroups>) };
    inline vector<ListTagsResponseBody::TagGroups> getTagGroups() { DARABONBA_PTR_GET(tagGroups_, vector<ListTagsResponseBody::TagGroups>) };
    inline ListTagsResponseBody& setTagGroups(const vector<ListTagsResponseBody::TagGroups> & tagGroups) { DARABONBA_PTR_SET_VALUE(tagGroups_, tagGroups) };
    inline ListTagsResponseBody& setTagGroups(vector<ListTagsResponseBody::TagGroups> && tagGroups) { DARABONBA_PTR_SET_RVALUE(tagGroups_, tagGroups) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTagsResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTagsResponseBody::Tags>) };
    inline vector<ListTagsResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ListTagsResponseBody::Tags>) };
    inline ListTagsResponseBody& setTags(const vector<ListTagsResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTagsResponseBody& setTags(vector<ListTagsResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<ListTagsResponseBody::TagGroups>> tagGroups_ {};
    shared_ptr<vector<ListTagsResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
