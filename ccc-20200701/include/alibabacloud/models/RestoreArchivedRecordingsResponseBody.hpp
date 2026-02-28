// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREARCHIVEDRECORDINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTOREARCHIVEDRECORDINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class RestoreArchivedRecordingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreArchivedRecordingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreArchivedRecordingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RestoreArchivedRecordingsResponseBody() = default ;
    RestoreArchivedRecordingsResponseBody(const RestoreArchivedRecordingsResponseBody &) = default ;
    RestoreArchivedRecordingsResponseBody(RestoreArchivedRecordingsResponseBody &&) = default ;
    RestoreArchivedRecordingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreArchivedRecordingsResponseBody() = default ;
    RestoreArchivedRecordingsResponseBody& operator=(const RestoreArchivedRecordingsResponseBody &) = default ;
    RestoreArchivedRecordingsResponseBody& operator=(RestoreArchivedRecordingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ContactId, contactId_);
        DARABONBA_PTR_TO_JSON(Exists, exists_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
        DARABONBA_PTR_FROM_JSON(Exists, exists_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
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
      virtual bool empty() const override { return this->contactId_ == nullptr
        && this->exists_ == nullptr && this->status_ == nullptr && this->storageType_ == nullptr; };
      // contactId Field Functions 
      bool hasContactId() const { return this->contactId_ != nullptr;};
      void deleteContactId() { this->contactId_ = nullptr;};
      inline string getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, "") };
      inline Data& setContactId(string contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


      // exists Field Functions 
      bool hasExists() const { return this->exists_ != nullptr;};
      void deleteExists() { this->exists_ = nullptr;};
      inline string getExists() const { DARABONBA_PTR_GET_DEFAULT(exists_, "") };
      inline Data& setExists(string exists) { DARABONBA_PTR_SET_VALUE(exists_, exists) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Data& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      shared_ptr<string> contactId_ {};
      shared_ptr<string> exists_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RestoreArchivedRecordingsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<RestoreArchivedRecordingsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<RestoreArchivedRecordingsResponseBody::Data>) };
    inline vector<RestoreArchivedRecordingsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<RestoreArchivedRecordingsResponseBody::Data>) };
    inline RestoreArchivedRecordingsResponseBody& setData(const vector<RestoreArchivedRecordingsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline RestoreArchivedRecordingsResponseBody& setData(vector<RestoreArchivedRecordingsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline RestoreArchivedRecordingsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RestoreArchivedRecordingsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestoreArchivedRecordingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<RestoreArchivedRecordingsResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
