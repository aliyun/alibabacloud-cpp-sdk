// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLICENSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTLICENSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLicensesRequestOrders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListLicensesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLicensesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(Orders, orders_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PkgName, pkgName_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLicensesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(Orders, orders_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PkgName, pkgName_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    ListLicensesRequest() = default ;
    ListLicensesRequest(const ListLicensesRequest &) = default ;
    ListLicensesRequest(ListLicensesRequest &&) = default ;
    ListLicensesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLicensesRequest() = default ;
    ListLicensesRequest& operator=(const ListLicensesRequest &) = default ;
    ListLicensesRequest& operator=(ListLicensesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->businessType_ != nullptr && this->needTotalCount_ != nullptr && this->offset_ != nullptr
        && this->orders_ != nullptr && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->pkgName_ != nullptr && this->platformType_ != nullptr
        && this->product_ != nullptr && this->userId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ListLicensesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline ListLicensesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline ListLicensesRequest& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline ListLicensesRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool needTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline ListLicensesRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ListLicensesRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orders Field Functions 
    bool hasOrders() const { return this->orders_ != nullptr;};
    void deleteOrders() { this->orders_ = nullptr;};
    inline const vector<ListLicensesRequestOrders> & orders() const { DARABONBA_PTR_GET_CONST(orders_, vector<ListLicensesRequestOrders>) };
    inline vector<ListLicensesRequestOrders> orders() { DARABONBA_PTR_GET(orders_, vector<ListLicensesRequestOrders>) };
    inline ListLicensesRequest& setOrders(const vector<ListLicensesRequestOrders> & orders) { DARABONBA_PTR_SET_VALUE(orders_, orders) };
    inline ListLicensesRequest& setOrders(vector<ListLicensesRequestOrders> && orders) { DARABONBA_PTR_SET_RVALUE(orders_, orders) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListLicensesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListLicensesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pkgName Field Functions 
    bool hasPkgName() const { return this->pkgName_ != nullptr;};
    void deletePkgName() { this->pkgName_ = nullptr;};
    inline string pkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
    inline ListLicensesRequest& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline int64_t platformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, 0L) };
    inline ListLicensesRequest& setPlatformType(int64_t platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListLicensesRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline ListLicensesRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<bool> needTotalCount_ = nullptr;
    std::shared_ptr<int64_t> offset_ = nullptr;
    std::shared_ptr<vector<ListLicensesRequestOrders>> orders_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> pkgName_ = nullptr;
    std::shared_ptr<int64_t> platformType_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
