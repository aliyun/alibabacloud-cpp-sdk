// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAMERACONSOLEDEBUGSTREAMHEADERS_HPP_
#define ALIBABACLOUD_MODELS_CAMERACONSOLEDEBUGSTREAMHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class CameraConsoleDebugStreamHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CameraConsoleDebugStreamHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-QI-Instance-Id, xQIInstanceId_);
      DARABONBA_PTR_TO_JSON(X-QI-Request-Id, xQIRequestId_);
      DARABONBA_PTR_TO_JSON(X-QI-Session-Id, xQISessionId_);
    };
    friend void from_json(const Darabonba::Json& j, CameraConsoleDebugStreamHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-QI-Instance-Id, xQIInstanceId_);
      DARABONBA_PTR_FROM_JSON(X-QI-Request-Id, xQIRequestId_);
      DARABONBA_PTR_FROM_JSON(X-QI-Session-Id, xQISessionId_);
    };
    CameraConsoleDebugStreamHeaders() = default ;
    CameraConsoleDebugStreamHeaders(const CameraConsoleDebugStreamHeaders &) = default ;
    CameraConsoleDebugStreamHeaders(CameraConsoleDebugStreamHeaders &&) = default ;
    CameraConsoleDebugStreamHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CameraConsoleDebugStreamHeaders() = default ;
    CameraConsoleDebugStreamHeaders& operator=(const CameraConsoleDebugStreamHeaders &) = default ;
    CameraConsoleDebugStreamHeaders& operator=(CameraConsoleDebugStreamHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xQIInstanceId_ == nullptr && this->xQIRequestId_ == nullptr && this->xQISessionId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline CameraConsoleDebugStreamHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline CameraConsoleDebugStreamHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xQIInstanceId Field Functions 
    bool hasXQIInstanceId() const { return this->xQIInstanceId_ != nullptr;};
    void deleteXQIInstanceId() { this->xQIInstanceId_ = nullptr;};
    inline string getXQIInstanceId() const { DARABONBA_PTR_GET_DEFAULT(xQIInstanceId_, "") };
    inline CameraConsoleDebugStreamHeaders& setXQIInstanceId(string xQIInstanceId) { DARABONBA_PTR_SET_VALUE(xQIInstanceId_, xQIInstanceId) };


    // xQIRequestId Field Functions 
    bool hasXQIRequestId() const { return this->xQIRequestId_ != nullptr;};
    void deleteXQIRequestId() { this->xQIRequestId_ = nullptr;};
    inline string getXQIRequestId() const { DARABONBA_PTR_GET_DEFAULT(xQIRequestId_, "") };
    inline CameraConsoleDebugStreamHeaders& setXQIRequestId(string xQIRequestId) { DARABONBA_PTR_SET_VALUE(xQIRequestId_, xQIRequestId) };


    // xQISessionId Field Functions 
    bool hasXQISessionId() const { return this->xQISessionId_ != nullptr;};
    void deleteXQISessionId() { this->xQISessionId_ = nullptr;};
    inline string getXQISessionId() const { DARABONBA_PTR_GET_DEFAULT(xQISessionId_, "") };
    inline CameraConsoleDebugStreamHeaders& setXQISessionId(string xQISessionId) { DARABONBA_PTR_SET_VALUE(xQISessionId_, xQISessionId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // 实例 ID，非空 Header 优先于 Body。
    shared_ptr<string> xQIInstanceId_ {};
    // 请求 ID 优先级：可信 POP 注入的 x-acs-request-id、非空 X-QI-Request-Id Header、Body.requestId。没有前两者时 Body.requestId 必填；没有可信 POP ID 时 Header 与 Body.requestId 至少提供一个。 1～128 位，仅字母、数字及 ._:-。成功重放还须复用同一 Session；已记录为失败的请求须换新 ID。POP 重试分配新 ID 时会按新请求处理。
    shared_ptr<string> xQIRequestId_ {};
    // 可选会话 ID，非空 Header 优先于 Body.sessionId；省略时生成。1～128 位，仅字母、数字及 ._:-。成功重放必须复用原 Session 和有效 Request ID；切换配置时换新 Session，人物识别同时换新 scene_id。
    shared_ptr<string> xQISessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
