// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOCTRANSLATETASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOCTRANSLATETASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alimt20181012
{
namespace Models
{
  class GetDocTranslateTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDocTranslateTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageCount, pageCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TranslateErrorCode, translateErrorCode_);
      DARABONBA_PTR_TO_JSON(TranslateErrorMessage, translateErrorMessage_);
      DARABONBA_PTR_TO_JSON(TranslateFileUrl, translateFileUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetDocTranslateTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageCount, pageCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TranslateErrorCode, translateErrorCode_);
      DARABONBA_PTR_FROM_JSON(TranslateErrorMessage, translateErrorMessage_);
      DARABONBA_PTR_FROM_JSON(TranslateFileUrl, translateFileUrl_);
    };
    GetDocTranslateTaskResponseBody() = default ;
    GetDocTranslateTaskResponseBody(const GetDocTranslateTaskResponseBody &) = default ;
    GetDocTranslateTaskResponseBody(GetDocTranslateTaskResponseBody &&) = default ;
    GetDocTranslateTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDocTranslateTaskResponseBody() = default ;
    GetDocTranslateTaskResponseBody& operator=(const GetDocTranslateTaskResponseBody &) = default ;
    GetDocTranslateTaskResponseBody& operator=(GetDocTranslateTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageCount_ == nullptr
        && return this->requestId_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->translateErrorCode_ == nullptr && return this->translateErrorMessage_ == nullptr
        && return this->translateFileUrl_ == nullptr; };
    // pageCount Field Functions 
    bool hasPageCount() const { return this->pageCount_ != nullptr;};
    void deletePageCount() { this->pageCount_ = nullptr;};
    inline int32_t pageCount() const { DARABONBA_PTR_GET_DEFAULT(pageCount_, 0) };
    inline GetDocTranslateTaskResponseBody& setPageCount(int32_t pageCount) { DARABONBA_PTR_SET_VALUE(pageCount_, pageCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDocTranslateTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDocTranslateTaskResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetDocTranslateTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // translateErrorCode Field Functions 
    bool hasTranslateErrorCode() const { return this->translateErrorCode_ != nullptr;};
    void deleteTranslateErrorCode() { this->translateErrorCode_ = nullptr;};
    inline string translateErrorCode() const { DARABONBA_PTR_GET_DEFAULT(translateErrorCode_, "") };
    inline GetDocTranslateTaskResponseBody& setTranslateErrorCode(string translateErrorCode) { DARABONBA_PTR_SET_VALUE(translateErrorCode_, translateErrorCode) };


    // translateErrorMessage Field Functions 
    bool hasTranslateErrorMessage() const { return this->translateErrorMessage_ != nullptr;};
    void deleteTranslateErrorMessage() { this->translateErrorMessage_ = nullptr;};
    inline string translateErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(translateErrorMessage_, "") };
    inline GetDocTranslateTaskResponseBody& setTranslateErrorMessage(string translateErrorMessage) { DARABONBA_PTR_SET_VALUE(translateErrorMessage_, translateErrorMessage) };


    // translateFileUrl Field Functions 
    bool hasTranslateFileUrl() const { return this->translateFileUrl_ != nullptr;};
    void deleteTranslateFileUrl() { this->translateFileUrl_ = nullptr;};
    inline string translateFileUrl() const { DARABONBA_PTR_GET_DEFAULT(translateFileUrl_, "") };
    inline GetDocTranslateTaskResponseBody& setTranslateFileUrl(string translateFileUrl) { DARABONBA_PTR_SET_VALUE(translateFileUrl_, translateFileUrl) };


  protected:
    std::shared_ptr<int32_t> pageCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> translateErrorCode_ = nullptr;
    std::shared_ptr<string> translateErrorMessage_ = nullptr;
    std::shared_ptr<string> translateFileUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alimt20181012
#endif
