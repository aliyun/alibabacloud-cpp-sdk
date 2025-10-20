// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_SNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class Snapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
      DARABONBA_PTR_TO_JSON(baseManifestList, baseManifestList_);
      DARABONBA_PTR_TO_JSON(changelogManifestList, changelogManifestList_);
      DARABONBA_PTR_TO_JSON(changelogRecordCount, changelogRecordCount_);
      DARABONBA_PTR_TO_JSON(commitIdentifier, commitIdentifier_);
      DARABONBA_PTR_TO_JSON(commitKind, commitKind_);
      DARABONBA_PTR_TO_JSON(commitUser, commitUser_);
      DARABONBA_PTR_TO_JSON(deltaManifestList, deltaManifestList_);
      DARABONBA_PTR_TO_JSON(deltaRecordCount, deltaRecordCount_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(indexManifest, indexManifest_);
      DARABONBA_PTR_TO_JSON(logOffsets, logOffsets_);
      DARABONBA_PTR_TO_JSON(schemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(timeMillis, timeMillis_);
      DARABONBA_PTR_TO_JSON(totalRecordCount, totalRecordCount_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(watermark, watermark_);
    };
    friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(baseManifestList, baseManifestList_);
      DARABONBA_PTR_FROM_JSON(changelogManifestList, changelogManifestList_);
      DARABONBA_PTR_FROM_JSON(changelogRecordCount, changelogRecordCount_);
      DARABONBA_PTR_FROM_JSON(commitIdentifier, commitIdentifier_);
      DARABONBA_PTR_FROM_JSON(commitKind, commitKind_);
      DARABONBA_PTR_FROM_JSON(commitUser, commitUser_);
      DARABONBA_PTR_FROM_JSON(deltaManifestList, deltaManifestList_);
      DARABONBA_PTR_FROM_JSON(deltaRecordCount, deltaRecordCount_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(indexManifest, indexManifest_);
      DARABONBA_PTR_FROM_JSON(logOffsets, logOffsets_);
      DARABONBA_PTR_FROM_JSON(schemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(timeMillis, timeMillis_);
      DARABONBA_PTR_FROM_JSON(totalRecordCount, totalRecordCount_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(watermark, watermark_);
    };
    Snapshot() = default ;
    Snapshot(const Snapshot &) = default ;
    Snapshot(Snapshot &&) = default ;
    Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Snapshot() = default ;
    Snapshot& operator=(const Snapshot &) = default ;
    Snapshot& operator=(Snapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseManifestList_ == nullptr
        && return this->changelogManifestList_ == nullptr && return this->changelogRecordCount_ == nullptr && return this->commitIdentifier_ == nullptr && return this->commitKind_ == nullptr && return this->commitUser_ == nullptr
        && return this->deltaManifestList_ == nullptr && return this->deltaRecordCount_ == nullptr && return this->id_ == nullptr && return this->indexManifest_ == nullptr && return this->logOffsets_ == nullptr
        && return this->schemaId_ == nullptr && return this->statistics_ == nullptr && return this->timeMillis_ == nullptr && return this->totalRecordCount_ == nullptr && return this->version_ == nullptr
        && return this->watermark_ == nullptr; };
    // baseManifestList Field Functions 
    bool hasBaseManifestList() const { return this->baseManifestList_ != nullptr;};
    void deleteBaseManifestList() { this->baseManifestList_ = nullptr;};
    inline string baseManifestList() const { DARABONBA_PTR_GET_DEFAULT(baseManifestList_, "") };
    inline Snapshot& setBaseManifestList(string baseManifestList) { DARABONBA_PTR_SET_VALUE(baseManifestList_, baseManifestList) };


    // changelogManifestList Field Functions 
    bool hasChangelogManifestList() const { return this->changelogManifestList_ != nullptr;};
    void deleteChangelogManifestList() { this->changelogManifestList_ = nullptr;};
    inline string changelogManifestList() const { DARABONBA_PTR_GET_DEFAULT(changelogManifestList_, "") };
    inline Snapshot& setChangelogManifestList(string changelogManifestList) { DARABONBA_PTR_SET_VALUE(changelogManifestList_, changelogManifestList) };


    // changelogRecordCount Field Functions 
    bool hasChangelogRecordCount() const { return this->changelogRecordCount_ != nullptr;};
    void deleteChangelogRecordCount() { this->changelogRecordCount_ = nullptr;};
    inline int64_t changelogRecordCount() const { DARABONBA_PTR_GET_DEFAULT(changelogRecordCount_, 0L) };
    inline Snapshot& setChangelogRecordCount(int64_t changelogRecordCount) { DARABONBA_PTR_SET_VALUE(changelogRecordCount_, changelogRecordCount) };


    // commitIdentifier Field Functions 
    bool hasCommitIdentifier() const { return this->commitIdentifier_ != nullptr;};
    void deleteCommitIdentifier() { this->commitIdentifier_ = nullptr;};
    inline int64_t commitIdentifier() const { DARABONBA_PTR_GET_DEFAULT(commitIdentifier_, 0L) };
    inline Snapshot& setCommitIdentifier(int64_t commitIdentifier) { DARABONBA_PTR_SET_VALUE(commitIdentifier_, commitIdentifier) };


    // commitKind Field Functions 
    bool hasCommitKind() const { return this->commitKind_ != nullptr;};
    void deleteCommitKind() { this->commitKind_ = nullptr;};
    inline string commitKind() const { DARABONBA_PTR_GET_DEFAULT(commitKind_, "") };
    inline Snapshot& setCommitKind(string commitKind) { DARABONBA_PTR_SET_VALUE(commitKind_, commitKind) };


    // commitUser Field Functions 
    bool hasCommitUser() const { return this->commitUser_ != nullptr;};
    void deleteCommitUser() { this->commitUser_ = nullptr;};
    inline string commitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
    inline Snapshot& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


    // deltaManifestList Field Functions 
    bool hasDeltaManifestList() const { return this->deltaManifestList_ != nullptr;};
    void deleteDeltaManifestList() { this->deltaManifestList_ = nullptr;};
    inline string deltaManifestList() const { DARABONBA_PTR_GET_DEFAULT(deltaManifestList_, "") };
    inline Snapshot& setDeltaManifestList(string deltaManifestList) { DARABONBA_PTR_SET_VALUE(deltaManifestList_, deltaManifestList) };


    // deltaRecordCount Field Functions 
    bool hasDeltaRecordCount() const { return this->deltaRecordCount_ != nullptr;};
    void deleteDeltaRecordCount() { this->deltaRecordCount_ = nullptr;};
    inline int64_t deltaRecordCount() const { DARABONBA_PTR_GET_DEFAULT(deltaRecordCount_, 0L) };
    inline Snapshot& setDeltaRecordCount(int64_t deltaRecordCount) { DARABONBA_PTR_SET_VALUE(deltaRecordCount_, deltaRecordCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline Snapshot& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // indexManifest Field Functions 
    bool hasIndexManifest() const { return this->indexManifest_ != nullptr;};
    void deleteIndexManifest() { this->indexManifest_ = nullptr;};
    inline string indexManifest() const { DARABONBA_PTR_GET_DEFAULT(indexManifest_, "") };
    inline Snapshot& setIndexManifest(string indexManifest) { DARABONBA_PTR_SET_VALUE(indexManifest_, indexManifest) };


    // logOffsets Field Functions 
    bool hasLogOffsets() const { return this->logOffsets_ != nullptr;};
    void deleteLogOffsets() { this->logOffsets_ = nullptr;};
    inline const map<string, int64_t> & logOffsets() const { DARABONBA_PTR_GET_CONST(logOffsets_, map<string, int64_t>) };
    inline map<string, int64_t> logOffsets() { DARABONBA_PTR_GET(logOffsets_, map<string, int64_t>) };
    inline Snapshot& setLogOffsets(const map<string, int64_t> & logOffsets) { DARABONBA_PTR_SET_VALUE(logOffsets_, logOffsets) };
    inline Snapshot& setLogOffsets(map<string, int64_t> && logOffsets) { DARABONBA_PTR_SET_RVALUE(logOffsets_, logOffsets) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline int64_t schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, 0L) };
    inline Snapshot& setSchemaId(int64_t schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string statistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline Snapshot& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // timeMillis Field Functions 
    bool hasTimeMillis() const { return this->timeMillis_ != nullptr;};
    void deleteTimeMillis() { this->timeMillis_ = nullptr;};
    inline int64_t timeMillis() const { DARABONBA_PTR_GET_DEFAULT(timeMillis_, 0L) };
    inline Snapshot& setTimeMillis(int64_t timeMillis) { DARABONBA_PTR_SET_VALUE(timeMillis_, timeMillis) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t totalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline Snapshot& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline Snapshot& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline int64_t watermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, 0L) };
    inline Snapshot& setWatermark(int64_t watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


  protected:
    std::shared_ptr<string> baseManifestList_ = nullptr;
    std::shared_ptr<string> changelogManifestList_ = nullptr;
    std::shared_ptr<int64_t> changelogRecordCount_ = nullptr;
    std::shared_ptr<int64_t> commitIdentifier_ = nullptr;
    std::shared_ptr<string> commitKind_ = nullptr;
    std::shared_ptr<string> commitUser_ = nullptr;
    std::shared_ptr<string> deltaManifestList_ = nullptr;
    std::shared_ptr<int64_t> deltaRecordCount_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> indexManifest_ = nullptr;
    std::shared_ptr<map<string, int64_t>> logOffsets_ = nullptr;
    std::shared_ptr<int64_t> schemaId_ = nullptr;
    std::shared_ptr<string> statistics_ = nullptr;
    std::shared_ptr<int64_t> timeMillis_ = nullptr;
    std::shared_ptr<int64_t> totalRecordCount_ = nullptr;
    std::shared_ptr<int32_t> version_ = nullptr;
    std::shared_ptr<int64_t> watermark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
