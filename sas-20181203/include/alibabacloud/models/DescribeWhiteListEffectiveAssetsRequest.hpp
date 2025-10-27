// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListEffectiveAssetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListEffectiveAssetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(NeedStatistics, needStatistics_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListEffectiveAssetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(NeedStatistics, needStatistics_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
    };
    DescribeWhiteListEffectiveAssetsRequest() = default ;
    DescribeWhiteListEffectiveAssetsRequest(const DescribeWhiteListEffectiveAssetsRequest &) = default ;
    DescribeWhiteListEffectiveAssetsRequest(DescribeWhiteListEffectiveAssetsRequest &&) = default ;
    DescribeWhiteListEffectiveAssetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListEffectiveAssetsRequest() = default ;
    DescribeWhiteListEffectiveAssetsRequest& operator=(const DescribeWhiteListEffectiveAssetsRequest &) = default ;
    DescribeWhiteListEffectiveAssetsRequest& operator=(DescribeWhiteListEffectiveAssetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->lang_ == nullptr && return this->needStatistics_ == nullptr && return this->pageSize_ == nullptr && return this->remark_ == nullptr && return this->sourceIp_ == nullptr
        && return this->strategyId_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListEffectiveAssetsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhiteListEffectiveAssetsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // needStatistics Field Functions 
    bool hasNeedStatistics() const { return this->needStatistics_ != nullptr;};
    void deleteNeedStatistics() { this->needStatistics_ = nullptr;};
    inline int32_t needStatistics() const { DARABONBA_PTR_GET_DEFAULT(needStatistics_, 0) };
    inline DescribeWhiteListEffectiveAssetsRequest& setNeedStatistics(int32_t needStatistics) { DARABONBA_PTR_SET_VALUE(needStatistics_, needStatistics) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListEffectiveAssetsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeWhiteListEffectiveAssetsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhiteListEffectiveAssetsRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListEffectiveAssetsRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


  protected:
    // The page number. Default value: **1**. Pages start from page 1.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // Specifies whether to return the number of **untrusted programs**. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> needStatistics_ = nullptr;
    // The number of entries per page. Maximum value: **1000**. Default value: 20. If you leave this parameter empty, 20 data entries are returned per page.
    // 
    // >  We recommend that you do not leave this parameter empty.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The condition that is used to query assets. You can enter an IP address, a public IP address, an private IP address, or an asset name for fuzzy match.
    std::shared_ptr<string> remark_ = nullptr;
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to obtain the ID.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
