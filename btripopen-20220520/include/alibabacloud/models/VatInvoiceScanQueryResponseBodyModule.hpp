// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_VATINVOICESCANQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VatInvoiceScanQueryResponseBodyModuleItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class VatInvoiceScanQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VatInvoiceScanQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(page_no, pageNo_);
      DARABONBA_PTR_TO_JSON(page_size, pageSize_);
      DARABONBA_PTR_TO_JSON(total_page, totalPage_);
      DARABONBA_PTR_TO_JSON(total_size, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, VatInvoiceScanQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(page_no, pageNo_);
      DARABONBA_PTR_FROM_JSON(page_size, pageSize_);
      DARABONBA_PTR_FROM_JSON(total_page, totalPage_);
      DARABONBA_PTR_FROM_JSON(total_size, totalSize_);
    };
    VatInvoiceScanQueryResponseBodyModule() = default ;
    VatInvoiceScanQueryResponseBodyModule(const VatInvoiceScanQueryResponseBodyModule &) = default ;
    VatInvoiceScanQueryResponseBodyModule(VatInvoiceScanQueryResponseBodyModule &&) = default ;
    VatInvoiceScanQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VatInvoiceScanQueryResponseBodyModule() = default ;
    VatInvoiceScanQueryResponseBodyModule& operator=(const VatInvoiceScanQueryResponseBodyModule &) = default ;
    VatInvoiceScanQueryResponseBodyModule& operator=(VatInvoiceScanQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->items_ != nullptr
        && this->pageNo_ != nullptr && this->pageSize_ != nullptr && this->totalPage_ != nullptr && this->totalSize_ != nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::VatInvoiceScanQueryResponseBodyModuleItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::VatInvoiceScanQueryResponseBodyModuleItems>) };
    inline vector<Models::VatInvoiceScanQueryResponseBodyModuleItems> items() { DARABONBA_PTR_GET(items_, vector<Models::VatInvoiceScanQueryResponseBodyModuleItems>) };
    inline VatInvoiceScanQueryResponseBodyModule& setItems(const vector<Models::VatInvoiceScanQueryResponseBodyModuleItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline VatInvoiceScanQueryResponseBodyModule& setItems(vector<Models::VatInvoiceScanQueryResponseBodyModuleItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline VatInvoiceScanQueryResponseBodyModule& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline VatInvoiceScanQueryResponseBodyModule& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t totalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline VatInvoiceScanQueryResponseBodyModule& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline VatInvoiceScanQueryResponseBodyModule& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    std::shared_ptr<vector<Models::VatInvoiceScanQueryResponseBodyModuleItems>> items_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> totalPage_ = nullptr;
    std::shared_ptr<int32_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
