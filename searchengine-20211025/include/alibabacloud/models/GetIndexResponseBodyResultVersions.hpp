// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODYRESULTVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETINDEXRESPONSEBODYRESULTVERSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetIndexResponseBodyResultVersionsFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetIndexResponseBodyResultVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIndexResponseBodyResultVersions& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(files, files_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(versionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIndexResponseBodyResultVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(files, files_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(versionId, versionId_);
    };
    GetIndexResponseBodyResultVersions() = default ;
    GetIndexResponseBodyResultVersions(const GetIndexResponseBodyResultVersions &) = default ;
    GetIndexResponseBodyResultVersions(GetIndexResponseBodyResultVersions &&) = default ;
    GetIndexResponseBodyResultVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIndexResponseBodyResultVersions() = default ;
    GetIndexResponseBodyResultVersions& operator=(const GetIndexResponseBodyResultVersions &) = default ;
    GetIndexResponseBodyResultVersions& operator=(GetIndexResponseBodyResultVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->desc_ != nullptr
        && this->files_ != nullptr && this->name_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr && this->versionId_ != nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetIndexResponseBodyResultVersions& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<Models::GetIndexResponseBodyResultVersionsFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<Models::GetIndexResponseBodyResultVersionsFiles>) };
    inline vector<Models::GetIndexResponseBodyResultVersionsFiles> files() { DARABONBA_PTR_GET(files_, vector<Models::GetIndexResponseBodyResultVersionsFiles>) };
    inline GetIndexResponseBodyResultVersions& setFiles(const vector<Models::GetIndexResponseBodyResultVersionsFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline GetIndexResponseBodyResultVersions& setFiles(vector<Models::GetIndexResponseBodyResultVersionsFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetIndexResponseBodyResultVersions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetIndexResponseBodyResultVersions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetIndexResponseBodyResultVersions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline int32_t versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, 0) };
    inline GetIndexResponseBodyResultVersions& setVersionId(int32_t versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The description of the version.
    std::shared_ptr<string> desc_ = nullptr;
    // The information about the files.
    std::shared_ptr<vector<Models::GetIndexResponseBodyResultVersionsFiles>> files_ = nullptr;
    // The version name.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the index version. Valid values:
    // 
    // *   NEW: The index version is created.
    // *   PUBLISH: The index version is normal.
    // *   IN_USE: The index version is in use.
    // *   NOT_USE: The index version is not used.
    // *   STOP_USE: The index version is being stopped.
    // *   RESTORE_USE: The index version is being restored.
    // *   FAIL: The index version failed to be created.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the index version was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The version ID.
    std::shared_ptr<int32_t> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
