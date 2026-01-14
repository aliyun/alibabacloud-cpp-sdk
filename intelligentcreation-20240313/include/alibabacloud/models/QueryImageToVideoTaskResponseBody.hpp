// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYIMAGETOVIDEOTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYIMAGETOVIDEOTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class QueryImageToVideoTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryImageToVideoTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(originUrl, originUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryImageToVideoTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(originUrl, originUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    QueryImageToVideoTaskResponseBody() = default ;
    QueryImageToVideoTaskResponseBody(const QueryImageToVideoTaskResponseBody &) = default ;
    QueryImageToVideoTaskResponseBody(QueryImageToVideoTaskResponseBody &&) = default ;
    QueryImageToVideoTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryImageToVideoTaskResponseBody() = default ;
    QueryImageToVideoTaskResponseBody& operator=(const QueryImageToVideoTaskResponseBody &) = default ;
    QueryImageToVideoTaskResponseBody& operator=(QueryImageToVideoTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->message_ == nullptr
        && this->originUrl_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr && this->taskId_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryImageToVideoTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // originUrl Field Functions 
    bool hasOriginUrl() const { return this->originUrl_ != nullptr;};
    void deleteOriginUrl() { this->originUrl_ = nullptr;};
    inline string getOriginUrl() const { DARABONBA_PTR_GET_DEFAULT(originUrl_, "") };
    inline QueryImageToVideoTaskResponseBody& setOriginUrl(string originUrl) { DARABONBA_PTR_SET_VALUE(originUrl_, originUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryImageToVideoTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline QueryImageToVideoTaskResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryImageToVideoTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline QueryImageToVideoTaskResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> originUrl_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
