// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SAVEGRAPHDRAFTRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class SaveGraphDraftResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveGraphDraftResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(draftChangeId, draftChangeId_);
      DARABONBA_PTR_TO_JSON(draftContentHash, draftContentHash_);
      DARABONBA_PTR_TO_JSON(elementType, elementType_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(operationType, operationType_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, SaveGraphDraftResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(draftChangeId, draftChangeId_);
      DARABONBA_PTR_FROM_JSON(draftContentHash, draftContentHash_);
      DARABONBA_PTR_FROM_JSON(elementType, elementType_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(operationType, operationType_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    SaveGraphDraftResourceResponseBody() = default ;
    SaveGraphDraftResourceResponseBody(const SaveGraphDraftResourceResponseBody &) = default ;
    SaveGraphDraftResourceResponseBody(SaveGraphDraftResourceResponseBody &&) = default ;
    SaveGraphDraftResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveGraphDraftResourceResponseBody() = default ;
    SaveGraphDraftResourceResponseBody& operator=(const SaveGraphDraftResourceResponseBody &) = default ;
    SaveGraphDraftResourceResponseBody& operator=(SaveGraphDraftResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->draftChangeId_ == nullptr && this->draftContentHash_ == nullptr && this->elementType_ == nullptr && this->gmtModified_ == nullptr && this->graphName_ == nullptr
        && this->message_ == nullptr && this->operationType_ == nullptr && this->requestId_ == nullptr && this->resourceName_ == nullptr && this->resourceType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SaveGraphDraftResourceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // draftChangeId Field Functions 
    bool hasDraftChangeId() const { return this->draftChangeId_ != nullptr;};
    void deleteDraftChangeId() { this->draftChangeId_ = nullptr;};
    inline int64_t getDraftChangeId() const { DARABONBA_PTR_GET_DEFAULT(draftChangeId_, 0L) };
    inline SaveGraphDraftResourceResponseBody& setDraftChangeId(int64_t draftChangeId) { DARABONBA_PTR_SET_VALUE(draftChangeId_, draftChangeId) };


    // draftContentHash Field Functions 
    bool hasDraftContentHash() const { return this->draftContentHash_ != nullptr;};
    void deleteDraftContentHash() { this->draftContentHash_ = nullptr;};
    inline string getDraftContentHash() const { DARABONBA_PTR_GET_DEFAULT(draftContentHash_, "") };
    inline SaveGraphDraftResourceResponseBody& setDraftContentHash(string draftContentHash) { DARABONBA_PTR_SET_VALUE(draftContentHash_, draftContentHash) };


    // elementType Field Functions 
    bool hasElementType() const { return this->elementType_ != nullptr;};
    void deleteElementType() { this->elementType_ = nullptr;};
    inline string getElementType() const { DARABONBA_PTR_GET_DEFAULT(elementType_, "") };
    inline SaveGraphDraftResourceResponseBody& setElementType(string elementType) { DARABONBA_PTR_SET_VALUE(elementType_, elementType) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline SaveGraphDraftResourceResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline SaveGraphDraftResourceResponseBody& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SaveGraphDraftResourceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline SaveGraphDraftResourceResponseBody& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SaveGraphDraftResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline SaveGraphDraftResourceResponseBody& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline SaveGraphDraftResourceResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 草稿变更 ID；内容与在线完全一致被跳过时为 null
    shared_ptr<int64_t> draftChangeId_ {};
    // 草稿内容哈希；被跳过时为 null
    shared_ptr<string> draftContentHash_ {};
    // 资源小类：resourceType=object 时固定 object_type；resourceType=element 时为 indicator / logic / process / rule / analysis 之一
    shared_ptr<string> elementType_ {};
    // 最后修改时间（ISO8601）；被跳过时为 null
    shared_ptr<string> gmtModified_ {};
    // 图谱名称
    shared_ptr<string> graphName_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 操作类型：CREATE / UPDATE（由底层判定）；被跳过时为 null
    shared_ptr<string> operationType_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 资源名
    shared_ptr<string> resourceName_ {};
    // 资源大类：object（对象）/ element（业务元素）
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
