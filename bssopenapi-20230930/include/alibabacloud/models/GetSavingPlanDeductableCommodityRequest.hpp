// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSAVINGPLANDEDUCTABLECOMMODITYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSavingPlanDeductableCommodityRequestEcIdAccountIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class GetSavingPlanDeductableCommodityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSavingPlanDeductableCommodityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
    };
    friend void from_json(const Darabonba::Json& j, GetSavingPlanDeductableCommodityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
    };
    GetSavingPlanDeductableCommodityRequest() = default ;
    GetSavingPlanDeductableCommodityRequest(const GetSavingPlanDeductableCommodityRequest &) = default ;
    GetSavingPlanDeductableCommodityRequest(GetSavingPlanDeductableCommodityRequest &&) = default ;
    GetSavingPlanDeductableCommodityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSavingPlanDeductableCommodityRequest() = default ;
    GetSavingPlanDeductableCommodityRequest& operator=(const GetSavingPlanDeductableCommodityRequest &) = default ;
    GetSavingPlanDeductableCommodityRequest& operator=(GetSavingPlanDeductableCommodityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecIdAccountIds_ != nullptr
        && this->nbid_ != nullptr; };
    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds>) };
    inline vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds>) };
    inline GetSavingPlanDeductableCommodityRequest& setEcIdAccountIds(const vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline GetSavingPlanDeductableCommodityRequest& setEcIdAccountIds(vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline GetSavingPlanDeductableCommodityRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


  protected:
    std::shared_ptr<vector<GetSavingPlanDeductableCommodityRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
