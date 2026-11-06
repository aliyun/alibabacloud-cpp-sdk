// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOLLABORATIONGROUPOUTPUTITEMPREVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOLLABORATIONGROUPOUTPUTITEMPREVIEWRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetCollaborationGroupOutputItemPreviewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCollaborationGroupOutputItemPreviewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(degraded, degraded_);
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(fileExt, fileExt_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
      DARABONBA_PTR_TO_JSON(itemId, itemId_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(previewType, previewType_);
      DARABONBA_PTR_TO_JSON(previewUrl, previewUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCollaborationGroupOutputItemPreviewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(degraded, degraded_);
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(fileExt, fileExt_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
      DARABONBA_PTR_FROM_JSON(itemId, itemId_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(previewType, previewType_);
      DARABONBA_PTR_FROM_JSON(previewUrl, previewUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetCollaborationGroupOutputItemPreviewResponseBody() = default ;
    GetCollaborationGroupOutputItemPreviewResponseBody(const GetCollaborationGroupOutputItemPreviewResponseBody &) = default ;
    GetCollaborationGroupOutputItemPreviewResponseBody(GetCollaborationGroupOutputItemPreviewResponseBody &&) = default ;
    GetCollaborationGroupOutputItemPreviewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCollaborationGroupOutputItemPreviewResponseBody() = default ;
    GetCollaborationGroupOutputItemPreviewResponseBody& operator=(const GetCollaborationGroupOutputItemPreviewResponseBody &) = default ;
    GetCollaborationGroupOutputItemPreviewResponseBody& operator=(GetCollaborationGroupOutputItemPreviewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->content_ == nullptr && this->degraded_ == nullptr && this->downloadUrl_ == nullptr && this->fileExt_ == nullptr && this->fileName_ == nullptr
        && this->itemId_ == nullptr && this->message_ == nullptr && this->previewType_ == nullptr && this->previewUrl_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // degraded Field Functions 
    bool hasDegraded() const { return this->degraded_ != nullptr;};
    void deleteDegraded() { this->degraded_ = nullptr;};
    inline bool getDegraded() const { DARABONBA_PTR_GET_DEFAULT(degraded_, false) };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setDegraded(bool degraded) { DARABONBA_PTR_SET_VALUE(degraded_, degraded) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // fileExt Field Functions 
    bool hasFileExt() const { return this->fileExt_ != nullptr;};
    void deleteFileExt() { this->fileExt_ = nullptr;};
    inline string getFileExt() const { DARABONBA_PTR_GET_DEFAULT(fileExt_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setFileExt(string fileExt) { DARABONBA_PTR_SET_VALUE(fileExt_, fileExt) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // previewType Field Functions 
    bool hasPreviewType() const { return this->previewType_ != nullptr;};
    void deletePreviewType() { this->previewType_ = nullptr;};
    inline string getPreviewType() const { DARABONBA_PTR_GET_DEFAULT(previewType_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setPreviewType(string previewType) { DARABONBA_PTR_SET_VALUE(previewType_, previewType) };


    // previewUrl Field Functions 
    bool hasPreviewUrl() const { return this->previewUrl_ != nullptr;};
    void deletePreviewUrl() { this->previewUrl_ = nullptr;};
    inline string getPreviewUrl() const { DARABONBA_PTR_GET_DEFAULT(previewUrl_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setPreviewUrl(string previewUrl) { DARABONBA_PTR_SET_VALUE(previewUrl_, previewUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCollaborationGroupOutputItemPreviewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 公共业务状态码，由后端Code字段映射；错误时用于识别失败原因。
    shared_ptr<string> code_ {};
    // 可直接展示的文本正文或预览提示；不提供正文的文件类型可为空。
    shared_ptr<string> content_ {};
    // 是否降级为下载。true时应展示下载入口，不要按在线文档预览器处理。
    shared_ptr<bool> degraded_ {};
    // 短期签名下载地址；普通文件有效期3600秒，邮件正文可为空。过期后重新调用本接口。示例仅展示URL格式，不包含真实签名。
    shared_ptr<string> downloadUrl_ {};
    // 文件扩展名，不含点；无扩展名时可为空。
    shared_ptr<string> fileExt_ {};
    // 文件名，包含扩展名；无文件名时可为空。
    shared_ptr<string> fileName_ {};
    // 对话生成文件的产出明细ID。取GetNodeDetail返回的artifacts中ref.kind为USER_OUTPUT_ITEM的ref.id；不是artifactId。
    shared_ptr<string> itemId_ {};
    // 公共错误说明，由后端Message字段映射；错误时描述失败原因。
    shared_ptr<string> message_ {};
    // 预览方式，例如CONTENT为文本正文，HTML为网页，IMAGE为图片，AUDIO为音频，VIDEO为视频，OSS_IMM为文档预览。
    shared_ptr<string> previewType_ {};
    // 短期预览地址；正文可直接展示时可为空。地址过期后重新调用本接口。示例仅展示URL格式，不是可访问凭证。
    shared_ptr<string> previewUrl_ {};
    // 请求追踪ID，由后端RequestId字段映射，用于排查调用失败。
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
