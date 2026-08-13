// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MOVERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class MoveResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(targetDirectoryId, targetDirectoryId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sourceDirectoryId, sourceDirectoryId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(targetDirectoryId, targetDirectoryId_);
    };
    MoveResourceResponseBody() = default ;
    MoveResourceResponseBody(const MoveResourceResponseBody &) = default ;
    MoveResourceResponseBody(MoveResourceResponseBody &&) = default ;
    MoveResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveResourceResponseBody() = default ;
    MoveResourceResponseBody& operator=(const MoveResourceResponseBody &) = default ;
    MoveResourceResponseBody& operator=(MoveResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->sourceDirectoryId_ == nullptr && this->sourceId_ == nullptr && this->success_ == nullptr
        && this->targetDirectoryId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline MoveResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline MoveResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline MoveResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceDirectoryId Field Functions 
    bool hasSourceDirectoryId() const { return this->sourceDirectoryId_ != nullptr;};
    void deleteSourceDirectoryId() { this->sourceDirectoryId_ = nullptr;};
    inline string getSourceDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(sourceDirectoryId_, "") };
    inline MoveResourceResponseBody& setSourceDirectoryId(string sourceDirectoryId) { DARABONBA_PTR_SET_VALUE(sourceDirectoryId_, sourceDirectoryId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline MoveResourceResponseBody& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline MoveResourceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // targetDirectoryId Field Functions 
    bool hasTargetDirectoryId() const { return this->targetDirectoryId_ != nullptr;};
    void deleteTargetDirectoryId() { this->targetDirectoryId_ = nullptr;};
    inline string getTargetDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(targetDirectoryId_, "") };
    inline MoveResourceResponseBody& setTargetDirectoryId(string targetDirectoryId) { DARABONBA_PTR_SET_VALUE(targetDirectoryId_, targetDirectoryId) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 源目录 ID（echo 回入参）
    shared_ptr<string> sourceDirectoryId_ {};
    // 资源 ID（echo 回入参）
    shared_ptr<string> sourceId_ {};
    // 操作是否成功
    shared_ptr<bool> success_ {};
    // 目标目录 ID（echo 回入参）
    shared_ptr<string> targetDirectoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
