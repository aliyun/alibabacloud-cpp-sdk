// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGRAPHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGRAPHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateGraphResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGraphResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_TO_JSON(syncStatus, syncStatus_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGraphResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(schemaVersion, schemaVersion_);
      DARABONBA_PTR_FROM_JSON(syncStatus, syncStatus_);
    };
    CreateGraphResponseBody() = default ;
    CreateGraphResponseBody(const CreateGraphResponseBody &) = default ;
    CreateGraphResponseBody(CreateGraphResponseBody &&) = default ;
    CreateGraphResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGraphResponseBody() = default ;
    CreateGraphResponseBody& operator=(const CreateGraphResponseBody &) = default ;
    CreateGraphResponseBody& operator=(CreateGraphResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->dataSourceId_ == nullptr && this->graphName_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->schemaVersion_ == nullptr
        && this->syncStatus_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateGraphResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateGraphResponseBody& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline CreateGraphResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateGraphResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGraphResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaVersion Field Functions 
    bool hasSchemaVersion() const { return this->schemaVersion_ != nullptr;};
    void deleteSchemaVersion() { this->schemaVersion_ = nullptr;};
    inline string getSchemaVersion() const { DARABONBA_PTR_GET_DEFAULT(schemaVersion_, "") };
    inline CreateGraphResponseBody& setSchemaVersion(string schemaVersion) { DARABONBA_PTR_SET_VALUE(schemaVersion_, schemaVersion) };


    // syncStatus Field Functions 
    bool hasSyncStatus() const { return this->syncStatus_ != nullptr;};
    void deleteSyncStatus() { this->syncStatus_ = nullptr;};
    inline string getSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(syncStatus_, "") };
    inline CreateGraphResponseBody& setSyncStatus(string syncStatus) { DARABONBA_PTR_SET_VALUE(syncStatus_, syncStatus) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 创建时绑定的数据源 ID
    shared_ptr<int64_t> dataSourceId_ {};
    // 图谱名称
    shared_ptr<string> graphName_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // Schema 版本；快建路径固定 0.0.0，正式版本经控制台发布产生
    shared_ptr<string> schemaVersion_ {};
    // 同步状态，快建成功为 SUCCESS
    shared_ptr<string> syncStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
