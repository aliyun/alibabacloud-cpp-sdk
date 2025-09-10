// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEINSTANCEDIAGNOSISRESPONSEBODYDIAGNOSIS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEINSTANCEDIAGNOSISRESPONSEBODYDIAGNOSIS_HPP_
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
  class DescribeServiceInstanceDiagnosisResponseBodyDiagnosis : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& obj) { 
      DARABONBA_PTR_TO_JSON(Advices, advices_);
      DARABONBA_PTR_TO_JSON(Causes, causes_);
      DARABONBA_PTR_TO_JSON(Error, error_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& obj) { 
      DARABONBA_PTR_FROM_JSON(Advices, advices_);
      DARABONBA_PTR_FROM_JSON(Causes, causes_);
      DARABONBA_PTR_FROM_JSON(Error, error_);
    };
    DescribeServiceInstanceDiagnosisResponseBodyDiagnosis() = default ;
    DescribeServiceInstanceDiagnosisResponseBodyDiagnosis(const DescribeServiceInstanceDiagnosisResponseBodyDiagnosis &) = default ;
    DescribeServiceInstanceDiagnosisResponseBodyDiagnosis(DescribeServiceInstanceDiagnosisResponseBodyDiagnosis &&) = default ;
    DescribeServiceInstanceDiagnosisResponseBodyDiagnosis(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceInstanceDiagnosisResponseBodyDiagnosis() = default ;
    DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& operator=(const DescribeServiceInstanceDiagnosisResponseBodyDiagnosis &) = default ;
    DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& operator=(DescribeServiceInstanceDiagnosisResponseBodyDiagnosis &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->advices_ != nullptr
        && this->causes_ != nullptr && this->error_ != nullptr; };
    // advices Field Functions 
    bool hasAdvices() const { return this->advices_ != nullptr;};
    void deleteAdvices() { this->advices_ = nullptr;};
    inline const vector<string> & advices() const { DARABONBA_PTR_GET_CONST(advices_, vector<string>) };
    inline vector<string> advices() { DARABONBA_PTR_GET(advices_, vector<string>) };
    inline DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& setAdvices(const vector<string> & advices) { DARABONBA_PTR_SET_VALUE(advices_, advices) };
    inline DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& setAdvices(vector<string> && advices) { DARABONBA_PTR_SET_RVALUE(advices_, advices) };


    // causes Field Functions 
    bool hasCauses() const { return this->causes_ != nullptr;};
    void deleteCauses() { this->causes_ = nullptr;};
    inline const vector<string> & causes() const { DARABONBA_PTR_GET_CONST(causes_, vector<string>) };
    inline vector<string> causes() { DARABONBA_PTR_GET(causes_, vector<string>) };
    inline DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& setCauses(const vector<string> & causes) { DARABONBA_PTR_SET_VALUE(causes_, causes) };
    inline DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& setCauses(vector<string> && causes) { DARABONBA_PTR_SET_RVALUE(causes_, causes) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline DescribeServiceInstanceDiagnosisResponseBodyDiagnosis& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


  protected:
    // The solutions to the errors.
    std::shared_ptr<vector<string>> advices_ = nullptr;
    // The causes of the errors.
    std::shared_ptr<vector<string>> causes_ = nullptr;
    // The error message.
    std::shared_ptr<string> error_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
