// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDKNOWLEDGEUPLOADUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDKNOWLEDGEUPLOADUSERRESPONSEBODY_HPP_
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
  class AddKnowledgeUploadUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddKnowledgeUploadUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddKnowledgeUploadUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddKnowledgeUploadUserResponseBody() = default ;
    AddKnowledgeUploadUserResponseBody(const AddKnowledgeUploadUserResponseBody &) = default ;
    AddKnowledgeUploadUserResponseBody(AddKnowledgeUploadUserResponseBody &&) = default ;
    AddKnowledgeUploadUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddKnowledgeUploadUserResponseBody() = default ;
    AddKnowledgeUploadUserResponseBody& operator=(const AddKnowledgeUploadUserResponseBody &) = default ;
    AddKnowledgeUploadUserResponseBody& operator=(AddKnowledgeUploadUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Skipped, skipped_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Written, written_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
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
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, Skipped& obj) { 
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(User, user_);
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
        && this->user_ == nullptr; };
        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Skipped& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline Skipped& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The reason why the user was skipped.
        shared_ptr<string> reason_ {};
        // The username of the authorized user.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->fileLocation_ == nullptr
        && this->message_ == nullptr && this->skipped_ == nullptr && this->success_ == nullptr && this->written_ == nullptr; };
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
      // The prompt message.
      shared_ptr<string> message_ {};
      // The list of skipped users.
      shared_ptr<vector<Data::Skipped>> skipped_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // - **true**: The request was successful.
      // - **false**: The request failed.
      shared_ptr<bool> success_ {};
      // The number of users that were successfully added.
      shared_ptr<int32_t> written_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddKnowledgeUploadUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, AddKnowledgeUploadUserResponseBody::Data) };
    inline AddKnowledgeUploadUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, AddKnowledgeUploadUserResponseBody::Data) };
    inline AddKnowledgeUploadUserResponseBody& setData(const AddKnowledgeUploadUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddKnowledgeUploadUserResponseBody& setData(AddKnowledgeUploadUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddKnowledgeUploadUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<AddKnowledgeUploadUserResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
