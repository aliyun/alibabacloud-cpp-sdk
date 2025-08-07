// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITSCORE_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITSCORE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitScoreHitScore.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitScore : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitScore& obj) { 
      DARABONBA_PTR_TO_JSON(HitScore, hitScore_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitScore& obj) { 
      DARABONBA_PTR_FROM_JSON(HitScore, hitScore_);
    };
    GetResultResponseBodyDataResultInfoHitScore() = default ;
    GetResultResponseBodyDataResultInfoHitScore(const GetResultResponseBodyDataResultInfoHitScore &) = default ;
    GetResultResponseBodyDataResultInfoHitScore(GetResultResponseBodyDataResultInfoHitScore &&) = default ;
    GetResultResponseBodyDataResultInfoHitScore(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitScore() = default ;
    GetResultResponseBodyDataResultInfoHitScore& operator=(const GetResultResponseBodyDataResultInfoHitScore &) = default ;
    GetResultResponseBodyDataResultInfoHitScore& operator=(GetResultResponseBodyDataResultInfoHitScore &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hitScore_ != nullptr; };
    // hitScore Field Functions 
    bool hasHitScore() const { return this->hitScore_ != nullptr;};
    void deleteHitScore() { this->hitScore_ = nullptr;};
    inline const vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore> & hitScore() const { DARABONBA_PTR_GET_CONST(hitScore_, vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore>) };
    inline vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore> hitScore() { DARABONBA_PTR_GET(hitScore_, vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore>) };
    inline GetResultResponseBodyDataResultInfoHitScore& setHitScore(const vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore> & hitScore) { DARABONBA_PTR_SET_VALUE(hitScore_, hitScore) };
    inline GetResultResponseBodyDataResultInfoHitScore& setHitScore(vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore> && hitScore) { DARABONBA_PTR_SET_RVALUE(hitScore_, hitScore) };


  protected:
    std::shared_ptr<vector<Models::GetResultResponseBodyDataResultInfoHitScoreHitScore>> hitScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
