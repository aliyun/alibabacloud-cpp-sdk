// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListProductsResponseBodyProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalDataIngestionCount, abnormalDataIngestionCount_);
      DARABONBA_PTR_TO_JSON(ActiveTime, activeTime_);
      DARABONBA_PTR_TO_JSON(AllowAddDataIngestion, allowAddDataIngestion_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_TO_JSON(EnabledDataIngestionCount, enabledDataIngestionCount_);
      DARABONBA_PTR_TO_JSON(ProductAlias, productAlias_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(TotalDataIngestionCount, totalDataIngestionCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalDataIngestionCount, abnormalDataIngestionCount_);
      DARABONBA_PTR_FROM_JSON(ActiveTime, activeTime_);
      DARABONBA_PTR_FROM_JSON(AllowAddDataIngestion, allowAddDataIngestion_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataIngestionStatus, dataIngestionStatus_);
      DARABONBA_PTR_FROM_JSON(EnabledDataIngestionCount, enabledDataIngestionCount_);
      DARABONBA_PTR_FROM_JSON(ProductAlias, productAlias_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(TotalDataIngestionCount, totalDataIngestionCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    ListProductsResponseBodyProducts() = default ;
    ListProductsResponseBodyProducts(const ListProductsResponseBodyProducts &) = default ;
    ListProductsResponseBodyProducts(ListProductsResponseBodyProducts &&) = default ;
    ListProductsResponseBodyProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyProducts() = default ;
    ListProductsResponseBodyProducts& operator=(const ListProductsResponseBodyProducts &) = default ;
    ListProductsResponseBodyProducts& operator=(ListProductsResponseBodyProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalDataIngestionCount_ == nullptr
        && return this->activeTime_ == nullptr && return this->allowAddDataIngestion_ == nullptr && return this->createTime_ == nullptr && return this->dataIngestionStatus_ == nullptr && return this->enabledDataIngestionCount_ == nullptr
        && return this->productAlias_ == nullptr && return this->productId_ == nullptr && return this->productName_ == nullptr && return this->productType_ == nullptr && return this->totalDataIngestionCount_ == nullptr
        && return this->updateTime_ == nullptr && return this->vendorId_ == nullptr && return this->vendorName_ == nullptr; };
    // abnormalDataIngestionCount Field Functions 
    bool hasAbnormalDataIngestionCount() const { return this->abnormalDataIngestionCount_ != nullptr;};
    void deleteAbnormalDataIngestionCount() { this->abnormalDataIngestionCount_ = nullptr;};
    inline int32_t abnormalDataIngestionCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalDataIngestionCount_, 0) };
    inline ListProductsResponseBodyProducts& setAbnormalDataIngestionCount(int32_t abnormalDataIngestionCount) { DARABONBA_PTR_SET_VALUE(abnormalDataIngestionCount_, abnormalDataIngestionCount) };


    // activeTime Field Functions 
    bool hasActiveTime() const { return this->activeTime_ != nullptr;};
    void deleteActiveTime() { this->activeTime_ = nullptr;};
    inline int64_t activeTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, 0L) };
    inline ListProductsResponseBodyProducts& setActiveTime(int64_t activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


    // allowAddDataIngestion Field Functions 
    bool hasAllowAddDataIngestion() const { return this->allowAddDataIngestion_ != nullptr;};
    void deleteAllowAddDataIngestion() { this->allowAddDataIngestion_ = nullptr;};
    inline bool allowAddDataIngestion() const { DARABONBA_PTR_GET_DEFAULT(allowAddDataIngestion_, false) };
    inline ListProductsResponseBodyProducts& setAllowAddDataIngestion(bool allowAddDataIngestion) { DARABONBA_PTR_SET_VALUE(allowAddDataIngestion_, allowAddDataIngestion) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListProductsResponseBodyProducts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataIngestionStatus Field Functions 
    bool hasDataIngestionStatus() const { return this->dataIngestionStatus_ != nullptr;};
    void deleteDataIngestionStatus() { this->dataIngestionStatus_ = nullptr;};
    inline bool dataIngestionStatus() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionStatus_, false) };
    inline ListProductsResponseBodyProducts& setDataIngestionStatus(bool dataIngestionStatus) { DARABONBA_PTR_SET_VALUE(dataIngestionStatus_, dataIngestionStatus) };


    // enabledDataIngestionCount Field Functions 
    bool hasEnabledDataIngestionCount() const { return this->enabledDataIngestionCount_ != nullptr;};
    void deleteEnabledDataIngestionCount() { this->enabledDataIngestionCount_ = nullptr;};
    inline int32_t enabledDataIngestionCount() const { DARABONBA_PTR_GET_DEFAULT(enabledDataIngestionCount_, 0) };
    inline ListProductsResponseBodyProducts& setEnabledDataIngestionCount(int32_t enabledDataIngestionCount) { DARABONBA_PTR_SET_VALUE(enabledDataIngestionCount_, enabledDataIngestionCount) };


    // productAlias Field Functions 
    bool hasProductAlias() const { return this->productAlias_ != nullptr;};
    void deleteProductAlias() { this->productAlias_ = nullptr;};
    inline string productAlias() const { DARABONBA_PTR_GET_DEFAULT(productAlias_, "") };
    inline ListProductsResponseBodyProducts& setProductAlias(string productAlias) { DARABONBA_PTR_SET_VALUE(productAlias_, productAlias) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListProductsResponseBodyProducts& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListProductsResponseBodyProducts& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListProductsResponseBodyProducts& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // totalDataIngestionCount Field Functions 
    bool hasTotalDataIngestionCount() const { return this->totalDataIngestionCount_ != nullptr;};
    void deleteTotalDataIngestionCount() { this->totalDataIngestionCount_ = nullptr;};
    inline int32_t totalDataIngestionCount() const { DARABONBA_PTR_GET_DEFAULT(totalDataIngestionCount_, 0) };
    inline ListProductsResponseBodyProducts& setTotalDataIngestionCount(int32_t totalDataIngestionCount) { DARABONBA_PTR_SET_VALUE(totalDataIngestionCount_, totalDataIngestionCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListProductsResponseBodyProducts& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vendorId Field Functions 
    bool hasVendorId() const { return this->vendorId_ != nullptr;};
    void deleteVendorId() { this->vendorId_ = nullptr;};
    inline string vendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
    inline ListProductsResponseBodyProducts& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline ListProductsResponseBodyProducts& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    std::shared_ptr<int32_t> abnormalDataIngestionCount_ = nullptr;
    std::shared_ptr<int64_t> activeTime_ = nullptr;
    std::shared_ptr<bool> allowAddDataIngestion_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> dataIngestionStatus_ = nullptr;
    std::shared_ptr<int32_t> enabledDataIngestionCount_ = nullptr;
    std::shared_ptr<string> productAlias_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<int32_t> totalDataIngestionCount_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    std::shared_ptr<string> vendorId_ = nullptr;
    std::shared_ptr<string> vendorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
