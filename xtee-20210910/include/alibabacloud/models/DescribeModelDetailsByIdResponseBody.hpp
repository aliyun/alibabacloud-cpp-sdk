// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELDETAILSBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELDETAILSBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeModelDetailsByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelDetailsByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelDetailsByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeModelDetailsByIdResponseBody() = default ;
    DescribeModelDetailsByIdResponseBody(const DescribeModelDetailsByIdResponseBody &) = default ;
    DescribeModelDetailsByIdResponseBody(DescribeModelDetailsByIdResponseBody &&) = default ;
    DescribeModelDetailsByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelDetailsByIdResponseBody() = default ;
    DescribeModelDetailsByIdResponseBody& operator=(const DescribeModelDetailsByIdResponseBody &) = default ;
    DescribeModelDetailsByIdResponseBody& operator=(DescribeModelDetailsByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(modelEffectEvaluation, modelEffectEvaluation_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(modelEffectEvaluation, modelEffectEvaluation_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->modelEffectEvaluation_ == nullptr; };
      // modelEffectEvaluation Field Functions 
      bool hasModelEffectEvaluation() const { return this->modelEffectEvaluation_ != nullptr;};
      void deleteModelEffectEvaluation() { this->modelEffectEvaluation_ = nullptr;};
      inline string getModelEffectEvaluation() const { DARABONBA_PTR_GET_DEFAULT(modelEffectEvaluation_, "") };
      inline ResultObject& setModelEffectEvaluation(string modelEffectEvaluation) { DARABONBA_PTR_SET_VALUE(modelEffectEvaluation_, modelEffectEvaluation) };


    protected:
      // Model prediction result.
      shared_ptr<string> modelEffectEvaluation_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelDetailsByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const vector<DescribeModelDetailsByIdResponseBody::ResultObject> & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, vector<DescribeModelDetailsByIdResponseBody::ResultObject>) };
    inline vector<DescribeModelDetailsByIdResponseBody::ResultObject> getResultObject() { DARABONBA_PTR_GET(resultObject_, vector<DescribeModelDetailsByIdResponseBody::ResultObject>) };
    inline DescribeModelDetailsByIdResponseBody& setResultObject(const vector<DescribeModelDetailsByIdResponseBody::ResultObject> & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeModelDetailsByIdResponseBody& setResultObject(vector<DescribeModelDetailsByIdResponseBody::ResultObject> && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Returned result information
    shared_ptr<vector<DescribeModelDetailsByIdResponseBody::ResultObject>> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
