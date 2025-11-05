// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCommissionableProductsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommissionableProductsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCodeList, commodityCodeList_);
      DARABONBA_PTR_TO_JSON(FiscalYear, fiscalYear_);
      DARABONBA_PTR_TO_JSON(ListShowStatusList, listShowStatusListShrink_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipCodeList, pipCodeList_);
      DARABONBA_PTR_TO_JSON(RealEndMonth, realEndMonth_);
      DARABONBA_PTR_TO_JSON(RealStartMonth, realStartMonth_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommissionableProductsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCodeList, commodityCodeList_);
      DARABONBA_PTR_FROM_JSON(FiscalYear, fiscalYear_);
      DARABONBA_PTR_FROM_JSON(ListShowStatusList, listShowStatusListShrink_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipCodeList, pipCodeList_);
      DARABONBA_PTR_FROM_JSON(RealEndMonth, realEndMonth_);
      DARABONBA_PTR_FROM_JSON(RealStartMonth, realStartMonth_);
    };
    GetCommissionableProductsShrinkRequest() = default ;
    GetCommissionableProductsShrinkRequest(const GetCommissionableProductsShrinkRequest &) = default ;
    GetCommissionableProductsShrinkRequest(GetCommissionableProductsShrinkRequest &&) = default ;
    GetCommissionableProductsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommissionableProductsShrinkRequest() = default ;
    GetCommissionableProductsShrinkRequest& operator=(const GetCommissionableProductsShrinkRequest &) = default ;
    GetCommissionableProductsShrinkRequest& operator=(GetCommissionableProductsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCodeList_ == nullptr
        && return this->fiscalYear_ == nullptr && return this->listShowStatusListShrink_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->pipCodeList_ == nullptr
        && return this->realEndMonth_ == nullptr && return this->realStartMonth_ == nullptr; };
    // commodityCodeList Field Functions 
    bool hasCommodityCodeList() const { return this->commodityCodeList_ != nullptr;};
    void deleteCommodityCodeList() { this->commodityCodeList_ = nullptr;};
    inline string commodityCodeList() const { DARABONBA_PTR_GET_DEFAULT(commodityCodeList_, "") };
    inline GetCommissionableProductsShrinkRequest& setCommodityCodeList(string commodityCodeList) { DARABONBA_PTR_SET_VALUE(commodityCodeList_, commodityCodeList) };


    // fiscalYear Field Functions 
    bool hasFiscalYear() const { return this->fiscalYear_ != nullptr;};
    void deleteFiscalYear() { this->fiscalYear_ = nullptr;};
    inline string fiscalYear() const { DARABONBA_PTR_GET_DEFAULT(fiscalYear_, "") };
    inline GetCommissionableProductsShrinkRequest& setFiscalYear(string fiscalYear) { DARABONBA_PTR_SET_VALUE(fiscalYear_, fiscalYear) };


    // listShowStatusListShrink Field Functions 
    bool hasListShowStatusListShrink() const { return this->listShowStatusListShrink_ != nullptr;};
    void deleteListShowStatusListShrink() { this->listShowStatusListShrink_ = nullptr;};
    inline string listShowStatusListShrink() const { DARABONBA_PTR_GET_DEFAULT(listShowStatusListShrink_, "") };
    inline GetCommissionableProductsShrinkRequest& setListShowStatusListShrink(string listShowStatusListShrink) { DARABONBA_PTR_SET_VALUE(listShowStatusListShrink_, listShowStatusListShrink) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetCommissionableProductsShrinkRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCommissionableProductsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipCodeList Field Functions 
    bool hasPipCodeList() const { return this->pipCodeList_ != nullptr;};
    void deletePipCodeList() { this->pipCodeList_ = nullptr;};
    inline string pipCodeList() const { DARABONBA_PTR_GET_DEFAULT(pipCodeList_, "") };
    inline GetCommissionableProductsShrinkRequest& setPipCodeList(string pipCodeList) { DARABONBA_PTR_SET_VALUE(pipCodeList_, pipCodeList) };


    // realEndMonth Field Functions 
    bool hasRealEndMonth() const { return this->realEndMonth_ != nullptr;};
    void deleteRealEndMonth() { this->realEndMonth_ = nullptr;};
    inline string realEndMonth() const { DARABONBA_PTR_GET_DEFAULT(realEndMonth_, "") };
    inline GetCommissionableProductsShrinkRequest& setRealEndMonth(string realEndMonth) { DARABONBA_PTR_SET_VALUE(realEndMonth_, realEndMonth) };


    // realStartMonth Field Functions 
    bool hasRealStartMonth() const { return this->realStartMonth_ != nullptr;};
    void deleteRealStartMonth() { this->realStartMonth_ = nullptr;};
    inline string realStartMonth() const { DARABONBA_PTR_GET_DEFAULT(realStartMonth_, "") };
    inline GetCommissionableProductsShrinkRequest& setRealStartMonth(string realStartMonth) { DARABONBA_PTR_SET_VALUE(realStartMonth_, realStartMonth) };


  protected:
    std::shared_ptr<string> commodityCodeList_ = nullptr;
    std::shared_ptr<string> fiscalYear_ = nullptr;
    std::shared_ptr<string> listShowStatusListShrink_ = nullptr;
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> pipCodeList_ = nullptr;
    std::shared_ptr<string> realEndMonth_ = nullptr;
    std::shared_ptr<string> realStartMonth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
