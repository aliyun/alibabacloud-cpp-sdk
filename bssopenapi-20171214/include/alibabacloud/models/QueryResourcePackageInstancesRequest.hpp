// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCEPACKAGEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResourcePackageInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourcePackageInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_TO_JSON(ExpiryTimeStart, expiryTimeStart_);
      DARABONBA_PTR_TO_JSON(IncludePartner, includePartner_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourcePackageInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiryTimeEnd, expiryTimeEnd_);
      DARABONBA_PTR_FROM_JSON(ExpiryTimeStart, expiryTimeStart_);
      DARABONBA_PTR_FROM_JSON(IncludePartner, includePartner_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    QueryResourcePackageInstancesRequest() = default ;
    QueryResourcePackageInstancesRequest(const QueryResourcePackageInstancesRequest &) = default ;
    QueryResourcePackageInstancesRequest(QueryResourcePackageInstancesRequest &&) = default ;
    QueryResourcePackageInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourcePackageInstancesRequest() = default ;
    QueryResourcePackageInstancesRequest& operator=(const QueryResourcePackageInstancesRequest &) = default ;
    QueryResourcePackageInstancesRequest& operator=(QueryResourcePackageInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expiryTimeEnd_ != nullptr
        && this->expiryTimeStart_ != nullptr && this->includePartner_ != nullptr && this->ownerId_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr
        && this->productCode_ != nullptr; };
    // expiryTimeEnd Field Functions 
    bool hasExpiryTimeEnd() const { return this->expiryTimeEnd_ != nullptr;};
    void deleteExpiryTimeEnd() { this->expiryTimeEnd_ = nullptr;};
    inline string expiryTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeEnd_, "") };
    inline QueryResourcePackageInstancesRequest& setExpiryTimeEnd(string expiryTimeEnd) { DARABONBA_PTR_SET_VALUE(expiryTimeEnd_, expiryTimeEnd) };


    // expiryTimeStart Field Functions 
    bool hasExpiryTimeStart() const { return this->expiryTimeStart_ != nullptr;};
    void deleteExpiryTimeStart() { this->expiryTimeStart_ = nullptr;};
    inline string expiryTimeStart() const { DARABONBA_PTR_GET_DEFAULT(expiryTimeStart_, "") };
    inline QueryResourcePackageInstancesRequest& setExpiryTimeStart(string expiryTimeStart) { DARABONBA_PTR_SET_VALUE(expiryTimeStart_, expiryTimeStart) };


    // includePartner Field Functions 
    bool hasIncludePartner() const { return this->includePartner_ != nullptr;};
    void deleteIncludePartner() { this->includePartner_ = nullptr;};
    inline bool includePartner() const { DARABONBA_PTR_GET_DEFAULT(includePartner_, false) };
    inline QueryResourcePackageInstancesRequest& setIncludePartner(bool includePartner) { DARABONBA_PTR_SET_VALUE(includePartner_, includePartner) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryResourcePackageInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryResourcePackageInstancesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryResourcePackageInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QueryResourcePackageInstancesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The end of the expiration time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> expiryTimeEnd_ = nullptr;
    // The beginning of the expiration time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> expiryTimeStart_ = nullptr;
    // Specifies whether partners are involved.
    std::shared_ptr<bool> includePartner_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: 1.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries to return on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The code of the service.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
