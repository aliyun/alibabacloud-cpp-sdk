// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPENSTRUCTDLFSNAPSHOTDTO_HPP_
#define ALIBABACLOUD_MODELS_OPENSTRUCTDLFSNAPSHOTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class OpenStructDlfSnapshotDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OpenStructDlfSnapshotDto& obj) { 
      DARABONBA_PTR_TO_JSON(changelogRecordCount, changelogRecordCount_);
      DARABONBA_PTR_TO_JSON(commitKind, commitKind_);
      DARABONBA_PTR_TO_JSON(deltaRecordCount, deltaRecordCount_);
      DARABONBA_PTR_TO_JSON(schemaId, schemaId_);
      DARABONBA_PTR_TO_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(timeMillis, timeMillis_);
      DARABONBA_PTR_TO_JSON(totalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, OpenStructDlfSnapshotDto& obj) { 
      DARABONBA_PTR_FROM_JSON(changelogRecordCount, changelogRecordCount_);
      DARABONBA_PTR_FROM_JSON(commitKind, commitKind_);
      DARABONBA_PTR_FROM_JSON(deltaRecordCount, deltaRecordCount_);
      DARABONBA_PTR_FROM_JSON(schemaId, schemaId_);
      DARABONBA_PTR_FROM_JSON(snapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(timeMillis, timeMillis_);
      DARABONBA_PTR_FROM_JSON(totalRecordCount, totalRecordCount_);
    };
    OpenStructDlfSnapshotDto() = default ;
    OpenStructDlfSnapshotDto(const OpenStructDlfSnapshotDto &) = default ;
    OpenStructDlfSnapshotDto(OpenStructDlfSnapshotDto &&) = default ;
    OpenStructDlfSnapshotDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OpenStructDlfSnapshotDto() = default ;
    OpenStructDlfSnapshotDto& operator=(const OpenStructDlfSnapshotDto &) = default ;
    OpenStructDlfSnapshotDto& operator=(OpenStructDlfSnapshotDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changelogRecordCount_ == nullptr
        && this->commitKind_ == nullptr && this->deltaRecordCount_ == nullptr && this->schemaId_ == nullptr && this->snapshotId_ == nullptr && this->timeMillis_ == nullptr
        && this->totalRecordCount_ == nullptr; };
    // changelogRecordCount Field Functions 
    bool hasChangelogRecordCount() const { return this->changelogRecordCount_ != nullptr;};
    void deleteChangelogRecordCount() { this->changelogRecordCount_ = nullptr;};
    inline int64_t getChangelogRecordCount() const { DARABONBA_PTR_GET_DEFAULT(changelogRecordCount_, 0L) };
    inline OpenStructDlfSnapshotDto& setChangelogRecordCount(int64_t changelogRecordCount) { DARABONBA_PTR_SET_VALUE(changelogRecordCount_, changelogRecordCount) };


    // commitKind Field Functions 
    bool hasCommitKind() const { return this->commitKind_ != nullptr;};
    void deleteCommitKind() { this->commitKind_ = nullptr;};
    inline string getCommitKind() const { DARABONBA_PTR_GET_DEFAULT(commitKind_, "") };
    inline OpenStructDlfSnapshotDto& setCommitKind(string commitKind) { DARABONBA_PTR_SET_VALUE(commitKind_, commitKind) };


    // deltaRecordCount Field Functions 
    bool hasDeltaRecordCount() const { return this->deltaRecordCount_ != nullptr;};
    void deleteDeltaRecordCount() { this->deltaRecordCount_ = nullptr;};
    inline int64_t getDeltaRecordCount() const { DARABONBA_PTR_GET_DEFAULT(deltaRecordCount_, 0L) };
    inline OpenStructDlfSnapshotDto& setDeltaRecordCount(int64_t deltaRecordCount) { DARABONBA_PTR_SET_VALUE(deltaRecordCount_, deltaRecordCount) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline int64_t getSchemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, 0L) };
    inline OpenStructDlfSnapshotDto& setSchemaId(int64_t schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline int64_t getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, 0L) };
    inline OpenStructDlfSnapshotDto& setSnapshotId(int64_t snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // timeMillis Field Functions 
    bool hasTimeMillis() const { return this->timeMillis_ != nullptr;};
    void deleteTimeMillis() { this->timeMillis_ = nullptr;};
    inline int64_t getTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(timeMillis_, 0L) };
    inline OpenStructDlfSnapshotDto& setTimeMillis(int64_t timeMillis) { DARABONBA_PTR_SET_VALUE(timeMillis_, timeMillis) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int64_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0L) };
    inline OpenStructDlfSnapshotDto& setTotalRecordCount(int64_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    shared_ptr<int64_t> changelogRecordCount_ {};
    shared_ptr<string> commitKind_ {};
    shared_ptr<int64_t> deltaRecordCount_ {};
    shared_ptr<int64_t> schemaId_ {};
    shared_ptr<int64_t> snapshotId_ {};
    shared_ptr<int64_t> timeMillis_ {};
    shared_ptr<int64_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
