// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAICALLDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAICALLDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wss20211221
{
namespace Models
{
  class DescribeAICallDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAICallDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(GatewayRegion, gatewayRegion_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchRequestId, searchRequestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WyIds, wyIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAICallDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(GatewayRegion, gatewayRegion_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchRequestId, searchRequestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WyIds, wyIds_);
    };
    DescribeAICallDetailsRequest() = default ;
    DescribeAICallDetailsRequest(const DescribeAICallDetailsRequest &) = default ;
    DescribeAICallDetailsRequest(DescribeAICallDetailsRequest &&) = default ;
    DescribeAICallDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAICallDetailsRequest() = default ;
    DescribeAICallDetailsRequest& operator=(const DescribeAICallDetailsRequest &) = default ;
    DescribeAICallDetailsRequest& operator=(DescribeAICallDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->endTime_ == nullptr && this->gatewayRegion_ == nullptr && this->modelId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->searchRequestId_ == nullptr && this->startTime_ == nullptr && this->wyIds_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline DescribeAICallDetailsRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeAICallDetailsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gatewayRegion Field Functions 
    bool hasGatewayRegion() const { return this->gatewayRegion_ != nullptr;};
    void deleteGatewayRegion() { this->gatewayRegion_ = nullptr;};
    inline string getGatewayRegion() const { DARABONBA_PTR_GET_DEFAULT(gatewayRegion_, "") };
    inline DescribeAICallDetailsRequest& setGatewayRegion(string gatewayRegion) { DARABONBA_PTR_SET_VALUE(gatewayRegion_, gatewayRegion) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline DescribeAICallDetailsRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAICallDetailsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAICallDetailsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchRequestId Field Functions 
    bool hasSearchRequestId() const { return this->searchRequestId_ != nullptr;};
    void deleteSearchRequestId() { this->searchRequestId_ = nullptr;};
    inline string getSearchRequestId() const { DARABONBA_PTR_GET_DEFAULT(searchRequestId_, "") };
    inline DescribeAICallDetailsRequest& setSearchRequestId(string searchRequestId) { DARABONBA_PTR_SET_VALUE(searchRequestId_, searchRequestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeAICallDetailsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // wyIds Field Functions 
    bool hasWyIds() const { return this->wyIds_ != nullptr;};
    void deleteWyIds() { this->wyIds_ = nullptr;};
    inline const vector<string> & getWyIds() const { DARABONBA_PTR_GET_CONST(wyIds_, vector<string>) };
    inline vector<string> getWyIds() { DARABONBA_PTR_GET(wyIds_, vector<string>) };
    inline DescribeAICallDetailsRequest& setWyIds(const vector<string> & wyIds) { DARABONBA_PTR_SET_VALUE(wyIds_, wyIds) };
    inline DescribeAICallDetailsRequest& setWyIds(vector<string> && wyIds) { DARABONBA_PTR_SET_RVALUE(wyIds_, wyIds) };


  protected:
    // 业务版本，沿用售卖 BizType：ENTERPRISE 或 1 为企业版；BUSINESS 或 20 为商业版。未传默认企业版。
    shared_ptr<string> bizType_ {};
    // 带时区的 ISO 8601 结束时间，整秒精度，默认当前时间；应大于开始时间且不晚于当前时间，区间左闭右开。
    shared_ptr<string> endTime_ {};
    // 网关日志地域：cn-shanghai（国内）、cn-hongkong（香港）、ap-southeast-1（新加坡）、us-east-1（美国）；兼容 cn-hangzhou，仅查询路由等同 cn-shanghai；杭州预发实际数据地域为 cn-hangzhou。不传时使用当前站点默认地域；预发只查询预发日志，国内映射杭州预发，美国预发未配置时返回 ServiceUnavailable。
    shared_ptr<string> gatewayRegion_ {};
    // 可选请求模型 ID；不传或空白时不筛选，非空时精确匹配 custom_log.requestedModel 或 ai_log.request_model 任一字段，与 SearchRequestId、WyIds 等条件取交集。不按 ai_log.model 筛选，不支持模糊匹配。
    shared_ptr<string> modelId_ {};
    // 页码，从 1 开始；分页偏移超过查询上限时返回 InvalidParameter。
    shared_ptr<int32_t> pageNumber_ {};
    // 每页返回数量，最大 50。
    shared_ptr<int32_t> pageSize_ {};
    // 可选请求 ID；不传或空白时不筛选，非空时精确匹配 SLS request_id，与 ModelId、WyIds 等条件取交集。不得包含控制字符或管道符。
    shared_ptr<string> searchRequestId_ {};
    // 带时区的 ISO 8601 开始时间，整秒精度，默认 UTC+8 今日零点；不得早于当前时间按 UTC+8 回退 3 个自然月，区间不超过 30 天。
    shared_ptr<string> startTime_ {};
    // 可选用户 ID 列表，最多 50 项；不传或空数组时不筛选。非空时精确匹配 custom_log.wyId，列表内取 OR，与租户、BizType、SearchRequestId 和 ModelId 条件取 AND。每项去除首尾空白后为 1 至 128 个字符，不允许控制字符或管道符。
    shared_ptr<vector<string>> wyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
