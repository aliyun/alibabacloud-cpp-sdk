// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyInvokeSatisticRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyInvokeSatisticRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductProgramList, productProgramList_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(SceneIdList, sceneIdList_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyInvokeSatisticRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductProgramList, productProgramList_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(SceneIdList, sceneIdList_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
    };
    QueryVerifyInvokeSatisticRequest() = default ;
    QueryVerifyInvokeSatisticRequest(const QueryVerifyInvokeSatisticRequest &) = default ;
    QueryVerifyInvokeSatisticRequest(QueryVerifyInvokeSatisticRequest &&) = default ;
    QueryVerifyInvokeSatisticRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyInvokeSatisticRequest() = default ;
    QueryVerifyInvokeSatisticRequest& operator=(const QueryVerifyInvokeSatisticRequest &) = default ;
    QueryVerifyInvokeSatisticRequest& operator=(QueryVerifyInvokeSatisticRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->endDate_ == nullptr && this->pageSize_ == nullptr && this->productProgramList_ == nullptr && this->productType_ == nullptr && this->sceneIdList_ == nullptr
        && this->startDate_ == nullptr && this->statisticsType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryVerifyInvokeSatisticRequest& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline QueryVerifyInvokeSatisticRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryVerifyInvokeSatisticRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productProgramList Field Functions 
    bool hasProductProgramList() const { return this->productProgramList_ != nullptr;};
    void deleteProductProgramList() { this->productProgramList_ = nullptr;};
    inline string getProductProgramList() const { DARABONBA_PTR_GET_DEFAULT(productProgramList_, "") };
    inline QueryVerifyInvokeSatisticRequest& setProductProgramList(string productProgramList) { DARABONBA_PTR_SET_VALUE(productProgramList_, productProgramList) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryVerifyInvokeSatisticRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // sceneIdList Field Functions 
    bool hasSceneIdList() const { return this->sceneIdList_ != nullptr;};
    void deleteSceneIdList() { this->sceneIdList_ = nullptr;};
    inline string getSceneIdList() const { DARABONBA_PTR_GET_DEFAULT(sceneIdList_, "") };
    inline QueryVerifyInvokeSatisticRequest& setSceneIdList(string sceneIdList) { DARABONBA_PTR_SET_VALUE(sceneIdList_, sceneIdList) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline QueryVerifyInvokeSatisticRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string getStatisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline QueryVerifyInvokeSatisticRequest& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


  protected:
    // Current page number.
    shared_ptr<int64_t> currentPage_ {};
    // End date of the query.
    shared_ptr<int64_t> endDate_ {};
    // Number of items per page.
    shared_ptr<int64_t> pageSize_ {};
    // List of product codes to query. Please refer to the productCode under the corresponding ProductType.
    shared_ptr<string> productProgramList_ {};
    // Product type:
    // - **FINANCE_VERIFY**: Financial-grade real-person verification
    // - **SMART_VERIFY**: Enhanced real-person verification (discontinued)
    // - **FACE_VERIFY**: Real-person verification (discontinued)
    shared_ptr<string> productType_ {};
    // List of application scenarios.
    shared_ptr<string> sceneIdList_ {};
    // Start date of the query.
    shared_ptr<int64_t> startDate_ {};
    // Statistics dimension:
    // - **day**: daily
    // - **month**: monthly
    shared_ptr<string> statisticsType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
