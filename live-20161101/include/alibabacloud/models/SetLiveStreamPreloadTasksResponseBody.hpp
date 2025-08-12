// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETLIVESTREAMPRELOADTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetLiveStreamPreloadTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FailedURL, failedURL_);
      DARABONBA_PTR_TO_JSON(PreloadTasksMessages, preloadTasksMessages_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SuccessURL, successURL_);
      DARABONBA_PTR_TO_JSON(TotalURL, totalURL_);
    };
    friend void from_json(const Darabonba::Json& j, SetLiveStreamPreloadTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FailedURL, failedURL_);
      DARABONBA_PTR_FROM_JSON(PreloadTasksMessages, preloadTasksMessages_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SuccessURL, successURL_);
      DARABONBA_PTR_FROM_JSON(TotalURL, totalURL_);
    };
    SetLiveStreamPreloadTasksResponseBody() = default ;
    SetLiveStreamPreloadTasksResponseBody(const SetLiveStreamPreloadTasksResponseBody &) = default ;
    SetLiveStreamPreloadTasksResponseBody(SetLiveStreamPreloadTasksResponseBody &&) = default ;
    SetLiveStreamPreloadTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetLiveStreamPreloadTasksResponseBody() = default ;
    SetLiveStreamPreloadTasksResponseBody& operator=(const SetLiveStreamPreloadTasksResponseBody &) = default ;
    SetLiveStreamPreloadTasksResponseBody& operator=(SetLiveStreamPreloadTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->failedURL_ != nullptr
        && this->preloadTasksMessages_ != nullptr && this->requestId_ != nullptr && this->status_ != nullptr && this->successURL_ != nullptr && this->totalURL_ != nullptr; };
    // failedURL Field Functions 
    bool hasFailedURL() const { return this->failedURL_ != nullptr;};
    void deleteFailedURL() { this->failedURL_ = nullptr;};
    inline int32_t failedURL() const { DARABONBA_PTR_GET_DEFAULT(failedURL_, 0) };
    inline SetLiveStreamPreloadTasksResponseBody& setFailedURL(int32_t failedURL) { DARABONBA_PTR_SET_VALUE(failedURL_, failedURL) };


    // preloadTasksMessages Field Functions 
    bool hasPreloadTasksMessages() const { return this->preloadTasksMessages_ != nullptr;};
    void deletePreloadTasksMessages() { this->preloadTasksMessages_ = nullptr;};
    inline const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages & preloadTasksMessages() const { DARABONBA_PTR_GET_CONST(preloadTasksMessages_, SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages) };
    inline SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages preloadTasksMessages() { DARABONBA_PTR_GET(preloadTasksMessages_, SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages) };
    inline SetLiveStreamPreloadTasksResponseBody& setPreloadTasksMessages(const SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages & preloadTasksMessages) { DARABONBA_PTR_SET_VALUE(preloadTasksMessages_, preloadTasksMessages) };
    inline SetLiveStreamPreloadTasksResponseBody& setPreloadTasksMessages(SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages && preloadTasksMessages) { DARABONBA_PTR_SET_RVALUE(preloadTasksMessages_, preloadTasksMessages) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetLiveStreamPreloadTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SetLiveStreamPreloadTasksResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successURL Field Functions 
    bool hasSuccessURL() const { return this->successURL_ != nullptr;};
    void deleteSuccessURL() { this->successURL_ = nullptr;};
    inline int32_t successURL() const { DARABONBA_PTR_GET_DEFAULT(successURL_, 0) };
    inline SetLiveStreamPreloadTasksResponseBody& setSuccessURL(int32_t successURL) { DARABONBA_PTR_SET_VALUE(successURL_, successURL) };


    // totalURL Field Functions 
    bool hasTotalURL() const { return this->totalURL_ != nullptr;};
    void deleteTotalURL() { this->totalURL_ = nullptr;};
    inline int32_t totalURL() const { DARABONBA_PTR_GET_DEFAULT(totalURL_, 0) };
    inline SetLiveStreamPreloadTasksResponseBody& setTotalURL(int32_t totalURL) { DARABONBA_PTR_SET_VALUE(totalURL_, totalURL) };


  protected:
    // The number of URLs for which the prefetch task configuration failed.
    std::shared_ptr<int32_t> failedURL_ = nullptr;
    // The details of the prefetch task.
    std::shared_ptr<SetLiveStreamPreloadTasksResponseBodyPreloadTasksMessages> preloadTasksMessages_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The status of the prefetch task. Valid values:
    // 
    // *   Success
    // *   Failed
    // 
    // >  Success is returned only if the prefetch task is configured for all specified streaming URLs.
    std::shared_ptr<string> status_ = nullptr;
    // The number of URLs for which the prefetch task is successfully configured.
    std::shared_ptr<int32_t> successURL_ = nullptr;
    // The total number of URLs.
    std::shared_ptr<int32_t> totalURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
