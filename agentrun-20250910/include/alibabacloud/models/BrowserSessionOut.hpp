// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERSESSIONOUT_HPP_
#define ALIBABACLOUD_MODELS_BROWSERSESSIONOUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserSessionOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserSessionOut& obj) { 
      DARABONBA_PTR_TO_JSON(browserId, browserId_);
      DARABONBA_PTR_TO_JSON(browserName, browserName_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserSessionOut& obj) { 
      DARABONBA_PTR_FROM_JSON(browserId, browserId_);
      DARABONBA_PTR_FROM_JSON(browserName, browserName_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    BrowserSessionOut() = default ;
    BrowserSessionOut(const BrowserSessionOut &) = default ;
    BrowserSessionOut(BrowserSessionOut &&) = default ;
    BrowserSessionOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserSessionOut() = default ;
    BrowserSessionOut& operator=(const BrowserSessionOut &) = default ;
    BrowserSessionOut& operator=(BrowserSessionOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserId_ == nullptr
        && this->browserName_ == nullptr && this->createdAt_ == nullptr && this->lastUpdatedAt_ == nullptr && this->sessionId_ == nullptr && this->sessionIdleTimeoutSeconds_ == nullptr
        && this->status_ == nullptr; };
    // browserId Field Functions 
    bool hasBrowserId() const { return this->browserId_ != nullptr;};
    void deleteBrowserId() { this->browserId_ = nullptr;};
    inline string getBrowserId() const { DARABONBA_PTR_GET_DEFAULT(browserId_, "") };
    inline BrowserSessionOut& setBrowserId(string browserId) { DARABONBA_PTR_SET_VALUE(browserId_, browserId) };


    // browserName Field Functions 
    bool hasBrowserName() const { return this->browserName_ != nullptr;};
    void deleteBrowserName() { this->browserName_ = nullptr;};
    inline string getBrowserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
    inline BrowserSessionOut& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline BrowserSessionOut& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string getLastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline BrowserSessionOut& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline BrowserSessionOut& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t getSessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline BrowserSessionOut& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline BrowserSessionOut& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> browserId_ {};
    shared_ptr<string> browserName_ {};
    shared_ptr<string> createdAt_ {};
    shared_ptr<string> lastUpdatedAt_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // 会话空闲超时时间，单位为秒
    shared_ptr<int32_t> sessionIdleTimeoutSeconds_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
