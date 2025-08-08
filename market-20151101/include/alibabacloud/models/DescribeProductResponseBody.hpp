// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyProductExtras.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyProductSkus.hpp>
#include <alibabacloud/models/DescribeProductResponseBodyShopInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuditFailMsg, auditFailMsg_);
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FrontCategoryId, frontCategoryId_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PicUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(ProductExtras, productExtras_);
      DARABONBA_PTR_TO_JSON(ProductSkus, productSkus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(ShopInfo, shopInfo_);
      DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupplierPk, supplierPk_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UseCount, useCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditFailMsg, auditFailMsg_);
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FrontCategoryId, frontCategoryId_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PicUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(ProductExtras, productExtras_);
      DARABONBA_PTR_FROM_JSON(ProductSkus, productSkus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(ShopInfo, shopInfo_);
      DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupplierPk, supplierPk_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UseCount, useCount_);
    };
    DescribeProductResponseBody() = default ;
    DescribeProductResponseBody(const DescribeProductResponseBody &) = default ;
    DescribeProductResponseBody(DescribeProductResponseBody &&) = default ;
    DescribeProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResponseBody() = default ;
    DescribeProductResponseBody& operator=(const DescribeProductResponseBody &) = default ;
    DescribeProductResponseBody& operator=(DescribeProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->auditFailMsg_ != nullptr
        && this->auditStatus_ != nullptr && this->auditTime_ != nullptr && this->code_ != nullptr && this->description_ != nullptr && this->frontCategoryId_ != nullptr
        && this->gmtCreated_ != nullptr && this->gmtModified_ != nullptr && this->name_ != nullptr && this->picUrl_ != nullptr && this->productExtras_ != nullptr
        && this->productSkus_ != nullptr && this->requestId_ != nullptr && this->score_ != nullptr && this->shopInfo_ != nullptr && this->shortDescription_ != nullptr
        && this->status_ != nullptr && this->supplierPk_ != nullptr && this->type_ != nullptr && this->useCount_ != nullptr; };
    // auditFailMsg Field Functions 
    bool hasAuditFailMsg() const { return this->auditFailMsg_ != nullptr;};
    void deleteAuditFailMsg() { this->auditFailMsg_ = nullptr;};
    inline string auditFailMsg() const { DARABONBA_PTR_GET_DEFAULT(auditFailMsg_, "") };
    inline DescribeProductResponseBody& setAuditFailMsg(string auditFailMsg) { DARABONBA_PTR_SET_VALUE(auditFailMsg_, auditFailMsg) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string auditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline DescribeProductResponseBody& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // auditTime Field Functions 
    bool hasAuditTime() const { return this->auditTime_ != nullptr;};
    void deleteAuditTime() { this->auditTime_ = nullptr;};
    inline int64_t auditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, 0L) };
    inline DescribeProductResponseBody& setAuditTime(int64_t auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeProductResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // frontCategoryId Field Functions 
    bool hasFrontCategoryId() const { return this->frontCategoryId_ != nullptr;};
    void deleteFrontCategoryId() { this->frontCategoryId_ = nullptr;};
    inline int64_t frontCategoryId() const { DARABONBA_PTR_GET_DEFAULT(frontCategoryId_, 0L) };
    inline DescribeProductResponseBody& setFrontCategoryId(int64_t frontCategoryId) { DARABONBA_PTR_SET_VALUE(frontCategoryId_, frontCategoryId) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline DescribeProductResponseBody& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline DescribeProductResponseBody& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeProductResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string picUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline DescribeProductResponseBody& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // productExtras Field Functions 
    bool hasProductExtras() const { return this->productExtras_ != nullptr;};
    void deleteProductExtras() { this->productExtras_ = nullptr;};
    inline const DescribeProductResponseBodyProductExtras & productExtras() const { DARABONBA_PTR_GET_CONST(productExtras_, DescribeProductResponseBodyProductExtras) };
    inline DescribeProductResponseBodyProductExtras productExtras() { DARABONBA_PTR_GET(productExtras_, DescribeProductResponseBodyProductExtras) };
    inline DescribeProductResponseBody& setProductExtras(const DescribeProductResponseBodyProductExtras & productExtras) { DARABONBA_PTR_SET_VALUE(productExtras_, productExtras) };
    inline DescribeProductResponseBody& setProductExtras(DescribeProductResponseBodyProductExtras && productExtras) { DARABONBA_PTR_SET_RVALUE(productExtras_, productExtras) };


    // productSkus Field Functions 
    bool hasProductSkus() const { return this->productSkus_ != nullptr;};
    void deleteProductSkus() { this->productSkus_ = nullptr;};
    inline const DescribeProductResponseBodyProductSkus & productSkus() const { DARABONBA_PTR_GET_CONST(productSkus_, DescribeProductResponseBodyProductSkus) };
    inline DescribeProductResponseBodyProductSkus productSkus() { DARABONBA_PTR_GET(productSkus_, DescribeProductResponseBodyProductSkus) };
    inline DescribeProductResponseBody& setProductSkus(const DescribeProductResponseBodyProductSkus & productSkus) { DARABONBA_PTR_SET_VALUE(productSkus_, productSkus) };
    inline DescribeProductResponseBody& setProductSkus(DescribeProductResponseBodyProductSkus && productSkus) { DARABONBA_PTR_SET_RVALUE(productSkus_, productSkus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline float score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline DescribeProductResponseBody& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // shopInfo Field Functions 
    bool hasShopInfo() const { return this->shopInfo_ != nullptr;};
    void deleteShopInfo() { this->shopInfo_ = nullptr;};
    inline const DescribeProductResponseBodyShopInfo & shopInfo() const { DARABONBA_PTR_GET_CONST(shopInfo_, DescribeProductResponseBodyShopInfo) };
    inline DescribeProductResponseBodyShopInfo shopInfo() { DARABONBA_PTR_GET(shopInfo_, DescribeProductResponseBodyShopInfo) };
    inline DescribeProductResponseBody& setShopInfo(const DescribeProductResponseBodyShopInfo & shopInfo) { DARABONBA_PTR_SET_VALUE(shopInfo_, shopInfo) };
    inline DescribeProductResponseBody& setShopInfo(DescribeProductResponseBodyShopInfo && shopInfo) { DARABONBA_PTR_SET_RVALUE(shopInfo_, shopInfo) };


    // shortDescription Field Functions 
    bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
    void deleteShortDescription() { this->shortDescription_ = nullptr;};
    inline string shortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
    inline DescribeProductResponseBody& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeProductResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supplierPk Field Functions 
    bool hasSupplierPk() const { return this->supplierPk_ != nullptr;};
    void deleteSupplierPk() { this->supplierPk_ = nullptr;};
    inline int64_t supplierPk() const { DARABONBA_PTR_GET_DEFAULT(supplierPk_, 0L) };
    inline DescribeProductResponseBody& setSupplierPk(int64_t supplierPk) { DARABONBA_PTR_SET_VALUE(supplierPk_, supplierPk) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeProductResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useCount Field Functions 
    bool hasUseCount() const { return this->useCount_ != nullptr;};
    void deleteUseCount() { this->useCount_ = nullptr;};
    inline int64_t useCount() const { DARABONBA_PTR_GET_DEFAULT(useCount_, 0L) };
    inline DescribeProductResponseBody& setUseCount(int64_t useCount) { DARABONBA_PTR_SET_VALUE(useCount_, useCount) };


  protected:
    std::shared_ptr<string> auditFailMsg_ = nullptr;
    std::shared_ptr<string> auditStatus_ = nullptr;
    std::shared_ptr<int64_t> auditTime_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> frontCategoryId_ = nullptr;
    std::shared_ptr<int64_t> gmtCreated_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> picUrl_ = nullptr;
    std::shared_ptr<DescribeProductResponseBodyProductExtras> productExtras_ = nullptr;
    std::shared_ptr<DescribeProductResponseBodyProductSkus> productSkus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<float> score_ = nullptr;
    std::shared_ptr<DescribeProductResponseBodyShopInfo> shopInfo_ = nullptr;
    std::shared_ptr<string> shortDescription_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> supplierPk_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int64_t> useCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
