// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATASCOREPO_HPP_
#define ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATASCOREPO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScoreInfoResponseBodyDataScorePoScoreInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetScoreInfoResponseBodyDataScorePo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScoreInfoResponseBodyDataScorePo& obj) { 
      DARABONBA_PTR_TO_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_TO_JSON(ScoreInfos, scoreInfos_);
      DARABONBA_PTR_TO_JSON(ScoreName, scoreName_);
    };
    friend void from_json(const Darabonba::Json& j, GetScoreInfoResponseBodyDataScorePo& obj) { 
      DARABONBA_PTR_FROM_JSON(ScoreId, scoreId_);
      DARABONBA_PTR_FROM_JSON(ScoreInfos, scoreInfos_);
      DARABONBA_PTR_FROM_JSON(ScoreName, scoreName_);
    };
    GetScoreInfoResponseBodyDataScorePo() = default ;
    GetScoreInfoResponseBodyDataScorePo(const GetScoreInfoResponseBodyDataScorePo &) = default ;
    GetScoreInfoResponseBodyDataScorePo(GetScoreInfoResponseBodyDataScorePo &&) = default ;
    GetScoreInfoResponseBodyDataScorePo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScoreInfoResponseBodyDataScorePo() = default ;
    GetScoreInfoResponseBodyDataScorePo& operator=(const GetScoreInfoResponseBodyDataScorePo &) = default ;
    GetScoreInfoResponseBodyDataScorePo& operator=(GetScoreInfoResponseBodyDataScorePo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scoreId_ == nullptr
        && return this->scoreInfos_ == nullptr && return this->scoreName_ == nullptr; };
    // scoreId Field Functions 
    bool hasScoreId() const { return this->scoreId_ != nullptr;};
    void deleteScoreId() { this->scoreId_ = nullptr;};
    inline int32_t scoreId() const { DARABONBA_PTR_GET_DEFAULT(scoreId_, 0) };
    inline GetScoreInfoResponseBodyDataScorePo& setScoreId(int32_t scoreId) { DARABONBA_PTR_SET_VALUE(scoreId_, scoreId) };


    // scoreInfos Field Functions 
    bool hasScoreInfos() const { return this->scoreInfos_ != nullptr;};
    void deleteScoreInfos() { this->scoreInfos_ = nullptr;};
    inline const Models::GetScoreInfoResponseBodyDataScorePoScoreInfos & scoreInfos() const { DARABONBA_PTR_GET_CONST(scoreInfos_, Models::GetScoreInfoResponseBodyDataScorePoScoreInfos) };
    inline Models::GetScoreInfoResponseBodyDataScorePoScoreInfos scoreInfos() { DARABONBA_PTR_GET(scoreInfos_, Models::GetScoreInfoResponseBodyDataScorePoScoreInfos) };
    inline GetScoreInfoResponseBodyDataScorePo& setScoreInfos(const Models::GetScoreInfoResponseBodyDataScorePoScoreInfos & scoreInfos) { DARABONBA_PTR_SET_VALUE(scoreInfos_, scoreInfos) };
    inline GetScoreInfoResponseBodyDataScorePo& setScoreInfos(Models::GetScoreInfoResponseBodyDataScorePoScoreInfos && scoreInfos) { DARABONBA_PTR_SET_RVALUE(scoreInfos_, scoreInfos) };


    // scoreName Field Functions 
    bool hasScoreName() const { return this->scoreName_ != nullptr;};
    void deleteScoreName() { this->scoreName_ = nullptr;};
    inline string scoreName() const { DARABONBA_PTR_GET_DEFAULT(scoreName_, "") };
    inline GetScoreInfoResponseBodyDataScorePo& setScoreName(string scoreName) { DARABONBA_PTR_SET_VALUE(scoreName_, scoreName) };


  protected:
    std::shared_ptr<int32_t> scoreId_ = nullptr;
    std::shared_ptr<Models::GetScoreInfoResponseBodyDataScorePoScoreInfos> scoreInfos_ = nullptr;
    std::shared_ptr<string> scoreName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
