// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLELEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLELEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateTableLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LevelId, levelId_);
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    UpdateTableLevelRequest() = default ;
    UpdateTableLevelRequest(const UpdateTableLevelRequest &) = default ;
    UpdateTableLevelRequest(UpdateTableLevelRequest &&) = default ;
    UpdateTableLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableLevelRequest() = default ;
    UpdateTableLevelRequest& operator=(const UpdateTableLevelRequest &) = default ;
    UpdateTableLevelRequest& operator=(UpdateTableLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->levelId_ != nullptr && this->levelType_ != nullptr && this->name_ != nullptr && this->projectId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTableLevelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // levelId Field Functions 
    bool hasLevelId() const { return this->levelId_ != nullptr;};
    void deleteLevelId() { this->levelId_ = nullptr;};
    inline int64_t levelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
    inline UpdateTableLevelRequest& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline int32_t levelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, 0) };
    inline UpdateTableLevelRequest& setLevelType(int32_t levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTableLevelRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateTableLevelRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The description of the table level.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the table level. You can call the ListTableLevel operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> levelId_ = nullptr;
    // The table level type. Valid values: 1 and 2. The value 1 indicates the logical level. The value 2 indicates the physical level.
    std::shared_ptr<int32_t> levelType_ = nullptr;
    // The name of the table level.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the DataWorks workspace.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
