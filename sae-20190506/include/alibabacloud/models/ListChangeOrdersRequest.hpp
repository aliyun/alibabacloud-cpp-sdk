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
        && this->coStatus_ == nullptr && this->coType_ == nullptr && this->currentPage_ == nullptr && this->key_ == nullptr && this->orderBy_ == nullptr
        && this->pageSize_ == nullptr && this->reverse_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListChangeOrdersRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // coStatus Field Functions 
    bool hasCoStatus() const { return this->coStatus_ != nullptr;};
    void deleteCoStatus() { this->coStatus_ = nullptr;};
    inline string getCoStatus() const { DARABONBA_PTR_GET_DEFAULT(coStatus_, "") };
    inline ListChangeOrdersRequest& setCoStatus(string coStatus) { DARABONBA_PTR_SET_VALUE(coStatus_, coStatus) };


    // coType Field Functions 
    bool hasCoType() const { return this->coType_ != nullptr;};
    void deleteCoType() { this->coType_ = nullptr;};
    inline string getCoType() const { DARABONBA_PTR_GET_DEFAULT(coType_, "") };
    inline ListChangeOrdersRequest& setCoType(string coType) { DARABONBA_PTR_SET_VALUE(coType_, coType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListChangeOrdersRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline ListChangeOrdersRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListChangeOrdersRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListChangeOrdersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline ListChangeOrdersRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The status of the change order. Valid values:
    // 
    // - **0**: preparing
    // - **1**: executing
    // - **2**: executed successfully
    // - **3**: execution failed
    // - **6**: terminated
    // - **8**: waiting for manual batch confirmation
    // - **9**: waiting for automatic batch confirmation
    // - **10**: execution failed due to a system exception
    // - **11**: waiting for approval
    // - **12**: approved and waiting for execution
    shared_ptr<string> coStatus_ {};
    // The type of the change order. Valid values:
    // 
    // - **CoBindSlb**: bind an SLB instance
    // - **CoUnbindSlb**: unbind an SLB instance
    // - **CoCreateApp**: create an application
    // - **CoDeleteApp**: delete an application
    // - **CoDeploy**: deploy an application
    // - **CoRestartApplication**: restart an application
    // - **CoRollback**: roll back an application
    // - **CoScaleIn**: scale in an application
    // - **CoScaleOut**: scale out an application
    // - **CoStartApplication**: start an application
    // - **CoStopApplication**: stop an application
    // - **CoRescaleApplicationVertically**: change instance specifications
    // - **CoDeployHistroy**: roll back to a historical version
    // - **CoBindNas**: bind a NAS file system
    // - **CoUnbindNas**: unbind a NAS file system
    // - **CoBatchStartApplication**: start applications in batches
    // - **CoBatchStopApplication**: stop applications in batches
    // - **CoRestartInstances**: restart instances
    // - **CoDeleteInstances**: delete instances
    // - **CoScaleInAppWithInstances**: scale in specified instances
    shared_ptr<string> coType_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The keyword used for fuzzy match of the change order description. Change orders whose descriptions contain the keyword are returned.
    shared_ptr<string> key_ {};
    // The sorting condition.
    shared_ptr<string> orderBy_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether to sort the results in ascending order based on the field specified by the **OrderBy** parameter. Valid values:
    // 
    //   - **true**: sort in ascending order
    //   - **false**: sort in descending order
    shared_ptr<bool> reverse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
