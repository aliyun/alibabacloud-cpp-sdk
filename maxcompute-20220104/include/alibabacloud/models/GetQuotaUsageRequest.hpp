// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aggMethod, aggMethod_);
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(plotTypes, plotTypes_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(subQuotaNickname, subQuotaNickname_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(yAxisTypes, yAxisTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aggMethod, aggMethod_);
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(plotTypes, plotTypes_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(subQuotaNickname, subQuotaNickname_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(yAxisTypes, yAxisTypes_);
    };
    GetQuotaUsageRequest() = default ;
    GetQuotaUsageRequest(const GetQuotaUsageRequest &) = default ;
    GetQuotaUsageRequest(GetQuotaUsageRequest &&) = default ;
    GetQuotaUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUsageRequest() = default ;
    GetQuotaUsageRequest& operator=(const GetQuotaUsageRequest &) = default ;
    GetQuotaUsageRequest& operator=(GetQuotaUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggMethod_ != nullptr
        && this->from_ != nullptr && this->plotTypes_ != nullptr && this->productId_ != nullptr && this->region_ != nullptr && this->subQuotaNickname_ != nullptr
        && this->tenantId_ != nullptr && this->to_ != nullptr && this->yAxisTypes_ != nullptr; };
    // aggMethod Field Functions 
    bool hasAggMethod() const { return this->aggMethod_ != nullptr;};
    void deleteAggMethod() { this->aggMethod_ = nullptr;};
    inline string aggMethod() const { DARABONBA_PTR_GET_DEFAULT(aggMethod_, "") };
    inline GetQuotaUsageRequest& setAggMethod(string aggMethod) { DARABONBA_PTR_SET_VALUE(aggMethod_, aggMethod) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetQuotaUsageRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // plotTypes Field Functions 
    bool hasPlotTypes() const { return this->plotTypes_ != nullptr;};
    void deletePlotTypes() { this->plotTypes_ = nullptr;};
    inline const vector<string> & plotTypes() const { DARABONBA_PTR_GET_CONST(plotTypes_, vector<string>) };
    inline vector<string> plotTypes() { DARABONBA_PTR_GET(plotTypes_, vector<string>) };
    inline GetQuotaUsageRequest& setPlotTypes(const vector<string> & plotTypes) { DARABONBA_PTR_SET_VALUE(plotTypes_, plotTypes) };
    inline GetQuotaUsageRequest& setPlotTypes(vector<string> && plotTypes) { DARABONBA_PTR_SET_RVALUE(plotTypes_, plotTypes) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetQuotaUsageRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQuotaUsageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // subQuotaNickname Field Functions 
    bool hasSubQuotaNickname() const { return this->subQuotaNickname_ != nullptr;};
    void deleteSubQuotaNickname() { this->subQuotaNickname_ = nullptr;};
    inline string subQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(subQuotaNickname_, "") };
    inline GetQuotaUsageRequest& setSubQuotaNickname(string subQuotaNickname) { DARABONBA_PTR_SET_VALUE(subQuotaNickname_, subQuotaNickname) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetQuotaUsageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetQuotaUsageRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // yAxisTypes Field Functions 
    bool hasYAxisTypes() const { return this->yAxisTypes_ != nullptr;};
    void deleteYAxisTypes() { this->yAxisTypes_ = nullptr;};
    inline const vector<string> & yAxisTypes() const { DARABONBA_PTR_GET_CONST(yAxisTypes_, vector<string>) };
    inline vector<string> yAxisTypes() { DARABONBA_PTR_GET(yAxisTypes_, vector<string>) };
    inline GetQuotaUsageRequest& setYAxisTypes(const vector<string> & yAxisTypes) { DARABONBA_PTR_SET_VALUE(yAxisTypes_, yAxisTypes) };
    inline GetQuotaUsageRequest& setYAxisTypes(vector<string> && yAxisTypes) { DARABONBA_PTR_SET_RVALUE(yAxisTypes_, yAxisTypes) };


  protected:
    // The aggregation algorithm. For a better page experience, up to 60 points can be displayed for each metric. If you select a time range longer than 1 hour, the chart uses the average value within the range (minutes of the selected time range/60) to aggregate data by default. You can change the aggregation algorithm based on your business requirements.
    std::shared_ptr<string> aggMethod_ = nullptr;
    // The time when the query starts. The value is the log time that is specified when log data is written.
    // 
    // *   The time range that is specified in this operation is a left-closed, right-open interval. The interval includes the start time specified by the **from** parameter, but does not include the end time specified by the **to** parameter. If you set the **from** and **to** parameters to the same value, the time range is invalid and an error message is returned.
    // *   This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The types of the charts.
    std::shared_ptr<vector<string>> plotTypes_ = nullptr;
    // The quota type. Default value: ODPS.
    // 
    // *   ODPS: computing quota
    // *   TUNNEL: Tunnel quota
    std::shared_ptr<string> productId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The alias of the level-2 quota.
    std::shared_ptr<string> subQuotaNickname_ = nullptr;
    // The ID of the tenant. You can log on to the MaxCompute console, and choose Tenants > Tenant Property from the left-side navigation pane to view the tenant ID.
    std::shared_ptr<string> tenantId_ = nullptr;
    // The time when the query ends. The value is the log time that is specified when log data is written.
    // 
    // *   The time range that is specified in this operation is a left-closed, right-open interval. The interval includes the start time specified by the **from** parameter, but does not include the end time specified by the **to** parameter. If you set the **from** and **to** parameters to the same value, the time range is invalid and an error message is returned.
    // *   This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> to_ = nullptr;
    // The data metric fields.
    std::shared_ptr<vector<string>> yAxisTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
