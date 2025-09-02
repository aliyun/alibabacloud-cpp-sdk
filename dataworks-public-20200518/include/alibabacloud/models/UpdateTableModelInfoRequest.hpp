// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEMODELINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEMODELINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableModelInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableModelInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FirstLevelThemeId, firstLevelThemeId_);
      DARABONBA_PTR_TO_JSON(LevelId, levelId_);
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(SecondLevelThemeId, secondLevelThemeId_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableModelInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FirstLevelThemeId, firstLevelThemeId_);
      DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(SecondLevelThemeId, secondLevelThemeId_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    UpdateTableModelInfoRequest() = default ;
    UpdateTableModelInfoRequest(const UpdateTableModelInfoRequest &) = default ;
    UpdateTableModelInfoRequest(UpdateTableModelInfoRequest &&) = default ;
    UpdateTableModelInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableModelInfoRequest() = default ;
    UpdateTableModelInfoRequest& operator=(const UpdateTableModelInfoRequest &) = default ;
    UpdateTableModelInfoRequest& operator=(UpdateTableModelInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firstLevelThemeId_ != nullptr
        && this->levelId_ != nullptr && this->levelType_ != nullptr && this->secondLevelThemeId_ != nullptr && this->tableGuid_ != nullptr; };
    // firstLevelThemeId Field Functions 
    bool hasFirstLevelThemeId() const { return this->firstLevelThemeId_ != nullptr;};
    void deleteFirstLevelThemeId() { this->firstLevelThemeId_ = nullptr;};
    inline int64_t firstLevelThemeId() const { DARABONBA_PTR_GET_DEFAULT(firstLevelThemeId_, 0L) };
    inline UpdateTableModelInfoRequest& setFirstLevelThemeId(int64_t firstLevelThemeId) { DARABONBA_PTR_SET_VALUE(firstLevelThemeId_, firstLevelThemeId) };


    // levelId Field Functions 
    bool hasLevelId() const { return this->levelId_ != nullptr;};
    void deleteLevelId() { this->levelId_ = nullptr;};
    inline int64_t levelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
    inline UpdateTableModelInfoRequest& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline int32_t levelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, 0) };
    inline UpdateTableModelInfoRequest& setLevelType(int32_t levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // secondLevelThemeId Field Functions 
    bool hasSecondLevelThemeId() const { return this->secondLevelThemeId_ != nullptr;};
    void deleteSecondLevelThemeId() { this->secondLevelThemeId_ = nullptr;};
    inline int64_t secondLevelThemeId() const { DARABONBA_PTR_GET_DEFAULT(secondLevelThemeId_, 0L) };
    inline UpdateTableModelInfoRequest& setSecondLevelThemeId(int64_t secondLevelThemeId) { DARABONBA_PTR_SET_VALUE(secondLevelThemeId_, secondLevelThemeId) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline UpdateTableModelInfoRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The ID of the first-level table folder.
    std::shared_ptr<int64_t> firstLevelThemeId_ = nullptr;
    // The table level ID.
    std::shared_ptr<int64_t> levelId_ = nullptr;
    // The type of the table level. Valid values: 1 and 2. The value 1 indicates the logical level. The value 2 indicates the physical level.
    std::shared_ptr<int32_t> levelType_ = nullptr;
    // The ID of the second-level table folder.
    std::shared_ptr<int64_t> secondLevelThemeId_ = nullptr;
    // The GUID of the table. Specify the GUID in the odps.{projectName}.{tableName} format.
    // 
    // This parameter is required.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
