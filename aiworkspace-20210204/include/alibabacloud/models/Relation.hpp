// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELATION_HPP_
#define ALIBABACLOUD_MODELS_RELATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LineageRelation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class Relation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Relation& obj) { 
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(LineageRelation, lineageRelation_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, Relation& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(LineageRelation, lineageRelation_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    Relation() = default ;
    Relation(const Relation &) = default ;
    Relation(Relation &&) = default ;
    Relation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Relation() = default ;
    Relation& operator=(const Relation &) = default ;
    Relation& operator=(Relation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errMsg_ == nullptr
        && return this->lineageRelation_ == nullptr && return this->result_ == nullptr; };
    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline Relation& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // lineageRelation Field Functions 
    bool hasLineageRelation() const { return this->lineageRelation_ != nullptr;};
    void deleteLineageRelation() { this->lineageRelation_ = nullptr;};
    inline const LineageRelation & lineageRelation() const { DARABONBA_PTR_GET_CONST(lineageRelation_, LineageRelation) };
    inline LineageRelation lineageRelation() { DARABONBA_PTR_GET(lineageRelation_, LineageRelation) };
    inline Relation& setLineageRelation(const LineageRelation & lineageRelation) { DARABONBA_PTR_SET_VALUE(lineageRelation_, lineageRelation) };
    inline Relation& setLineageRelation(LineageRelation && lineageRelation) { DARABONBA_PTR_SET_RVALUE(lineageRelation_, lineageRelation) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline bool result() const { DARABONBA_PTR_GET_DEFAULT(result_, false) };
    inline Relation& setResult(bool result) { DARABONBA_PTR_SET_VALUE(result_, result) };


  protected:
    std::shared_ptr<string> errMsg_ = nullptr;
    std::shared_ptr<LineageRelation> lineageRelation_ = nullptr;
    std::shared_ptr<bool> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
