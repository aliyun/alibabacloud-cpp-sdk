// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETVERSION_HPP_
#define ALIBABACLOUD_MODELS_DATASETVERSION_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/DatasetLabel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DatasetVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetVersion& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(MountPath, mountPath_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(VersionNumber, versionNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImportInfo, importInfo_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(MountPath, mountPath_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(VersionNumber, versionNumber_);
    };
    DatasetVersion() = default ;
    DatasetVersion(const DatasetVersion &) = default ;
    DatasetVersion(DatasetVersion &&) = default ;
    DatasetVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetVersion() = default ;
    DatasetVersion& operator=(const DatasetVersion &) = default ;
    DatasetVersion& operator=(DatasetVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->createTime_ == nullptr && return this->creatorId_ == nullptr && return this->datasetId_ == nullptr && return this->id_ == nullptr && return this->importInfo_ == nullptr
        && return this->labels_ == nullptr && return this->modifyTime_ == nullptr && return this->mountPath_ == nullptr && return this->storageType_ == nullptr && return this->url_ == nullptr
        && return this->versionNumber_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline DatasetVersion& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DatasetVersion& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline DatasetVersion& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline DatasetVersion& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DatasetVersion& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // importInfo Field Functions 
    bool hasImportInfo() const { return this->importInfo_ != nullptr;};
    void deleteImportInfo() { this->importInfo_ = nullptr;};
    inline const map<string, string> & importInfo() const { DARABONBA_PTR_GET_CONST(importInfo_, map<string, string>) };
    inline map<string, string> importInfo() { DARABONBA_PTR_GET(importInfo_, map<string, string>) };
    inline DatasetVersion& setImportInfo(const map<string, string> & importInfo) { DARABONBA_PTR_SET_VALUE(importInfo_, importInfo) };
    inline DatasetVersion& setImportInfo(map<string, string> && importInfo) { DARABONBA_PTR_SET_RVALUE(importInfo_, importInfo) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<DatasetLabel> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<DatasetLabel>) };
    inline vector<DatasetLabel> labels() { DARABONBA_PTR_GET(labels_, vector<DatasetLabel>) };
    inline DatasetVersion& setLabels(const vector<DatasetLabel> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline DatasetVersion& setLabels(vector<DatasetLabel> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline DatasetVersion& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // mountPath Field Functions 
    bool hasMountPath() const { return this->mountPath_ != nullptr;};
    void deleteMountPath() { this->mountPath_ = nullptr;};
    inline string mountPath() const { DARABONBA_PTR_GET_DEFAULT(mountPath_, "") };
    inline DatasetVersion& setMountPath(string mountPath) { DARABONBA_PTR_SET_VALUE(mountPath_, mountPath) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DatasetVersion& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DatasetVersion& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // versionNumber Field Functions 
    bool hasVersionNumber() const { return this->versionNumber_ != nullptr;};
    void deleteVersionNumber() { this->versionNumber_ = nullptr;};
    inline int32_t versionNumber() const { DARABONBA_PTR_GET_DEFAULT(versionNumber_, 0) };
    inline DatasetVersion& setVersionNumber(int32_t versionNumber) { DARABONBA_PTR_SET_VALUE(versionNumber_, versionNumber) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> datasetId_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<map<string, string>> importInfo_ = nullptr;
    std::shared_ptr<vector<DatasetLabel>> labels_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> mountPath_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<int32_t> versionNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
