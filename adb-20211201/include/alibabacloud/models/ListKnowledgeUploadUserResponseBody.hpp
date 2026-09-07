// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTKNOWLEDGEUPLOADUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTKNOWLEDGEUPLOADUSERRESPONSEBODY_HPP_
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
  class ListKnowledgeUploadUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListKnowledgeUploadUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListKnowledgeUploadUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListKnowledgeUploadUserResponseBody() = default ;
    ListKnowledgeUploadUserResponseBody(const ListKnowledgeUploadUserResponseBody &) = default ;
    ListKnowledgeUploadUserResponseBody(ListKnowledgeUploadUserResponseBody &&) = default ;
    ListKnowledgeUploadUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListKnowledgeUploadUserResponseBody() = default ;
    ListKnowledgeUploadUserResponseBody& operator=(const ListKnowledgeUploadUserResponseBody &) = default ;
    ListKnowledgeUploadUserResponseBody& operator=(ListKnowledgeUploadUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Success, success_);
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(FileLocation, fileLocation_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
        DARABONBA_PTR_FROM_JSON(Users, users_);
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
        && this->message_ == nullptr && this->success_ == nullptr && this->users_ == nullptr; };
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


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
      inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
      inline Data& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Data& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // The location of the knowledge base file.
      shared_ptr<string> fileLocation_ {};
      // The prompt message.
      shared_ptr<string> message_ {};
      // Indicates whether the request was successful. Valid values:
      // 
      // - **true**: The request was successful.
      // - **false**: The request failed.
      shared_ptr<bool> success_ {};
      // The list of authorized users.
      shared_ptr<vector<string>> users_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListKnowledgeUploadUserResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListKnowledgeUploadUserResponseBody::Data) };
    inline ListKnowledgeUploadUserResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListKnowledgeUploadUserResponseBody::Data) };
    inline ListKnowledgeUploadUserResponseBody& setData(const ListKnowledgeUploadUserResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListKnowledgeUploadUserResponseBody& setData(ListKnowledgeUploadUserResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListKnowledgeUploadUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListKnowledgeUploadUserResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
