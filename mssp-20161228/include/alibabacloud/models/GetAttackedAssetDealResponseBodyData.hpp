// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETATTACKEDASSETDEALRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETATTACKEDASSETDEALRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAttackedAssetDealResponseBodyDataEcsTrendList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mssp20161228
{
namespace Models
{
  class GetAttackedAssetDealResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAttackedAssetDealResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EcsTrendList, ecsTrendList_);
    };
    friend void from_json(const Darabonba::Json& j, GetAttackedAssetDealResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsTrendList, ecsTrendList_);
    };
    GetAttackedAssetDealResponseBodyData() = default ;
    GetAttackedAssetDealResponseBodyData(const GetAttackedAssetDealResponseBodyData &) = default ;
    GetAttackedAssetDealResponseBodyData(GetAttackedAssetDealResponseBodyData &&) = default ;
    GetAttackedAssetDealResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAttackedAssetDealResponseBodyData() = default ;
    GetAttackedAssetDealResponseBodyData& operator=(const GetAttackedAssetDealResponseBodyData &) = default ;
    GetAttackedAssetDealResponseBodyData& operator=(GetAttackedAssetDealResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ecsTrendList_ == nullptr; };
    // ecsTrendList Field Functions 
    bool hasEcsTrendList() const { return this->ecsTrendList_ != nullptr;};
    void deleteEcsTrendList() { this->ecsTrendList_ = nullptr;};
    inline const vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList> & ecsTrendList() const { DARABONBA_PTR_GET_CONST(ecsTrendList_, vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList>) };
    inline vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList> ecsTrendList() { DARABONBA_PTR_GET(ecsTrendList_, vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList>) };
    inline GetAttackedAssetDealResponseBodyData& setEcsTrendList(const vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList> & ecsTrendList) { DARABONBA_PTR_SET_VALUE(ecsTrendList_, ecsTrendList) };
    inline GetAttackedAssetDealResponseBodyData& setEcsTrendList(vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList> && ecsTrendList) { DARABONBA_PTR_SET_RVALUE(ecsTrendList_, ecsTrendList) };


  protected:
    // Collection of attacked asset convergence trends.
    std::shared_ptr<vector<Models::GetAttackedAssetDealResponseBodyDataEcsTrendList>> ecsTrendList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mssp20161228
#endif
