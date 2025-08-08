// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODYRESULTDATADATAEXTATTRS_HPP_
#define ALIBABACLOUD_MODELS_QUERYTOUCHLISTRESPONSEBODYRESULTDATADATAEXTATTRS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryTouchListResponseBodyResultDataDataExtAttrs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTouchListResponseBodyResultDataDataExtAttrs& obj) { 
      DARABONBA_PTR_TO_JSON(Ani, ani_);
      DARABONBA_PTR_TO_JSON(Dnis, dnis_);
      DARABONBA_PTR_TO_JSON(EvaluationLevel, evaluationLevel_);
      DARABONBA_PTR_TO_JSON(EvaluationScore, evaluationScore_);
      DARABONBA_PTR_TO_JSON(EvaluationSolution, evaluationSolution_);
      DARABONBA_PTR_TO_JSON(EvaluationStatus, evaluationStatus_);
      DARABONBA_PTR_TO_JSON(OnlineJoinRespInterval, onlineJoinRespInterval_);
      DARABONBA_PTR_TO_JSON(OnlineSessionSource, onlineSessionSource_);
      DARABONBA_PTR_TO_JSON(OutCallRouteNumber, outCallRouteNumber_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTouchListResponseBodyResultDataDataExtAttrs& obj) { 
      DARABONBA_PTR_FROM_JSON(Ani, ani_);
      DARABONBA_PTR_FROM_JSON(Dnis, dnis_);
      DARABONBA_PTR_FROM_JSON(EvaluationLevel, evaluationLevel_);
      DARABONBA_PTR_FROM_JSON(EvaluationScore, evaluationScore_);
      DARABONBA_PTR_FROM_JSON(EvaluationSolution, evaluationSolution_);
      DARABONBA_PTR_FROM_JSON(EvaluationStatus, evaluationStatus_);
      DARABONBA_PTR_FROM_JSON(OnlineJoinRespInterval, onlineJoinRespInterval_);
      DARABONBA_PTR_FROM_JSON(OnlineSessionSource, onlineSessionSource_);
      DARABONBA_PTR_FROM_JSON(OutCallRouteNumber, outCallRouteNumber_);
    };
    QueryTouchListResponseBodyResultDataDataExtAttrs() = default ;
    QueryTouchListResponseBodyResultDataDataExtAttrs(const QueryTouchListResponseBodyResultDataDataExtAttrs &) = default ;
    QueryTouchListResponseBodyResultDataDataExtAttrs(QueryTouchListResponseBodyResultDataDataExtAttrs &&) = default ;
    QueryTouchListResponseBodyResultDataDataExtAttrs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTouchListResponseBodyResultDataDataExtAttrs() = default ;
    QueryTouchListResponseBodyResultDataDataExtAttrs& operator=(const QueryTouchListResponseBodyResultDataDataExtAttrs &) = default ;
    QueryTouchListResponseBodyResultDataDataExtAttrs& operator=(QueryTouchListResponseBodyResultDataDataExtAttrs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ani_ != nullptr
        && this->dnis_ != nullptr && this->evaluationLevel_ != nullptr && this->evaluationScore_ != nullptr && this->evaluationSolution_ != nullptr && this->evaluationStatus_ != nullptr
        && this->onlineJoinRespInterval_ != nullptr && this->onlineSessionSource_ != nullptr && this->outCallRouteNumber_ != nullptr; };
    // ani Field Functions 
    bool hasAni() const { return this->ani_ != nullptr;};
    void deleteAni() { this->ani_ = nullptr;};
    inline string ani() const { DARABONBA_PTR_GET_DEFAULT(ani_, "") };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setAni(string ani) { DARABONBA_PTR_SET_VALUE(ani_, ani) };


    // dnis Field Functions 
    bool hasDnis() const { return this->dnis_ != nullptr;};
    void deleteDnis() { this->dnis_ = nullptr;};
    inline string dnis() const { DARABONBA_PTR_GET_DEFAULT(dnis_, "") };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setDnis(string dnis) { DARABONBA_PTR_SET_VALUE(dnis_, dnis) };


    // evaluationLevel Field Functions 
    bool hasEvaluationLevel() const { return this->evaluationLevel_ != nullptr;};
    void deleteEvaluationLevel() { this->evaluationLevel_ = nullptr;};
    inline int32_t evaluationLevel() const { DARABONBA_PTR_GET_DEFAULT(evaluationLevel_, 0) };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setEvaluationLevel(int32_t evaluationLevel) { DARABONBA_PTR_SET_VALUE(evaluationLevel_, evaluationLevel) };


    // evaluationScore Field Functions 
    bool hasEvaluationScore() const { return this->evaluationScore_ != nullptr;};
    void deleteEvaluationScore() { this->evaluationScore_ = nullptr;};
    inline int32_t evaluationScore() const { DARABONBA_PTR_GET_DEFAULT(evaluationScore_, 0) };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setEvaluationScore(int32_t evaluationScore) { DARABONBA_PTR_SET_VALUE(evaluationScore_, evaluationScore) };


    // evaluationSolution Field Functions 
    bool hasEvaluationSolution() const { return this->evaluationSolution_ != nullptr;};
    void deleteEvaluationSolution() { this->evaluationSolution_ = nullptr;};
    inline int32_t evaluationSolution() const { DARABONBA_PTR_GET_DEFAULT(evaluationSolution_, 0) };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setEvaluationSolution(int32_t evaluationSolution) { DARABONBA_PTR_SET_VALUE(evaluationSolution_, evaluationSolution) };


    // evaluationStatus Field Functions 
    bool hasEvaluationStatus() const { return this->evaluationStatus_ != nullptr;};
    void deleteEvaluationStatus() { this->evaluationStatus_ = nullptr;};
    inline int32_t evaluationStatus() const { DARABONBA_PTR_GET_DEFAULT(evaluationStatus_, 0) };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setEvaluationStatus(int32_t evaluationStatus) { DARABONBA_PTR_SET_VALUE(evaluationStatus_, evaluationStatus) };


    // onlineJoinRespInterval Field Functions 
    bool hasOnlineJoinRespInterval() const { return this->onlineJoinRespInterval_ != nullptr;};
    void deleteOnlineJoinRespInterval() { this->onlineJoinRespInterval_ = nullptr;};
    inline int32_t onlineJoinRespInterval() const { DARABONBA_PTR_GET_DEFAULT(onlineJoinRespInterval_, 0) };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setOnlineJoinRespInterval(int32_t onlineJoinRespInterval) { DARABONBA_PTR_SET_VALUE(onlineJoinRespInterval_, onlineJoinRespInterval) };


    // onlineSessionSource Field Functions 
    bool hasOnlineSessionSource() const { return this->onlineSessionSource_ != nullptr;};
    void deleteOnlineSessionSource() { this->onlineSessionSource_ = nullptr;};
    inline int32_t onlineSessionSource() const { DARABONBA_PTR_GET_DEFAULT(onlineSessionSource_, 0) };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setOnlineSessionSource(int32_t onlineSessionSource) { DARABONBA_PTR_SET_VALUE(onlineSessionSource_, onlineSessionSource) };


    // outCallRouteNumber Field Functions 
    bool hasOutCallRouteNumber() const { return this->outCallRouteNumber_ != nullptr;};
    void deleteOutCallRouteNumber() { this->outCallRouteNumber_ = nullptr;};
    inline string outCallRouteNumber() const { DARABONBA_PTR_GET_DEFAULT(outCallRouteNumber_, "") };
    inline QueryTouchListResponseBodyResultDataDataExtAttrs& setOutCallRouteNumber(string outCallRouteNumber) { DARABONBA_PTR_SET_VALUE(outCallRouteNumber_, outCallRouteNumber) };


  protected:
    std::shared_ptr<string> ani_ = nullptr;
    std::shared_ptr<string> dnis_ = nullptr;
    std::shared_ptr<int32_t> evaluationLevel_ = nullptr;
    std::shared_ptr<int32_t> evaluationScore_ = nullptr;
    std::shared_ptr<int32_t> evaluationSolution_ = nullptr;
    std::shared_ptr<int32_t> evaluationStatus_ = nullptr;
    std::shared_ptr<int32_t> onlineJoinRespInterval_ = nullptr;
    std::shared_ptr<int32_t> onlineSessionSource_ = nullptr;
    std::shared_ptr<string> outCallRouteNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
