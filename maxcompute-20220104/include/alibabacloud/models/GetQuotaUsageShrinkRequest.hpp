// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTAUSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTAUSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaUsageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaUsageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aggMethod, aggMethod_);
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(plotTypes, plotTypesShrink_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(subQuotaNickname, subQuotaNickname_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(yAxisTypes, yAxisTypesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaUsageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aggMethod, aggMethod_);
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(plotTypes, plotTypesShrink_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(subQuotaNickname, subQuotaNickname_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(yAxisTypes, yAxisTypesShrink_);
    };
    GetQuotaUsageShrinkRequest() = default ;
    GetQuotaUsageShrinkRequest(const GetQuotaUsageShrinkRequest &) = default ;
    GetQuotaUsageShrinkRequest(GetQuotaUsageShrinkRequest &&) = default ;
    GetQuotaUsageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaUsageShrinkRequest() = default ;
    GetQuotaUsageShrinkRequest& operator=(const GetQuotaUsageShrinkRequest &) = default ;
    GetQuotaUsageShrinkRequest& operator=(GetQuotaUsageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggMethod_ == nullptr
        && return this->from_ == nullptr && return this->plotTypesShrink_ == nullptr && return this->productId_ == nullptr && return this->region_ == nullptr && return this->subQuotaNickname_ == nullptr
        && return this->tenantId_ == nullptr && return this->to_ == nullptr && return this->yAxisTypesShrink_ == nullptr; };
    // aggMethod Field Functions 
    bool hasAggMethod() const { return this->aggMethod_ != nullptr;};
    void deleteAggMethod() { this->aggMethod_ = nullptr;};
    inline string aggMethod() const { DARABONBA_PTR_GET_DEFAULT(aggMethod_, "") };
    inline GetQuotaUsageShrinkRequest& setAggMethod(string aggMethod) { DARABONBA_PTR_SET_VALUE(aggMethod_, aggMethod) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetQuotaUsageShrinkRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // plotTypesShrink Field Functions 
    bool hasPlotTypesShrink() const { return this->plotTypesShrink_ != nullptr;};
    void deletePlotTypesShrink() { this->plotTypesShrink_ = nullptr;};
    inline string plotTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(plotTypesShrink_, "") };
    inline GetQuotaUsageShrinkRequest& setPlotTypesShrink(string plotTypesShrink) { DARABONBA_PTR_SET_VALUE(plotTypesShrink_, plotTypesShrink) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetQuotaUsageShrinkRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQuotaUsageShrinkRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // subQuotaNickname Field Functions 
    bool hasSubQuotaNickname() const { return this->subQuotaNickname_ != nullptr;};
    void deleteSubQuotaNickname() { this->subQuotaNickname_ = nullptr;};
    inline string subQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(subQuotaNickname_, "") };
    inline GetQuotaUsageShrinkRequest& setSubQuotaNickname(string subQuotaNickname) { DARABONBA_PTR_SET_VALUE(subQuotaNickname_, subQuotaNickname) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetQuotaUsageShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetQuotaUsageShrinkRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // yAxisTypesShrink Field Functions 
    bool hasYAxisTypesShrink() const { return this->yAxisTypesShrink_ != nullptr;};
    void deleteYAxisTypesShrink() { this->yAxisTypesShrink_ = nullptr;};
    inline string yAxisTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(yAxisTypesShrink_, "") };
    inline GetQuotaUsageShrinkRequest& setYAxisTypesShrink(string yAxisTypesShrink) { DARABONBA_PTR_SET_VALUE(yAxisTypesShrink_, yAxisTypesShrink) };


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
    std::shared_ptr<string> plotTypesShrink_ = nullptr;
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
    std::shared_ptr<string> yAxisTypesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
