// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTROLESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTROLESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListProjectRolesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectRolesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Codes, codesShrink_);
      DARABONBA_PTR_TO_JSON(Names, namesShrink_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectRolesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Codes, codesShrink_);
      DARABONBA_PTR_FROM_JSON(Names, namesShrink_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListProjectRolesShrinkRequest() = default ;
    ListProjectRolesShrinkRequest(const ListProjectRolesShrinkRequest &) = default ;
    ListProjectRolesShrinkRequest(ListProjectRolesShrinkRequest &&) = default ;
    ListProjectRolesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectRolesShrinkRequest() = default ;
    ListProjectRolesShrinkRequest& operator=(const ListProjectRolesShrinkRequest &) = default ;
    ListProjectRolesShrinkRequest& operator=(ListProjectRolesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->codesShrink_ != nullptr
        && this->namesShrink_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr && this->type_ != nullptr; };
    // codesShrink Field Functions 
    bool hasCodesShrink() const { return this->codesShrink_ != nullptr;};
    void deleteCodesShrink() { this->codesShrink_ = nullptr;};
    inline string codesShrink() const { DARABONBA_PTR_GET_DEFAULT(codesShrink_, "") };
    inline ListProjectRolesShrinkRequest& setCodesShrink(string codesShrink) { DARABONBA_PTR_SET_VALUE(codesShrink_, codesShrink) };


    // namesShrink Field Functions 
    bool hasNamesShrink() const { return this->namesShrink_ != nullptr;};
    void deleteNamesShrink() { this->namesShrink_ = nullptr;};
    inline string namesShrink() const { DARABONBA_PTR_GET_DEFAULT(namesShrink_, "") };
    inline ListProjectRolesShrinkRequest& setNamesShrink(string namesShrink) { DARABONBA_PTR_SET_VALUE(namesShrink_, namesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectRolesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectRolesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProjectRolesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectRolesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The codes of roles in the DataWorks workspace.
    std::shared_ptr<string> codesShrink_ = nullptr;
    // The names of roles in the DataWorks workspace.
    std::shared_ptr<string> namesShrink_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The type of the role. Valid values:
    // 
    // *   UserCustom: user-defined role
    // *   System: system role
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
