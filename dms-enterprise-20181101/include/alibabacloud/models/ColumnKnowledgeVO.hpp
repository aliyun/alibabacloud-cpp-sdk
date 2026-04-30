// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COLUMNKNOWLEDGEVO_HPP_
#define ALIBABACLOUD_MODELS_COLUMNKNOWLEDGEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ColumnKnowledgeVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ColumnKnowledgeVO& obj) { 
      DARABONBA_PTR_TO_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_TO_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_TO_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_TO_JSON(ColumnId, columnId_);
      DARABONBA_PTR_TO_JSON(ColumnKeyType, columnKeyType_);
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(HotLevel, hotLevel_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(Nullable, nullable_);
      DARABONBA_PTR_TO_JSON(Plain, plain_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserSensitivityLevel, userSensitivityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ColumnKnowledgeVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetDescription, assetDescription_);
      DARABONBA_PTR_FROM_JSON(AssetModifiedGmt, assetModifiedGmt_);
      DARABONBA_PTR_FROM_JSON(AutoIncrement, autoIncrement_);
      DARABONBA_PTR_FROM_JSON(ColumnId, columnId_);
      DARABONBA_PTR_FROM_JSON(ColumnKeyType, columnKeyType_);
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(HotLevel, hotLevel_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(Nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(Plain, plain_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserSensitivityLevel, userSensitivityLevel_);
    };
    ColumnKnowledgeVO() = default ;
    ColumnKnowledgeVO(const ColumnKnowledgeVO &) = default ;
    ColumnKnowledgeVO(ColumnKnowledgeVO &&) = default ;
    ColumnKnowledgeVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ColumnKnowledgeVO() = default ;
    ColumnKnowledgeVO& operator=(const ColumnKnowledgeVO &) = default ;
    ColumnKnowledgeVO& operator=(ColumnKnowledgeVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetDescription_ == nullptr
        && this->assetModifiedGmt_ == nullptr && this->autoIncrement_ == nullptr && this->columnId_ == nullptr && this->columnKeyType_ == nullptr && this->columnName_ == nullptr
        && this->columnType_ == nullptr && this->description_ == nullptr && this->hotLevel_ == nullptr && this->level_ == nullptr && this->levelType_ == nullptr
        && this->nullable_ == nullptr && this->plain_ == nullptr && this->position_ == nullptr && this->securityLevel_ == nullptr && this->tableId_ == nullptr
        && this->title_ == nullptr && this->userSensitivityLevel_ == nullptr; };
    // assetDescription Field Functions 
    bool hasAssetDescription() const { return this->assetDescription_ != nullptr;};
    void deleteAssetDescription() { this->assetDescription_ = nullptr;};
    inline string getAssetDescription() const { DARABONBA_PTR_GET_DEFAULT(assetDescription_, "") };
    inline ColumnKnowledgeVO& setAssetDescription(string assetDescription) { DARABONBA_PTR_SET_VALUE(assetDescription_, assetDescription) };


    // assetModifiedGmt Field Functions 
    bool hasAssetModifiedGmt() const { return this->assetModifiedGmt_ != nullptr;};
    void deleteAssetModifiedGmt() { this->assetModifiedGmt_ = nullptr;};
    inline string getAssetModifiedGmt() const { DARABONBA_PTR_GET_DEFAULT(assetModifiedGmt_, "") };
    inline ColumnKnowledgeVO& setAssetModifiedGmt(string assetModifiedGmt) { DARABONBA_PTR_SET_VALUE(assetModifiedGmt_, assetModifiedGmt) };


    // autoIncrement Field Functions 
    bool hasAutoIncrement() const { return this->autoIncrement_ != nullptr;};
    void deleteAutoIncrement() { this->autoIncrement_ = nullptr;};
    inline bool getAutoIncrement() const { DARABONBA_PTR_GET_DEFAULT(autoIncrement_, false) };
    inline ColumnKnowledgeVO& setAutoIncrement(bool autoIncrement) { DARABONBA_PTR_SET_VALUE(autoIncrement_, autoIncrement) };


    // columnId Field Functions 
    bool hasColumnId() const { return this->columnId_ != nullptr;};
    void deleteColumnId() { this->columnId_ = nullptr;};
    inline int64_t getColumnId() const { DARABONBA_PTR_GET_DEFAULT(columnId_, 0L) };
    inline ColumnKnowledgeVO& setColumnId(int64_t columnId) { DARABONBA_PTR_SET_VALUE(columnId_, columnId) };


    // columnKeyType Field Functions 
    bool hasColumnKeyType() const { return this->columnKeyType_ != nullptr;};
    void deleteColumnKeyType() { this->columnKeyType_ = nullptr;};
    inline string getColumnKeyType() const { DARABONBA_PTR_GET_DEFAULT(columnKeyType_, "") };
    inline ColumnKnowledgeVO& setColumnKeyType(string columnKeyType) { DARABONBA_PTR_SET_VALUE(columnKeyType_, columnKeyType) };


    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline ColumnKnowledgeVO& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline ColumnKnowledgeVO& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ColumnKnowledgeVO& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hotLevel Field Functions 
    bool hasHotLevel() const { return this->hotLevel_ != nullptr;};
    void deleteHotLevel() { this->hotLevel_ = nullptr;};
    inline int32_t getHotLevel() const { DARABONBA_PTR_GET_DEFAULT(hotLevel_, 0) };
    inline ColumnKnowledgeVO& setHotLevel(int32_t hotLevel) { DARABONBA_PTR_SET_VALUE(hotLevel_, hotLevel) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline ColumnKnowledgeVO& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline string getLevelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, "") };
    inline ColumnKnowledgeVO& setLevelType(string levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline ColumnKnowledgeVO& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // plain Field Functions 
    bool hasPlain() const { return this->plain_ != nullptr;};
    void deletePlain() { this->plain_ = nullptr;};
    inline bool getPlain() const { DARABONBA_PTR_GET_DEFAULT(plain_, false) };
    inline ColumnKnowledgeVO& setPlain(bool plain) { DARABONBA_PTR_SET_VALUE(plain_, plain) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline int32_t getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, 0) };
    inline ColumnKnowledgeVO& setPosition(int32_t position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline string getSecurityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, "") };
    inline ColumnKnowledgeVO& setSecurityLevel(string securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline ColumnKnowledgeVO& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ColumnKnowledgeVO& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userSensitivityLevel Field Functions 
    bool hasUserSensitivityLevel() const { return this->userSensitivityLevel_ != nullptr;};
    void deleteUserSensitivityLevel() { this->userSensitivityLevel_ = nullptr;};
    inline string getUserSensitivityLevel() const { DARABONBA_PTR_GET_DEFAULT(userSensitivityLevel_, "") };
    inline ColumnKnowledgeVO& setUserSensitivityLevel(string userSensitivityLevel) { DARABONBA_PTR_SET_VALUE(userSensitivityLevel_, userSensitivityLevel) };


  protected:
    shared_ptr<string> assetDescription_ {};
    shared_ptr<string> assetModifiedGmt_ {};
    shared_ptr<bool> autoIncrement_ {};
    shared_ptr<int64_t> columnId_ {};
    shared_ptr<string> columnKeyType_ {};
    shared_ptr<string> columnName_ {};
    shared_ptr<string> columnType_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> hotLevel_ {};
    shared_ptr<int32_t> level_ {};
    shared_ptr<string> levelType_ {};
    shared_ptr<bool> nullable_ {};
    shared_ptr<bool> plain_ {};
    shared_ptr<int32_t> position_ {};
    shared_ptr<string> securityLevel_ {};
    shared_ptr<int64_t> tableId_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> userSensitivityLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
