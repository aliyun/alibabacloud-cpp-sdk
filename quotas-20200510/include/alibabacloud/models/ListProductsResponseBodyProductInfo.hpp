// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODYPRODUCTINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductsResponseBodyProductInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBodyProductInfo& obj) { 
      DARABONBA_PTR_TO_JSON(CommonQuotaSupport, commonQuotaSupport_);
      DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_TO_JSON(FlowControlSupport, flowControlSupport_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(ProductNameEn, productNameEn_);
      DARABONBA_PTR_TO_JSON(SecondCategoryId, secondCategoryId_);
      DARABONBA_PTR_TO_JSON(SecondCategoryName, secondCategoryName_);
      DARABONBA_PTR_TO_JSON(SecondCategoryNameEn, secondCategoryNameEn_);
      DARABONBA_PTR_TO_JSON(WhiteListLabelQuotaSupport, whiteListLabelQuotaSupport_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBodyProductInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonQuotaSupport, commonQuotaSupport_);
      DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
      DARABONBA_PTR_FROM_JSON(FlowControlSupport, flowControlSupport_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(ProductNameEn, productNameEn_);
      DARABONBA_PTR_FROM_JSON(SecondCategoryId, secondCategoryId_);
      DARABONBA_PTR_FROM_JSON(SecondCategoryName, secondCategoryName_);
      DARABONBA_PTR_FROM_JSON(SecondCategoryNameEn, secondCategoryNameEn_);
      DARABONBA_PTR_FROM_JSON(WhiteListLabelQuotaSupport, whiteListLabelQuotaSupport_);
    };
    ListProductsResponseBodyProductInfo() = default ;
    ListProductsResponseBodyProductInfo(const ListProductsResponseBodyProductInfo &) = default ;
    ListProductsResponseBodyProductInfo(ListProductsResponseBodyProductInfo &&) = default ;
    ListProductsResponseBodyProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBodyProductInfo() = default ;
    ListProductsResponseBodyProductInfo& operator=(const ListProductsResponseBodyProductInfo &) = default ;
    ListProductsResponseBodyProductInfo& operator=(ListProductsResponseBodyProductInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonQuotaSupport_ != nullptr
        && this->dynamic_ != nullptr && this->flowControlSupport_ != nullptr && this->productCode_ != nullptr && this->productName_ != nullptr && this->productNameEn_ != nullptr
        && this->secondCategoryId_ != nullptr && this->secondCategoryName_ != nullptr && this->secondCategoryNameEn_ != nullptr && this->whiteListLabelQuotaSupport_ != nullptr; };
    // commonQuotaSupport Field Functions 
    bool hasCommonQuotaSupport() const { return this->commonQuotaSupport_ != nullptr;};
    void deleteCommonQuotaSupport() { this->commonQuotaSupport_ = nullptr;};
    inline string commonQuotaSupport() const { DARABONBA_PTR_GET_DEFAULT(commonQuotaSupport_, "") };
    inline ListProductsResponseBodyProductInfo& setCommonQuotaSupport(string commonQuotaSupport) { DARABONBA_PTR_SET_VALUE(commonQuotaSupport_, commonQuotaSupport) };


    // dynamic Field Functions 
    bool hasDynamic() const { return this->dynamic_ != nullptr;};
    void deleteDynamic() { this->dynamic_ = nullptr;};
    inline bool dynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, false) };
    inline ListProductsResponseBodyProductInfo& setDynamic(bool dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


    // flowControlSupport Field Functions 
    bool hasFlowControlSupport() const { return this->flowControlSupport_ != nullptr;};
    void deleteFlowControlSupport() { this->flowControlSupport_ = nullptr;};
    inline string flowControlSupport() const { DARABONBA_PTR_GET_DEFAULT(flowControlSupport_, "") };
    inline ListProductsResponseBodyProductInfo& setFlowControlSupport(string flowControlSupport) { DARABONBA_PTR_SET_VALUE(flowControlSupport_, flowControlSupport) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductsResponseBodyProductInfo& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListProductsResponseBodyProductInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productNameEn Field Functions 
    bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
    void deleteProductNameEn() { this->productNameEn_ = nullptr;};
    inline string productNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
    inline ListProductsResponseBodyProductInfo& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


    // secondCategoryId Field Functions 
    bool hasSecondCategoryId() const { return this->secondCategoryId_ != nullptr;};
    void deleteSecondCategoryId() { this->secondCategoryId_ = nullptr;};
    inline int64_t secondCategoryId() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryId_, 0L) };
    inline ListProductsResponseBodyProductInfo& setSecondCategoryId(int64_t secondCategoryId) { DARABONBA_PTR_SET_VALUE(secondCategoryId_, secondCategoryId) };


    // secondCategoryName Field Functions 
    bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
    void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
    inline string secondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
    inline ListProductsResponseBodyProductInfo& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


    // secondCategoryNameEn Field Functions 
    bool hasSecondCategoryNameEn() const { return this->secondCategoryNameEn_ != nullptr;};
    void deleteSecondCategoryNameEn() { this->secondCategoryNameEn_ = nullptr;};
    inline string secondCategoryNameEn() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryNameEn_, "") };
    inline ListProductsResponseBodyProductInfo& setSecondCategoryNameEn(string secondCategoryNameEn) { DARABONBA_PTR_SET_VALUE(secondCategoryNameEn_, secondCategoryNameEn) };


    // whiteListLabelQuotaSupport Field Functions 
    bool hasWhiteListLabelQuotaSupport() const { return this->whiteListLabelQuotaSupport_ != nullptr;};
    void deleteWhiteListLabelQuotaSupport() { this->whiteListLabelQuotaSupport_ = nullptr;};
    inline string whiteListLabelQuotaSupport() const { DARABONBA_PTR_GET_DEFAULT(whiteListLabelQuotaSupport_, "") };
    inline ListProductsResponseBodyProductInfo& setWhiteListLabelQuotaSupport(string whiteListLabelQuotaSupport) { DARABONBA_PTR_SET_VALUE(whiteListLabelQuotaSupport_, whiteListLabelQuotaSupport) };


  protected:
    // Indicates whether the Alibaba Cloud service supports general quotas. Valid values:
    // 
    // *   support: The Alibaba Cloud service supports general quotas.
    // *   unsupport: The Alibaba Cloud service does not support general quotas.
    std::shared_ptr<string> commonQuotaSupport_ = nullptr;
    // >  This parameter is discontinued and is not recommended.
    // 
    // Indicates whether the Alibaba Cloud service supports dynamic quota adjustment. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> dynamic_ = nullptr;
    // Indicates whether the Alibaba Cloud service supports API rate limits. Valid values:
    // 
    // *   support: The Alibaba Cloud service supports API rate limits.
    // *   unsupport: The Alibaba Cloud service does not support API rate limits.
    std::shared_ptr<string> flowControlSupport_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    std::shared_ptr<string> productCode_ = nullptr;
    // The name of the Alibaba Cloud service.
    std::shared_ptr<string> productName_ = nullptr;
    // The English name of the Alibaba Cloud service.
    std::shared_ptr<string> productNameEn_ = nullptr;
    // The ID of the service category.
    std::shared_ptr<int64_t> secondCategoryId_ = nullptr;
    // The name of the service category.
    std::shared_ptr<string> secondCategoryName_ = nullptr;
    // The English name of the service category.
    std::shared_ptr<string> secondCategoryNameEn_ = nullptr;
    // Indicates whether the Alibaba Cloud service supports whitelist quotas. Valid values:
    // 
    // *   support: The Alibaba Cloud service supports whitelist quotas.
    // *   unsupport: The Alibaba Cloud service does not support whitelist quotas.
    std::shared_ptr<string> whiteListLabelQuotaSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
