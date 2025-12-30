// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCDSFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COPYCDSFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CopyCdsFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCdsFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CopyCdsFileModel, copyCdsFileModel_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCdsFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CopyCdsFileModel, copyCdsFileModel_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CopyCdsFileResponseBody() = default ;
    CopyCdsFileResponseBody(const CopyCdsFileResponseBody &) = default ;
    CopyCdsFileResponseBody(CopyCdsFileResponseBody &&) = default ;
    CopyCdsFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCdsFileResponseBody() = default ;
    CopyCdsFileResponseBody& operator=(const CopyCdsFileResponseBody &) = default ;
    CopyCdsFileResponseBody& operator=(CopyCdsFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CopyCdsFileModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CopyCdsFileModel& obj) { 
        DARABONBA_PTR_TO_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
      };
      friend void from_json(const Darabonba::Json& j, CopyCdsFileModel& obj) { 
        DARABONBA_PTR_FROM_JSON(AsyncTaskId, asyncTaskId_);
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      };
      CopyCdsFileModel() = default ;
      CopyCdsFileModel(const CopyCdsFileModel &) = default ;
      CopyCdsFileModel(CopyCdsFileModel &&) = default ;
      CopyCdsFileModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CopyCdsFileModel() = default ;
      CopyCdsFileModel& operator=(const CopyCdsFileModel &) = default ;
      CopyCdsFileModel& operator=(CopyCdsFileModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->asyncTaskId_ == nullptr
        && this->fileId_ == nullptr; };
      // asyncTaskId Field Functions 
      bool hasAsyncTaskId() const { return this->asyncTaskId_ != nullptr;};
      void deleteAsyncTaskId() { this->asyncTaskId_ = nullptr;};
      inline string getAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(asyncTaskId_, "") };
      inline CopyCdsFileModel& setAsyncTaskId(string asyncTaskId) { DARABONBA_PTR_SET_VALUE(asyncTaskId_, asyncTaskId) };


      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
      inline CopyCdsFileModel& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    protected:
      // The ID of the asynchronous task. This parameter is not returned if you copy a file. This parameter is returned if you copy a folder in the backend in an asynchronous manner. You can call the GetAsyncTask operation to obtain the ID and details of an asynchronous task.
      shared_ptr<string> asyncTaskId_ {};
      // The ID of the copied file or folder.
      shared_ptr<string> fileId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->copyCdsFileModel_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CopyCdsFileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // copyCdsFileModel Field Functions 
    bool hasCopyCdsFileModel() const { return this->copyCdsFileModel_ != nullptr;};
    void deleteCopyCdsFileModel() { this->copyCdsFileModel_ = nullptr;};
    inline const CopyCdsFileResponseBody::CopyCdsFileModel & getCopyCdsFileModel() const { DARABONBA_PTR_GET_CONST(copyCdsFileModel_, CopyCdsFileResponseBody::CopyCdsFileModel) };
    inline CopyCdsFileResponseBody::CopyCdsFileModel getCopyCdsFileModel() { DARABONBA_PTR_GET(copyCdsFileModel_, CopyCdsFileResponseBody::CopyCdsFileModel) };
    inline CopyCdsFileResponseBody& setCopyCdsFileModel(const CopyCdsFileResponseBody::CopyCdsFileModel & copyCdsFileModel) { DARABONBA_PTR_SET_VALUE(copyCdsFileModel_, copyCdsFileModel) };
    inline CopyCdsFileResponseBody& setCopyCdsFileModel(CopyCdsFileResponseBody::CopyCdsFileModel && copyCdsFileModel) { DARABONBA_PTR_SET_RVALUE(copyCdsFileModel_, copyCdsFileModel) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CopyCdsFileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CopyCdsFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CopyCdsFileResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The operation result. The value success indicates that the operation is successful. If the operation failed, an error message is returned.
    shared_ptr<string> code_ {};
    // The details about the file copying.
    shared_ptr<CopyCdsFileResponseBody::CopyCdsFileModel> copyCdsFileModel_ {};
    // The error message that is returned. This parameter is not returned if the value of Code is success.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
