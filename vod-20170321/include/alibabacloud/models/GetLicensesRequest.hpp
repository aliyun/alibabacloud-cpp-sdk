// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetLicensesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicensesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PkgName, pkgName_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicensesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppItemId, appItemId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(NeedTotalCount, needTotalCount_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PkgName, pkgName_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
    };
    GetLicensesRequest() = default ;
    GetLicensesRequest(const GetLicensesRequest &) = default ;
    GetLicensesRequest(GetLicensesRequest &&) = default ;
    GetLicensesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicensesRequest() = default ;
    GetLicensesRequest& operator=(const GetLicensesRequest &) = default ;
    GetLicensesRequest& operator=(GetLicensesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appItemId_ != nullptr
        && this->appName_ != nullptr && this->businessType_ != nullptr && this->needTotalCount_ != nullptr && this->offset_ != nullptr && this->pageNo_ != nullptr
        && this->pageSize_ != nullptr && this->pkgName_ != nullptr && this->platformType_ != nullptr; };
    // appItemId Field Functions 
    bool hasAppItemId() const { return this->appItemId_ != nullptr;};
    void deleteAppItemId() { this->appItemId_ = nullptr;};
    inline string appItemId() const { DARABONBA_PTR_GET_DEFAULT(appItemId_, "") };
    inline GetLicensesRequest& setAppItemId(string appItemId) { DARABONBA_PTR_SET_VALUE(appItemId_, appItemId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetLicensesRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline GetLicensesRequest& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // needTotalCount Field Functions 
    bool hasNeedTotalCount() const { return this->needTotalCount_ != nullptr;};
    void deleteNeedTotalCount() { this->needTotalCount_ = nullptr;};
    inline bool needTotalCount() const { DARABONBA_PTR_GET_DEFAULT(needTotalCount_, false) };
    inline GetLicensesRequest& setNeedTotalCount(bool needTotalCount) { DARABONBA_PTR_SET_VALUE(needTotalCount_, needTotalCount) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline GetLicensesRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline GetLicensesRequest& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetLicensesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pkgName Field Functions 
    bool hasPkgName() const { return this->pkgName_ != nullptr;};
    void deletePkgName() { this->pkgName_ = nullptr;};
    inline string pkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
    inline GetLicensesRequest& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline int64_t platformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, 0L) };
    inline GetLicensesRequest& setPlatformType(int64_t platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


  protected:
    std::shared_ptr<string> appItemId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<bool> needTotalCount_ = nullptr;
    std::shared_ptr<int64_t> offset_ = nullptr;
    std::shared_ptr<int64_t> pageNo_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<string> pkgName_ = nullptr;
    std::shared_ptr<int64_t> platformType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
