// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREVERSEDDEDUCTIONHISTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYREVERSEDDEDUCTIONHISTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class QueryReversedDeductionHistoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReversedDeductionHistoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReversedDeductionHistoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
    };
    QueryReversedDeductionHistoryRequest() = default ;
    QueryReversedDeductionHistoryRequest(const QueryReversedDeductionHistoryRequest &) = default ;
    QueryReversedDeductionHistoryRequest(QueryReversedDeductionHistoryRequest &&) = default ;
    QueryReversedDeductionHistoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReversedDeductionHistoryRequest() = default ;
    QueryReversedDeductionHistoryRequest& operator=(const QueryReversedDeductionHistoryRequest &) = default ;
    QueryReversedDeductionHistoryRequest& operator=(QueryReversedDeductionHistoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->language_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr && this->uid_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryReversedDeductionHistoryRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline QueryReversedDeductionHistoryRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline QueryReversedDeductionHistoryRequest& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryReversedDeductionHistoryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryReversedDeductionHistoryRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline QueryReversedDeductionHistoryRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


  protected:
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    shared_ptr<string> language_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageNo_ {};
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> startDate_ {};
    // This parameter is required.
    shared_ptr<int64_t> uid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
