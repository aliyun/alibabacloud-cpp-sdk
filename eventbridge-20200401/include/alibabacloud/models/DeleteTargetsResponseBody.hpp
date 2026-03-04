// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETARGETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETETARGETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class DeleteTargetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTargetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTargetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteTargetsResponseBody() = default ;
    DeleteTargetsResponseBody(const DeleteTargetsResponseBody &) = default ;
    DeleteTargetsResponseBody(DeleteTargetsResponseBody &&) = default ;
    DeleteTargetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTargetsResponseBody() = default ;
    DeleteTargetsResponseBody& operator=(const DeleteTargetsResponseBody &) = default ;
    DeleteTargetsResponseBody& operator=(DeleteTargetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorEntries, errorEntries_);
        DARABONBA_PTR_TO_JSON(ErrorEntriesCount, errorEntriesCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorEntries, errorEntries_);
        DARABONBA_PTR_FROM_JSON(ErrorEntriesCount, errorEntriesCount_);
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
      class ErrorEntries : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorEntries& obj) { 
          DARABONBA_PTR_TO_JSON(EntryId, entryId_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorEntries& obj) { 
          DARABONBA_PTR_FROM_JSON(EntryId, entryId_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        };
        ErrorEntries() = default ;
        ErrorEntries(const ErrorEntries &) = default ;
        ErrorEntries(ErrorEntries &&) = default ;
        ErrorEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorEntries() = default ;
        ErrorEntries& operator=(const ErrorEntries &) = default ;
        ErrorEntries& operator=(ErrorEntries &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->entryId_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr; };
        // entryId Field Functions 
        bool hasEntryId() const { return this->entryId_ != nullptr;};
        void deleteEntryId() { this->entryId_ = nullptr;};
        inline string getEntryId() const { DARABONBA_PTR_GET_DEFAULT(entryId_, "") };
        inline ErrorEntries& setEntryId(string entryId) { DARABONBA_PTR_SET_VALUE(entryId_, entryId) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline ErrorEntries& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline ErrorEntries& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      protected:
        // The ID of the event body that failed to be processed.
        shared_ptr<string> entryId_ {};
        // The error code.
        shared_ptr<string> errorCode_ {};
        // The error message.
        shared_ptr<string> errorMessage_ {};
      };

      virtual bool empty() const override { return this->errorEntries_ == nullptr
        && this->errorEntriesCount_ == nullptr; };
      // errorEntries Field Functions 
      bool hasErrorEntries() const { return this->errorEntries_ != nullptr;};
      void deleteErrorEntries() { this->errorEntries_ = nullptr;};
      inline const vector<Data::ErrorEntries> & getErrorEntries() const { DARABONBA_PTR_GET_CONST(errorEntries_, vector<Data::ErrorEntries>) };
      inline vector<Data::ErrorEntries> getErrorEntries() { DARABONBA_PTR_GET(errorEntries_, vector<Data::ErrorEntries>) };
      inline Data& setErrorEntries(const vector<Data::ErrorEntries> & errorEntries) { DARABONBA_PTR_SET_VALUE(errorEntries_, errorEntries) };
      inline Data& setErrorEntries(vector<Data::ErrorEntries> && errorEntries) { DARABONBA_PTR_SET_RVALUE(errorEntries_, errorEntries) };


      // errorEntriesCount Field Functions 
      bool hasErrorEntriesCount() const { return this->errorEntriesCount_ != nullptr;};
      void deleteErrorEntriesCount() { this->errorEntriesCount_ = nullptr;};
      inline int32_t getErrorEntriesCount() const { DARABONBA_PTR_GET_DEFAULT(errorEntriesCount_, 0) };
      inline Data& setErrorEntriesCount(int32_t errorEntriesCount) { DARABONBA_PTR_SET_VALUE(errorEntriesCount_, errorEntriesCount) };


    protected:
      // The information about the event body that failed to be processed.
      shared_ptr<vector<Data::ErrorEntries>> errorEntries_ {};
      // The number of event bodies that failed to be processed. Valid values: 0: No event bodies failed to be processed. An integer other than 0: the number of event bodies that failed to be processed.
      shared_ptr<int32_t> errorEntriesCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteTargetsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DeleteTargetsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DeleteTargetsResponseBody::Data) };
    inline DeleteTargetsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DeleteTargetsResponseBody::Data) };
    inline DeleteTargetsResponseBody& setData(const DeleteTargetsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DeleteTargetsResponseBody& setData(DeleteTargetsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteTargetsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteTargetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteTargetsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The code 200 indicates that the request was successful. Other codes indicate that the request failed. For information about error codes, see Error codes.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<DeleteTargetsResponseBody::Data> data_ {};
    // The returned error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
