// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVECDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVECDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class MoveCdsFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveCdsFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MoveCdsFileModel, moveCdsFileModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, MoveCdsFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MoveCdsFileModel, moveCdsFileModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    MoveCdsFileResponseBody() = default ;
    MoveCdsFileResponseBody(const MoveCdsFileResponseBody &) = default ;
    MoveCdsFileResponseBody(MoveCdsFileResponseBody &&) = default ;
    MoveCdsFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveCdsFileResponseBody() = default ;
    MoveCdsFileResponseBody& operator=(const MoveCdsFileResponseBody &) = default ;
    MoveCdsFileResponseBody& operator=(MoveCdsFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MoveCdsFileModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MoveCdsFileModel& obj) { 
        DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_TO_JSON(Exist, exist_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
      };
      friend void from_json(const Darabonba::Json& j, MoveCdsFileModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_FROM_JSON(Exist, exist_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      };
      MoveCdsFileModel() = default ;
      MoveCdsFileModel(const MoveCdsFileModel &) = default ;
      MoveCdsFileModel(MoveCdsFileModel &&) = default ;
      MoveCdsFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MoveCdsFileModel() = default ;
      MoveCdsFileModel& operator=(const MoveCdsFileModel &) = default ;
      MoveCdsFileModel& operator=(MoveCdsFileModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && this->exist_ == nullptr && this->fileId_ == nullptr; };
      // asyncTaskId Field Functions 
      bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
      void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
      inline string getAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
      inline MoveCdsFileModel& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


      // exist Field Functions 
      bool hasExist() const { return this->exist_ != nullptr;};
      void deleteExist() { this->exist_ = nullptr;};
      inline bool getExist() const { DARABONBA_PTR_GET_DEFAULT(exist_, false) };
      inline MoveCdsFileModel& setExist(bool exist) { DARABONBA_PTR_SET_VALUE(exist_, exist) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline MoveCdsFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    protected:
      // The ID of the asynchronous task. This parameter is not returned if you copy files. This parameter is returned if you copy folders in the backend in an asynchronous manner. You can call the GetAsyncTask operation to obtain the ID and details of an asynchronous task.
      shared_ptr<string> asyncTaskId_ {};
      // Indicates whether the file exists.
      // 
      // Valid values:
      // 
      // *   <!-- -->
      // 
      //     true
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   <!-- -->
      // 
      //     false
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<bool> exist_ {};
      // The ID of the file.
      shared_ptr<string> fileId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->moveCdsFileModel_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MoveCdsFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MoveCdsFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // moveCdsFileModel Field Functions 
    bool hasMoveCdsFileModel() const { return this->moveCdsFileModel_ != nullptr;};
    void deleteMoveCdsFileModel() { this->moveCdsFileModel_ = nullptr;};
    inline const MoveCdsFileResponseBody::MoveCdsFileModel & getMoveCdsFileModel() const { DARABONBA_PTR_GET_CONST(moveCdsFileModel_, MoveCdsFileResponseBody::MoveCdsFileModel) };
    inline MoveCdsFileResponseBody::MoveCdsFileModel getMoveCdsFileModel() { DARABONBA_PTR_GET(moveCdsFileModel_, MoveCdsFileResponseBody::MoveCdsFileModel) };
    inline MoveCdsFileResponseBody& setMoveCdsFileModel(const MoveCdsFileResponseBody::MoveCdsFileModel & moveCdsFileModel) { DARABONBA_PTR_SET_VALUE(moveCdsFileModel_, moveCdsFileModel) };
    inline MoveCdsFileResponseBody& setMoveCdsFileModel(MoveCdsFileResponseBody::MoveCdsFileModel && moveCdsFileModel) { DARABONBA_PTR_SET_RVALUE(moveCdsFileModel_, moveCdsFileModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MoveCdsFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The result of the modification. A value of success indicates that the modification is successful. If the modification failed, an error message is returned.
    shared_ptr<string> code_ {};
    // The error message that is returned. This parameter is not returned if the value of Code is success.
    shared_ptr<string> message_ {};
    // The response object when you move a file.
    shared_ptr<MoveCdsFileResponseBody::MoveCdsFileModel> moveCdsFileModel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    // 
    // Valid values:
    // 
    // *   <!-- -->
    // 
    //     true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   <!-- -->
    // 
    //     false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
