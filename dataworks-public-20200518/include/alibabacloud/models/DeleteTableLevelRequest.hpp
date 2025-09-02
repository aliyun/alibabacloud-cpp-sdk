// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETABLELEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETABLELEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteTableLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTableLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LevelId, levelId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTableLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LevelId, levelId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    DeleteTableLevelRequest() = default ;
    DeleteTableLevelRequest(const DeleteTableLevelRequest &) = default ;
    DeleteTableLevelRequest(DeleteTableLevelRequest &&) = default ;
    DeleteTableLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTableLevelRequest() = default ;
    DeleteTableLevelRequest& operator=(const DeleteTableLevelRequest &) = default ;
    DeleteTableLevelRequest& operator=(DeleteTableLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levelId_ != nullptr
        && this->projectId_ != nullptr; };
    // levelId Field Functions 
    bool hasLevelId() const { return this->levelId_ != nullptr;};
    void deleteLevelId() { this->levelId_ = nullptr;};
    inline int64_t levelId() const { DARABONBA_PTR_GET_DEFAULT(levelId_, 0L) };
    inline DeleteTableLevelRequest& setLevelId(int64_t levelId) { DARABONBA_PTR_SET_VALUE(levelId_, levelId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline DeleteTableLevelRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The ID of the table level that you want to delete. You can call the ListTableLevel operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> levelId_ = nullptr;
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
