// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Check_range, checkRange_);
      DARABONBA_PTR_TO_JSON(Cid, cid_);
      DARABONBA_PTR_TO_JSON(Exclusion, exclusion_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lambda, lambda_);
      DARABONBA_PTR_TO_JSON(Operators, operators_);
      DARABONBA_PTR_TO_JSON(Rid, rid_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Check_range, checkRange_);
      DARABONBA_PTR_FROM_JSON(Cid, cid_);
      DARABONBA_PTR_FROM_JSON(Exclusion, exclusion_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lambda, lambda_);
      DARABONBA_PTR_FROM_JSON(Operators, operators_);
      DARABONBA_PTR_FROM_JSON(Rid, rid_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checkRange_ != nullptr
        && this->cid_ != nullptr && this->exclusion_ != nullptr && this->id_ != nullptr && this->lambda_ != nullptr && this->operators_ != nullptr
        && this->rid_ != nullptr; };
    // checkRange Field Functions 
    bool hasCheckRange() const { return this->checkRange_ != nullptr;};
    void deleteCheckRange() { this->checkRange_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange & checkRange() const { DARABONBA_PTR_GET_CONST(checkRange_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange checkRange() { DARABONBA_PTR_GET(checkRange_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setCheckRange(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange & checkRange) { DARABONBA_PTR_SET_VALUE(checkRange_, checkRange) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setCheckRange(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange && checkRange) { DARABONBA_PTR_SET_RVALUE(checkRange_, checkRange) };


    // cid Field Functions 
    bool hasCid() const { return this->cid_ != nullptr;};
    void deleteCid() { this->cid_ = nullptr;};
    inline string cid() const { DARABONBA_PTR_GET_DEFAULT(cid_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setCid(string cid) { DARABONBA_PTR_SET_VALUE(cid_, cid) };


    // exclusion Field Functions 
    bool hasExclusion() const { return this->exclusion_ != nullptr;};
    void deleteExclusion() { this->exclusion_ = nullptr;};
    inline int32_t exclusion() const { DARABONBA_PTR_GET_DEFAULT(exclusion_, 0) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setExclusion(int32_t exclusion) { DARABONBA_PTR_SET_VALUE(exclusion_, exclusion) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lambda Field Functions 
    bool hasLambda() const { return this->lambda_ != nullptr;};
    void deleteLambda() { this->lambda_ = nullptr;};
    inline string lambda() const { DARABONBA_PTR_GET_DEFAULT(lambda_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setLambda(string lambda) { DARABONBA_PTR_SET_VALUE(lambda_, lambda) };


    // operators Field Functions 
    bool hasOperators() const { return this->operators_ != nullptr;};
    void deleteOperators() { this->operators_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators & operators() const { DARABONBA_PTR_GET_CONST(operators_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators operators() { DARABONBA_PTR_GET(operators_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setOperators(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators & operators) { DARABONBA_PTR_SET_VALUE(operators_, operators) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setOperators(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators && operators) { DARABONBA_PTR_SET_RVALUE(operators_, operators) };


    // rid Field Functions 
    bool hasRid() const { return this->rid_ != nullptr;};
    void deleteRid() { this->rid_ = nullptr;};
    inline string rid() const { DARABONBA_PTR_GET_DEFAULT(rid_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditions& setRid(string rid) { DARABONBA_PTR_SET_VALUE(rid_, rid) };


  protected:
    // 检测范围
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsCheckRange> checkRange_ = nullptr;
    // 条件id，可能是db中的主键，也可能是转换成的a, b, c
    std::shared_ptr<string> cid_ = nullptr;
    // 排除
    std::shared_ptr<int32_t> exclusion_ = nullptr;
    // 在db中的主键
    std::shared_ptr<int64_t> id_ = nullptr;
    // Lambda表达式：例如:a&&b
    std::shared_ptr<string> lambda_ = nullptr;
    // 算子列表
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperators> operators_ = nullptr;
    // 条件所属的规则id
    std::shared_ptr<string> rid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
