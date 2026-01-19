// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEAGGREGATECOMPLIANCEPACKREPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEAGGREGATECOMPLIANCEPACKREPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GenerateAggregateCompliancePackReportResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAggregateCompliancePackReportResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAggregateCompliancePackReportResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateAggregateCompliancePackReportResponseBody() = default ;
    GenerateAggregateCompliancePackReportResponseBody(const GenerateAggregateCompliancePackReportResponseBody &) = default ;
    GenerateAggregateCompliancePackReportResponseBody(GenerateAggregateCompliancePackReportResponseBody &&) = default ;
    GenerateAggregateCompliancePackReportResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAggregateCompliancePackReportResponseBody() = default ;
    GenerateAggregateCompliancePackReportResponseBody& operator=(const GenerateAggregateCompliancePackReportResponseBody &) = default ;
    GenerateAggregateCompliancePackReportResponseBody& operator=(GenerateAggregateCompliancePackReportResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->requestId_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline GenerateAggregateCompliancePackReportResponseBody& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAggregateCompliancePackReportResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the compliance package.
    shared_ptr<string> compliancePackId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
