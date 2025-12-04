// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASET_HPP_
#define ALIBABACLOUD_MODELS_DATASET_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetLabel.hpp>
#include <alibabacloud/models/DatasetVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class Dataset : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Dataset& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Readme, readme_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, Dataset& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Readme, readme_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    Dataset() = default ;
    Dataset(const Dataset &) = default ;
    Dataset(Dataset &&) = default ;
    Dataset(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Dataset() = default ;
    Dataset& operator=(const Dataset &) = default ;
    Dataset& operator=(Dataset &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->createTime_ == nullptr && return this->creatorId_ == nullptr && return this->dataType_ == nullptr && return this->id_ == nullptr && return this->labels_ == nullptr
        && return this->latestVersion_ == nullptr && return this->modifyTime_ == nullptr && return this->name_ == nullptr && return this->origin_ == nullptr && return this->projectId_ == nullptr
        && return this->readme_ == nullptr && return this->storageType_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline Dataset& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Dataset& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline Dataset& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline Dataset& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline Dataset& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<DatasetLabel> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<DatasetLabel>) };
    inline vector<DatasetLabel> labels() { DARABONBA_PTR_GET(labels_, vector<DatasetLabel>) };
    inline Dataset& setLabels(const vector<DatasetLabel> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Dataset& setLabels(vector<DatasetLabel> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline const DatasetVersion & latestVersion() const { DARABONBA_PTR_GET_CONST(latestVersion_, DatasetVersion) };
    inline DatasetVersion latestVersion() { DARABONBA_PTR_GET(latestVersion_, DatasetVersion) };
    inline Dataset& setLatestVersion(const DatasetVersion & latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };
    inline Dataset& setLatestVersion(DatasetVersion && latestVersion) { DARABONBA_PTR_SET_RVALUE(latestVersion_, latestVersion) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline int64_t modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
    inline Dataset& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Dataset& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline Dataset& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline Dataset& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // readme Field Functions 
    bool hasReadme() const { return this->readme_ != nullptr;};
    void deleteReadme() { this->readme_ = nullptr;};
    inline string readme() const { DARABONBA_PTR_GET_DEFAULT(readme_, "") };
    inline Dataset& setReadme(string readme) { DARABONBA_PTR_SET_VALUE(readme_, readme) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline Dataset& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    std::shared_ptr<string> comment_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> dataType_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<vector<DatasetLabel>> labels_ = nullptr;
    std::shared_ptr<DatasetVersion> latestVersion_ = nullptr;
    std::shared_ptr<int64_t> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<string> readme_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
