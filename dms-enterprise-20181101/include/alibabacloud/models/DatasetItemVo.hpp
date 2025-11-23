// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATASETITEMVO_HPP_
#define ALIBABACLOUD_MODELS_DATASETITEMVO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AsyncTaskVO.hpp>
#include <alibabacloud/models/ProjectDetailsLiteVO.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class DatasetItemVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DatasetItemVO& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncTaskList, asyncTaskList_);
      DARABONBA_PTR_TO_JSON(DatasetStatus, datasetStatus_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(Digest, digest_);
      DARABONBA_PTR_TO_JSON(FileSystem, fileSystem_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(KeyName, keyName_);
      DARABONBA_PTR_TO_JSON(MoreInfo, moreInfo_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(ProjectsLinked, projectsLinked_);
      DARABONBA_PTR_TO_JSON(RecentTaskStatus, recentTaskStatus_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DatasetItemVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncTaskList, asyncTaskList_);
      DARABONBA_PTR_FROM_JSON(DatasetStatus, datasetStatus_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(Digest, digest_);
      DARABONBA_PTR_FROM_JSON(FileSystem, fileSystem_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
      DARABONBA_PTR_FROM_JSON(MoreInfo, moreInfo_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(ProjectsLinked, projectsLinked_);
      DARABONBA_PTR_FROM_JSON(RecentTaskStatus, recentTaskStatus_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DatasetItemVO() = default ;
    DatasetItemVO(const DatasetItemVO &) = default ;
    DatasetItemVO(DatasetItemVO &&) = default ;
    DatasetItemVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DatasetItemVO() = default ;
    DatasetItemVO& operator=(const DatasetItemVO &) = default ;
    DatasetItemVO& operator=(DatasetItemVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asyncTaskList_ == nullptr
        && return this->datasetStatus_ == nullptr && return this->datasetType_ == nullptr && return this->digest_ == nullptr && return this->fileSystem_ == nullptr && return this->id_ == nullptr
        && return this->keyName_ == nullptr && return this->moreInfo_ == nullptr && return this->path_ == nullptr && return this->projectsLinked_ == nullptr && return this->recentTaskStatus_ == nullptr
        && return this->remark_ == nullptr && return this->schema_ == nullptr && return this->tableName_ == nullptr && return this->url_ == nullptr; };
    // asyncTaskList Field Functions 
    bool hasAsyncTaskList() const { return this->asyncTaskList_ != nullptr;};
    void deleteAsyncTaskList() { this->asyncTaskList_ = nullptr;};
    inline const vector<AsyncTaskVO> & asyncTaskList() const { DARABONBA_PTR_GET_CONST(asyncTaskList_, vector<AsyncTaskVO>) };
    inline vector<AsyncTaskVO> asyncTaskList() { DARABONBA_PTR_GET(asyncTaskList_, vector<AsyncTaskVO>) };
    inline DatasetItemVO& setAsyncTaskList(const vector<AsyncTaskVO> & asyncTaskList) { DARABONBA_PTR_SET_VALUE(asyncTaskList_, asyncTaskList) };
    inline DatasetItemVO& setAsyncTaskList(vector<AsyncTaskVO> && asyncTaskList) { DARABONBA_PTR_SET_RVALUE(asyncTaskList_, asyncTaskList) };


    // datasetStatus Field Functions 
    bool hasDatasetStatus() const { return this->datasetStatus_ != nullptr;};
    void deleteDatasetStatus() { this->datasetStatus_ = nullptr;};
    inline int32_t datasetStatus() const { DARABONBA_PTR_GET_DEFAULT(datasetStatus_, 0) };
    inline DatasetItemVO& setDatasetStatus(int32_t datasetStatus) { DARABONBA_PTR_SET_VALUE(datasetStatus_, datasetStatus) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline int32_t datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, 0) };
    inline DatasetItemVO& setDatasetType(int32_t datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // digest Field Functions 
    bool hasDigest() const { return this->digest_ != nullptr;};
    void deleteDigest() { this->digest_ = nullptr;};
    inline string digest() const { DARABONBA_PTR_GET_DEFAULT(digest_, "") };
    inline DatasetItemVO& setDigest(string digest) { DARABONBA_PTR_SET_VALUE(digest_, digest) };


    // fileSystem Field Functions 
    bool hasFileSystem() const { return this->fileSystem_ != nullptr;};
    void deleteFileSystem() { this->fileSystem_ = nullptr;};
    inline string fileSystem() const { DARABONBA_PTR_GET_DEFAULT(fileSystem_, "") };
    inline DatasetItemVO& setFileSystem(string fileSystem) { DARABONBA_PTR_SET_VALUE(fileSystem_, fileSystem) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DatasetItemVO& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keyName Field Functions 
    bool hasKeyName() const { return this->keyName_ != nullptr;};
    void deleteKeyName() { this->keyName_ = nullptr;};
    inline string keyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
    inline DatasetItemVO& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


    // moreInfo Field Functions 
    bool hasMoreInfo() const { return this->moreInfo_ != nullptr;};
    void deleteMoreInfo() { this->moreInfo_ = nullptr;};
    inline string moreInfo() const { DARABONBA_PTR_GET_DEFAULT(moreInfo_, "") };
    inline DatasetItemVO& setMoreInfo(string moreInfo) { DARABONBA_PTR_SET_VALUE(moreInfo_, moreInfo) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline DatasetItemVO& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // projectsLinked Field Functions 
    bool hasProjectsLinked() const { return this->projectsLinked_ != nullptr;};
    void deleteProjectsLinked() { this->projectsLinked_ = nullptr;};
    inline const vector<ProjectDetailsLiteVO> & projectsLinked() const { DARABONBA_PTR_GET_CONST(projectsLinked_, vector<ProjectDetailsLiteVO>) };
    inline vector<ProjectDetailsLiteVO> projectsLinked() { DARABONBA_PTR_GET(projectsLinked_, vector<ProjectDetailsLiteVO>) };
    inline DatasetItemVO& setProjectsLinked(const vector<ProjectDetailsLiteVO> & projectsLinked) { DARABONBA_PTR_SET_VALUE(projectsLinked_, projectsLinked) };
    inline DatasetItemVO& setProjectsLinked(vector<ProjectDetailsLiteVO> && projectsLinked) { DARABONBA_PTR_SET_RVALUE(projectsLinked_, projectsLinked) };


    // recentTaskStatus Field Functions 
    bool hasRecentTaskStatus() const { return this->recentTaskStatus_ != nullptr;};
    void deleteRecentTaskStatus() { this->recentTaskStatus_ = nullptr;};
    inline int32_t recentTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(recentTaskStatus_, 0) };
    inline DatasetItemVO& setRecentTaskStatus(int32_t recentTaskStatus) { DARABONBA_PTR_SET_VALUE(recentTaskStatus_, recentTaskStatus) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DatasetItemVO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline DatasetItemVO& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DatasetItemVO& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DatasetItemVO& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<vector<AsyncTaskVO>> asyncTaskList_ = nullptr;
    std::shared_ptr<int32_t> datasetStatus_ = nullptr;
    std::shared_ptr<int32_t> datasetType_ = nullptr;
    std::shared_ptr<string> digest_ = nullptr;
    std::shared_ptr<string> fileSystem_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> keyName_ = nullptr;
    std::shared_ptr<string> moreInfo_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<vector<ProjectDetailsLiteVO>> projectsLinked_ = nullptr;
    std::shared_ptr<int32_t> recentTaskStatus_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> schema_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
