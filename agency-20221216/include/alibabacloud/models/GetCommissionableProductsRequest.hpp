// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCommissionableProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommissionableProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCodeList, commodityCodeList_);
      DARABONBA_PTR_TO_JSON(FiscalYear, fiscalYear_);
      DARABONBA_PTR_TO_JSON(ListShowStatusList, listShowStatusList_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PipCodeList, pipCodeList_);
      DARABONBA_PTR_TO_JSON(RealEndMonth, realEndMonth_);
      DARABONBA_PTR_TO_JSON(RealStartMonth, realStartMonth_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommissionableProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCodeList, commodityCodeList_);
      DARABONBA_PTR_FROM_JSON(FiscalYear, fiscalYear_);
      DARABONBA_PTR_FROM_JSON(ListShowStatusList, listShowStatusList_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PipCodeList, pipCodeList_);
      DARABONBA_PTR_FROM_JSON(RealEndMonth, realEndMonth_);
      DARABONBA_PTR_FROM_JSON(RealStartMonth, realStartMonth_);
    };
    GetCommissionableProductsRequest() = default ;
    GetCommissionableProductsRequest(const GetCommissionableProductsRequest &) = default ;
    GetCommissionableProductsRequest(GetCommissionableProductsRequest &&) = default ;
    GetCommissionableProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommissionableProductsRequest() = default ;
    GetCommissionableProductsRequest& operator=(const GetCommissionableProductsRequest &) = default ;
    GetCommissionableProductsRequest& operator=(GetCommissionableProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCodeList_ == nullptr
        && this->fiscalYear_ == nullptr && this->listShowStatusList_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->pipCodeList_ == nullptr
        && this->realEndMonth_ == nullptr && this->realStartMonth_ == nullptr; };
    // commodityCodeList Field Functions 
    bool hasCommodityCodeList() const { return this->commodityCodeList_ != nullptr;};
    void deleteCommodityCodeList() { this->commodityCodeList_ = nullptr;};
    inline string getCommodityCodeList() const { DARABONBA_PTR_GET_DEFAULT(commodityCodeList_, "") };
    inline GetCommissionableProductsRequest& setCommodityCodeList(string commodityCodeList) { DARABONBA_PTR_SET_VALUE(commodityCodeList_, commodityCodeList) };


    // fiscalYear Field Functions 
    bool hasFiscalYear() const { return this->fiscalYear_ != nullptr;};
    void deleteFiscalYear() { this->fiscalYear_ = nullptr;};
    inline string getFiscalYear() const { DARABONBA_PTR_GET_DEFAULT(fiscalYear_, "") };
    inline GetCommissionableProductsRequest& setFiscalYear(string fiscalYear) { DARABONBA_PTR_SET_VALUE(fiscalYear_, fiscalYear) };


    // listShowStatusList Field Functions 
    bool hasListShowStatusList() const { return this->listShowStatusList_ != nullptr;};
    void deleteListShowStatusList() { this->listShowStatusList_ = nullptr;};
    inline const vector<string> & getListShowStatusList() const { DARABONBA_PTR_GET_CONST(listShowStatusList_, vector<string>) };
    inline vector<string> getListShowStatusList() { DARABONBA_PTR_GET(listShowStatusList_, vector<string>) };
    inline GetCommissionableProductsRequest& setListShowStatusList(const vector<string> & listShowStatusList) { DARABONBA_PTR_SET_VALUE(listShowStatusList_, listShowStatusList) };
    inline GetCommissionableProductsRequest& setListShowStatusList(vector<string> && listShowStatusList) { DARABONBA_PTR_SET_RVALUE(listShowStatusList_, listShowStatusList) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetCommissionableProductsRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCommissionableProductsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pipCodeList Field Functions 
    bool hasPipCodeList() const { return this->pipCodeList_ != nullptr;};
    void deletePipCodeList() { this->pipCodeList_ = nullptr;};
    inline string getPipCodeList() const { DARABONBA_PTR_GET_DEFAULT(pipCodeList_, "") };
    inline GetCommissionableProductsRequest& setPipCodeList(string pipCodeList) { DARABONBA_PTR_SET_VALUE(pipCodeList_, pipCodeList) };


    // realEndMonth Field Functions 
    bool hasRealEndMonth() const { return this->realEndMonth_ != nullptr;};
    void deleteRealEndMonth() { this->realEndMonth_ = nullptr;};
    inline string getRealEndMonth() const { DARABONBA_PTR_GET_DEFAULT(realEndMonth_, "") };
    inline GetCommissionableProductsRequest& setRealEndMonth(string realEndMonth) { DARABONBA_PTR_SET_VALUE(realEndMonth_, realEndMonth) };


    // realStartMonth Field Functions 
    bool hasRealStartMonth() const { return this->realStartMonth_ != nullptr;};
    void deleteRealStartMonth() { this->realStartMonth_ = nullptr;};
    inline string getRealStartMonth() const { DARABONBA_PTR_GET_DEFAULT(realStartMonth_, "") };
    inline GetCommissionableProductsRequest& setRealStartMonth(string realStartMonth) { DARABONBA_PTR_SET_VALUE(realStartMonth_, realStartMonth) };


  protected:
    shared_ptr<string> commodityCodeList_ {};
    shared_ptr<string> fiscalYear_ {};
    shared_ptr<vector<string>> listShowStatusList_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> pipCodeList_ {};
    shared_ptr<string> realEndMonth_ {};
    shared_ptr<string> realStartMonth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
