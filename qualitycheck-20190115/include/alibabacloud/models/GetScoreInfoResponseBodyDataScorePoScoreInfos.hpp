// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATASCOREPOSCOREINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATASCOREPOSCOREINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetScoreInfoResponseBodyDataScorePoScoreInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScoreInfoResponseBodyDataScorePoScoreInfos& obj) { 
      DARABONBA_PTR_TO_JSON(ScoreParam, scoreParam_);
    };
    friend void from_json(const Darabonba::Json& j, GetScoreInfoResponseBodyDataScorePoScoreInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(ScoreParam, scoreParam_);
    };
    GetScoreInfoResponseBodyDataScorePoScoreInfos() = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfos(const GetScoreInfoResponseBodyDataScorePoScoreInfos &) = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfos(GetScoreInfoResponseBodyDataScorePoScoreInfos &&) = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScoreInfoResponseBodyDataScorePoScoreInfos() = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfos& operator=(const GetScoreInfoResponseBodyDataScorePoScoreInfos &) = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfos& operator=(GetScoreInfoResponseBodyDataScorePoScoreInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scoreParam_ == nullptr; };
    // scoreParam Field Functions 
    bool hasScoreParam() const { return this->scoreParam_ != nullptr;};
    void deleteScoreParam() { this->scoreParam_ = nullptr;};
    inline const vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam> & scoreParam() const { DARABONBA_PTR_GET_CONST(scoreParam_, vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam>) };
    inline vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam> scoreParam() { DARABONBA_PTR_GET(scoreParam_, vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam>) };
    inline GetScoreInfoResponseBodyDataScorePoScoreInfos& setScoreParam(const vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam> & scoreParam) { DARABONBA_PTR_SET_VALUE(scoreParam_, scoreParam) };
    inline GetScoreInfoResponseBodyDataScorePoScoreInfos& setScoreParam(vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam> && scoreParam) { DARABONBA_PTR_SET_RVALUE(scoreParam_, scoreParam) };


  protected:
    std::shared_ptr<vector<Models::GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam>> scoreParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
