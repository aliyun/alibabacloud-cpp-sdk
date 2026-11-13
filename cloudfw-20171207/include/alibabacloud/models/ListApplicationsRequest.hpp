// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Risk, risk_);
      DARABONBA_PTR_TO_JSON(Technology, technology_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Risk, risk_);
      DARABONBA_PTR_FROM_JSON(Technology, technology_);
    };
    ListApplicationsRequest() = default ;
    ListApplicationsRequest(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest(ListApplicationsRequest &&) = default ;
    ListApplicationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsRequest() = default ;
    ListApplicationsRequest& operator=(const ListApplicationsRequest &) = default ;
    ListApplicationsRequest& operator=(ListApplicationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->description_ == nullptr && this->groupName_ == nullptr
        && this->lang_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->risk_ == nullptr && this->technology_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
    inline ListApplicationsRequest& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // applicationName Field Functions 
    bool hasApplicationName() const { return this->applicationName_ != nullptr;};
    void deleteApplicationName() { this->applicationName_ = nullptr;};
    inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
    inline ListApplicationsRequest& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline ListApplicationsRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListApplicationsRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListApplicationsRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListApplicationsRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListApplicationsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationsRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // risk Field Functions 
    bool hasRisk() const { return this->risk_ != nullptr;};
    void deleteRisk() { this->risk_ = nullptr;};
    inline string getRisk() const { DARABONBA_PTR_GET_DEFAULT(risk_, "") };
    inline ListApplicationsRequest& setRisk(string risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


    // technology Field Functions 
    bool hasTechnology() const { return this->technology_ != nullptr;};
    void deleteTechnology() { this->technology_ = nullptr;};
    inline string getTechnology() const { DARABONBA_PTR_GET_DEFAULT(technology_, "") };
    inline ListApplicationsRequest& setTechnology(string technology) { DARABONBA_PTR_SET_VALUE(technology_, technology) };


  protected:
    // The application ID. Exact match is supported.
    shared_ptr<int64_t> applicationId_ {};
    // The application name. Fuzzy match is supported.
    shared_ptr<string> applicationName_ {};
    // The application category ID. Exact match is supported.
    shared_ptr<int64_t> categoryId_ {};
    // The application category name. Fuzzy match is supported.
    shared_ptr<string> categoryName_ {};
    // The application description. Fuzzy match is supported.
    shared_ptr<string> description_ {};
    // The application group name. Fuzzy match is supported.
    shared_ptr<string> groupName_ {};
    // The language of the returned information. Valid values:
    // - **zh**: Chinese. This is the default value.
    // - **en**: English.
    // This parameter determines whether the application name, category name, technology type, vendor, and description are returned in Chinese or English.
    shared_ptr<string> lang_ {};
    // The page number. Pages start from 1. Default value: 1.
    shared_ptr<int64_t> pageNo_ {};
    // The number of entries per page. The value must be greater than or equal to 1. Default value: 10.
    shared_ptr<int64_t> pageSize_ {};
    // The risk level. Exact match is supported. Valid values:
    // - **Information**: Informational.
    // - **Low**: Low.
    // - **Medium**: Medium.
    // - **High**: High.
    // - **Critical**: Critical.
    // If an invalid value is specified, this filter condition is ignored.
    shared_ptr<string> risk_ {};
    // The technology type name. Fuzzy match is supported.
    shared_ptr<string> technology_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
