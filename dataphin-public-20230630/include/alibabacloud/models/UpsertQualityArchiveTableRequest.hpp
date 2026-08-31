// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTQUALITYARCHIVETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTQUALITYARCHIVETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpsertQualityArchiveTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertQualityArchiveTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(UpsertCommand, upsertCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertQualityArchiveTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(UpsertCommand, upsertCommand_);
    };
    UpsertQualityArchiveTableRequest() = default ;
    UpsertQualityArchiveTableRequest(const UpsertQualityArchiveTableRequest &) = default ;
    UpsertQualityArchiveTableRequest(UpsertQualityArchiveTableRequest &&) = default ;
    UpsertQualityArchiveTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertQualityArchiveTableRequest() = default ;
    UpsertQualityArchiveTableRequest& operator=(const UpsertQualityArchiveTableRequest &) = default ;
    UpsertQualityArchiveTableRequest& operator=(UpsertQualityArchiveTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpsertCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpsertCommand& obj) { 
        DARABONBA_PTR_TO_JSON(AddMode, addMode_);
        DARABONBA_PTR_TO_JSON(ArchiveTableId, archiveTableId_);
        DARABONBA_PTR_TO_JSON(ExistTableName, existTableName_);
        DARABONBA_PTR_TO_JSON(Lifecycle, lifecycle_);
        DARABONBA_PTR_TO_JSON(MaxArchiveCount, maxArchiveCount_);
        DARABONBA_PTR_TO_JSON(NewTableNamePrefix, newTableNamePrefix_);
        DARABONBA_PTR_TO_JSON(SetActive, setActive_);
        DARABONBA_PTR_TO_JSON(WatchId, watchId_);
      };
      friend void from_json(const Darabonba::Json& j, UpsertCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(AddMode, addMode_);
        DARABONBA_PTR_FROM_JSON(ArchiveTableId, archiveTableId_);
        DARABONBA_PTR_FROM_JSON(ExistTableName, existTableName_);
        DARABONBA_PTR_FROM_JSON(Lifecycle, lifecycle_);
        DARABONBA_PTR_FROM_JSON(MaxArchiveCount, maxArchiveCount_);
        DARABONBA_PTR_FROM_JSON(NewTableNamePrefix, newTableNamePrefix_);
        DARABONBA_PTR_FROM_JSON(SetActive, setActive_);
        DARABONBA_PTR_FROM_JSON(WatchId, watchId_);
      };
      UpsertCommand() = default ;
      UpsertCommand(const UpsertCommand &) = default ;
      UpsertCommand(UpsertCommand &&) = default ;
      UpsertCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpsertCommand() = default ;
      UpsertCommand& operator=(const UpsertCommand &) = default ;
      UpsertCommand& operator=(UpsertCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addMode_ == nullptr
        && this->archiveTableId_ == nullptr && this->existTableName_ == nullptr && this->lifecycle_ == nullptr && this->maxArchiveCount_ == nullptr && this->newTableNamePrefix_ == nullptr
        && this->setActive_ == nullptr && this->watchId_ == nullptr; };
      // addMode Field Functions 
      bool hasAddMode() const { return this->addMode_ != nullptr;};
      void deleteAddMode() { this->addMode_ = nullptr;};
      inline string getAddMode() const { DARABONBA_PTR_GET_DEFAULT(addMode_, "") };
      inline UpsertCommand& setAddMode(string addMode) { DARABONBA_PTR_SET_VALUE(addMode_, addMode) };


      // archiveTableId Field Functions 
      bool hasArchiveTableId() const { return this->archiveTableId_ != nullptr;};
      void deleteArchiveTableId() { this->archiveTableId_ = nullptr;};
      inline int64_t getArchiveTableId() const { DARABONBA_PTR_GET_DEFAULT(archiveTableId_, 0L) };
      inline UpsertCommand& setArchiveTableId(int64_t archiveTableId) { DARABONBA_PTR_SET_VALUE(archiveTableId_, archiveTableId) };


      // existTableName Field Functions 
      bool hasExistTableName() const { return this->existTableName_ != nullptr;};
      void deleteExistTableName() { this->existTableName_ = nullptr;};
      inline string getExistTableName() const { DARABONBA_PTR_GET_DEFAULT(existTableName_, "") };
      inline UpsertCommand& setExistTableName(string existTableName) { DARABONBA_PTR_SET_VALUE(existTableName_, existTableName) };


      // lifecycle Field Functions 
      bool hasLifecycle() const { return this->lifecycle_ != nullptr;};
      void deleteLifecycle() { this->lifecycle_ = nullptr;};
      inline int32_t getLifecycle() const { DARABONBA_PTR_GET_DEFAULT(lifecycle_, 0) };
      inline UpsertCommand& setLifecycle(int32_t lifecycle) { DARABONBA_PTR_SET_VALUE(lifecycle_, lifecycle) };


      // maxArchiveCount Field Functions 
      bool hasMaxArchiveCount() const { return this->maxArchiveCount_ != nullptr;};
      void deleteMaxArchiveCount() { this->maxArchiveCount_ = nullptr;};
      inline int64_t getMaxArchiveCount() const { DARABONBA_PTR_GET_DEFAULT(maxArchiveCount_, 0L) };
      inline UpsertCommand& setMaxArchiveCount(int64_t maxArchiveCount) { DARABONBA_PTR_SET_VALUE(maxArchiveCount_, maxArchiveCount) };


      // newTableNamePrefix Field Functions 
      bool hasNewTableNamePrefix() const { return this->newTableNamePrefix_ != nullptr;};
      void deleteNewTableNamePrefix() { this->newTableNamePrefix_ = nullptr;};
      inline string getNewTableNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(newTableNamePrefix_, "") };
      inline UpsertCommand& setNewTableNamePrefix(string newTableNamePrefix) { DARABONBA_PTR_SET_VALUE(newTableNamePrefix_, newTableNamePrefix) };


      // setActive Field Functions 
      bool hasSetActive() const { return this->setActive_ != nullptr;};
      void deleteSetActive() { this->setActive_ = nullptr;};
      inline bool getSetActive() const { DARABONBA_PTR_GET_DEFAULT(setActive_, false) };
      inline UpsertCommand& setSetActive(bool setActive) { DARABONBA_PTR_SET_VALUE(setActive_, setActive) };


      // watchId Field Functions 
      bool hasWatchId() const { return this->watchId_ != nullptr;};
      void deleteWatchId() { this->watchId_ = nullptr;};
      inline int64_t getWatchId() const { DARABONBA_PTR_GET_DEFAULT(watchId_, 0L) };
      inline UpsertCommand& setWatchId(int64_t watchId) { DARABONBA_PTR_SET_VALUE(watchId_, watchId) };


    protected:
      // The mode for adding the archived table. Valid values:
      // 
      // - CREATE_NEW_TABLE: creates a new table.
      // - BIND_EXIST_TABLE: binds an existing table.
      shared_ptr<string> addMode_ {};
      // The ID of the archived table. If this parameter is specified, the operation runs in update mode, and you cannot specify AddMode or NewTableNamePrefix. If this parameter is not specified, the operation runs in create mode.
      shared_ptr<int64_t> archiveTableId_ {};
      // The name of the existing table. This parameter is required when AddMode is set to BIND_EXIST_TABLE. For Dataphin tables, use the format "project_name.table_name" (for example, dataphin03.ads_region_order_summary). For datasource tables, use the format "database/schema.table_name" (for example, order_db.order_exception_data). The table must belong to the same project or datasource as the monitored object, and the table schema must contain system fields with the dataphin_quality_ prefix.
      shared_ptr<string> existTableName_ {};
      // The lifecycle of the table, in days. The value must be a positive integer. If this parameter is not specified, no lifecycle is set. This parameter is valid only when creating a new table or in edit pattern, and only when the table belongs to MaxCompute, Hadoop series, or Hive. This parameter cannot be specified when AddMode is set to BIND_EXIST_TABLE.
      shared_ptr<int32_t> lifecycle_ {};
      // The maximum number of archived rows. A positive integer specifies the limit on the number of archived rows. The console provides options of 10,000, 100,000, and 500,000. A value of -1 indicates full archiving. Default value: 10000. This parameter is supported only for MaxCompute, Hadoop series, or Hive.
      shared_ptr<int64_t> maxArchiveCount_ {};
      // The table name prefix for the new archived table. This parameter is required when AddMode is set to CREATE_NEW_TABLE. The system automatically appends the _exception_data suffix. For example, if you specify vip_user_tips112, the actual table name is vip_user_tips112_exception_data.
      shared_ptr<string> newTableNamePrefix_ {};
      // Specifies whether to set the archived table as the active table. Only the value true is supported. After the table is set as active, the previously active table under the same monitored object is automatically deactivated (only one active table is allowed at a time). If you set this parameter to false, an InvalidParameter error is returned. If this parameter is not specified, the default value true is used. If this parameter is left empty, the active status remains unchanged.
      shared_ptr<bool> setActive_ {};
      // The ID of the monitored object to which the archived table belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> watchId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->upsertCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpsertQualityArchiveTableRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpsertQualityArchiveTableRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // upsertCommand Field Functions 
    bool hasUpsertCommand() const { return this->upsertCommand_ != nullptr;};
    void deleteUpsertCommand() { this->upsertCommand_ = nullptr;};
    inline const UpsertQualityArchiveTableRequest::UpsertCommand & getUpsertCommand() const { DARABONBA_PTR_GET_CONST(upsertCommand_, UpsertQualityArchiveTableRequest::UpsertCommand) };
    inline UpsertQualityArchiveTableRequest::UpsertCommand getUpsertCommand() { DARABONBA_PTR_GET(upsertCommand_, UpsertQualityArchiveTableRequest::UpsertCommand) };
    inline UpsertQualityArchiveTableRequest& setUpsertCommand(const UpsertQualityArchiveTableRequest::UpsertCommand & upsertCommand) { DARABONBA_PTR_SET_VALUE(upsertCommand_, upsertCommand) };
    inline UpsertQualityArchiveTableRequest& setUpsertCommand(UpsertQualityArchiveTableRequest::UpsertCommand && upsertCommand) { DARABONBA_PTR_SET_RVALUE(upsertCommand_, upsertCommand) };


  protected:
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The upsert command.
    // 
    // This parameter is required.
    shared_ptr<UpsertQualityArchiveTableRequest::UpsertCommand> upsertCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
