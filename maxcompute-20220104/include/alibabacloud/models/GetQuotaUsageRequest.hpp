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
    virtual bool empty() const override { return this->aggMethod_ == nullptr
        && this->from_ == nullptr && this->plotTypes_ == nullptr && this->productId_ == nullptr && this->region_ == nullptr && this->subQuotaNickname_ == nullptr
        && this->tenantId_ == nullptr && this->to_ == nullptr && this->yAxisTypes_ == nullptr; };
    // aggMethod Field Functions 
    bool hasAggMethod() const { return this->aggMethod_ != nullptr;};
    void deleteAggMethod() { this->aggMethod_ = nullptr;};
    inline string getAggMethod() const { DARABONBA_PTR_GET_DEFAULT(aggMethod_, "") };
    inline GetQuotaUsageRequest& setAggMethod(string aggMethod) { DARABONBA_PTR_SET_VALUE(aggMethod_, aggMethod) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetQuotaUsageRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // plotTypes Field Functions 
    bool hasPlotTypes() const { return this->plotTypes_ != nullptr;};
    void deletePlotTypes() { this->plotTypes_ = nullptr;};
    inline const vector<string> & getPlotTypes() const { DARABONBA_PTR_GET_CONST(plotTypes_, vector<string>) };
    inline vector<string> getPlotTypes() { DARABONBA_PTR_GET(plotTypes_, vector<string>) };
    inline GetQuotaUsageRequest& setPlotTypes(const vector<string> & plotTypes) { DARABONBA_PTR_SET_VALUE(plotTypes_, plotTypes) };
    inline GetQuotaUsageRequest& setPlotTypes(vector<string> && plotTypes) { DARABONBA_PTR_SET_RVALUE(plotTypes_, plotTypes) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline GetQuotaUsageRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetQuotaUsageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // subQuotaNickname Field Functions 
    bool hasSubQuotaNickname() const { return this->subQuotaNickname_ != nullptr;};
    void deleteSubQuotaNickname() { this->subQuotaNickname_ = nullptr;};
    inline string getSubQuotaNickname() const { DARABONBA_PTR_GET_DEFAULT(subQuotaNickname_, "") };
    inline GetQuotaUsageRequest& setSubQuotaNickname(string subQuotaNickname) { DARABONBA_PTR_SET_VALUE(subQuotaNickname_, subQuotaNickname) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetQuotaUsageRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetQuotaUsageRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // yAxisTypes Field Functions 
    bool hasYAxisTypes() const { return this->yAxisTypes_ != nullptr;};
    void deleteYAxisTypes() { this->yAxisTypes_ = nullptr;};
    inline const vector<string> & getYAxisTypes() const { DARABONBA_PTR_GET_CONST(yAxisTypes_, vector<string>) };
    inline vector<string> getYAxisTypes() { DARABONBA_PTR_GET(yAxisTypes_, vector<string>) };
    inline GetQuotaUsageRequest& setYAxisTypes(const vector<string> & yAxisTypes) { DARABONBA_PTR_SET_VALUE(yAxisTypes_, yAxisTypes) };
    inline GetQuotaUsageRequest& setYAxisTypes(vector<string> && yAxisTypes) { DARABONBA_PTR_SET_RVALUE(yAxisTypes_, yAxisTypes) };


  protected:
    shared_ptr<string> aggMethod_ {};
    // This parameter is required.
    shared_ptr<int64_t> from_ {};
    shared_ptr<vector<string>> plotTypes_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> subQuotaNickname_ {};
    shared_ptr<string> tenantId_ {};
    // This parameter is required.
    shared_ptr<int64_t> to_ {};
    shared_ptr<vector<string>> yAxisTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
