// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGPAGELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPERATIONLOGPAGELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeOperationLogPageListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOperationLogPageListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(operationSummary, operationSummary_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(regId, regId_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(userNameSearch, userNameSearch_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOperationLogPageListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(operationSummary, operationSummary_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(regId, regId_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(userNameSearch, userNameSearch_);
    };
    DescribeOperationLogPageListRequest() = default ;
    DescribeOperationLogPageListRequest(const DescribeOperationLogPageListRequest &) = default ;
    DescribeOperationLogPageListRequest(DescribeOperationLogPageListRequest &&) = default ;
    DescribeOperationLogPageListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOperationLogPageListRequest() = default ;
    DescribeOperationLogPageListRequest& operator=(const DescribeOperationLogPageListRequest &) = default ;
    DescribeOperationLogPageListRequest& operator=(DescribeOperationLogPageListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->lang_ == nullptr
        && this->currentPage_ == nullptr && this->endDate_ == nullptr && this->operationSummary_ == nullptr && this->pageSize_ == nullptr && this->regId_ == nullptr
        && this->startDate_ == nullptr && this->userNameSearch_ == nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeOperationLogPageListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeOperationLogPageListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline DescribeOperationLogPageListRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // operationSummary Field Functions 
    bool hasOperationSummary() const { return this->operationSummary_ != nullptr;};
    void deleteOperationSummary() { this->operationSummary_ = nullptr;};
    inline string getOperationSummary() const { DARABONBA_PTR_GET_DEFAULT(operationSummary_, "") };
    inline DescribeOperationLogPageListRequest& setOperationSummary(string operationSummary) { DARABONBA_PTR_SET_VALUE(operationSummary_, operationSummary) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOperationLogPageListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regId Field Functions 
    bool hasRegId() const { return this->regId_ != nullptr;};
    void deleteRegId() { this->regId_ = nullptr;};
    inline string getRegId() const { DARABONBA_PTR_GET_DEFAULT(regId_, "") };
    inline DescribeOperationLogPageListRequest& setRegId(string regId) { DARABONBA_PTR_SET_VALUE(regId_, regId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline DescribeOperationLogPageListRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // userNameSearch Field Functions 
    bool hasUserNameSearch() const { return this->userNameSearch_ != nullptr;};
    void deleteUserNameSearch() { this->userNameSearch_ = nullptr;};
    inline string getUserNameSearch() const { DARABONBA_PTR_GET_DEFAULT(userNameSearch_, "") };
    inline DescribeOperationLogPageListRequest& setUserNameSearch(string userNameSearch) { DARABONBA_PTR_SET_VALUE(userNameSearch_, userNameSearch) };


  protected:
    // Set the language type for request and response messages, default value is **zh**. Values:
    // - **zh**: Chinese
    // - **en**: English
    shared_ptr<string> lang_ {};
    // Current page number.
    shared_ptr<int32_t> currentPage_ {};
    // End time.
    shared_ptr<int64_t> endDate_ {};
    // Operation Summary.
    shared_ptr<string> operationSummary_ {};
    // Page size, default value is 10
    shared_ptr<int32_t> pageSize_ {};
    // Region code.
    shared_ptr<string> regId_ {};
    // Start time.
    shared_ptr<int64_t> startDate_ {};
    // User Name Search.
    shared_ptr<string> userNameSearch_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
