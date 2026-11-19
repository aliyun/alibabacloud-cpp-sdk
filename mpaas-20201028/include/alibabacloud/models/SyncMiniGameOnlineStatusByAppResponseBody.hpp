// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCMINIGAMEONLINESTATUSBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SYNCMINIGAMEONLINESTATUSBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SyncMiniGameOnlineStatusByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncMiniGameOnlineStatusByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SyncMiniGameOnlineStatusByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SyncMiniGameOnlineStatusByAppResponseBody() = default ;
    SyncMiniGameOnlineStatusByAppResponseBody(const SyncMiniGameOnlineStatusByAppResponseBody &) = default ;
    SyncMiniGameOnlineStatusByAppResponseBody(SyncMiniGameOnlineStatusByAppResponseBody &&) = default ;
    SyncMiniGameOnlineStatusByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncMiniGameOnlineStatusByAppResponseBody() = default ;
    SyncMiniGameOnlineStatusByAppResponseBody& operator=(const SyncMiniGameOnlineStatusByAppResponseBody &) = default ;
    SyncMiniGameOnlineStatusByAppResponseBody& operator=(SyncMiniGameOnlineStatusByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentOnlineStatus, currentOnlineStatus_);
        DARABONBA_PTR_TO_JSON(MiniProgramCode, miniProgramCode_);
        DARABONBA_PTR_TO_JSON(StatusChanged, statusChanged_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentOnlineStatus, currentOnlineStatus_);
        DARABONBA_PTR_FROM_JSON(MiniProgramCode, miniProgramCode_);
        DARABONBA_PTR_FROM_JSON(StatusChanged, statusChanged_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentOnlineStatus_ == nullptr
        && this->miniProgramCode_ == nullptr && this->statusChanged_ == nullptr; };
      // currentOnlineStatus Field Functions 
      bool hasCurrentOnlineStatus() const { return this->currentOnlineStatus_ != nullptr;};
      void deleteCurrentOnlineStatus() { this->currentOnlineStatus_ = nullptr;};
      inline int32_t getCurrentOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(currentOnlineStatus_, 0) };
      inline Content& setCurrentOnlineStatus(int32_t currentOnlineStatus) { DARABONBA_PTR_SET_VALUE(currentOnlineStatus_, currentOnlineStatus) };


      // miniProgramCode Field Functions 
      bool hasMiniProgramCode() const { return this->miniProgramCode_ != nullptr;};
      void deleteMiniProgramCode() { this->miniProgramCode_ = nullptr;};
      inline string getMiniProgramCode() const { DARABONBA_PTR_GET_DEFAULT(miniProgramCode_, "") };
      inline Content& setMiniProgramCode(string miniProgramCode) { DARABONBA_PTR_SET_VALUE(miniProgramCode_, miniProgramCode) };


      // statusChanged Field Functions 
      bool hasStatusChanged() const { return this->statusChanged_ != nullptr;};
      void deleteStatusChanged() { this->statusChanged_ = nullptr;};
      inline bool getStatusChanged() const { DARABONBA_PTR_GET_DEFAULT(statusChanged_, false) };
      inline Content& setStatusChanged(bool statusChanged) { DARABONBA_PTR_SET_VALUE(statusChanged_, statusChanged) };


    protected:
      shared_ptr<int32_t> currentOnlineStatus_ {};
      shared_ptr<string> miniProgramCode_ {};
      shared_ptr<bool> statusChanged_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->content_ == nullptr && this->errorCode_ == nullptr && this->requestId_ == nullptr && this->resultMsg_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const SyncMiniGameOnlineStatusByAppResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, SyncMiniGameOnlineStatusByAppResponseBody::Content) };
    inline SyncMiniGameOnlineStatusByAppResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, SyncMiniGameOnlineStatusByAppResponseBody::Content) };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setContent(const SyncMiniGameOnlineStatusByAppResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setContent(SyncMiniGameOnlineStatusByAppResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SyncMiniGameOnlineStatusByAppResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<SyncMiniGameOnlineStatusByAppResponseBody::Content> content_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> resultMsg_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
