// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class DescribeDiagnosticResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiagnosticId, diagnosticId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiagnosticId, diagnosticId_);
    };
    DescribeDiagnosticResultRequest() = default ;
    DescribeDiagnosticResultRequest(const DescribeDiagnosticResultRequest &) = default ;
    DescribeDiagnosticResultRequest(DescribeDiagnosticResultRequest &&) = default ;
    DescribeDiagnosticResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticResultRequest() = default ;
    DescribeDiagnosticResultRequest& operator=(const DescribeDiagnosticResultRequest &) = default ;
    DescribeDiagnosticResultRequest& operator=(DescribeDiagnosticResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diagnosticId_ == nullptr; };
    // diagnosticId Field Functions 
    bool hasDiagnosticId() const { return this->diagnosticId_ != nullptr;};
    void deleteDiagnosticId() { this->diagnosticId_ = nullptr;};
    inline string getDiagnosticId() const { DARABONBA_PTR_GET_DEFAULT(diagnosticId_, "") };
    inline DescribeDiagnosticResultRequest& setDiagnosticId(string diagnosticId) { DARABONBA_PTR_SET_VALUE(diagnosticId_, diagnosticId) };


  protected:
    // The diagnostic task ID.
    shared_ptr<string> diagnosticId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
