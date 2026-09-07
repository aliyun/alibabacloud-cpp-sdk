// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEKNOWLEDGETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEKNOWLEDGETAGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class RemoveKnowledgeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveKnowledgeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveKnowledgeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RemoveKnowledgeTagsResponseBody() = default ;
    RemoveKnowledgeTagsResponseBody(const RemoveKnowledgeTagsResponseBody &) = default ;
    RemoveKnowledgeTagsResponseBody(RemoveKnowledgeTagsResponseBody &&) = default ;
    RemoveKnowledgeTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveKnowledgeTagsResponseBody() = default ;
    RemoveKnowledgeTagsResponseBody& operator=(const RemoveKnowledgeTagsResponseBody &) = default ;
    RemoveKnowledgeTagsResponseBody& operator=(RemoveKnowledgeTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Removed, removed_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Removed, removed_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->fileLocation_ == nullptr
        && this->message_ == nullptr && this->removed_ == nullptr && this->success_ == nullptr; };
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


      // removed Field Functions 
      bool hasRemoved() const { return this->removed_ != nullptr;};
      void deleteRemoved() { this->removed_ = nullptr;};
      inline int32_t getRemoved() const { DARABONBA_PTR_GET_DEFAULT(removed_, 0) };
      inline Data& setRemoved(int32_t removed) { DARABONBA_PTR_SET_VALUE(removed_, removed) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The location of the knowledge base file.
      shared_ptr<string> fileLocation_ {};
      // The message returned by the operation.
      shared_ptr<string> message_ {};
      // The number of tags that were successfully deleted.
      shared_ptr<int32_t> removed_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // - **true**: The request was successful.
      // - **false**: The request failed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const RemoveKnowledgeTagsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, RemoveKnowledgeTagsResponseBody::Data) };
    inline RemoveKnowledgeTagsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, RemoveKnowledgeTagsResponseBody::Data) };
    inline RemoveKnowledgeTagsResponseBody& setData(const RemoveKnowledgeTagsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RemoveKnowledgeTagsResponseBody& setData(RemoveKnowledgeTagsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveKnowledgeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<RemoveKnowledgeTagsResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
