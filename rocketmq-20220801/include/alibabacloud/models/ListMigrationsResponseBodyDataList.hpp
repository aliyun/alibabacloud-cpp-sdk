// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMIGRATIONSRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMigrationsResponseBodyDataListCurrentStage.hpp>
#include <alibabacloud/models/ListMigrationsResponseBodyDataListMigrationSource.hpp>
#include <alibabacloud/models/ListMigrationsResponseBodyDataListMigrationTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListMigrationsResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMigrationsResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(currentStage, currentStage_);
      DARABONBA_PTR_TO_JSON(migrationId, migrationId_);
      DARABONBA_PTR_TO_JSON(migrationName, migrationName_);
      DARABONBA_PTR_TO_JSON(migrationSource, migrationSource_);
      DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_TO_JSON(migrationTarget, migrationTarget_);
      DARABONBA_PTR_TO_JSON(migrationType, migrationType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMigrationsResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(currentStage, currentStage_);
      DARABONBA_PTR_FROM_JSON(migrationId, migrationId_);
      DARABONBA_PTR_FROM_JSON(migrationName, migrationName_);
      DARABONBA_PTR_FROM_JSON(migrationSource, migrationSource_);
      DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
      DARABONBA_PTR_FROM_JSON(migrationTarget, migrationTarget_);
      DARABONBA_PTR_FROM_JSON(migrationType, migrationType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    ListMigrationsResponseBodyDataList() = default ;
    ListMigrationsResponseBodyDataList(const ListMigrationsResponseBodyDataList &) = default ;
    ListMigrationsResponseBodyDataList(ListMigrationsResponseBodyDataList &&) = default ;
    ListMigrationsResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMigrationsResponseBodyDataList() = default ;
    ListMigrationsResponseBodyDataList& operator=(const ListMigrationsResponseBodyDataList &) = default ;
    ListMigrationsResponseBodyDataList& operator=(ListMigrationsResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->currentStage_ == nullptr && return this->migrationId_ == nullptr && return this->migrationName_ == nullptr && return this->migrationSource_ == nullptr && return this->migrationStatus_ == nullptr
        && return this->migrationTarget_ == nullptr && return this->migrationType_ == nullptr && return this->updateTime_ == nullptr && return this->userId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListMigrationsResponseBodyDataList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // currentStage Field Functions 
    bool hasCurrentStage() const { return this->currentStage_ != nullptr;};
    void deleteCurrentStage() { this->currentStage_ = nullptr;};
    inline const Models::ListMigrationsResponseBodyDataListCurrentStage & currentStage() const { DARABONBA_PTR_GET_CONST(currentStage_, Models::ListMigrationsResponseBodyDataListCurrentStage) };
    inline Models::ListMigrationsResponseBodyDataListCurrentStage currentStage() { DARABONBA_PTR_GET(currentStage_, Models::ListMigrationsResponseBodyDataListCurrentStage) };
    inline ListMigrationsResponseBodyDataList& setCurrentStage(const Models::ListMigrationsResponseBodyDataListCurrentStage & currentStage) { DARABONBA_PTR_SET_VALUE(currentStage_, currentStage) };
    inline ListMigrationsResponseBodyDataList& setCurrentStage(Models::ListMigrationsResponseBodyDataListCurrentStage && currentStage) { DARABONBA_PTR_SET_RVALUE(currentStage_, currentStage) };


    // migrationId Field Functions 
    bool hasMigrationId() const { return this->migrationId_ != nullptr;};
    void deleteMigrationId() { this->migrationId_ = nullptr;};
    inline int64_t migrationId() const { DARABONBA_PTR_GET_DEFAULT(migrationId_, 0L) };
    inline ListMigrationsResponseBodyDataList& setMigrationId(int64_t migrationId) { DARABONBA_PTR_SET_VALUE(migrationId_, migrationId) };


    // migrationName Field Functions 
    bool hasMigrationName() const { return this->migrationName_ != nullptr;};
    void deleteMigrationName() { this->migrationName_ = nullptr;};
    inline string migrationName() const { DARABONBA_PTR_GET_DEFAULT(migrationName_, "") };
    inline ListMigrationsResponseBodyDataList& setMigrationName(string migrationName) { DARABONBA_PTR_SET_VALUE(migrationName_, migrationName) };


    // migrationSource Field Functions 
    bool hasMigrationSource() const { return this->migrationSource_ != nullptr;};
    void deleteMigrationSource() { this->migrationSource_ = nullptr;};
    inline const Models::ListMigrationsResponseBodyDataListMigrationSource & migrationSource() const { DARABONBA_PTR_GET_CONST(migrationSource_, Models::ListMigrationsResponseBodyDataListMigrationSource) };
    inline Models::ListMigrationsResponseBodyDataListMigrationSource migrationSource() { DARABONBA_PTR_GET(migrationSource_, Models::ListMigrationsResponseBodyDataListMigrationSource) };
    inline ListMigrationsResponseBodyDataList& setMigrationSource(const Models::ListMigrationsResponseBodyDataListMigrationSource & migrationSource) { DARABONBA_PTR_SET_VALUE(migrationSource_, migrationSource) };
    inline ListMigrationsResponseBodyDataList& setMigrationSource(Models::ListMigrationsResponseBodyDataListMigrationSource && migrationSource) { DARABONBA_PTR_SET_RVALUE(migrationSource_, migrationSource) };


    // migrationStatus Field Functions 
    bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
    void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
    inline string migrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
    inline ListMigrationsResponseBodyDataList& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


    // migrationTarget Field Functions 
    bool hasMigrationTarget() const { return this->migrationTarget_ != nullptr;};
    void deleteMigrationTarget() { this->migrationTarget_ = nullptr;};
    inline const Models::ListMigrationsResponseBodyDataListMigrationTarget & migrationTarget() const { DARABONBA_PTR_GET_CONST(migrationTarget_, Models::ListMigrationsResponseBodyDataListMigrationTarget) };
    inline Models::ListMigrationsResponseBodyDataListMigrationTarget migrationTarget() { DARABONBA_PTR_GET(migrationTarget_, Models::ListMigrationsResponseBodyDataListMigrationTarget) };
    inline ListMigrationsResponseBodyDataList& setMigrationTarget(const Models::ListMigrationsResponseBodyDataListMigrationTarget & migrationTarget) { DARABONBA_PTR_SET_VALUE(migrationTarget_, migrationTarget) };
    inline ListMigrationsResponseBodyDataList& setMigrationTarget(Models::ListMigrationsResponseBodyDataListMigrationTarget && migrationTarget) { DARABONBA_PTR_SET_RVALUE(migrationTarget_, migrationTarget) };


    // migrationType Field Functions 
    bool hasMigrationType() const { return this->migrationType_ != nullptr;};
    void deleteMigrationType() { this->migrationType_ = nullptr;};
    inline string migrationType() const { DARABONBA_PTR_GET_DEFAULT(migrationType_, "") };
    inline ListMigrationsResponseBodyDataList& setMigrationType(string migrationType) { DARABONBA_PTR_SET_VALUE(migrationType_, migrationType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListMigrationsResponseBodyDataList& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListMigrationsResponseBodyDataList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<Models::ListMigrationsResponseBodyDataListCurrentStage> currentStage_ = nullptr;
    std::shared_ptr<int64_t> migrationId_ = nullptr;
    std::shared_ptr<string> migrationName_ = nullptr;
    std::shared_ptr<Models::ListMigrationsResponseBodyDataListMigrationSource> migrationSource_ = nullptr;
    std::shared_ptr<string> migrationStatus_ = nullptr;
    std::shared_ptr<Models::ListMigrationsResponseBodyDataListMigrationTarget> migrationTarget_ = nullptr;
    std::shared_ptr<string> migrationType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
