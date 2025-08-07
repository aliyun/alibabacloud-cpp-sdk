// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAMANUALSCOREINFOLISTMANUALSCOREINFO_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTTOREVIEWRESPONSEBODYDATAMANUALSCOREINFOLISTMANUALSCOREINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ComplainHistories, complainHistories_);
      DARABONBA_PTR_TO_JSON(Complainable, complainable_);
      DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplainHistories, complainHistories_);
      DARABONBA_PTR_FROM_JSON(Complainable, complainable_);
      DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
    };
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo() = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo(const GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo &) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo(GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo &&) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo() = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& operator=(const GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo &) = default ;
    GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& operator=(GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->complainHistories_ != nullptr
        && this->complainable_ != nullptr && this->scoreId_ != nullptr && this->scoreNum_ != nullptr && this->scoreSubId_ != nullptr && this->scoreSubName_ != nullptr; };
    // complainHistories Field Functions 
    bool hasComplainHistories() const { return this->complainHistories_ != nullptr;};
    void deleteComplainHistories() { this->complainHistories_ = nullptr;};
    inline const Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories & complainHistories() const { DARABONBA_PTR_GET_CONST(complainHistories_, Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories) };
    inline Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories complainHistories() { DARABONBA_PTR_GET(complainHistories_, Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setComplainHistories(const Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories & complainHistories) { DARABONBA_PTR_SET_VALUE(complainHistories_, complainHistories) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setComplainHistories(Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories && complainHistories) { DARABONBA_PTR_SET_RVALUE(complainHistories_, complainHistories) };


    // complainable Field Functions 
    bool hasComplainable() const { return this->complainable_ != nullptr;};
    void deleteComplainable() { this->complainable_ = nullptr;};
    inline bool complainable() const { DARABONBA_PTR_GET_DEFAULT(complainable_, false) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setComplainable(bool complainable) { DARABONBA_PTR_SET_VALUE(complainable_, complainable) };


    // scoreId Field Functions 
    bool hasScoreId() const { return this->scoreId_ != nullptr;};
    void deleteScoreId() { this->scoreId_ = nullptr;};
    inline int64_t scoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0L) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setScoreId(int64_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreSubId Field Functions 
    bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
    void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
    inline int64_t scoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0L) };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setScoreSubId(int64_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


    // scoreSubName Field Functions 
    bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
    void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
    inline string scoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
    inline GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfo& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


  protected:
    std::shared_ptr<Models::GetResultToReviewResponseBodyDataManualScoreInfoListManualScoreInfoComplainHistories> complainHistories_ = nullptr;
    std::shared_ptr<bool> complainable_ = nullptr;
    std::shared_ptr<int64_t> scoreId_ = nullptr;
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int64_t> scoreSubId_ = nullptr;
    std::shared_ptr<string> scoreSubName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
