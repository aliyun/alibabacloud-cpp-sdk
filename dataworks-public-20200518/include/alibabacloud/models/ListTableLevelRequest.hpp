// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTABLELEVELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTABLELEVELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTableLevelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTableLevelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LevelType, levelType_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTableLevelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ListTableLevelRequest() = default ;
    ListTableLevelRequest(const ListTableLevelRequest &) = default ;
    ListTableLevelRequest(ListTableLevelRequest &&) = default ;
    ListTableLevelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTableLevelRequest() = default ;
    ListTableLevelRequest& operator=(const ListTableLevelRequest &) = default ;
    ListTableLevelRequest& operator=(ListTableLevelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->levelType_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr; };
    // levelType Field Functions 
    bool hasLevelType() const { return this->levelType_ != nullptr;};
    void deleteLevelType() { this->levelType_ = nullptr;};
    inline int32_t levelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, 0) };
    inline ListTableLevelRequest& setLevelType(int32_t levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListTableLevelRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTableLevelRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListTableLevelRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The table level type. Valid values: 1 and 2. The value 1 indicates the logical level. The value 2 indicates the physical level.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> levelType_ = nullptr;
    // The page number. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries per page. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the DataWorks workspace. You can log on to the DataWorks console to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
