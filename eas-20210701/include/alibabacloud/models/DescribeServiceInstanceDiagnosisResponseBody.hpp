// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEINSTANCEDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEINSTANCEDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceInstanceDiagnosisResponseBodyDiagnosis.hpp>
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
    virtual bool empty() const override { return this->diagnosis_ == nullptr
        && return this->requestId_ == nullptr; };
    // diagnosis Field Functions 
    bool hasDiagnosis() const { return this->diagnosis_ != nullptr;};
    void deleteDiagnosis() { this->diagnosis_ = nullptr;};
    inline const DescribeServiceInstanceDiagnosisResponseBodyDiagnosis & diagnosis() const { DARABONBA_PTR_GET_CONST(diagnosis_, DescribeServiceInstanceDiagnosisResponseBodyDiagnosis) };
    inline DescribeServiceInstanceDiagnosisResponseBodyDiagnosis diagnosis() { DARABONBA_PTR_GET(diagnosis_, DescribeServiceInstanceDiagnosisResponseBodyDiagnosis) };
    inline DescribeServiceInstanceDiagnosisResponseBody& setDiagnosis(const DescribeServiceInstanceDiagnosisResponseBodyDiagnosis & diagnosis) { DARABONBA_PTR_SET_VALUE(diagnosis_, diagnosis) };
    inline DescribeServiceInstanceDiagnosisResponseBody& setDiagnosis(DescribeServiceInstanceDiagnosisResponseBodyDiagnosis && diagnosis) { DARABONBA_PTR_SET_RVALUE(diagnosis_, diagnosis) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceInstanceDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostics information.
    std::shared_ptr<DescribeServiceInstanceDiagnosisResponseBodyDiagnosis> diagnosis_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
