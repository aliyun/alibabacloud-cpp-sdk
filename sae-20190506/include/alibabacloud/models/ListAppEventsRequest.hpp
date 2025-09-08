// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAppEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ObjectKind, objectKind_);
      DARABONBA_PTR_TO_JSON(ObjectName, objectName_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ObjectKind, objectKind_);
      DARABONBA_PTR_FROM_JSON(ObjectName, objectName_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
    };
    ListAppEventsRequest() = default ;
    ListAppEventsRequest(const ListAppEventsRequest &) = default ;
    ListAppEventsRequest(ListAppEventsRequest &&) = default ;
    ListAppEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppEventsRequest() = default ;
    ListAppEventsRequest& operator=(const ListAppEventsRequest &) = default ;
    ListAppEventsRequest& operator=(ListAppEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->currentPage_ != nullptr && this->eventType_ != nullptr && this->namespace_ != nullptr && this->objectKind_ != nullptr && this->objectName_ != nullptr
        && this->pageSize_ != nullptr && this->reason_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAppEventsRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListAppEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListAppEventsRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAppEventsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // objectKind Field Functions 
    bool hasObjectKind() const { return this->objectKind_ != nullptr;};
    void deleteObjectKind() { this->objectKind_ = nullptr;};
    inline string objectKind() const { DARABONBA_PTR_GET_DEFAULT(objectKind_, "") };
    inline ListAppEventsRequest& setObjectKind(string objectKind) { DARABONBA_PTR_SET_VALUE(objectKind_, objectKind) };


    // objectName Field Functions 
    bool hasObjectName() const { return this->objectName_ != nullptr;};
    void deleteObjectName() { this->objectName_ = nullptr;};
    inline string objectName() const { DARABONBA_PTR_GET_DEFAULT(objectName_, "") };
    inline ListAppEventsRequest& setObjectName(string objectName) { DARABONBA_PTR_SET_VALUE(objectName_, objectName) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ListAppEventsRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


  protected:
    // The application ID.
    std::shared_ptr<string> appId_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The type of the event. Valid values:
    // 
    // *   **Warning**: an alert.
    // *   **Normal**: a normal event.
    std::shared_ptr<string> eventType_ = nullptr;
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The type of the object. Valid values:
    // 
    // *   **Deployment**: an application.
    // *   **Pod**: an application instance.
    // *   **Service**: a Server Load Balancer (SLB) instance.
    // *   **HorizontalPodAutoscaler**: an auto scaling policy.
    // *   **CloneSet**: an application.
    std::shared_ptr<string> objectKind_ = nullptr;
    // The name of the object. Fuzzy search by prefix is supported.
    std::shared_ptr<string> objectName_ = nullptr;
    // The number of entries to return on each page. Valid values: 0 to 10000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The cause of the event. Fuzzy search by prefix is supported.
    std::shared_ptr<string> reason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
