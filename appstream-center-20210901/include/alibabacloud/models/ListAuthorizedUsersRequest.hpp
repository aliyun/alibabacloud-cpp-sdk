// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAuthorizedUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(UserIdFuzzy, userIdFuzzy_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupSetId, appInstanceGroupSetId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(UserIdFuzzy, userIdFuzzy_);
    };
    ListAuthorizedUsersRequest() = default ;
    ListAuthorizedUsersRequest(const ListAuthorizedUsersRequest &) = default ;
    ListAuthorizedUsersRequest(ListAuthorizedUsersRequest &&) = default ;
    ListAuthorizedUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersRequest() = default ;
    ListAuthorizedUsersRequest& operator=(const ListAuthorizedUsersRequest &) = default ;
    ListAuthorizedUsersRequest& operator=(ListAuthorizedUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->appInstanceGroupId_ == nullptr && this->appInstanceGroupSetId_ == nullptr && this->appInstancePersistentId_ == nullptr && this->endUserId_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->productType_ == nullptr && this->userIdFuzzy_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListAuthorizedUsersRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAuthorizedUsersRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupSetId Field Functions 
    bool hasAppInstanceGroupSetId() const { return this->appInstanceGroupSetId_ != nullptr;};
    void deleteAppInstanceGroupSetId() { this->appInstanceGroupSetId_ = nullptr;};
    inline string getAppInstanceGroupSetId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupSetId_, "") };
    inline ListAuthorizedUsersRequest& setAppInstanceGroupSetId(string appInstanceGroupSetId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupSetId_, appInstanceGroupSetId) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline ListAuthorizedUsersRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline ListAuthorizedUsersRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAuthorizedUsersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAuthorizedUsersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAuthorizedUsersRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // userIdFuzzy Field Functions 
    bool hasUserIdFuzzy() const { return this->userIdFuzzy_ != nullptr;};
    void deleteUserIdFuzzy() { this->userIdFuzzy_ = nullptr;};
    inline string getUserIdFuzzy() const { DARABONBA_PTR_GET_DEFAULT(userIdFuzzy_, "") };
    inline ListAuthorizedUsersRequest& setUserIdFuzzy(string userIdFuzzy) { DARABONBA_PTR_SET_VALUE(userIdFuzzy_, userIdFuzzy) };


  protected:
    // The application ID used to filter authorization relationships.
    // 
    // Set this parameter when querying authorized users of a specific application. This parameter is not required when querying cloud browser groups or delivery group sets.
    shared_ptr<string> appId_ {};
    // The delivery group ID. When querying cloud browsers, set this parameter to the browser group ID.
    // 
    // Specify either this parameter or `AppInstanceGroupSetId`, but not both.
    shared_ptr<string> appInstanceGroupId_ {};
    // The delivery group set ID.
    // 
    // Specify either this parameter or `AppInstanceGroupId`, but not both. When querying by set, omit `AppId` and `AppInstancePersistentId`.
    shared_ptr<string> appInstanceGroupSetId_ {};
    // The persistent session ID used to filter authorization relationships. This parameter applies to delivery groups that use session-based authorization.
    // 
    // This parameter is not required when querying delivery group sets.
    shared_ptr<string> appInstancePersistentId_ {};
    // Performs an exact match by authorized username. If this parameter is not specified, results are not filtered by exact username.
    shared_ptr<string> endUserId_ {};
    // The page number. This parameter is required. Pages start from page 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The maximum number of records per page. This parameter is required. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The product type. Set this parameter to `CloudBrowser` when querying authorized users of cloud browsers.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // Performs a fuzzy match by text contained in the authorized username.
    shared_ptr<string> userIdFuzzy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
