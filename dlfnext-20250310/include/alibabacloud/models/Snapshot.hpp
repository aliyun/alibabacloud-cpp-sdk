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
      DARABONBA_PTR_TO_JSON(idString, idString_);
      DARABONBA_PTR_TO_JSON(indexManifest, indexManifest_);
      DARABONBA_PTR_TO_JSON(logOffsets, logOffsets_);
      DARABONBA_PTR_TO_JSON(parentIdString, parentIdString_);
      DARABONBA_PTR_TO_JSON(schemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(sequenceNumber, sequenceNumber_);
      DARABONBA_PTR_TO_JSON(statistics, statistics_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
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
      DARABONBA_PTR_FROM_JSON(idString, idString_);
      DARABONBA_PTR_FROM_JSON(indexManifest, indexManifest_);
      DARABONBA_PTR_FROM_JSON(logOffsets, logOffsets_);
      DARABONBA_PTR_FROM_JSON(parentIdString, parentIdString_);
      DARABONBA_PTR_FROM_JSON(schemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(sequenceNumber, sequenceNumber_);
      DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
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
        && this->changelogManifestList_ == nullptr && this->changelogRecordCount_ == nullptr && this->commitIdentifier_ == nullptr && this->commitKind_ == nullptr && this->commitUser_ == nullptr
        && this->deltaManifestList_ == nullptr && this->deltaRecordCount_ == nullptr && this->id_ == nullptr && this->idString_ == nullptr && this->indexManifest_ == nullptr
        && this->logOffsets_ == nullptr && this->parentIdString_ == nullptr && this->schemaId_ == nullptr && this->sequenceNumber_ == nullptr && this->statistics_ == nullptr
        && this->summary_ == nullptr && this->timeMillis_ == nullptr && this->totalRecordCount_ == nullptr && this->version_ == nullptr && this->watermark_ == nullptr; };
    // baseManifestList Field Functions 
    bool hasBaseManifestList() const { return this->baseManifestList_ != nullptr;};
    void deleteBaseManifestList() { this->baseManifestList_ = nullptr;};
    inline string getBaseManifestList() const { DARABONBA_PTR_GET_DEFAULT(baseManifestList_, "") };
    inline Snapshot& setBaseManifestList(string baseManifestList) { DARABONBA_PTR_SET_VALUE(baseManifestList_, baseManifestList) };


    // changelogManifestList Field Functions 
    bool hasChangelogManifestList() const { return this->changelogManifestList_ != nullptr;};
    void deleteChangelogManifestList() { this->changelogManifestList_ = nullptr;};
    inline string getChangelogManifestList() const { DARABONBA_PTR_GET_DEFAULT(changelogManifestList_, "") };
    inline Snapshot& setChangelogManifestList(string changelogManifestList) { DARABONBA_PTR_SET_VALUE(changelogManifestList_, changelogManifestList) };


    // changelogRecordCount Field Functions 
    bool hasChangelogRecordCount() const { return this->changelogRecordCount_ != nullptr;};
    void deleteChangelogRecordCount() { this->changelogRecordCount_ = nullptr;};
    inline int64_t getChangelogRecordCount() const { DARABONBA_PTR_GET_DEFAULT(changelogRecordCount_, 0L) };
    inline Snapshot& setChangelogRecordCount(int64_t changelogRecordCount) { DARABONBA_PTR_SET_VALUE(changelogRecordCount_, changelogRecordCount) };


    // commitIdentifier Field Functions 
    bool hasCommitIdentifier() const { return this->commitIdentifier_ != nullptr;};
    void deleteCommitIdentifier() { this->commitIdentifier_ = nullptr;};
    inline int64_t getCommitIdentifier() const { DARABONBA_PTR_GET_DEFAULT(commitIdentifier_, 0L) };
    inline Snapshot& setCommitIdentifier(int64_t commitIdentifier) { DARABONBA_PTR_SET_VALUE(commitIdentifier_, commitIdentifier) };


    // commitKind Field Functions 
    bool hasCommitKind() const { return this->commitKind_ != nullptr;};
    void deleteCommitKind() { this->commitKind_ = nullptr;};
    inline string getCommitKind() const { DARABONBA_PTR_GET_DEFAULT(commitKind_, "") };
    inline Snapshot& setCommitKind(string commitKind) { DARABONBA_PTR_SET_VALUE(commitKind_, commitKind) };


    // commitUser Field Functions 
    bool hasCommitUser() const { return this->commitUser_ != nullptr;};
    void deleteCommitUser() { this->commitUser_ = nullptr;};
    inline string getCommitUser() const { DARABONBA_PTR_GET_DEFAULT(commitUser_, "") };
    inline Snapshot& setCommitUser(string commitUser) { DARABONBA_PTR_SET_VALUE(commitUser_, commitUser) };


    // deltaManifestList Field Functions 
    bool hasDeltaManifestList() const { return this->deltaManifestList_ != nullptr;};
    void deleteDeltaManifestList() { this->deltaManifestList_ = nullptr;};
    inline string getDeltaManifestList() const { DARABONBA_PTR_GET_DEFAULT(deltaManifestList_, "") };
    inline Snapshot& setDeltaManifestList(string deltaManifestList) { DARABONBA_PTR_SET_VALUE(deltaManifestList_, deltaManifestList) };


    // deltaRecordCount Field Functions 
    bool hasDeltaRecordCount() const { return this->deltaRecordCount_ != nullptr;};
    void deleteDeltaRecordCount() { this->deltaRecordCount_ = nullptr;};
    inline int64_t getDeltaRecordCount() const { DARABONBA_PTR_GET_DEFAULT(deltaRecordCount_, 0L) };
    inline Snapshot& setDeltaRecordCount(int64_t deltaRecordCount) { DARABONBA_PTR_SET_VALUE(deltaRecordCount_, deltaRecordCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline Snapshot& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // idString Field Functions 
    bool hasIdString() const { return this->idString_ != nullptr;};
    void deleteIdString() { this->idString_ = nullptr;};
    inline string getIdString() const { DARABONBA_PTR_GET_DEFAULT(idString_, "") };
    inline Snapshot& setIdString(string idString) { DARABONBA_PTR_SET_VALUE(idString_, idString) };


    // indexManifest Field Functions 
    bool hasIndexManifest() const { return this->indexManifest_ != nullptr;};
    void deleteIndexManifest() { this->indexManifest_ = nullptr;};
    inline string getIndexManifest() const { DARABONBA_PTR_GET_DEFAULT(indexManifest_, "") };
    inline Snapshot& setIndexManifest(string indexManifest) { DARABONBA_PTR_SET_VALUE(indexManifest_, indexManifest) };


    // logOffsets Field Functions 
    bool hasLogOffsets() const { return this->logOffsets_ != nullptr;};
    void deleteLogOffsets() { this->logOffsets_ = nullptr;};
    inline const map<string, int64_t> & getLogOffsets() const { DARABONBA_PTR_GET_CONST(logOffsets_, map<string, int64_t>) };
    inline map<string, int64_t> getLogOffsets() { DARABONBA_PTR_GET(logOffsets_, map<string, int64_t>) };
    inline Snapshot& setLogOffsets(const map<string, int64_t> & logOffsets) { DARABONBA_PTR_SET_VALUE(logOffsets_, logOffsets) };
    inline Snapshot& setLogOffsets(map<string, int64_t> && logOffsets) { DARABONBA_PTR_SET_RVALUE(logOffsets_, logOffsets) };


    // parentIdString Field Functions 
    bool hasParentIdString() const { return this->parentIdString_ != nullptr;};
    void deleteParentIdString() { this->parentIdString_ = nullptr;};
    inline string getParentIdString() const { DARABONBA_PTR_GET_DEFAULT(parentIdString_, "") };
    inline Snapshot& setParentIdString(string parentIdString) { DARABONBA_PTR_SET_VALUE(parentIdString_, parentIdString) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline int64_t getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, 0L) };
    inline Snapshot& setSchemaId(int64_t schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // sequenceNumber Field Functions 
    bool hasSequenceNumber() const { return this->sequenceNumber_ != nullptr;};
    void deleteSequenceNumber() { this->sequenceNumber_ = nullptr;};
    inline int64_t getSequenceNumber() const { DARABONBA_PTR_GET_DEFAULT(sequenceNumber_, 0L) };
    inline Snapshot& setSequenceNumber(int64_t sequenceNumber) { DARABONBA_PTR_SET_VALUE(sequenceNumber_, sequenceNumber) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
    inline Snapshot& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const map<string, string> & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, map<string, string>) };
    inline map<string, string> getSummary() { DARABONBA_PTR_GET(summary_, map<string, string>) };
    inline Snapshot& setSummary(const map<string, string> & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline Snapshot& setSummary(map<string, string> && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    // timeMillis Field Functions 
    bool hasTimeMillis() const { return this->timeMillis_ != nullptr;};
    void deleteTimeMillis() { this->timeMillis_ = nullptr;};
    inline int64_t getTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(timeMillis_, 0L) };
    inline Snapshot& setTimeMillis(int64_t timeMillis) { DARABONBA_PTR_SET_VALUE(timeMillis_, timeMillis) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline Snapshot& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline Snapshot& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // watermark Field Functions 
    bool hasWatermark() const { return this->watermark_ != nullptr;};
    void deleteWatermark() { this->watermark_ = nullptr;};
    inline int64_t getWatermark() const { DARABONBA_PTR_GET_DEFAULT(watermark_, 0L) };
    inline Snapshot& setWatermark(int64_t watermark) { DARABONBA_PTR_SET_VALUE(watermark_, watermark) };


  protected:
    shared_ptr<string> baseManifestList_ {};
    shared_ptr<string> changelogManifestList_ {};
    shared_ptr<int64_t> changelogRecordCount_ {};
    shared_ptr<int64_t> commitIdentifier_ {};
    shared_ptr<string> commitKind_ {};
    shared_ptr<string> commitUser_ {};
    shared_ptr<string> deltaManifestList_ {};
    shared_ptr<int64_t> deltaRecordCount_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> idString_ {};
    shared_ptr<string> indexManifest_ {};
    shared_ptr<map<string, int64_t>> logOffsets_ {};
    shared_ptr<string> parentIdString_ {};
    shared_ptr<int64_t> schemaId_ {};
    shared_ptr<int64_t> sequenceNumber_ {};
    shared_ptr<string> statistics_ {};
    shared_ptr<map<string, string>> summary_ {};
    shared_ptr<int64_t> timeMillis_ {};
    shared_ptr<int64_t> totalRecordCount_ {};
    shared_ptr<int32_t> version_ {};
    shared_ptr<int64_t> watermark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
