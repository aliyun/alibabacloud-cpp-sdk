// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryCostCenterRuleRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    QueryCostCenterRuleRequest() = default ;
    QueryCostCenterRuleRequest(const QueryCostCenterRuleRequest &) = default ;
    QueryCostCenterRuleRequest(QueryCostCenterRuleRequest &&) = default ;
    QueryCostCenterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterRuleRequest() = default ;
    QueryCostCenterRuleRequest& operator=(const QueryCostCenterRuleRequest &) = default ;
    QueryCostCenterRuleRequest& operator=(QueryCostCenterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->costCenterId_ != nullptr
        && this->ecIdAccountIds_ != nullptr && this->nbid_ != nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t costCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline QueryCostCenterRuleRequest& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<QueryCostCenterRuleRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<QueryCostCenterRuleRequestEcIdAccountIds>) };
    inline vector<QueryCostCenterRuleRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<QueryCostCenterRuleRequestEcIdAccountIds>) };
    inline QueryCostCenterRuleRequest& setEcIdAccountIds(const vector<QueryCostCenterRuleRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline QueryCostCenterRuleRequest& setEcIdAccountIds(vector<QueryCostCenterRuleRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline QueryCostCenterRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    std::shared_ptr<int64_t> costCenterId_ = nullptr;
    std::shared_ptr<vector<QueryCostCenterRuleRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
