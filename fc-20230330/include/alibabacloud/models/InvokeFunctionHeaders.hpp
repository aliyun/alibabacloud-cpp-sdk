// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEFUNCTIONHEADERS_HPP_
#define ALIBABACLOUD_MODELS_INVOKEFUNCTIONHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class InvokeFunctionHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeFunctionHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(x-fc-async-task-id, xFcAsyncTaskId_);
      DARABONBA_PTR_TO_JSON(x-fc-invocation-type, xFcInvocationType_);
      DARABONBA_PTR_TO_JSON(x-fc-log-type, xFcLogType_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeFunctionHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(x-fc-async-task-id, xFcAsyncTaskId_);
      DARABONBA_PTR_FROM_JSON(x-fc-invocation-type, xFcInvocationType_);
      DARABONBA_PTR_FROM_JSON(x-fc-log-type, xFcLogType_);
    };
    InvokeFunctionHeaders() = default ;
    InvokeFunctionHeaders(const InvokeFunctionHeaders &) = default ;
    InvokeFunctionHeaders(InvokeFunctionHeaders &&) = default ;
    InvokeFunctionHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeFunctionHeaders() = default ;
    InvokeFunctionHeaders& operator=(const InvokeFunctionHeaders &) = default ;
    InvokeFunctionHeaders& operator=(InvokeFunctionHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xFcAsyncTaskId_ == nullptr && this->xFcInvocationType_ == nullptr && this->xFcLogType_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline InvokeFunctionHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline InvokeFunctionHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xFcAsyncTaskId Field Functions 
    bool hasXFcAsyncTaskId() const { return this->xFcAsyncTaskId_ != nullptr;};
    void deleteXFcAsyncTaskId() { this->xFcAsyncTaskId_ = nullptr;};
    inline string getXFcAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(xFcAsyncTaskId_, "") };
    inline InvokeFunctionHeaders& setXFcAsyncTaskId(string xFcAsyncTaskId) { DARABONBA_PTR_SET_VALUE(xFcAsyncTaskId_, xFcAsyncTaskId) };


    // xFcInvocationType Field Functions 
    bool hasXFcInvocationType() const { return this->xFcInvocationType_ != nullptr;};
    void deleteXFcInvocationType() { this->xFcInvocationType_ = nullptr;};
    inline string getXFcInvocationType() const { DARABONBA_PTR_GET_DEFAULT(xFcInvocationType_, "") };
    inline InvokeFunctionHeaders& setXFcInvocationType(string xFcInvocationType) { DARABONBA_PTR_SET_VALUE(xFcInvocationType_, xFcInvocationType) };


    // xFcLogType Field Functions 
    bool hasXFcLogType() const { return this->xFcLogType_ != nullptr;};
    void deleteXFcLogType() { this->xFcLogType_ = nullptr;};
    inline string getXFcLogType() const { DARABONBA_PTR_GET_DEFAULT(xFcLogType_, "") };
    inline InvokeFunctionHeaders& setXFcLogType(string xFcLogType) { DARABONBA_PTR_SET_VALUE(xFcLogType_, xFcLogType) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // Asynchronous task ID. Enable asynchronous tasks beforehand.
    // 
    // > When using the SDK for invocation, set a business-related ID. This helps with subsequent operations on the execution. For example, a video processing function can use the video filename as the invocation ID. Use this ID to check if the video processing is complete or to stop it. The ID naming convention must start with an English letter (uppercase or lowercase) or an underscore (_). It can contain English letters (uppercase or lowercase), digits (0-9), underscores (_), and hyphens (-). The ID cannot exceed 128 characters. If you do not set an ID for asynchronous invocation, the system automatically generates one.
    shared_ptr<string> xFcAsyncTaskId_ {};
    // Function invocation type. Sync or Async.
    shared_ptr<string> xFcInvocationType_ {};
    // Log type returned by function invocation. None or Tail.
    shared_ptr<string> xFcLogType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
