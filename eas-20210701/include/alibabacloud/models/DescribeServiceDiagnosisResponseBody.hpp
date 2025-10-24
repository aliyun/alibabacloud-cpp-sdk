// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEDIAGNOSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServiceDiagnosisResponseBodyDiagnosisList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class DescribeServiceDiagnosisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosisList, diagnosisList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceDiagnosisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosisList, diagnosisList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeServiceDiagnosisResponseBody() = default ;
    DescribeServiceDiagnosisResponseBody(const DescribeServiceDiagnosisResponseBody &) = default ;
    DescribeServiceDiagnosisResponseBody(DescribeServiceDiagnosisResponseBody &&) = default ;
    DescribeServiceDiagnosisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceDiagnosisResponseBody() = default ;
    DescribeServiceDiagnosisResponseBody& operator=(const DescribeServiceDiagnosisResponseBody &) = default ;
    DescribeServiceDiagnosisResponseBody& operator=(DescribeServiceDiagnosisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosisList_ == nullptr
        && return this->requestId_ == nullptr; };
    // diagnosisList Field Functions 
    bool hasDiagnosisList() const { return this->diagnosisList_ != nullptr;};
    void deleteDiagnosisList() { this->diagnosisList_ = nullptr;};
    inline const vector<DescribeServiceDiagnosisResponseBodyDiagnosisList> & diagnosisList() const { DARABONBA_PTR_GET_CONST(diagnosisList_, vector<DescribeServiceDiagnosisResponseBodyDiagnosisList>) };
    inline vector<DescribeServiceDiagnosisResponseBodyDiagnosisList> diagnosisList() { DARABONBA_PTR_GET(diagnosisList_, vector<DescribeServiceDiagnosisResponseBodyDiagnosisList>) };
    inline DescribeServiceDiagnosisResponseBody& setDiagnosisList(const vector<DescribeServiceDiagnosisResponseBodyDiagnosisList> & diagnosisList) { DARABONBA_PTR_SET_VALUE(diagnosisList_, diagnosisList) };
    inline DescribeServiceDiagnosisResponseBody& setDiagnosisList(vector<DescribeServiceDiagnosisResponseBodyDiagnosisList> && diagnosisList) { DARABONBA_PTR_SET_RVALUE(diagnosisList_, diagnosisList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostics list.
    std::shared_ptr<vector<DescribeServiceDiagnosisResponseBodyDiagnosisList>> diagnosisList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
