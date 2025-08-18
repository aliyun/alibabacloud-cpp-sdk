// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/BatchGetExpressionFieldsResponseBodyFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchGetExpressionFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetExpressionFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetExpressionFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchGetExpressionFieldsResponseBody() = default ;
    BatchGetExpressionFieldsResponseBody(const BatchGetExpressionFieldsResponseBody &) = default ;
    BatchGetExpressionFieldsResponseBody(BatchGetExpressionFieldsResponseBody &&) = default ;
    BatchGetExpressionFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetExpressionFieldsResponseBody() = default ;
    BatchGetExpressionFieldsResponseBody& operator=(const BatchGetExpressionFieldsResponseBody &) = default ;
    BatchGetExpressionFieldsResponseBody& operator=(BatchGetExpressionFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->requestId_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<BatchGetExpressionFieldsResponseBodyFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<BatchGetExpressionFieldsResponseBodyFields>) };
    inline vector<BatchGetExpressionFieldsResponseBodyFields> fields() { DARABONBA_PTR_GET(fields_, vector<BatchGetExpressionFieldsResponseBodyFields>) };
    inline BatchGetExpressionFieldsResponseBody& setFields(const vector<BatchGetExpressionFieldsResponseBodyFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline BatchGetExpressionFieldsResponseBody& setFields(vector<BatchGetExpressionFieldsResponseBodyFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetExpressionFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of match fields.
    std::shared_ptr<vector<BatchGetExpressionFieldsResponseBodyFields>> fields_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
