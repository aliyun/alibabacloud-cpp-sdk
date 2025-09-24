// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDPUTILIZATIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryDPUtilizationDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDPUtilizationDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IncludeShare, includeShare_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_TO_JSON(LastToken, lastToken_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDPUtilizationDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DeductedInstanceId, deductedInstanceId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IncludeShare, includeShare_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceSpec, instanceSpec_);
      DARABONBA_PTR_FROM_JSON(LastToken, lastToken_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryDPUtilizationDetailRequest() = default ;
    QueryDPUtilizationDetailRequest(const QueryDPUtilizationDetailRequest &) = default ;
    QueryDPUtilizationDetailRequest(QueryDPUtilizationDetailRequest &&) = default ;
    QueryDPUtilizationDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDPUtilizationDetailRequest() = default ;
    QueryDPUtilizationDetailRequest& operator=(const QueryDPUtilizationDetailRequest &) = default ;
    QueryDPUtilizationDetailRequest& operator=(QueryDPUtilizationDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->deductedInstanceId_ != nullptr && this->endTime_ != nullptr && this->includeShare_ != nullptr && this->instanceId_ != nullptr && this->instanceSpec_ != nullptr
        && this->lastToken_ != nullptr && this->limit_ != nullptr && this->prodCode_ != nullptr && this->startTime_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline QueryDPUtilizationDetailRequest& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // deductedInstanceId Field Functions 
    bool hasDeductedInstanceId() const { return this->deductedInstanceId_ != nullptr;};
    void deleteDeductedInstanceId() { this->deductedInstanceId_ = nullptr;};
    inline string deductedInstanceId() const { DARABONBA_PTR_GET_DEFAULT(deductedInstanceId_, "") };
    inline QueryDPUtilizationDetailRequest& setDeductedInstanceId(string deductedInstanceId) { DARABONBA_PTR_SET_VALUE(deductedInstanceId_, deductedInstanceId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline QueryDPUtilizationDetailRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // includeShare Field Functions 
    bool hasIncludeShare() const { return this->includeShare_ != nullptr;};
    void deleteIncludeShare() { this->includeShare_ = nullptr;};
    inline bool includeShare() const { DARABONBA_PTR_GET_DEFAULT(includeShare_, false) };
    inline QueryDPUtilizationDetailRequest& setIncludeShare(bool includeShare) { DARABONBA_PTR_SET_VALUE(includeShare_, includeShare) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryDPUtilizationDetailRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceSpec Field Functions 
    bool hasInstanceSpec() const { return this->instanceSpec_ != nullptr;};
    void deleteInstanceSpec() { this->instanceSpec_ = nullptr;};
    inline string instanceSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceSpec_, "") };
    inline QueryDPUtilizationDetailRequest& setInstanceSpec(string instanceSpec) { DARABONBA_PTR_SET_VALUE(instanceSpec_, instanceSpec) };


    // lastToken Field Functions 
    bool hasLastToken() const { return this->lastToken_ != nullptr;};
    void deleteLastToken() { this->lastToken_ = nullptr;};
    inline string lastToken() const { DARABONBA_PTR_GET_DEFAULT(lastToken_, "") };
    inline QueryDPUtilizationDetailRequest& setLastToken(string lastToken) { DARABONBA_PTR_SET_VALUE(lastToken_, lastToken) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline QueryDPUtilizationDetailRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string prodCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline QueryDPUtilizationDetailRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryDPUtilizationDetailRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The code of the resource, such as ecsRi and scu_bag. If this parameter is specified, the ProdCode parameter does not take effect for the request.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The ID of the deducted instance. If this parameter is not specified, the details of all instances are returned.
    std::shared_ptr<string> deductedInstanceId_ = nullptr;
    // The end of the time range to query. Specify the time in the YYYY-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies whether to query the resource plan usage of linked accounts. Valid values:
    // 
    // *   true: queries the resource plan usage of linked accounts.
    // *   false: does not query the resource plan usage of linked accounts.
    // 
    // This parameter is required.
    std::shared_ptr<bool> includeShare_ = nullptr;
    // The ID of the instance to query. If this parameter is not specified, the details of all used instances are returned.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance type of the instance.
    std::shared_ptr<string> instanceSpec_ = nullptr;
    // The token that is used to retrieve the next page of results. For the first query, set the value to null. For subsequent queries, set the value to the token that is obtained from the NextToken parameter.
    std::shared_ptr<string> lastToken_ = nullptr;
    // The number of entries to return on each page. Default value: 20. Maximum value: 300.
    std::shared_ptr<int32_t> limit_ = nullptr;
    // The code of the service. Example: ecs.
    std::shared_ptr<string> prodCode_ = nullptr;
    // The beginning of the time range to query. Specify the time in the YYYY-MM-DD HH:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
