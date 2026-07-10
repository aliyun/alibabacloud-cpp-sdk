// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListApplicationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppSource, appSource_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppSource, appSource_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(IsStateful, isStateful_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProgrammingLanguage, programmingLanguage_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->appSource_ == nullptr && this->currentPage_ == nullptr && this->fieldType_ == nullptr && this->fieldValue_ == nullptr && this->isStateful_ == nullptr
        && this->namespaceId_ == nullptr && this->newSaeVersion_ == nullptr && this->orderBy_ == nullptr && this->pageSize_ == nullptr && this->programmingLanguage_ == nullptr
        && this->reverse_ == nullptr && this->tags_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string getAppSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline ListApplicationsRequest& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListApplicationsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string getFieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline ListApplicationsRequest& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline ListApplicationsRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline string getIsStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, "") };
    inline ListApplicationsRequest& setIsStateful(string isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string getNewSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline ListApplicationsRequest& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListApplicationsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // programmingLanguage Field Functions 
    bool hasProgrammingLanguage() const { return this->programmingLanguage_ != nullptr;};
    void deleteProgrammingLanguage() { this->programmingLanguage_ = nullptr;};
    inline string getProgrammingLanguage() const { DARABONBA_PTR_GET_DEFAULT(programmingLanguage_, "") };
    inline ListApplicationsRequest& setProgrammingLanguage(string programmingLanguage) { DARABONBA_PTR_SET_VALUE(programmingLanguage_, programmingLanguage) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListApplicationsRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListApplicationsRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The application name.
    shared_ptr<string> appName_ {};
    // The Serverless App Engine (SAE) application type.
    // 
    // - **micro_service.**
    // - **web.**
    // - **job.**
    shared_ptr<string> appSource_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The dimension by which to filter applications. Valid values:
    // 
    // - **appName**: application name.
    // - **appIds**: application ID.
    // - **slbIps**: SLB IP address.
    // - **instanceIps**: instance IP address.
    shared_ptr<string> fieldType_ {};
    // The application name, application ID, SLB IP address, or instance IP address of the target application.
    shared_ptr<string> fieldValue_ {};
    // Specifies whether the application is stateful.
    shared_ptr<string> isStateful_ {};
    // The namespace ID.
    shared_ptr<string> namespaceId_ {};
    // The application version. Valid values:
    // 
    // - lite: Lite Edition
    // - std: Standard Edition
    // - pro: Professional Edition
    shared_ptr<string> newSaeVersion_ {};
    // The field by which to sort applications. Valid values:
    // 
    // - **runnings**: sorts by the current number target instances.
    // - **instances**: sorts by the target number target instances.
    shared_ptr<string> orderBy_ {};
    // The number of entries per page in a paging query. Valid values: [0,10000].
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> programmingLanguage_ {};
    // Specifies whether to sort application instances by running status. If instances have the same status, they are sorted by instance ID. Valid values:
    //   - **true**: sorts in ascending order. Instances are arranged based on the startup sequence. For example, to reach the running state, an instance must go through steps such as starting the container, pulling the image, and initializing the instance.
    //   - **false**: sorts in descending order.
    // 
    // The ascending order of instances is as follows:
    // 
    // 1. **Error**: an error occurred during instance startup.
    // 2. **CrashLoopBackOff**: the container failed to start, encountered an error during startup, and encountered an error again after restart.
    // 3. **ErrImagePull**: an error occurred while pulling the container image for the instance.
    // 4. **ImagePullBackOff**: the container image cannot be obtained.
    // 5. **Pending**: the instance is waiting to be scheduled.
    // 6. **Unknown**: an unknown exception occurred.
    // 7. **Terminating**: the instance is being terminated.
    // 8. **NotFound**: the instance cannot be found.
    // 9. **PodInitializing**: the instance is being initialized.
    // 10. **Init:0/1**: the instance is initializing.
    // 11. **Running**: the instance is running.
    shared_ptr<bool> reverse_ {};
    // The tag key-value pairs. Valid values:
    // - **key**: the tag key. The length must be in the range of [1,128].
    // - **value**: the tag value. The length must be in the range of [1,128].
    // 
    // Tags are case-sensitive. If you specify multiple tags, all specified tags are created and attached to the resource. Each tag key on the same resource can have only one tag value. If you add a tag key that already exists, the corresponding tag value is updated to the new value.
    // 
    // Tags cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    shared_ptr<string> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
