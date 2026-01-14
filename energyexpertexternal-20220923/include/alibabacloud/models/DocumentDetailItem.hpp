// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DOCUMENTDETAILITEM_HPP_
#define ALIBABACLOUD_MODELS_DOCUMENTDETAILITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class DocumentDetailItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DocumentDetailItem& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(docHash, docHash_);
      DARABONBA_PTR_TO_JSON(docName, docName_);
      DARABONBA_PTR_TO_JSON(docUrl, docUrl_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(folderName, folderName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(originDocName, originDocName_);
      DARABONBA_PTR_TO_JSON(originDocUrl, originDocUrl_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DocumentDetailItem& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(docHash, docHash_);
      DARABONBA_PTR_FROM_JSON(docName, docName_);
      DARABONBA_PTR_FROM_JSON(docUrl, docUrl_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(folderName, folderName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(originDocName, originDocName_);
      DARABONBA_PTR_FROM_JSON(originDocUrl, originDocUrl_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    DocumentDetailItem() = default ;
    DocumentDetailItem(const DocumentDetailItem &) = default ;
    DocumentDetailItem(DocumentDetailItem &&) = default ;
    DocumentDetailItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DocumentDetailItem() = default ;
    DocumentDetailItem& operator=(const DocumentDetailItem &) = default ;
    DocumentDetailItem& operator=(DocumentDetailItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->docHash_ == nullptr && this->docName_ == nullptr && this->docUrl_ == nullptr && this->folderId_ == nullptr && this->folderName_ == nullptr
        && this->id_ == nullptr && this->jobId_ == nullptr && this->jobStatus_ == nullptr && this->originDocName_ == nullptr && this->originDocUrl_ == nullptr
        && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DocumentDetailItem& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // docHash Field Functions 
    bool hasDocHash() const { return this->docHash_ != nullptr;};
    void deleteDocHash() { this->docHash_ = nullptr;};
    inline string getDocHash() const { DARABONBA_PTR_GET_DEFAULT(docHash_, "") };
    inline DocumentDetailItem& setDocHash(string docHash) { DARABONBA_PTR_SET_VALUE(docHash_, docHash) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string getDocName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline DocumentDetailItem& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docUrl Field Functions 
    bool hasDocUrl() const { return this->docUrl_ != nullptr;};
    void deleteDocUrl() { this->docUrl_ = nullptr;};
    inline string getDocUrl() const { DARABONBA_PTR_GET_DEFAULT(docUrl_, "") };
    inline DocumentDetailItem& setDocUrl(string docUrl) { DARABONBA_PTR_SET_VALUE(docUrl_, docUrl) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline DocumentDetailItem& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderName Field Functions 
    bool hasFolderName() const { return this->folderName_ != nullptr;};
    void deleteFolderName() { this->folderName_ = nullptr;};
    inline string getFolderName() const { DARABONBA_PTR_GET_DEFAULT(folderName_, "") };
    inline DocumentDetailItem& setFolderName(string folderName) { DARABONBA_PTR_SET_VALUE(folderName_, folderName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DocumentDetailItem& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DocumentDetailItem& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline DocumentDetailItem& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // originDocName Field Functions 
    bool hasOriginDocName() const { return this->originDocName_ != nullptr;};
    void deleteOriginDocName() { this->originDocName_ = nullptr;};
    inline string getOriginDocName() const { DARABONBA_PTR_GET_DEFAULT(originDocName_, "") };
    inline DocumentDetailItem& setOriginDocName(string originDocName) { DARABONBA_PTR_SET_VALUE(originDocName_, originDocName) };


    // originDocUrl Field Functions 
    bool hasOriginDocUrl() const { return this->originDocUrl_ != nullptr;};
    void deleteOriginDocUrl() { this->originDocUrl_ = nullptr;};
    inline string getOriginDocUrl() const { DARABONBA_PTR_GET_DEFAULT(originDocUrl_, "") };
    inline DocumentDetailItem& setOriginDocUrl(string originDocUrl) { DARABONBA_PTR_SET_VALUE(originDocUrl_, originDocUrl) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DocumentDetailItem& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> createTime_ {};
    shared_ptr<string> docHash_ {};
    shared_ptr<string> docName_ {};
    shared_ptr<string> docUrl_ {};
    shared_ptr<string> folderId_ {};
    shared_ptr<string> folderName_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> jobId_ {};
    shared_ptr<string> jobStatus_ {};
    shared_ptr<string> originDocName_ {};
    shared_ptr<string> originDocUrl_ {};
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
