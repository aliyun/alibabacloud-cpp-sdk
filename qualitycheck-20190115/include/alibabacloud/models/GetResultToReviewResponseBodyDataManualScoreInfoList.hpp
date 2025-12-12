// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAMANUALSCOREINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAMANUALSCOREINFOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataManualScoreInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataManualScoreInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(ManualScoreInfo, manualScoreInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataManualScoreInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(ManualScoreInfo, manualScoreInfo_);
    };
    GetResultToReviewResponseBodyDataManualScoreInfoList() = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoList(const GetResultToReviewResponseBodyDataManualScoreInfoList &) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoList(GetResultToReviewResponseBodyDataManualScoreInfoList &&) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataManualScoreInfoList() = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoList& operator=(const GetResultToReviewResponseBodyDataManualScoreInfoList &) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoList& operator=(GetResultToReviewResponseBodyDataManualScoreInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->manualScoreInfo_ == nullptr; };
    // manualScoreInfo Field Functions 
    bool hasManualScoreInfo() const { return this->manualScoreInfo_ != nullptr;};
    void deleteManualScoreInfo() { this->manualScoreInfo_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo> & manualScoreInfo() const { DARABONBA_PTR_GET_CONST(manualScoreInfo_, vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo>) };
    inline vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo> manualScoreInfo() { DARABONBA_PTR_GET(manualScoreInfo_, vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo>) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoList& setManualScoreInfo(const vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo> & manualScoreInfo) { DARABONBA_PTR_SET_VALUE(manualScoreInfo_, manualScoreInfo) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoList& setManualScoreInfo(vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo> && manualScoreInfo) { DARABONBA_PTR_SET_RVALUE(manualScoreInfo_, manualScoreInfo) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo>> manualScoreInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
