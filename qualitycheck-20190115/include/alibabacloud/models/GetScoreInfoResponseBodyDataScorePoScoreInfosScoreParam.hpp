// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATASCOREPOSCOREINFOSSCOREPARAM_HPP_
#define ALIBABACLOUD_MODELS_GETSCOREINFORESPONSEBODYDATASCOREPOSCOREINFOSSCOREPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& obj) { 
      DARABONBA_PTR_TO_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_TO_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_TO_JSON(ScoreSubName, scoreSubName_);
      DARABONBA_PTR_TO_JSON(ScoreType, scoreType_);
    };
    friend void from_json(const Darabonba::Json& j, GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ScoreNum, scoreNum_);
      DARABONBA_PTR_FROM_JSON(ScoreSubId, scoreSubId_);
      DARABONBA_PTR_FROM_JSON(ScoreSubName, scoreSubName_);
      DARABONBA_PTR_FROM_JSON(ScoreType, scoreType_);
    };
    GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam() = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam(const GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam &) = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam(GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam &&) = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam() = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& operator=(const GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam &) = default ;
    GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& operator=(GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scoreNum_ == nullptr
        && return this->scoreSubId_ == nullptr && return this->scoreSubName_ == nullptr && return this->scoreType_ == nullptr; };
    // scoreNum Field Functions 
    bool hasScoreNum() const { return this->scoreNum_ != nullptr;};
    void deleteScoreNum() { this->scoreNum_ = nullptr;};
    inline int32_t scoreNum() const { DARABONBA_PTR_GET_DEFAULT(scoreNum_, 0) };
    inline GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& setScoreNum(int32_t scoreNum) { DARABONBA_PTR_SET_VALUE(scoreNum_, scoreNum) };


    // scoreSubId Field Functions 
    bool hasScoreSubId() const { return this->scoreSubId_ != nullptr;};
    void deleteScoreSubId() { this->scoreSubId_ = nullptr;};
    inline int32_t scoreSubId() const { DARABONBA_PTR_GET_DEFAULT(scoreSubId_, 0) };
    inline GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& setScoreSubId(int32_t scoreSubId) { DARABONBA_PTR_SET_VALUE(scoreSubId_, scoreSubId) };


    // scoreSubName Field Functions 
    bool hasScoreSubName() const { return this->scoreSubName_ != nullptr;};
    void deleteScoreSubName() { this->scoreSubName_ = nullptr;};
    inline string scoreSubName() const { DARABONBA_PTR_GET_DEFAULT(scoreSubName_, "") };
    inline GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& setScoreSubName(string scoreSubName) { DARABONBA_PTR_SET_VALUE(scoreSubName_, scoreSubName) };


    // scoreType Field Functions 
    bool hasScoreType() const { return this->scoreType_ != nullptr;};
    void deleteScoreType() { this->scoreType_ = nullptr;};
    inline int32_t scoreType() const { DARABONBA_PTR_GET_DEFAULT(scoreType_, 0) };
    inline GetScoreInfoResponseBodyDataScorePoScoreInfosScoreParam& setScoreType(int32_t scoreType) { DARABONBA_PTR_SET_VALUE(scoreType_, scoreType) };


  protected:
    std::shared_ptr<int32_t> scoreNum_ = nullptr;
    std::shared_ptr<int32_t> scoreSubId_ = nullptr;
    std::shared_ptr<string> scoreSubName_ = nullptr;
    std::shared_ptr<int32_t> scoreType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
