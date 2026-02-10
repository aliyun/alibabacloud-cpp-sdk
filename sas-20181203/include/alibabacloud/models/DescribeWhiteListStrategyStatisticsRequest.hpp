// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTSTRATEGYSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListStrategyStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListStrategyStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyIds, strategyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListStrategyStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyIds, strategyIds_);
    };
    DescribeWhiteListStrategyStatisticsRequest() = default ;
    DescribeWhiteListStrategyStatisticsRequest(const DescribeWhiteListStrategyStatisticsRequest &) = default ;
    DescribeWhiteListStrategyStatisticsRequest(DescribeWhiteListStrategyStatisticsRequest &&) = default ;
    DescribeWhiteListStrategyStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListStrategyStatisticsRequest() = default ;
    DescribeWhiteListStrategyStatisticsRequest& operator=(const DescribeWhiteListStrategyStatisticsRequest &) = default ;
    DescribeWhiteListStrategyStatisticsRequest& operator=(DescribeWhiteListStrategyStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->lang_ == nullptr && this->pageSize_ == nullptr && this->sourceIp_ == nullptr && this->strategyIds_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListStrategyStatisticsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhiteListStrategyStatisticsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListStrategyStatisticsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhiteListStrategyStatisticsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyIds Field Functions 
    bool hasStrategyIds() const { return this->strategyIds_ != nullptr;};
    void deleteStrategyIds() { this->strategyIds_ = nullptr;};
    inline string getStrategyIds() const { DARABONBA_PTR_GET_DEFAULT(strategyIds_, "") };
    inline DescribeWhiteListStrategyStatisticsRequest& setStrategyIds(string strategyIds) { DARABONBA_PTR_SET_VALUE(strategyIds_, strategyIds) };


  protected:
    // The page number. Default value: **1**. Pages start from page 1.
    shared_ptr<int32_t> currentPage_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries per page. Maximum value: 1000. Default value: 20. If you leave this parameter empty, 20 data entries are returned per page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    shared_ptr<string> sourceIp_ {};
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to obtain the ID.
    shared_ptr<string> strategyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
