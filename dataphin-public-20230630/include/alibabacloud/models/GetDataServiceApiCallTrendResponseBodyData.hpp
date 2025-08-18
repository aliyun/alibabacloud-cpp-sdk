// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList.hpp>
#include <alibabacloud/models/GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiCallTrendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiCallTrendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CallErrorImpactTrendList, callErrorImpactTrendList_);
      DARABONBA_PTR_TO_JSON(CallErrorTrendList, callErrorTrendList_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiCallTrendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CallErrorImpactTrendList, callErrorImpactTrendList_);
      DARABONBA_PTR_FROM_JSON(CallErrorTrendList, callErrorTrendList_);
    };
    GetDataServiceApiCallTrendResponseBodyData() = default ;
    GetDataServiceApiCallTrendResponseBodyData(const GetDataServiceApiCallTrendResponseBodyData &) = default ;
    GetDataServiceApiCallTrendResponseBodyData(GetDataServiceApiCallTrendResponseBodyData &&) = default ;
    GetDataServiceApiCallTrendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiCallTrendResponseBodyData() = default ;
    GetDataServiceApiCallTrendResponseBodyData& operator=(const GetDataServiceApiCallTrendResponseBodyData &) = default ;
    GetDataServiceApiCallTrendResponseBodyData& operator=(GetDataServiceApiCallTrendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callErrorImpactTrendList_ != nullptr
        && this->callErrorTrendList_ != nullptr; };
    // callErrorImpactTrendList Field Functions 
    bool hasCallErrorImpactTrendList() const { return this->callErrorImpactTrendList_ != nullptr;};
    void deleteCallErrorImpactTrendList() { this->callErrorImpactTrendList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList> & callErrorImpactTrendList() const { DARABONBA_PTR_GET_CONST(callErrorImpactTrendList_, vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList>) };
    inline vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList> callErrorImpactTrendList() { DARABONBA_PTR_GET(callErrorImpactTrendList_, vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList>) };
    inline GetDataServiceApiCallTrendResponseBodyData& setCallErrorImpactTrendList(const vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList> & callErrorImpactTrendList) { DARABONBA_PTR_SET_VALUE(callErrorImpactTrendList_, callErrorImpactTrendList) };
    inline GetDataServiceApiCallTrendResponseBodyData& setCallErrorImpactTrendList(vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList> && callErrorImpactTrendList) { DARABONBA_PTR_SET_RVALUE(callErrorImpactTrendList_, callErrorImpactTrendList) };


    // callErrorTrendList Field Functions 
    bool hasCallErrorTrendList() const { return this->callErrorTrendList_ != nullptr;};
    void deleteCallErrorTrendList() { this->callErrorTrendList_ = nullptr;};
    inline const vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList> & callErrorTrendList() const { DARABONBA_PTR_GET_CONST(callErrorTrendList_, vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList>) };
    inline vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList> callErrorTrendList() { DARABONBA_PTR_GET(callErrorTrendList_, vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList>) };
    inline GetDataServiceApiCallTrendResponseBodyData& setCallErrorTrendList(const vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList> & callErrorTrendList) { DARABONBA_PTR_SET_VALUE(callErrorTrendList_, callErrorTrendList) };
    inline GetDataServiceApiCallTrendResponseBodyData& setCallErrorTrendList(vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList> && callErrorTrendList) { DARABONBA_PTR_SET_RVALUE(callErrorTrendList_, callErrorTrendList) };


  protected:
    std::shared_ptr<vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorImpactTrendList>> callErrorImpactTrendList_ = nullptr;
    std::shared_ptr<vector<Models::GetDataServiceApiCallTrendResponseBodyDataCallErrorTrendList>> callErrorTrendList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
