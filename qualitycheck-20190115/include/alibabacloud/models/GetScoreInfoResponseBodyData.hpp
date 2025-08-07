// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScoreInfoResponseBodyDataScorePo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetScoreInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScoreInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ScorePo, scorePo_);
    };
    friend void from_json(const Darabonba::Json& j, GetScoreInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ScorePo, scorePo_);
    };
    GetScoreInfoResponseBodyData() = default ;
    GetScoreInfoResponseBodyData(const GetScoreInfoResponseBodyData &) = default ;
    GetScoreInfoResponseBodyData(GetScoreInfoResponseBodyData &&) = default ;
    GetScoreInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScoreInfoResponseBodyData() = default ;
    GetScoreInfoResponseBodyData& operator=(const GetScoreInfoResponseBodyData &) = default ;
    GetScoreInfoResponseBodyData& operator=(GetScoreInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scorePo_ != nullptr; };
    // scorePo Field Functions 
    bool hasScorePo() const { return this->scorePo_ != nullptr;};
    void deleteScorePo() { this->scorePo_ = nullptr;};
    inline const vector<Models::GetScoreInfoResponseBodyDataScorePo> & scorePo() const { DARABONBA_PTR_GET_CONST(scorePo_, vector<Models::GetScoreInfoResponseBodyDataScorePo>) };
    inline vector<Models::GetScoreInfoResponseBodyDataScorePo> scorePo() { DARABONBA_PTR_GET(scorePo_, vector<Models::GetScoreInfoResponseBodyDataScorePo>) };
    inline GetScoreInfoResponseBodyData& setScorePo(const vector<Models::GetScoreInfoResponseBodyDataScorePo> & scorePo) { DARABONBA_PTR_SET_VALUE(scorePo_, scorePo) };
    inline GetScoreInfoResponseBodyData& setScorePo(vector<Models::GetScoreInfoResponseBodyDataScorePo> && scorePo) { DARABONBA_PTR_SET_RVALUE(scorePo_, scorePo) };


  protected:
    std::shared_ptr<vector<Models::GetScoreInfoResponseBodyDataScorePo>> scorePo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
