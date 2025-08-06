// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAGEBYCONDAPPINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAGEBYCONDAPPINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetPageByCondAppInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPageByCondAppInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PkgName, pkgName_);
      DARABONBA_PTR_TO_JSON(PkgSignature, pkgSignature_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
    };
    friend void from_json(const Darabonba::Json& j, GetPageByCondAppInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PkgName, pkgName_);
      DARABONBA_PTR_FROM_JSON(PkgSignature, pkgSignature_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
    };
    GetPageByCondAppInfoRequest() = default ;
    GetPageByCondAppInfoRequest(const GetPageByCondAppInfoRequest &) = default ;
    GetPageByCondAppInfoRequest(GetPageByCondAppInfoRequest &&) = default ;
    GetPageByCondAppInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPageByCondAppInfoRequest() = default ;
    GetPageByCondAppInfoRequest& operator=(const GetPageByCondAppInfoRequest &) = default ;
    GetPageByCondAppInfoRequest& operator=(GetPageByCondAppInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->appName_ != nullptr && this->appType_ != nullptr && this->businessType_ != nullptr && this->needTotalCount_ != nullptr && this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->pkgName_ != nullptr && this->pkgSignature_ != nullptr && this->platformType_ != nullptr && this->sortBy_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline GetPageByCondAppInfoRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetPageByCondAppInfoRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline GetPageByCondAppInfoRequest& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetPageByCondAppInfoRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool needTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline GetPageByCondAppInfoRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetPageByCondAppInfoRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetPageByCondAppInfoRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pkgName Field Functions 
    bool hasPkgName() const { return this->pkgName_ != nullptr;};
    void deletePkgName() { this->pkgName_ = nullptr;};
    inline string pkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
    inline GetPageByCondAppInfoRequest& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


    // pkgSignature Field Functions 
    bool hasPkgSignature() const { return this->pkgSignature_ != nullptr;};
    void deletePkgSignature() { this->pkgSignature_ = nullptr;};
    inline string pkgSignature() const { DARABONBA_PTR_GET_DEFAULT(pkgSignature_, "") };
    inline GetPageByCondAppInfoRequest& setPkgSignature(string pkgSignature) { DARABONBA_PTR_SET_VALUE(pkgSignature_, pkgSignature) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline int64_t platformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, 0L) };
    inline GetPageByCondAppInfoRequest& setPlatformType(int64_t platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline GetPageByCondAppInfoRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<int32_t> appType_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<bool> needTotalCount_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> pkgName_ = nullptr;
    std::shared_ptr<string> pkgSignature_ = nullptr;
    std::shared_ptr<int64_t> platformType_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
