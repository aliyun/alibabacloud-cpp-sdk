// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitVideoAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(FileKey, fileKey_);
      DARABONBA_PTR_TO_JSON(SnapshotInterval, snapshotInterval_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(FileKey, fileKey_);
      DARABONBA_PTR_FROM_JSON(SnapshotInterval, snapshotInterval_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitVideoAuditRequest() = default ;
    SubmitVideoAuditRequest(const SubmitVideoAuditRequest &) = default ;
    SubmitVideoAuditRequest(SubmitVideoAuditRequest &&) = default ;
    SubmitVideoAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAuditRequest() = default ;
    SubmitVideoAuditRequest& operator=(const SubmitVideoAuditRequest &) = default ;
    SubmitVideoAuditRequest& operator=(SubmitVideoAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ext_ == nullptr
        && this->fileKey_ == nullptr && this->snapshotInterval_ == nullptr && this->url_ == nullptr && this->workspaceId_ == nullptr; };
    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline SubmitVideoAuditRequest& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // fileKey Field Functions 
    bool hasFileKey() const { return this->fileKey_ != nullptr;};
    void deleteFileKey() { this->fileKey_ = nullptr;};
    inline string getFileKey() const { DARABONBA_PTR_GET_DEFAULT(fileKey_, "") };
    inline SubmitVideoAuditRequest& setFileKey(string fileKey) { DARABONBA_PTR_SET_VALUE(fileKey_, fileKey) };


    // snapshotInterval Field Functions 
    bool hasSnapshotInterval() const { return this->snapshotInterval_ != nullptr;};
    void deleteSnapshotInterval() { this->snapshotInterval_ = nullptr;};
    inline double getSnapshotInterval() const { DARABONBA_PTR_GET_DEFAULT(snapshotInterval_, 0.0) };
    inline SubmitVideoAuditRequest& setSnapshotInterval(double snapshotInterval) { DARABONBA_PTR_SET_VALUE(snapshotInterval_, snapshotInterval) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitVideoAuditRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitVideoAuditRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // 扩展参数JSON字符串
    shared_ptr<string> ext_ {};
    // OSS文件Key，与url参数二选一
    shared_ptr<string> fileKey_ {};
    // 抽帧间隔时间（秒）
    shared_ptr<double> snapshotInterval_ {};
    // 视频URL地址，与fileKey参数二选一
    shared_ptr<string> url_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
