// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASESOURCETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASESOURCETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class UpdateKnowledgeBaseSourceTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseSourceTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceTags, sourceTags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseSourceTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceTags, sourceTags_);
    };
    UpdateKnowledgeBaseSourceTagsResponseBody() = default ;
    UpdateKnowledgeBaseSourceTagsResponseBody(const UpdateKnowledgeBaseSourceTagsResponseBody &) = default ;
    UpdateKnowledgeBaseSourceTagsResponseBody(UpdateKnowledgeBaseSourceTagsResponseBody &&) = default ;
    UpdateKnowledgeBaseSourceTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseSourceTagsResponseBody() = default ;
    UpdateKnowledgeBaseSourceTagsResponseBody& operator=(const UpdateKnowledgeBaseSourceTagsResponseBody &) = default ;
    UpdateKnowledgeBaseSourceTagsResponseBody& operator=(UpdateKnowledgeBaseSourceTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->gmtModified_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->sourceId_ == nullptr && this->sourceTags_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateKnowledgeBaseSourceTagsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdateKnowledgeBaseSourceTagsResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateKnowledgeBaseSourceTagsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateKnowledgeBaseSourceTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline UpdateKnowledgeBaseSourceTagsResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceTags Field Functions 
    bool hasSourceTags() const { return this->sourceTags_ != nullptr;};
    void deleteSourceTags() { this->sourceTags_ = nullptr;};
    inline string getSourceTags() const { DARABONBA_PTR_GET_DEFAULT(sourceTags_, "") };
    inline UpdateKnowledgeBaseSourceTagsResponseBody& setSourceTags(string sourceTags) { DARABONBA_PTR_SET_VALUE(sourceTags_, sourceTags) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The last modified time in ISO 8601 format.
    shared_ptr<string> gmtModified_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The source ID.
    shared_ptr<string> sourceId_ {};
    // The updated resource tags.
    shared_ptr<string> sourceTags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
