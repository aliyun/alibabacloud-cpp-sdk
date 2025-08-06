// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIAGNOSTICMETRICSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIAGNOSTICMETRICSETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class CreateDiagnosticMetricSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDiagnosticMetricSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDiagnosticMetricSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MetricSetId, metricSetId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDiagnosticMetricSetResponseBody() = default ;
    CreateDiagnosticMetricSetResponseBody(const CreateDiagnosticMetricSetResponseBody &) = default ;
    CreateDiagnosticMetricSetResponseBody(CreateDiagnosticMetricSetResponseBody &&) = default ;
    CreateDiagnosticMetricSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDiagnosticMetricSetResponseBody() = default ;
    CreateDiagnosticMetricSetResponseBody& operator=(const CreateDiagnosticMetricSetResponseBody &) = default ;
    CreateDiagnosticMetricSetResponseBody& operator=(CreateDiagnosticMetricSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->metricSetId_ != nullptr
        && this->requestId_ != nullptr; };
    // metricSetId Field Functions 
    bool hasMetricSetId() const { return this->metricSetId_ != nullptr;};
    void deleteMetricSetId() { this->metricSetId_ = nullptr;};
    inline string metricSetId() const { DARABONBA_PTR_GET_DEFAULT(metricSetId_, "") };
    inline CreateDiagnosticMetricSetResponseBody& setMetricSetId(string metricSetId) { DARABONBA_PTR_SET_VALUE(metricSetId_, metricSetId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDiagnosticMetricSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the diagnostic metric set, which is the unique identifier of the set.
    std::shared_ptr<string> metricSetId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
