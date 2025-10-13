// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHANGEORDERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHANGEORDERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListChangeOrdersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChangeOrdersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CoStatus, coStatus_);
      DARABONBA_PTR_TO_JSON(CoType, coType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
    };
    friend void from_json(const Darabonba::Json& j, ListChangeOrdersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CoStatus, coStatus_);
      DARABONBA_PTR_FROM_JSON(CoType, coType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
    };
    ListChangeOrdersRequest() = default ;
    ListChangeOrdersRequest(const ListChangeOrdersRequest &) = default ;
    ListChangeOrdersRequest(ListChangeOrdersRequest &&) = default ;
    ListChangeOrdersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChangeOrdersRequest() = default ;
    ListChangeOrdersRequest& operator=(const ListChangeOrdersRequest &) = default ;
    ListChangeOrdersRequest& operator=(ListChangeOrdersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->coStatus_ == nullptr && return this->coType_ == nullptr && return this->currentPage_ == nullptr && return this->key_ == nullptr && return this->orderBy_ == nullptr
        && return this->pageSize_ == nullptr && return this->reverse_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListChangeOrdersRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // coStatus Field Functions 
    bool hasCoStatus() const { return this->coStatus_ != nullptr;};
    void deleteCoStatus() { this->coStatus_ = nullptr;};
    inline string coStatus() const { DARABONBA_PTR_GET_DEFAULT(coStatus_, "") };
    inline ListChangeOrdersRequest& setCoStatus(string coStatus) { DARABONBA_PTR_SET_VALUE(coStatus_, coStatus) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string coType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline ListChangeOrdersRequest& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListChangeOrdersRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListChangeOrdersRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListChangeOrdersRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChangeOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool reverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListChangeOrdersRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


  protected:
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> coStatus_ = nullptr;
    // The type of the change order. Valid values:
    // 
    // *   **CoBindSlb**: associates the Server Load Balancer (SLB) instance with the application.
    // *   **CoUnbindSlb**: disassociates an SLB instance from the application.
    // *   **CoCreateApp**: creates the application.
    // *   **CoDeleteApp**: deletes the application.
    // *   **CoDeploy**: deploys the application.
    // *   **CoRestartApplication**: restarts the application.
    // *   **CoRollback**: rolls back the application.
    // *   **CoScaleIn**: scales in the application.
    // *   **CoScaleOut**: scales out the application.
    // *   **CoStartApplication**: starts the application.
    // *   **CoStopApplication**: stops the application.
    // *   **CoRescaleApplicationVertically**: modifies the instance type.
    // *   **CoDeployHistroy**: rolls back the application to an earlier version.
    // *   **CoBindNas**: associates a network-attached storage (NAS) file system with the application.
    // *   **CoUnbindNas**: disassociates a NAS file system from the application.
    // *   **CoBatchStartApplication**: starts multiple applications concurrently.
    // *   **CoBatchStopApplication**: stops multiple applications concurrently.
    // *   **CoRestartInstances**: restarts the instance.
    // *   **CoDeleteInstances**: deletes the instance.
    // *   **CoScaleInAppWithInstances**: reduces the specified number of application instances.
    std::shared_ptr<string> coType_ = nullptr;
    // 20
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // CoCreateApp
    std::shared_ptr<string> key_ = nullptr;
    std::shared_ptr<string> orderBy_ = nullptr;
    // test
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> reverse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
