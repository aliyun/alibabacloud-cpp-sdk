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
    // The business edition. Valid values: ENTERPRISE or 1 for Enterprise Edition, and BUSINESS or 20 for Business Edition. Default value: Enterprise Edition.
    shared_ptr<string> bizType_ {};
    // The end time of the query, exclusive. Specify the time in ISO 8601 format with time zone, accurate to seconds. Default value: the current time. The end time must be later than StartTime and cannot be later than the current time.
    shared_ptr<string> endTime_ {};
    // The region of the AI gateway logs. Valid values: cn-shanghai (Shanghai), cn-hongkong (Hong Kong), ap-southeast-1 (Singapore), and us-east-1 (US East). The cn-hangzhou value is also supported and routed to cn-shanghai in the production environment. If this parameter is not specified, the default value is cn-shanghai for the China site and ap-southeast-1 for the international site.
    shared_ptr<string> gatewayRegion_ {};
    // The requested model ID during invocation for exact match. Fuzzy match is not supported. This ID may be different from the actual executed model Model returned in the response. If this parameter is not specified or is left empty, no filtering is performed. The value can be up to 128 characters in length and cannot contain control characters or vertical bars.
    shared_ptr<string> modelId_ {};
    // The page number. Pages start from page 1. Default value: 1. The product of PageNumber and PageSize cannot exceed 1,000,000.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 50. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The model invocation request ID for exact match. This ID is different from the RequestId of the current API operation. If this parameter is not specified or is left empty, no filtering is performed. The value can be up to 128 characters in length and cannot contain control characters or vertical bars. This condition is combined with other filter conditions by using the AND operator.
    shared_ptr<string> searchRequestId_ {};
    // The start time of the query, inclusive. Specify the time in ISO 8601 format with time zone, accurate to seconds. Default value: 00:00:00 (UTC+8) of the current day. The start time cannot be earlier than three calendar months before the current time, and the query time range cannot exceed 30 days.
    shared_ptr<string> startTime_ {};
    // The list of user IDs. You can specify up to 50 user IDs. If this parameter is not specified or an empty array is passed, no filtering is performed. The user IDs in the list are combined by using the OR operator, and this condition is combined with other filter conditions by using the AND operator.
    shared_ptr<vector<string>> wyIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wss20211221
#endif
