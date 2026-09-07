// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKNOWLEDGETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDKNOWLEDGETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class AddKnowledgeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKnowledgeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKnowledgeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddKnowledgeTagsResponseBody() = default ;
    AddKnowledgeTagsResponseBody(const AddKnowledgeTagsResponseBody &) = default ;
    AddKnowledgeTagsResponseBody(AddKnowledgeTagsResponseBody &&) = default ;
    AddKnowledgeTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKnowledgeTagsResponseBody() = default ;
    AddKnowledgeTagsResponseBody& operator=(const AddKnowledgeTagsResponseBody &) = default ;
    AddKnowledgeTagsResponseBody& operator=(AddKnowledgeTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Replaced, replaced_);
        DARABONBA_PTR_TO_JSON(Skipped, skipped_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Written, written_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Replaced, replaced_);
        DARABONBA_PTR_FROM_JSON(Skipped, skipped_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Written, written_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Skipped : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Skipped& obj) { 
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, Skipped& obj) { 
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        Skipped() = default ;
        Skipped(const Skipped &) = default ;
        Skipped(Skipped &&) = default ;
        Skipped(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Skipped() = default ;
        Skipped& operator=(const Skipped &) = default ;
        Skipped& operator=(Skipped &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->reason_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Skipped& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline Skipped& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline Skipped& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The reason why the tag was skipped.
        shared_ptr<string> reason_ {};
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The value of the tag.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->fileLocation_ == nullptr
        && this->message_ == nullptr && this->replaced_ == nullptr && this->skipped_ == nullptr && this->success_ == nullptr && this->written_ == nullptr; };
      // fileLocation Field Functions 
      bool hasFileLocation() const { return this->fileLocation_ != nullptr;};
      void deleteFileLocation() { this->fileLocation_ = nullptr;};
      inline string getFileLocation() const { DARABONBA_PTR_GET_DEFAULT(fileLocation_, "") };
      inline Data& setFileLocation(string fileLocation) { DARABONBA_PTR_SET_VALUE(fileLocation_, fileLocation) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // replaced Field Functions 
      bool hasReplaced() const { return this->replaced_ != nullptr;};
      void deleteReplaced() { this->replaced_ = nullptr;};
      inline int32_t getReplaced() const { DARABONBA_PTR_GET_DEFAULT(replaced_, 0) };
      inline Data& setReplaced(int32_t replaced) { DARABONBA_PTR_SET_VALUE(replaced_, replaced) };


      // skipped Field Functions 
      bool hasSkipped() const { return this->skipped_ != nullptr;};
      void deleteSkipped() { this->skipped_ = nullptr;};
      inline const vector<Data::Skipped> & getSkipped() const { DARABONBA_PTR_GET_CONST(skipped_, vector<Data::Skipped>) };
      inline vector<Data::Skipped> getSkipped() { DARABONBA_PTR_GET(skipped_, vector<Data::Skipped>) };
      inline Data& setSkipped(const vector<Data::Skipped> & skipped) { DARABONBA_PTR_SET_VALUE(skipped_, skipped) };
      inline Data& setSkipped(vector<Data::Skipped> && skipped) { DARABONBA_PTR_SET_RVALUE(skipped_, skipped) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // written Field Functions 
      bool hasWritten() const { return this->written_ != nullptr;};
      void deleteWritten() { this->written_ = nullptr;};
      inline int32_t getWritten() const { DARABONBA_PTR_GET_DEFAULT(written_, 0) };
      inline Data& setWritten(int32_t written) { DARABONBA_PTR_SET_VALUE(written_, written) };


    protected:
      // The location of the knowledge base file.
      shared_ptr<string> fileLocation_ {};
      // The message.
      shared_ptr<string> message_ {};
      // The number of tags that were successfully updated.
      shared_ptr<int32_t> replaced_ {};
      // The list of skipped tags.
      shared_ptr<vector<Data::Skipped>> skipped_ {};
      // Indicates whether the request was successful. Valid values:
      // - **true**: The request was successful.
      // - **false**: The request failed.
      shared_ptr<bool> success_ {};
      // The number of tags that were successfully added.
      shared_ptr<int32_t> written_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddKnowledgeTagsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddKnowledgeTagsResponseBody::Data) };
    inline AddKnowledgeTagsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddKnowledgeTagsResponseBody::Data) };
    inline AddKnowledgeTagsResponseBody& setData(const AddKnowledgeTagsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddKnowledgeTagsResponseBody& setData(AddKnowledgeTagsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddKnowledgeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<AddKnowledgeTagsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
