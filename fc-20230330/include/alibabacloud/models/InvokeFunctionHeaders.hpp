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
        && return this->xFcAsyncTaskId_ == nullptr && return this->xFcInvocationType_ == nullptr && return this->xFcLogType_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & commonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> commonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline InvokeFunctionHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline InvokeFunctionHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xFcAsyncTaskId Field Functions 
    bool hasXFcAsyncTaskId() const { return this->xFcAsyncTaskId_ != nullptr;};
    void deleteXFcAsyncTaskId() { this->xFcAsyncTaskId_ = nullptr;};
    inline string xFcAsyncTaskId() const { DARABONBA_PTR_GET_DEFAULT(xFcAsyncTaskId_, "") };
    inline InvokeFunctionHeaders& setXFcAsyncTaskId(string xFcAsyncTaskId) { DARABONBA_PTR_SET_VALUE(xFcAsyncTaskId_, xFcAsyncTaskId) };


    // xFcInvocationType Field Functions 
    bool hasXFcInvocationType() const { return this->xFcInvocationType_ != nullptr;};
    void deleteXFcInvocationType() { this->xFcInvocationType_ = nullptr;};
    inline string xFcInvocationType() const { DARABONBA_PTR_GET_DEFAULT(xFcInvocationType_, "") };
    inline InvokeFunctionHeaders& setXFcInvocationType(string xFcInvocationType) { DARABONBA_PTR_SET_VALUE(xFcInvocationType_, xFcInvocationType) };


    // xFcLogType Field Functions 
    bool hasXFcLogType() const { return this->xFcLogType_ != nullptr;};
    void deleteXFcLogType() { this->xFcLogType_ = nullptr;};
    inline string xFcLogType() const { DARABONBA_PTR_GET_DEFAULT(xFcLogType_, "") };
    inline InvokeFunctionHeaders& setXFcLogType(string xFcLogType) { DARABONBA_PTR_SET_VALUE(xFcLogType_, xFcLogType) };


  protected:
    std::shared_ptr<map<string, string>> commonHeaders_ = nullptr;
    // The ID of the asynchronous task. You must enable the asynchronous task feature in advance.
    // 
    // >  If you use an SDK to invoke a function, we recommend that you specify a business-related ID to facilitate subsequent operations. For example, a video processing function can use video file names as invocation IDs. This way, you can easily check whether a video is successfully processed or terminated before it is processed. The ID can start only with letters or underscores. An ID can contain *letters, digits (0 - 9), underscores*, and hyphens (-). It can be up to 128 characters in length. If you do not specify the ID of the asynchronous invocation, the system automatically generates an ID.
    std::shared_ptr<string> xFcAsyncTaskId_ = nullptr;
    // The type of function invocation. Valid values: Sync and Async.
    std::shared_ptr<string> xFcInvocationType_ = nullptr;
    // The log type of function invocation. Valid values: None and Tail.
    std::shared_ptr<string> xFcLogType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
