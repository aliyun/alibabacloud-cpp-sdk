// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGHITSSUMMARYRESPONSEBODY_HPP_
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
  class DescribeTagHitsSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagHitsSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_TO_JSON(TagHitsList, tagHitsList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagHitsSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagGroups, tagGroups_);
      DARABONBA_PTR_FROM_JSON(TagHitsList, tagHitsList_);
    };
    DescribeTagHitsSummaryResponseBody() = default ;
    DescribeTagHitsSummaryResponseBody(const DescribeTagHitsSummaryResponseBody &) = default ;
    DescribeTagHitsSummaryResponseBody(DescribeTagHitsSummaryResponseBody &&) = default ;
    DescribeTagHitsSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagHitsSummaryResponseBody() = default ;
    DescribeTagHitsSummaryResponseBody& operator=(const DescribeTagHitsSummaryResponseBody &) = default ;
    DescribeTagHitsSummaryResponseBody& operator=(DescribeTagHitsSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagHitsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagHitsList& obj) { 
        DARABONBA_PTR_TO_JSON(HitCount, hitCount_);
        DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_TO_JSON(TagName, tagName_);
      };
      friend void from_json(const Darabonba::Json& j, TagHitsList& obj) { 
        DARABONBA_PTR_FROM_JSON(HitCount, hitCount_);
        DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_FROM_JSON(TagName, tagName_);
      };
      TagHitsList() = default ;
      TagHitsList(const TagHitsList &) = default ;
      TagHitsList(TagHitsList &&) = default ;
      TagHitsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagHitsList() = default ;
      TagHitsList& operator=(const TagHitsList &) = default ;
      TagHitsList& operator=(TagHitsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hitCount_ == nullptr
        && this->tagGroup_ == nullptr && this->tagName_ == nullptr; };
      // hitCount Field Functions 
      bool hasHitCount() const { return this->hitCount_ != nullptr;};
      void deleteHitCount() { this->hitCount_ = nullptr;};
      inline int32_t getHitCount() const { DARABONBA_PTR_GET_DEFAULT(hitCount_, 0) };
      inline TagHitsList& setHitCount(int32_t hitCount) { DARABONBA_PTR_SET_VALUE(hitCount_, hitCount) };


      // tagGroup Field Functions 
      bool hasTagGroup() const { return this->tagGroup_ != nullptr;};
      void deleteTagGroup() { this->tagGroup_ = nullptr;};
      inline string getTagGroup() const { DARABONBA_PTR_GET_DEFAULT(tagGroup_, "") };
      inline TagHitsList& setTagGroup(string tagGroup) { DARABONBA_PTR_SET_VALUE(tagGroup_, tagGroup) };


      // tagName Field Functions 
      bool hasTagName() const { return this->tagName_ != nullptr;};
      void deleteTagName() { this->tagName_ = nullptr;};
      inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
      inline TagHitsList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


    protected:
      shared_ptr<int32_t> hitCount_ {};
      shared_ptr<string> tagGroup_ {};
      shared_ptr<string> tagName_ {};
    };

    class TagGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagGroups& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(TagGroup, tagGroup_);
        DARABONBA_PTR_TO_JSON(TagGroupIndex, tagGroupIndex_);
      };
      friend void from_json(const Darabonba::Json& j, TagGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(TagGroup, tagGroup_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->scriptId_ == nullptr && this->tagGroup_ == nullptr && this->tagGroupIndex_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline TagGroups& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


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


      // tagGroupIndex Field Functions 
      bool hasTagGroupIndex() const { return this->tagGroupIndex_ != nullptr;};
      void deleteTagGroupIndex() { this->tagGroupIndex_ = nullptr;};
      inline int32_t getTagGroupIndex() const { DARABONBA_PTR_GET_DEFAULT(tagGroupIndex_, 0) };
      inline TagGroups& setTagGroupIndex(int32_t tagGroupIndex) { DARABONBA_PTR_SET_VALUE(tagGroupIndex_, tagGroupIndex) };


    protected:
      // ID
      shared_ptr<string> id_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> tagGroup_ {};
      shared_ptr<int32_t> tagGroupIndex_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tagGroups_ == nullptr
        && this->tagHitsList_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTagHitsSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeTagHitsSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTagHitsSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagHitsSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTagHitsSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagGroups Field Functions 
    bool hasTagGroups() const { return this->tagGroups_ != nullptr;};
    void deleteTagGroups() { this->tagGroups_ = nullptr;};
    inline const vector<DescribeTagHitsSummaryResponseBody::TagGroups> & getTagGroups() const { DARABONBA_PTR_GET_CONST(tagGroups_, vector<DescribeTagHitsSummaryResponseBody::TagGroups>) };
    inline vector<DescribeTagHitsSummaryResponseBody::TagGroups> getTagGroups() { DARABONBA_PTR_GET(tagGroups_, vector<DescribeTagHitsSummaryResponseBody::TagGroups>) };
    inline DescribeTagHitsSummaryResponseBody& setTagGroups(const vector<DescribeTagHitsSummaryResponseBody::TagGroups> & tagGroups) { DARABONBA_PTR_SET_VALUE(tagGroups_, tagGroups) };
    inline DescribeTagHitsSummaryResponseBody& setTagGroups(vector<DescribeTagHitsSummaryResponseBody::TagGroups> && tagGroups) { DARABONBA_PTR_SET_RVALUE(tagGroups_, tagGroups) };


    // tagHitsList Field Functions 
    bool hasTagHitsList() const { return this->tagHitsList_ != nullptr;};
    void deleteTagHitsList() { this->tagHitsList_ = nullptr;};
    inline const vector<DescribeTagHitsSummaryResponseBody::TagHitsList> & getTagHitsList() const { DARABONBA_PTR_GET_CONST(tagHitsList_, vector<DescribeTagHitsSummaryResponseBody::TagHitsList>) };
    inline vector<DescribeTagHitsSummaryResponseBody::TagHitsList> getTagHitsList() { DARABONBA_PTR_GET(tagHitsList_, vector<DescribeTagHitsSummaryResponseBody::TagHitsList>) };
    inline DescribeTagHitsSummaryResponseBody& setTagHitsList(const vector<DescribeTagHitsSummaryResponseBody::TagHitsList> & tagHitsList) { DARABONBA_PTR_SET_VALUE(tagHitsList_, tagHitsList) };
    inline DescribeTagHitsSummaryResponseBody& setTagHitsList(vector<DescribeTagHitsSummaryResponseBody::TagHitsList> && tagHitsList) { DARABONBA_PTR_SET_RVALUE(tagHitsList_, tagHitsList) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<vector<DescribeTagHitsSummaryResponseBody::TagGroups>> tagGroups_ {};
    shared_ptr<vector<DescribeTagHitsSummaryResponseBody::TagHitsList>> tagHitsList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
