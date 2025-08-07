// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORSOPERATOR_HPP_
#define ALIBABACLOUD_MODELS_GETRESULTRESPONSEBODYDATARESULTINFOHITRESULTHITRESULTCONDITIONSCONDITIONSOPERATORSOPERATOR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Oid, oid_);
      DARABONBA_PTR_TO_JSON(Param, param_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Oid, oid_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator &&) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator() = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& operator=(const GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator &) = default ;
    GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& operator=(GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->name_ != nullptr && this->oid_ != nullptr && this->param_ != nullptr && this->type_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // oid Field Functions 
    bool hasOid() const { return this->oid_ != nullptr;};
    void deleteOid() { this->oid_ = nullptr;};
    inline string oid() const { DARABONBA_PTR_GET_DEFAULT(oid_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& setOid(string oid) { DARABONBA_PTR_SET_VALUE(oid_, oid) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam & param() const { DARABONBA_PTR_GET_CONST(param_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam) };
    inline Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam param() { DARABONBA_PTR_GET(param_, Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& setParam(const Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam & param) { DARABONBA_PTR_SET_VALUE(param_, param) };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& setParam(Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam && param) { DARABONBA_PTR_SET_RVALUE(param_, param) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperator& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 主键id
    std::shared_ptr<int64_t> id_ = nullptr;
    // 算子名
    std::shared_ptr<string> name_ = nullptr;
    // 可能是主键id，也可能是前端生成的id
    std::shared_ptr<string> oid_ = nullptr;
    // 算子参数
    std::shared_ptr<Models::GetResultResponseBodyDataResultInfoHitResultHitResultConditionsConditionsOperatorsOperatorParam> param_ = nullptr;
    // 算子类别
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
