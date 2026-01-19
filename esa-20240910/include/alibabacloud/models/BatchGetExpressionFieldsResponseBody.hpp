// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETEXPRESSIONFIELDSRESPONSEBODY_HPP_
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
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fields_ == nullptr
        && this->id_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<string> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
      inline vector<string> getFields() { DARABONBA_PTR_GET(fields_, vector<string>) };
      inline Fields& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Fields& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Fields& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // List of match fields for a single expression.
      shared_ptr<vector<string>> fields_ {};
      // ID of the expression, corresponding to the ID in the input parameters.
      shared_ptr<string> id_ {};
    };

    virtual bool empty() const override { return this->fields_ == nullptr
        && this->requestId_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<BatchGetExpressionFieldsResponseBody::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<BatchGetExpressionFieldsResponseBody::Fields>) };
    inline vector<BatchGetExpressionFieldsResponseBody::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<BatchGetExpressionFieldsResponseBody::Fields>) };
    inline BatchGetExpressionFieldsResponseBody& setFields(const vector<BatchGetExpressionFieldsResponseBody::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline BatchGetExpressionFieldsResponseBody& setFields(vector<BatchGetExpressionFieldsResponseBody::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetExpressionFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of match fields.
    shared_ptr<vector<BatchGetExpressionFieldsResponseBody::Fields>> fields_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
