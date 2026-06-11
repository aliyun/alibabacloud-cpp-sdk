// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACECODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACECODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class ListWorkspaceCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWorkspaceCodeResponseBody() = default ;
    ListWorkspaceCodeResponseBody(const ListWorkspaceCodeResponseBody &) = default ;
    ListWorkspaceCodeResponseBody(ListWorkspaceCodeResponseBody &&) = default ;
    ListWorkspaceCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceCodeResponseBody() = default ;
    ListWorkspaceCodeResponseBody& operator=(const ListWorkspaceCodeResponseBody &) = default ;
    ListWorkspaceCodeResponseBody& operator=(ListWorkspaceCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(IsDir, isDir_);
          DARABONBA_PTR_TO_JSON(Mtime, mtime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(Symlink, symlink_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(IsDir, isDir_);
          DARABONBA_PTR_FROM_JSON(Mtime, mtime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(Symlink, symlink_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isDir_ == nullptr
        && this->mtime_ == nullptr && this->name_ == nullptr && this->size_ == nullptr && this->symlink_ == nullptr; };
        // isDir Field Functions 
        bool hasIsDir() const { return this->isDir_ != nullptr;};
        void deleteIsDir() { this->isDir_ = nullptr;};
        inline bool getIsDir() const { DARABONBA_PTR_GET_DEFAULT(isDir_, false) };
        inline List& setIsDir(bool isDir) { DARABONBA_PTR_SET_VALUE(isDir_, isDir) };


        // mtime Field Functions 
        bool hasMtime() const { return this->mtime_ != nullptr;};
        void deleteMtime() { this->mtime_ = nullptr;};
        inline string getMtime() const { DARABONBA_PTR_GET_DEFAULT(mtime_, "") };
        inline List& setMtime(string mtime) { DARABONBA_PTR_SET_VALUE(mtime_, mtime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
        inline List& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // symlink Field Functions 
        bool hasSymlink() const { return this->symlink_ != nullptr;};
        void deleteSymlink() { this->symlink_ = nullptr;};
        inline string getSymlink() const { DARABONBA_PTR_GET_DEFAULT(symlink_, "") };
        inline List& setSymlink(string symlink) { DARABONBA_PTR_SET_VALUE(symlink_, symlink) };


      protected:
        // Indicates whether the object is a directory.
        shared_ptr<bool> isDir_ {};
        // The modification time of the file.
        // 
        // The time is in the ISO 8601 format: `yyyy-MM-ddTHH:mm:ssZ`.
        // 
        // This parameter is returned only for files.
        shared_ptr<string> mtime_ {};
        // The name of the file or directory.
        shared_ptr<string> name_ {};
        // The file size in bytes.
        shared_ptr<int64_t> size_ {};
        // The target of the symlink.
        shared_ptr<string> symlink_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      // An array of objects representing the files and directories.
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListWorkspaceCodeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListWorkspaceCodeResponseBody::Data) };
    inline ListWorkspaceCodeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListWorkspaceCodeResponseBody::Data) };
    inline ListWorkspaceCodeResponseBody& setData(const ListWorkspaceCodeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListWorkspaceCodeResponseBody& setData(ListWorkspaceCodeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListWorkspaceCodeResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListWorkspaceCodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListWorkspaceCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspaceCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkspaceCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data returned in the response.
    shared_ptr<ListWorkspaceCodeResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
