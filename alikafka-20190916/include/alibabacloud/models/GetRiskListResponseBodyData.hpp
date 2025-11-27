// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKLISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETRISKLISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetRiskListResponseBodyDataRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetRiskListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetRiskListResponseBodyData() = default ;
    GetRiskListResponseBodyData(const GetRiskListResponseBodyData &) = default ;
    GetRiskListResponseBodyData(GetRiskListResponseBodyData &&) = default ;
    GetRiskListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskListResponseBodyData() = default ;
    GetRiskListResponseBodyData& operator=(const GetRiskListResponseBodyData &) = default ;
    GetRiskListResponseBodyData& operator=(GetRiskListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskList_ == nullptr
        && return this->total_ == nullptr; };
    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<Models::GetRiskListResponseBodyDataRiskList> & riskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<Models::GetRiskListResponseBodyDataRiskList>) };
    inline vector<Models::GetRiskListResponseBodyDataRiskList> riskList() { DARABONBA_PTR_GET(riskList_, vector<Models::GetRiskListResponseBodyDataRiskList>) };
    inline GetRiskListResponseBodyData& setRiskList(const vector<Models::GetRiskListResponseBodyDataRiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline GetRiskListResponseBodyData& setRiskList(vector<Models::GetRiskListResponseBodyDataRiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetRiskListResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<vector<Models::GetRiskListResponseBodyDataRiskList>> riskList_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
