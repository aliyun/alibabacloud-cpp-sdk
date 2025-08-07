// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditions.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultHits.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResult& obj) { 
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(Hits, hits_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_TO_JSON(SchemeVersion, schemeVersion_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(Hits, hits_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ReviewResult, reviewResult_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
      DARABONBA_PTR_FROM_JSON(SchemeVersion, schemeVersion_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResult() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResult(const GetResultResponseBodyDataResultInfoHitResultHitResult &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResult(GetResultResponseBodyDataResultInfoHitResultHitResult &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResult() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResult& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResult &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResult& operator=(GetResultResponseBodyDataResultInfoHitResultHitResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->conditions_ != nullptr
        && this->hits_ != nullptr && this->name_ != nullptr && this->reviewResult_ != nullptr && this->rid_ != nullptr && this->schemeId_ != nullptr
        && this->schemeVersion_ != nullptr && this->score_ != nullptr && this->type_ != nullptr; };
    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions conditions() { DARABONBA_PTR_GET(conditions_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setConditions(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setConditions(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    // hits Field Functions 
    bool hasHits() const { return this->hits_ != nullptr;};
    void deleteHits() { this->hits_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits & hits() const { DARABONBA_PTR_GET_CONST(hits_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits hits() { DARABONBA_PTR_GET(hits_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setHits(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits & hits) { DARABONBA_PTR_SET_VALUE(hits_, hits) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setHits(Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits && hits) { DARABONBA_PTR_SET_RVALUE(hits_, hits) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reviewResult Field Functions 
    bool hasReviewResult() const { return this->reviewResult_ != nullptr;};
    void deleteReviewResult() { this->reviewResult_ = nullptr;};
    inline int32_t reviewResult() const { DARABONBA_PTR_GET_DEFAULT(reviewResult_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setReviewResult(int32_t reviewResult) { DARABONBA_PTR_SET_VALUE(reviewResult_, reviewResult) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t schemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


    // schemeVersion Field Functions 
    bool hasSchemeVersion() const { return this->schemeVersion_ != nullptr;};
    void deleteSchemeVersion() { this->schemeVersion_ = nullptr;};
    inline int64_t schemeVersion() const { DARABONBA_PTR_GET_DEFAULT(schemeVersion_, 0L) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setSchemeVersion(int64_t schemeVersion) { DARABONBA_PTR_SET_VALUE(schemeVersion_, schemeVersion) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditions> conditions_ = nullptr;
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultHits> hits_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> reviewResult_ = nullptr;
    std::shared_ptr<string> rid_ = nullptr;
    std::shared_ptr<int64_t> schemeId_ = nullptr;
    std::shared_ptr<int64_t> schemeVersion_ = nullptr;
    std::shared_ptr<int32_t> score_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
