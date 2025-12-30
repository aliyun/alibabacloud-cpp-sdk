// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class CreateDiagnosticTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosticId, diagnosticId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosticId, diagnosticId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDiagnosticTaskResponseBody() = default ;
    CreateDiagnosticTaskResponseBody(const CreateDiagnosticTaskResponseBody &) = default ;
    CreateDiagnosticTaskResponseBody(CreateDiagnosticTaskResponseBody &&) = default ;
    CreateDiagnosticTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticTaskResponseBody() = default ;
    CreateDiagnosticTaskResponseBody& operator=(const CreateDiagnosticTaskResponseBody &) = default ;
    CreateDiagnosticTaskResponseBody& operator=(CreateDiagnosticTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosticId_ == nullptr
        && this->requestId_ == nullptr; };
    // diagnosticId Field Functions 
    bool hasDiagnosticId() const { return this->diagnosticId_ != nullptr;};
    void deleteDiagnosticId() { this->diagnosticId_ = nullptr;};
    inline string getDiagnosticId() const { DARABONBA_PTR_GET_DEFAULT(diagnosticId_, "") };
    inline CreateDiagnosticTaskResponseBody& setDiagnosticId(string diagnosticId) { DARABONBA_PTR_SET_VALUE(diagnosticId_, diagnosticId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDiagnosticTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the diagnostics task.
    shared_ptr<string> diagnosticId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
