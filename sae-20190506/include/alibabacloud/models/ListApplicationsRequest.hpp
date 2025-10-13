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
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
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
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
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
        && return this->appSource_ == nullptr && return this->currentPage_ == nullptr && return this->fieldType_ == nullptr && return this->fieldValue_ == nullptr && return this->isStateful_ == nullptr
        && return this->namespaceId_ == nullptr && return this->orderBy_ == nullptr && return this->pageSize_ == nullptr && return this->reverse_ == nullptr && return this->tags_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListApplicationsRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appSource Field Functions 
    bool hasAppSource() const { return this->appSource_ != nullptr;};
    void deleteAppSource() { this->appSource_ = nullptr;};
    inline string appSource() const { DARABONBA_PTR_GET_DEFAULT(appSource_, "") };
    inline ListApplicationsRequest& setAppSource(string appSource) { DARABONBA_PTR_SET_VALUE(appSource_, appSource) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListApplicationsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline ListApplicationsRequest& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline ListApplicationsRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // isStateful Field Functions 
    bool hasIsStateful() const { return this->isStateful_ != nullptr;};
    void deleteIsStateful() { this->isStateful_ = nullptr;};
    inline string isStateful() const { DARABONBA_PTR_GET_DEFAULT(isStateful_, "") };
    inline ListApplicationsRequest& setIsStateful(string isStateful) { DARABONBA_PTR_SET_VALUE(isStateful_, isStateful) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListApplicationsRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListApplicationsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListApplicationsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool reverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListApplicationsRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListApplicationsRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    // The application name.
    std::shared_ptr<string> appName_ = nullptr;
    // The SAE application type. Valid values:
    // 
    // - **micro_service**
    // - **web**
    // - **job**
    std::shared_ptr<string> appSource_ = nullptr;
    // The current page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Set the filtering criteria for applications. The value options are as follows:
    // 
    // - appName: Application name.
    // - appIds: Application IDs.
    // - slbIps: SLB IP addresses.
    // - instanceIps: Instance IP addresses.
    std::shared_ptr<string> fieldType_ = nullptr;
    // The name, ID, SLB IP, or instance IP of the target application.
    std::shared_ptr<string> fieldValue_ = nullptr;
    std::shared_ptr<string> isStateful_ = nullptr;
    // The namespace ID.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // Specifies how applications are sorted. Valid values:
    // 
    // *   **running**: The applications are sorted based on the number of running instances.
    // *   **instances**: The applications are sorted based on the number of destination instances.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The number of records in each page. Value range: [0,10000]
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Sort by the running status of application instances. If the statuses are the same, sort by instance ID. The value options are as follows:
    // 
    // - true: Sort in ascending order. Instances are arranged according to the startup process, for example: to ultimately reach the running state, an instance must first go through steps such as starting containers, pulling images, and initializing the instance.
    // - false: Sort in descending order.
    std::shared_ptr<bool> reverse_ = nullptr;
    // The tag in the format of a key-value pair.
    // *   **key**: the tag key. It cannot exceed 128 characters in length.
    // *   **value**: the tag value. It cannot exceed 128 characters in length.
    // 
    // Tag keys and tag values are case-sensitive. If you specify multiple tags, the system adds all the tags to the specified resources. Each tag key on a resource can have only one tag value. If you create a tag that has the same key as an existing tag, the value of the existing tag is overwritten.
    // 
    // Tag keys and tag values cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
