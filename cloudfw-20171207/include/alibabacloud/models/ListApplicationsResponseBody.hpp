// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListApplicationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Applications, applications_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Applications, applications_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody(ListApplicationsResponseBody &&) = default ;
    ListApplicationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsResponseBody() = default ;
    ListApplicationsResponseBody& operator=(const ListApplicationsResponseBody &) = default ;
    ListApplicationsResponseBody& operator=(ListApplicationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Applications : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Applications& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(DefaultAction, defaultAction_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(Protocol, protocol_);
        DARABONBA_PTR_TO_JSON(Requirements, requirements_);
        DARABONBA_PTR_TO_JSON(Risk, risk_);
        DARABONBA_PTR_TO_JSON(Technology, technology_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, Applications& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(ApplicationName, applicationName_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(DefaultAction, defaultAction_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
        DARABONBA_PTR_FROM_JSON(Requirements, requirements_);
        DARABONBA_PTR_FROM_JSON(Risk, risk_);
        DARABONBA_PTR_FROM_JSON(Technology, technology_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      Applications() = default ;
      Applications(const Applications &) = default ;
      Applications(Applications &&) = default ;
      Applications(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Applications() = default ;
      Applications& operator=(const Applications &) = default ;
      Applications& operator=(Applications &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->applicationName_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->defaultAction_ == nullptr && this->description_ == nullptr
        && this->groupName_ == nullptr && this->level_ == nullptr && this->protocol_ == nullptr && this->requirements_ == nullptr && this->risk_ == nullptr
        && this->technology_ == nullptr && this->updatedTime_ == nullptr && this->vendor_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline int64_t getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, 0L) };
      inline Applications& setApplicationId(int64_t applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // applicationName Field Functions 
      bool hasApplicationName() const { return this->applicationName_ != nullptr;};
      void deleteApplicationName() { this->applicationName_ = nullptr;};
      inline string getApplicationName() const { DARABONBA_PTR_GET_DEFAULT(applicationName_, "") };
      inline Applications& setApplicationName(string applicationName) { DARABONBA_PTR_SET_VALUE(applicationName_, applicationName) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
      inline Applications& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Applications& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // defaultAction Field Functions 
      bool hasDefaultAction() const { return this->defaultAction_ != nullptr;};
      void deleteDefaultAction() { this->defaultAction_ = nullptr;};
      inline string getDefaultAction() const { DARABONBA_PTR_GET_DEFAULT(defaultAction_, "") };
      inline Applications& setDefaultAction(string defaultAction) { DARABONBA_PTR_SET_VALUE(defaultAction_, defaultAction) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Applications& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline Applications& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
      inline Applications& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline const vector<string> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<string>) };
      inline vector<string> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<string>) };
      inline Applications& setProtocol(const vector<string> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
      inline Applications& setProtocol(vector<string> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


      // requirements Field Functions 
      bool hasRequirements() const { return this->requirements_ != nullptr;};
      void deleteRequirements() { this->requirements_ = nullptr;};
      inline const vector<string> & getRequirements() const { DARABONBA_PTR_GET_CONST(requirements_, vector<string>) };
      inline vector<string> getRequirements() { DARABONBA_PTR_GET(requirements_, vector<string>) };
      inline Applications& setRequirements(const vector<string> & requirements) { DARABONBA_PTR_SET_VALUE(requirements_, requirements) };
      inline Applications& setRequirements(vector<string> && requirements) { DARABONBA_PTR_SET_RVALUE(requirements_, requirements) };


      // risk Field Functions 
      bool hasRisk() const { return this->risk_ != nullptr;};
      void deleteRisk() { this->risk_ = nullptr;};
      inline string getRisk() const { DARABONBA_PTR_GET_DEFAULT(risk_, "") };
      inline Applications& setRisk(string risk) { DARABONBA_PTR_SET_VALUE(risk_, risk) };


      // technology Field Functions 
      bool hasTechnology() const { return this->technology_ != nullptr;};
      void deleteTechnology() { this->technology_ = nullptr;};
      inline string getTechnology() const { DARABONBA_PTR_GET_DEFAULT(technology_, "") };
      inline Applications& setTechnology(string technology) { DARABONBA_PTR_SET_VALUE(technology_, technology) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Applications& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline Applications& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The application ID in the built-in application signature library.
      shared_ptr<int64_t> applicationId_ {};
      // The application name. The name is returned in Chinese or English based on the Lang parameter.
      shared_ptr<string> applicationName_ {};
      // The application category ID.
      shared_ptr<int64_t> categoryId_ {};
      // The application category name. The name is returned in Chinese or English based on the Lang parameter.
      shared_ptr<string> categoryName_ {};
      // The default action for the application in the built-in application library. The value is fixed as Alert (Monitor).
      shared_ptr<string> defaultAction_ {};
      // The application description. The description is returned in Chinese or English based on the Lang parameter.
      shared_ptr<string> description_ {};
      // The application group name.
      shared_ptr<string> groupName_ {};
      // The level value of the application. The value is obtained from the built-in application signature library and used for list sorting.
      shared_ptr<int64_t> level_ {};
      // The list of protocols used by the application.
      shared_ptr<vector<string>> protocol_ {};
      // The list of detection prerequisites for the application.
      shared_ptr<vector<string>> requirements_ {};
      // The risk level. Valid values:
      // - **Information**: Informational.
      // - **Low**: Low.
      // - **Medium**: Medium.
      // - **High**: High.
      // - **Critical**: Critical.
      shared_ptr<string> risk_ {};
      // The technology type name. The name is returned in Chinese or English based on the Lang parameter.
      shared_ptr<string> technology_ {};
      // The last update time of the application information. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> updatedTime_ {};
      // The application vendor name. The name is returned in Chinese or English based on the Lang parameter.
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->applications_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // applications Field Functions 
    bool hasApplications() const { return this->applications_ != nullptr;};
    void deleteApplications() { this->applications_ = nullptr;};
    inline const vector<ListApplicationsResponseBody::Applications> & getApplications() const { DARABONBA_PTR_GET_CONST(applications_, vector<ListApplicationsResponseBody::Applications>) };
    inline vector<ListApplicationsResponseBody::Applications> getApplications() { DARABONBA_PTR_GET(applications_, vector<ListApplicationsResponseBody::Applications>) };
    inline ListApplicationsResponseBody& setApplications(const vector<ListApplicationsResponseBody::Applications> & applications) { DARABONBA_PTR_SET_VALUE(applications_, applications) };
    inline ListApplicationsResponseBody& setApplications(vector<ListApplicationsResponseBody::Applications> && applications) { DARABONBA_PTR_SET_RVALUE(applications_, applications) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListApplicationsResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListApplicationsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListApplicationsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of applications. In the Chinese environment, the applications are sorted in descending order of group name and ascending order of application level.
    shared_ptr<vector<ListApplicationsResponseBody::Applications>> applications_ {};
    // The current page number.
    shared_ptr<int64_t> pageNo_ {};
    // The current page size.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of applications that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
