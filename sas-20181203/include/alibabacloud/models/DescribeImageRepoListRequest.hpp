// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEREPOLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageRepoListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageRepoListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(OperateType, operateType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_TO_JSON(Selected, selected_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageRepoListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoNamespace, repoNamespace_);
      DARABONBA_PTR_FROM_JSON(Selected, selected_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeImageRepoListRequest() = default ;
    DescribeImageRepoListRequest(const DescribeImageRepoListRequest &) = default ;
    DescribeImageRepoListRequest(DescribeImageRepoListRequest &&) = default ;
    DescribeImageRepoListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageRepoListRequest() = default ;
    DescribeImageRepoListRequest& operator=(const DescribeImageRepoListRequest &) = default ;
    DescribeImageRepoListRequest& operator=(DescribeImageRepoListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->fieldName_ == nullptr && this->fieldValue_ == nullptr && this->operateType_ == nullptr && this->pageSize_ == nullptr && this->repoName_ == nullptr
        && this->repoNamespace_ == nullptr && this->selected_ == nullptr && this->targetType_ == nullptr && this->type_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageRepoListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline DescribeImageRepoListRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeImageRepoListRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // operateType Field Functions 
    bool hasOperateType() const { return this->operateType_ != nullptr;};
    void deleteOperateType() { this->operateType_ = nullptr;};
    inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
    inline DescribeImageRepoListRequest& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageRepoListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline DescribeImageRepoListRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoNamespace Field Functions 
    bool hasRepoNamespace() const { return this->repoNamespace_ != nullptr;};
    void deleteRepoNamespace() { this->repoNamespace_ = nullptr;};
    inline string getRepoNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNamespace_, "") };
    inline DescribeImageRepoListRequest& setRepoNamespace(string repoNamespace) { DARABONBA_PTR_SET_VALUE(repoNamespace_, repoNamespace) };


    // selected Field Functions 
    bool hasSelected() const { return this->selected_ != nullptr;};
    void deleteSelected() { this->selected_ = nullptr;};
    inline int32_t getSelected() const { DARABONBA_PTR_GET_DEFAULT(selected_, 0) };
    inline DescribeImageRepoListRequest& setSelected(int32_t selected) { DARABONBA_PTR_SET_VALUE(selected_, selected) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeImageRepoListRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeImageRepoListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of the page to return. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The name of the field that is used for the query. Valid values:
    // 
    // *   **repoName**: the name of the image repository
    // *   **repoNamespace**: the namespace to which the image repository belongs
    // 
    // >  This parameter takes effect only when the **OperateType** parameter is set to **other**.
    shared_ptr<string> fieldName_ {};
    // The value of the field that is used for the query.
    // 
    // >  This parameter takes effect only when the **OperateType** parameter is set to **other**.
    shared_ptr<string> fieldValue_ {};
    // The type of the operation. Valid values:
    // 
    // *   **count**: counts statistics
    // *   **other**: others
    shared_ptr<string> operateType_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the image repository.
    shared_ptr<string> repoName_ {};
    // The namespace to which the image repository belongs.
    shared_ptr<string> repoNamespace_ {};
    // Whether it is selected. Values:
    // 
    // *   **0**: NO
    // *   **1**: YES
    shared_ptr<int32_t> selected_ {};
    // The condition by which the feature is applied. Valid values:
    // 
    // *   **image_repo**: the ID of the image repository
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
    // The type of the feature. Valid values:
    // 
    // *   **image_repo**: image repository protection
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
