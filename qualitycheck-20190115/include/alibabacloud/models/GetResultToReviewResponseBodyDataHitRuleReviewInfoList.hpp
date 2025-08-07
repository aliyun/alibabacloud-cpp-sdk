// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAHITRULEREVIEWINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataHitRuleReviewInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataHitRuleReviewInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(HitRuleReviewInfo, hitRuleReviewInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataHitRuleReviewInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(HitRuleReviewInfo, hitRuleReviewInfo_);
    };
    GetResultToReviewResponseBodyDataHitRuleReviewInfoList() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoList(const GetResultToReviewResponseBodyDataHitRuleReviewInfoList &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoList(GetResultToReviewResponseBodyDataHitRuleReviewInfoList &&) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataHitRuleReviewInfoList() = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoList& operator=(const GetResultToReviewResponseBodyDataHitRuleReviewInfoList &) = default ;
    GetResultToReviewResponseBodyDataHitRuleReviewInfoList& operator=(GetResultToReviewResponseBodyDataHitRuleReviewInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitRuleReviewInfo_ != nullptr; };
    // hitRuleReviewInfo Field Functions 
    bool hasHitRuleReviewInfo() const { return this->hitRuleReviewInfo_ != nullptr;};
    void deleteHitRuleReviewInfo() { this->hitRuleReviewInfo_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> & hitRuleReviewInfo() const { DARABONBA_PTR_GET_CONST(hitRuleReviewInfo_, vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>) };
    inline vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> hitRuleReviewInfo() { DARABONBA_PTR_GET(hitRuleReviewInfo_, vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoList& setHitRuleReviewInfo(const vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> & hitRuleReviewInfo) { DARABONBA_PTR_SET_VALUE(hitRuleReviewInfo_, hitRuleReviewInfo) };
    inline GetResultToReviewResponseBodyDataHitRuleReviewInfoList& setHitRuleReviewInfo(vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo> && hitRuleReviewInfo) { DARABONBA_PTR_SET_RVALUE(hitRuleReviewInfo_, hitRuleReviewInfo) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataHitRuleReviewInfoListHitRuleReviewInfo>> hitRuleReviewInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
