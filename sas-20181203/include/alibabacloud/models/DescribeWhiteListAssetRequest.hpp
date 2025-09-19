// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTASSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListAssetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListAssetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(LastMaxId, lastMaxId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListAssetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(LastMaxId, lastMaxId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeWhiteListAssetRequest() = default ;
    DescribeWhiteListAssetRequest(const DescribeWhiteListAssetRequest &) = default ;
    DescribeWhiteListAssetRequest(DescribeWhiteListAssetRequest &&) = default ;
    DescribeWhiteListAssetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListAssetRequest() = default ;
    DescribeWhiteListAssetRequest& operator=(const DescribeWhiteListAssetRequest &) = default ;
    DescribeWhiteListAssetRequest& operator=(DescribeWhiteListAssetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lang_ != nullptr
        && this->lastMaxId_ != nullptr && this->pageSize_ != nullptr && this->sourceIp_ != nullptr && this->strategyId_ != nullptr && this->type_ != nullptr; };
    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeWhiteListAssetRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // lastMaxId Field Functions 
    bool hasLastMaxId() const { return this->lastMaxId_ != nullptr;};
    void deleteLastMaxId() { this->lastMaxId_ = nullptr;};
    inline int64_t lastMaxId() const { DARABONBA_PTR_GET_DEFAULT(lastMaxId_, 0L) };
    inline DescribeWhiteListAssetRequest& setLastMaxId(int64_t lastMaxId) { DARABONBA_PTR_SET_VALUE(lastMaxId_, lastMaxId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListAssetRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeWhiteListAssetRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline DescribeWhiteListAssetRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeWhiteListAssetRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The maximum asset ID of the most recent query.
    std::shared_ptr<int64_t> lastMaxId_ = nullptr;
    // The number of entries per page. Maximum value: **500**. Default value: **500**. This value indicates that 500 entries are displayed on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The source IP address of the request. You do not need to specify this parameter. It is automatically obtained by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The ID of the policy.
    // 
    // >  You can call the [DescribeWhiteListStrategyList](~~DescribeWhiteListStrategyList~~) operation to obtain the ID.
    std::shared_ptr<int64_t> strategyId_ = nullptr;
    // The policy type of the asset that you want to query. Valid values:
    // 
    // *   **1**: learning policy
    // *   **2**: application policy
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
