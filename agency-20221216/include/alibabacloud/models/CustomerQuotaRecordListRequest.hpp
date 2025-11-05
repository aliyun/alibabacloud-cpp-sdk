// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUSTOMERQUOTARECORDLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class CustomerQuotaRecordListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CustomerQuotaRecordListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(EndUserPk, endUserPk_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, CustomerQuotaRecordListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(EndUserPk, endUserPk_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    CustomerQuotaRecordListRequest() = default ;
    CustomerQuotaRecordListRequest(const CustomerQuotaRecordListRequest &) = default ;
    CustomerQuotaRecordListRequest(CustomerQuotaRecordListRequest &&) = default ;
    CustomerQuotaRecordListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CustomerQuotaRecordListRequest() = default ;
    CustomerQuotaRecordListRequest& operator=(const CustomerQuotaRecordListRequest &) = default ;
    CustomerQuotaRecordListRequest& operator=(CustomerQuotaRecordListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->endUserPk_ == nullptr && return this->language_ == nullptr && return this->operationType_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr
        && return this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline CustomerQuotaRecordListRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // endUserPk Field Functions 
    bool hasEndUserPk() const { return this->endUserPk_ != nullptr;};
    void deleteEndUserPk() { this->endUserPk_ = nullptr;};
    inline int64_t endUserPk() const { DARABONBA_PTR_GET_DEFAULT(endUserPk_, 0L) };
    inline CustomerQuotaRecordListRequest& setEndUserPk(int64_t endUserPk) { DARABONBA_PTR_SET_VALUE(endUserPk_, endUserPk) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline CustomerQuotaRecordListRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string operationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CustomerQuotaRecordListRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline CustomerQuotaRecordListRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CustomerQuotaRecordListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline CustomerQuotaRecordListRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // End Date Format: yyyy-MM-dd
    // 
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // Customer UID
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endUserPk_ = nullptr;
    // Multilingual Parameters, the default language is English.</br>
    // en: English</br>
    // zh: Chinese</br>
    // ja: Japanese </br>
    std::shared_ptr<string> language_ = nullptr;
    // Operation Type Enum</br>
    // all All types</br>
    // quota_create Create quota</br>
    // quota_amount_adjust Adjust the amount of quota</br>
    // 
    // This parameter is required.
    std::shared_ptr<string> operationType_ = nullptr;
    // Pagination, current page number, starting from 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // Pagination, record number on each page. Maximum 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Start Date Format: yyyy-MM-dd
    // 
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
