// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVENDORAPILISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVENDORAPILISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeVendorApiListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVendorApiListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(VendorCode, vendorCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVendorApiListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(VendorCode, vendorCode_);
    };
    DescribeVendorApiListRequest() = default ;
    DescribeVendorApiListRequest(const DescribeVendorApiListRequest &) = default ;
    DescribeVendorApiListRequest(DescribeVendorApiListRequest &&) = default ;
    DescribeVendorApiListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVendorApiListRequest() = default ;
    DescribeVendorApiListRequest& operator=(const DescribeVendorApiListRequest &) = default ;
    DescribeVendorApiListRequest& operator=(DescribeVendorApiListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiName_ == nullptr
        && return this->keyWord_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->productCode_ == nullptr && return this->vendorCode_ == nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeVendorApiListRequest& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline DescribeVendorApiListRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVendorApiListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeVendorApiListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVendorApiListRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // vendorCode Field Functions 
    bool hasVendorCode() const { return this->vendorCode_ != nullptr;};
    void deleteVendorCode() { this->vendorCode_ = nullptr;};
    inline string vendorCode() const { DARABONBA_PTR_GET_DEFAULT(vendorCode_, "") };
    inline DescribeVendorApiListRequest& setVendorCode(string vendorCode) { DARABONBA_PTR_SET_VALUE(vendorCode_, vendorCode) };


  protected:
    // The name of the Alibaba Cloud product interface, supporting fuzzy search.
    std::shared_ptr<string> apiName_ = nullptr;
    // Keyword.
    std::shared_ptr<string> keyWord_ = nullptr;
    // The current page number for pagination. The default value is 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of items per page when displaying paginated results. The default is 10.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // Vendor\\"s product identifier:
    // - **waf**: Web Application Firewall.
    // - **cfw**: Cloud Firewall.
    std::shared_ptr<string> productCode_ = nullptr;
    // Vendor code:
    // - **Tencent**: Tencent.
    // - **HUAWEICLOUD**: Huawei.
    // - **Azure**: Microsoft Azure.
    // - **AWS**: Amazon Web Services.
    // - **Chaitin**: Chaitin.
    std::shared_ptr<string> vendorCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
