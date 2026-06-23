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
    virtual bool empty() const override { return this->codesShrink_ == nullptr
        && this->namesShrink_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->type_ == nullptr; };
    // codesShrink Field Functions 
    bool hasCodesShrink() const { return this->codesShrink_ != nullptr;};
    void deleteCodesShrink() { this->codesShrink_ = nullptr;};
    inline string getCodesShrink() const { DARABONBA_PTR_GET_DEFAULT(codesShrink_, "") };
    inline ListProjectRolesShrinkRequest& setCodesShrink(string codesShrink) { DARABONBA_PTR_SET_VALUE(codesShrink_, codesShrink) };


    // namesShrink Field Functions 
    bool hasNamesShrink() const { return this->namesShrink_ != nullptr;};
    void deleteNamesShrink() { this->namesShrink_ = nullptr;};
    inline string getNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(namesShrink_, "") };
    inline ListProjectRolesShrinkRequest& setNamesShrink(string namesShrink) { DARABONBA_PTR_SET_VALUE(namesShrink_, namesShrink) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProjectRolesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProjectRolesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListProjectRolesShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListProjectRolesShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // An array of workspace role codes.
    shared_ptr<string> codesShrink_ {};
    // An array of workspace role names.
    shared_ptr<string> namesShrink_ {};
    // The page number to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return per page. Default value: 10. Maximum value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the DataWorks workspace. You can find the ID on the Workspace Management page in the [DataWorks console](https://workbench.data.aliyun.com/console).
    // 
    // This parameter specifies the DataWorks workspace for which you want to list roles.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The type of the workspace role.
    // 
    // - `UserCustom`: Custom Role
    // 
    // - `System`: System Role
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
