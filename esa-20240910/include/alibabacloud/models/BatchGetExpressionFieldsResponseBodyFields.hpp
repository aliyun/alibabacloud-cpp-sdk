// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSRESPONSEBODYFIELDS_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSRESPONSEBODYFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchGetExpressionFieldsResponseBodyFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetExpressionFieldsResponseBodyFields& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetExpressionFieldsResponseBodyFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    BatchGetExpressionFieldsResponseBodyFields() = default ;
    BatchGetExpressionFieldsResponseBodyFields(const BatchGetExpressionFieldsResponseBodyFields &) = default ;
    BatchGetExpressionFieldsResponseBodyFields(BatchGetExpressionFieldsResponseBodyFields &&) = default ;
    BatchGetExpressionFieldsResponseBodyFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetExpressionFieldsResponseBodyFields() = default ;
    BatchGetExpressionFieldsResponseBodyFields& operator=(const BatchGetExpressionFieldsResponseBodyFields &) = default ;
    BatchGetExpressionFieldsResponseBodyFields& operator=(BatchGetExpressionFieldsResponseBodyFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->id_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> fields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline BatchGetExpressionFieldsResponseBodyFields& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline BatchGetExpressionFieldsResponseBodyFields& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BatchGetExpressionFieldsResponseBodyFields& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // List of match fields for a single expression.
    std::shared_ptr<vector<string>> fields_ = nullptr;
    // ID of the expression, corresponding to the ID in the input parameters.
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
