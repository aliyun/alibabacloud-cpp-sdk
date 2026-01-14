// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFOOTPRINTLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFOOTPRINTLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetFootprintListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFootprintListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(productType, productType_);
    };
    friend void from_json(const Darabonba::Json& j, GetFootprintListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(productType, productType_);
    };
    GetFootprintListRequest() = default ;
    GetFootprintListRequest(const GetFootprintListRequest &) = default ;
    GetFootprintListRequest(GetFootprintListRequest &&) = default ;
    GetFootprintListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFootprintListRequest() = default ;
    GetFootprintListRequest& operator=(const GetFootprintListRequest &) = default ;
    GetFootprintListRequest& operator=(GetFootprintListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->productType_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetFootprintListRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline GetFootprintListRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetFootprintListRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline int64_t getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, 0L) };
    inline GetFootprintListRequest& setProductType(int64_t productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


  protected:
    // The enterprise code.
    // 
    // This parameter is required.
    shared_ptr<string> code_ {};
    // The pagination parameter. The number of the page that starts from 1.
    // 
    // This parameter is required.
    shared_ptr<int64_t> currentPage_ {};
    // The number of entries returned on each page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> pageSize_ {};
    // Product type: 1 indicates that the carbon footprint of the product is requested, and 5 indicates that the carbon footprint of the supply chain is requested.
    // 
    // This parameter is required.
    shared_ptr<int64_t> productType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
