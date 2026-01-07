// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEDIAGNOSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEDIAGNOSISRESPONSEBODY_HPP_
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
    class DiagnosisList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DiagnosisList& obj) { 
        DARABONBA_PTR_TO_JSON(Advices, advices_);
        DARABONBA_PTR_TO_JSON(Causes, causes_);
        DARABONBA_PTR_TO_JSON(Error, error_);
      };
      friend void from_json(const Darabonba::Json& j, DiagnosisList& obj) { 
        DARABONBA_PTR_FROM_JSON(Advices, advices_);
        DARABONBA_PTR_FROM_JSON(Causes, causes_);
        DARABONBA_PTR_FROM_JSON(Error, error_);
      };
      DiagnosisList() = default ;
      DiagnosisList(const DiagnosisList &) = default ;
      DiagnosisList(DiagnosisList &&) = default ;
      DiagnosisList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DiagnosisList() = default ;
      DiagnosisList& operator=(const DiagnosisList &) = default ;
      DiagnosisList& operator=(DiagnosisList &&) = default ;
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
      inline DiagnosisList& setAdvices(const vector<string> & advices) { DARABONBA_PTR_SET_VALUE(advices_, advices) };
      inline DiagnosisList& setAdvices(vector<string> && advices) { DARABONBA_PTR_SET_RVALUE(advices_, advices) };


      // causes Field Functions 
      bool hasCauses() const { return this->causes_ != nullptr;};
      void deleteCauses() { this->causes_ = nullptr;};
      inline const vector<string> & getCauses() const { DARABONBA_PTR_GET_CONST(causes_, vector<string>) };
      inline vector<string> getCauses() { DARABONBA_PTR_GET(causes_, vector<string>) };
      inline DiagnosisList& setCauses(const vector<string> & causes) { DARABONBA_PTR_SET_VALUE(causes_, causes) };
      inline DiagnosisList& setCauses(vector<string> && causes) { DARABONBA_PTR_SET_RVALUE(causes_, causes) };


      // error Field Functions 
      bool hasError() const { return this->error_ != nullptr;};
      void deleteError() { this->error_ = nullptr;};
      inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
      inline DiagnosisList& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    protected:
      // The suggestions about how to handle the errors.
      shared_ptr<vector<string>> advices_ {};
      // The causes of the errors.
      shared_ptr<vector<string>> causes_ {};
      // The error message.
      shared_ptr<string> error_ {};
    };

    virtual bool empty() const override { return this->diagnosisList_ == nullptr
        && this->requestId_ == nullptr; };
    // diagnosisList Field Functions 
    bool hasDiagnosisList() const { return this->diagnosisList_ != nullptr;};
    void deleteDiagnosisList() { this->diagnosisList_ = nullptr;};
    inline const vector<DescribeServiceDiagnosisResponseBody::DiagnosisList> & getDiagnosisList() const { DARABONBA_PTR_GET_CONST(diagnosisList_, vector<DescribeServiceDiagnosisResponseBody::DiagnosisList>) };
    inline vector<DescribeServiceDiagnosisResponseBody::DiagnosisList> getDiagnosisList() { DARABONBA_PTR_GET(diagnosisList_, vector<DescribeServiceDiagnosisResponseBody::DiagnosisList>) };
    inline DescribeServiceDiagnosisResponseBody& setDiagnosisList(const vector<DescribeServiceDiagnosisResponseBody::DiagnosisList> & diagnosisList) { DARABONBA_PTR_SET_VALUE(diagnosisList_, diagnosisList) };
    inline DescribeServiceDiagnosisResponseBody& setDiagnosisList(vector<DescribeServiceDiagnosisResponseBody::DiagnosisList> && diagnosisList) { DARABONBA_PTR_SET_RVALUE(diagnosisList_, diagnosisList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServiceDiagnosisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostics list.
    shared_ptr<vector<DescribeServiceDiagnosisResponseBody::DiagnosisList>> diagnosisList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
