// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYZNODEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYZNODEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QueryZnodeDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryZnodeDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryZnodeDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryZnodeDetailResponseBody() = default ;
    QueryZnodeDetailResponseBody(const QueryZnodeDetailResponseBody &) = default ;
    QueryZnodeDetailResponseBody(QueryZnodeDetailResponseBody &&) = default ;
    QueryZnodeDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryZnodeDetailResponseBody() = default ;
    QueryZnodeDetailResponseBody& operator=(const QueryZnodeDetailResponseBody &) = default ;
    QueryZnodeDetailResponseBody& operator=(QueryZnodeDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Dir, dir_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Dir, dir_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
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
      virtual bool empty() const override { return this->data_ == nullptr
        && this->dir_ == nullptr && this->name_ == nullptr && this->path_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
      inline Data& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


      // dir Field Functions 
      bool hasDir() const { return this->dir_ != nullptr;};
      void deleteDir() { this->dir_ = nullptr;};
      inline bool getDir() const { DARABONBA_PTR_GET_DEFAULT(dir_, false) };
      inline Data& setDir(bool dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Data& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      // The data of the node.
      shared_ptr<string> data_ {};
      // Indicates whether the node information was returned. Valid values:
      // 
      // *   `true`: The node information was returned.
      // *   `false`: The node information failed to be returned.
      shared_ptr<bool> dir_ {};
      // The name of the node.
      shared_ptr<string> name_ {};
      // The path of the node.
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryZnodeDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryZnodeDetailResponseBody::Data) };
    inline QueryZnodeDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryZnodeDetailResponseBody::Data) };
    inline QueryZnodeDetailResponseBody& setData(const QueryZnodeDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryZnodeDetailResponseBody& setData(QueryZnodeDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryZnodeDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryZnodeDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryZnodeDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline QueryZnodeDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<QueryZnodeDetailResponseBody::Data> data_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
