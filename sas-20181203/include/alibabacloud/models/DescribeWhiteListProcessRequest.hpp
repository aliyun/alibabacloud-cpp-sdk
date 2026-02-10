// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProcessName, processName_);
      DARABONBA_PTR_TO_JSON(ProcessType, processType_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProcessName, processName_);
      DARABONBA_PTR_FROM_JSON(ProcessType, processType_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    DescribeWhiteListProcessRequest() = default ;
    DescribeWhiteListProcessRequest(const DescribeWhiteListProcessRequest &) = default ;
    DescribeWhiteListProcessRequest(DescribeWhiteListProcessRequest &&) = default ;
    DescribeWhiteListProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListProcessRequest() = default ;
    DescribeWhiteListProcessRequest& operator=(const DescribeWhiteListProcessRequest &) = default ;
    DescribeWhiteListProcessRequest& operator=(DescribeWhiteListProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->desc_ == nullptr && this->lang_ == nullptr && this->orderBy_ == nullptr && this->pageSize_ == nullptr && this->processName_ == nullptr
        && this->processType_ == nullptr && this->sourceIp_ == nullptr && this->strategyId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListProcessRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline int32_t getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, 0) };
    inline DescribeWhiteListProcessRequest& setDesc(int32_t desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhiteListProcessRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline int32_t getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, 0) };
    inline DescribeWhiteListProcessRequest& setOrderBy(int32_t orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListProcessRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // processName Field Functions 
    bool hasProcessName() const { return this->processName_ != nullptr;};
    void deleteProcessName() { this->processName_ = nullptr;};
    inline string getProcessName() const { DARABONBA_PTR_GET_DEFAULT(processName_, "") };
    inline DescribeWhiteListProcessRequest& setProcessName(string processName) { DARABONBA_PTR_SET_VALUE(processName_, processName) };


    // processType Field Functions 
    bool hasProcessType() const { return this->processType_ != nullptr;};
    void deleteProcessType() { this->processType_ = nullptr;};
    inline int32_t getProcessType() const { DARABONBA_PTR_GET_DEFAULT(processType_, 0) };
    inline DescribeWhiteListProcessRequest& setProcessType(int32_t processType) { DARABONBA_PTR_SET_VALUE(processType_, processType) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhiteListProcessRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListProcessRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The page number. Default value: **1**. Pages start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The sort order. Default value: descending order. Valid values:
    // 
    // *   **1**: ascending order
    // *   **2**: descending order
    shared_ptr<int32_t> desc_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The item based on which you want to sort the returned results. Default value: **process type**. Valid values:
    // 
    // *   **1**: process type
    // *   **2**: degree of trustability
    shared_ptr<int32_t> orderBy_ {};
    // The number of entries per page. Maximum value: 1000. Default value: 20. If you leave this parameter empty, 20 data entries are returned per page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the process.
    shared_ptr<string> processName_ {};
    // The type of the process. Valid values:
    // 
    // *   **1**: trusted
    // *   **2**: suspicious
    // *   **3**: malicious
    shared_ptr<int32_t> processType_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to obtain the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> strategyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
