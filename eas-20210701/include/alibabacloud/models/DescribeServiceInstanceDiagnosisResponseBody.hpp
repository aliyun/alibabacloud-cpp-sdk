// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEINSTANCEDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEINSTANCEDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceInstanceDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceInstanceDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Diagnosis, diagnosis_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceInstanceDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Diagnosis, diagnosis_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceInstanceDiagnosisResponseBody() = default ;
    DescribeServiceInstanceDiagnosisResponseBody(const DescribeServiceInstanceDiagnosisResponseBody &) = default ;
    DescribeServiceInstanceDiagnosisResponseBody(DescribeServiceInstanceDiagnosisResponseBody &&) = default ;
    DescribeServiceInstanceDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceInstanceDiagnosisResponseBody() = default ;
    DescribeServiceInstanceDiagnosisResponseBody& operator=(const DescribeServiceInstanceDiagnosisResponseBody &) = default ;
    DescribeServiceInstanceDiagnosisResponseBody& operator=(DescribeServiceInstanceDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Diagnosis : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Diagnosis& obj) { 
        DARABONBA_PTR_TO_JSON(Advices, advices_);
        DARABONBA_PTR_TO_JSON(Causes, causes_);
        DARABONBA_PTR_TO_JSON(Error, error_);
      };
      friend void from_json(const Darabonba::Json& j, Diagnosis& obj) { 
        DARABONBA_PTR_FROM_JSON(Advices, advices_);
        DARABONBA_PTR_FROM_JSON(Causes, causes_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
      };
      Diagnosis() = default ;
      Diagnosis(const Diagnosis &) = default ;
      Diagnosis(Diagnosis &&) = default ;
      Diagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Diagnosis() = default ;
      Diagnosis& operator=(const Diagnosis &) = default ;
      Diagnosis& operator=(Diagnosis &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advices_ == nullptr
        && this->causes_ == nullptr && this->error_ == nullptr; };
      // advices Field Functions 
      bool hasAdvices() const { return this->advices_ != nullptr;};
      void deleteAdvices() { this->advices_ = nullptr;};
      inline const vector<string> & getAdvices() const { DARABONBA_PTR_GET_CONST(advices_, vector<string>) };
      inline vector<string> getAdvices() { DARABONBA_PTR_GET(advices_, vector<string>) };
      inline Diagnosis& setAdvices(const vector<string> & advices) { DARABONBA_PTR_SET_VALUE(advices_, advices) };
      inline Diagnosis& setAdvices(vector<string> && advices) { DARABONBA_PTR_SET_RVALUE(advices_, advices) };


      // causes Field Functions 
      bool hasCauses() const { return this->causes_ != nullptr;};
      void deleteCauses() { this->causes_ = nullptr;};
      inline const vector<string> & getCauses() const { DARABONBA_PTR_GET_CONST(causes_, vector<string>) };
      inline vector<string> getCauses() { DARABONBA_PTR_GET(causes_, vector<string>) };
      inline Diagnosis& setCauses(const vector<string> & causes) { DARABONBA_PTR_SET_VALUE(causes_, causes) };
      inline Diagnosis& setCauses(vector<string> && causes) { DARABONBA_PTR_SET_RVALUE(causes_, causes) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline Diagnosis& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    protected:
      // The solutions to the errors.
      shared_ptr<vector<string>> advices_ {};
      // The causes of the errors.
      shared_ptr<vector<string>> causes_ {};
      // The error message.
      shared_ptr<string> error_ {};
    };

    virtual bool empty() const override { return this->diagnosis_ == nullptr
        && this->requestId_ == nullptr; };
    // diagnosis Field Functions 
    bool hasDiagnosis() const { return this->diagnosis_ != nullptr;};
    void deleteDiagnosis() { this->diagnosis_ = nullptr;};
    inline const DescribeServiceInstanceDiagnosisResponseBody::Diagnosis & getDiagnosis() const { DARABONBA_PTR_GET_CONST(diagnosis_, DescribeServiceInstanceDiagnosisResponseBody::Diagnosis) };
    inline DescribeServiceInstanceDiagnosisResponseBody::Diagnosis getDiagnosis() { DARABONBA_PTR_GET(diagnosis_, DescribeServiceInstanceDiagnosisResponseBody::Diagnosis) };
    inline DescribeServiceInstanceDiagnosisResponseBody& setDiagnosis(const DescribeServiceInstanceDiagnosisResponseBody::Diagnosis & diagnosis) { DARABONBA_PTR_SET_VALUE(diagnosis_, diagnosis) };
    inline DescribeServiceInstanceDiagnosisResponseBody& setDiagnosis(DescribeServiceInstanceDiagnosisResponseBody::Diagnosis && diagnosis) { DARABONBA_PTR_SET_RVALUE(diagnosis_, diagnosis) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceInstanceDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostics information.
    shared_ptr<DescribeServiceInstanceDiagnosisResponseBody::Diagnosis> diagnosis_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
