// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASECONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASECONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetKnowledgeBaseConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(changeRecordEnabled, changeRecordEnabled_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(directoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(ooVisibilityMode, ooVisibilityMode_);
      DARABONBA_PTR_TO_JSON(operatingObjectNames, operatingObjectNames_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(changeRecordEnabled, changeRecordEnabled_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(directoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(ooVisibilityMode, ooVisibilityMode_);
      DARABONBA_PTR_FROM_JSON(operatingObjectNames, operatingObjectNames_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetKnowledgeBaseConfigurationResponseBody() = default ;
    GetKnowledgeBaseConfigurationResponseBody(const GetKnowledgeBaseConfigurationResponseBody &) = default ;
    GetKnowledgeBaseConfigurationResponseBody(GetKnowledgeBaseConfigurationResponseBody &&) = default ;
    GetKnowledgeBaseConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseConfigurationResponseBody() = default ;
    GetKnowledgeBaseConfigurationResponseBody& operator=(const GetKnowledgeBaseConfigurationResponseBody &) = default ;
    GetKnowledgeBaseConfigurationResponseBody& operator=(GetKnowledgeBaseConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeRecordEnabled_ == nullptr
        && this->code_ == nullptr && this->directoryId_ == nullptr && this->message_ == nullptr && this->ooVisibilityMode_ == nullptr && this->operatingObjectNames_ == nullptr
        && this->requestId_ == nullptr; };
    // changeRecordEnabled Field Functions 
    bool hasChangeRecordEnabled() const { return this->changeRecordEnabled_ != nullptr;};
    void deleteChangeRecordEnabled() { this->changeRecordEnabled_ = nullptr;};
    inline bool getChangeRecordEnabled() const { DARABONBA_PTR_GET_DEFAULT(changeRecordEnabled_, false) };
    inline GetKnowledgeBaseConfigurationResponseBody& setChangeRecordEnabled(bool changeRecordEnabled) { DARABONBA_PTR_SET_VALUE(changeRecordEnabled_, changeRecordEnabled) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetKnowledgeBaseConfigurationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline GetKnowledgeBaseConfigurationResponseBody& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetKnowledgeBaseConfigurationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ooVisibilityMode Field Functions 
    bool hasOoVisibilityMode() const { return this->ooVisibilityMode_ != nullptr;};
    void deleteOoVisibilityMode() { this->ooVisibilityMode_ = nullptr;};
    inline string getOoVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(ooVisibilityMode_, "") };
    inline GetKnowledgeBaseConfigurationResponseBody& setOoVisibilityMode(string ooVisibilityMode) { DARABONBA_PTR_SET_VALUE(ooVisibilityMode_, ooVisibilityMode) };


    // operatingObjectNames Field Functions 
    bool hasOperatingObjectNames() const { return this->operatingObjectNames_ != nullptr;};
    void deleteOperatingObjectNames() { this->operatingObjectNames_ = nullptr;};
    inline const vector<string> & getOperatingObjectNames() const { DARABONBA_PTR_GET_CONST(operatingObjectNames_, vector<string>) };
    inline vector<string> getOperatingObjectNames() { DARABONBA_PTR_GET(operatingObjectNames_, vector<string>) };
    inline GetKnowledgeBaseConfigurationResponseBody& setOperatingObjectNames(const vector<string> & operatingObjectNames) { DARABONBA_PTR_SET_VALUE(operatingObjectNames_, operatingObjectNames) };
    inline GetKnowledgeBaseConfigurationResponseBody& setOperatingObjectNames(vector<string> && operatingObjectNames) { DARABONBA_PTR_SET_RVALUE(operatingObjectNames_, operatingObjectNames) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgeBaseConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 是否开启后续内容更新的 AI 版本摘要
    shared_ptr<bool> changeRecordEnabled_ {};
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 企业知识库根目录 ID
    shared_ptr<string> directoryId_ {};
    // 错误描述，成功时为 success
    shared_ptr<string> message_ {};
    // 数字员工可见模式；历史未显式设置 ALL 的配置按 SPECIFIED 返回
    shared_ptr<string> ooVisibilityMode_ {};
    // 显式关联的数字员工名称；ALL 返回空数组，SPECIFIED 空数组表示没有关联员工
    shared_ptr<vector<string>> operatingObjectNames_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
