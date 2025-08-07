// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAMANUALSCOREINFOLISTMANUALSCOREINFOCOMPLAINHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAMANUALSCOREINFOLISTMANUALSCOREINFOCOMPLAINHISTORIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories& obj) { 
      DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
    };
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories() = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories(const GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories &) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories(GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories &&) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories() = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories& operator=(const GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories &) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories& operator=(GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->complainHistories_ != nullptr; };
    // complainHistories Field Functions 
    bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
    void deleteComplainHistories() { this->complainHistories_ = nullptr;};
    inline const vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories> & complainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories>) };
    inline vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories> complainHistories() { DARABONBA_PTR_GET(complainHistories_, vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories>) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories& setComplainHistories(const vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories> & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories& setComplainHistories(vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories> && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


  protected:
    std::shared_ptr<vector<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistoriesComplainHistories>> complainHistories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
