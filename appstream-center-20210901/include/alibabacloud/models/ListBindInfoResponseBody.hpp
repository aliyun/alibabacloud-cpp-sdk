// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBINDINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBINDINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListBindInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBindInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BindInfoModels, bindInfoModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBindInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BindInfoModels, bindInfoModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBindInfoResponseBody() = default ;
    ListBindInfoResponseBody(const ListBindInfoResponseBody &) = default ;
    ListBindInfoResponseBody(ListBindInfoResponseBody &&) = default ;
    ListBindInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBindInfoResponseBody() = default ;
    ListBindInfoResponseBody& operator=(const ListBindInfoResponseBody &) = default ;
    ListBindInfoResponseBody& operator=(ListBindInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BindInfoModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BindInfoModels& obj) { 
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_TO_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(WyId, wyId_);
      };
      friend void from_json(const Darabonba::Json& j, BindInfoModels& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
        DARABONBA_PTR_FROM_JSON(AppInstanceId, appInstanceId_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(WyId, wyId_);
      };
      BindInfoModels() = default ;
      BindInfoModels(const BindInfoModels &) = default ;
      BindInfoModels(BindInfoModels &&) = default ;
      BindInfoModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BindInfoModels() = default ;
      BindInfoModels& operator=(const BindInfoModels &) = default ;
      BindInfoModels& operator=(BindInfoModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountType_ == nullptr
        && this->appId_ == nullptr && this->appInstanceGroupId_ == nullptr && this->appInstanceId_ == nullptr && this->appVersion_ == nullptr && this->productType_ == nullptr
        && this->regionId_ == nullptr && this->userId_ == nullptr && this->wyId_ == nullptr; };
      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline BindInfoModels& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline BindInfoModels& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appInstanceGroupId Field Functions 
      bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
      void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
      inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
      inline BindInfoModels& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


      // appInstanceId Field Functions 
      bool hasAppInstanceId() const { return this->appInstanceId_ != nullptr;};
      void deleteAppInstanceId() { this->appInstanceId_ = nullptr;};
      inline string getAppInstanceId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceId_, "") };
      inline BindInfoModels& setAppInstanceId(string appInstanceId) { DARABONBA_PTR_SET_VALUE(appInstanceId_, appInstanceId) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline BindInfoModels& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline BindInfoModels& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline BindInfoModels& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline BindInfoModels& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // wyId Field Functions 
      bool hasWyId() const { return this->wyId_ != nullptr;};
      void deleteWyId() { this->wyId_ = nullptr;};
      inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
      inline BindInfoModels& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


    protected:
      // The account type.
      // 
      // Valid values:
      // 
      // *   ad: Active Directory (AD) account
      // *   simple: convenience account
      shared_ptr<string> accountType_ {};
      // The app ID.
      shared_ptr<string> appId_ {};
      // The ID of the delivery group.
      shared_ptr<string> appInstanceGroupId_ {};
      // The ID of the app instance.
      shared_ptr<string> appInstanceId_ {};
      // The app version.
      shared_ptr<string> appVersion_ {};
      // The product type.
      // 
      // Valid values:
      // 
      // *   CloudApp: App Streaming
      // *   CloudBrowser: Cloud-based Browser
      // *   AndroidCloud: Cloud Phone
      shared_ptr<string> productType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The user ID.
      shared_ptr<string> userId_ {};
      // The ID of the Alibaba Cloud Workspace user.
      shared_ptr<string> wyId_ {};
    };

    virtual bool empty() const override { return this->bindInfoModels_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bindInfoModels Field Functions 
    bool hasBindInfoModels() const { return this->bindInfoModels_ != nullptr;};
    void deleteBindInfoModels() { this->bindInfoModels_ = nullptr;};
    inline const vector<ListBindInfoResponseBody::BindInfoModels> & getBindInfoModels() const { DARABONBA_PTR_GET_CONST(bindInfoModels_, vector<ListBindInfoResponseBody::BindInfoModels>) };
    inline vector<ListBindInfoResponseBody::BindInfoModels> getBindInfoModels() { DARABONBA_PTR_GET(bindInfoModels_, vector<ListBindInfoResponseBody::BindInfoModels>) };
    inline ListBindInfoResponseBody& setBindInfoModels(const vector<ListBindInfoResponseBody::BindInfoModels> & bindInfoModels) { DARABONBA_PTR_SET_VALUE(bindInfoModels_, bindInfoModels) };
    inline ListBindInfoResponseBody& setBindInfoModels(vector<ListBindInfoResponseBody::BindInfoModels> && bindInfoModels) { DARABONBA_PTR_SET_RVALUE(bindInfoModels_, bindInfoModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListBindInfoResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListBindInfoResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBindInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListBindInfoResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The bindings.
    shared_ptr<vector<ListBindInfoResponseBody::BindInfoModels>> bindInfoModels_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
