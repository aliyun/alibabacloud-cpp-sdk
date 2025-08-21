// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRECENTGOVERNANCEMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListRecentGovernanceMetricsResponseBodyGovernanceMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListRecentGovernanceMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRecentGovernanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_TO_JSON(GovernanceMetrics, governanceMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRecentGovernanceMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GenerateTime, generateTime_);
      DARABONBA_PTR_FROM_JSON(GovernanceMetrics, governanceMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRecentGovernanceMetricsResponseBody() = default ;
    ListRecentGovernanceMetricsResponseBody(const ListRecentGovernanceMetricsResponseBody &) = default ;
    ListRecentGovernanceMetricsResponseBody(ListRecentGovernanceMetricsResponseBody &&) = default ;
    ListRecentGovernanceMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRecentGovernanceMetricsResponseBody() = default ;
    ListRecentGovernanceMetricsResponseBody& operator=(const ListRecentGovernanceMetricsResponseBody &) = default ;
    ListRecentGovernanceMetricsResponseBody& operator=(ListRecentGovernanceMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->generateTime_ != nullptr
        && this->governanceMetrics_ != nullptr && this->requestId_ != nullptr; };
    // generateTime Field Functions 
    bool hasGenerateTime() const { return this->generateTime_ != nullptr;};
    void deleteGenerateTime() { this->generateTime_ = nullptr;};
    inline string generateTime() const { DARABONBA_PTR_GET_DEFAULT(generateTime_, "") };
    inline ListRecentGovernanceMetricsResponseBody& setGenerateTime(string generateTime) { DARABONBA_PTR_SET_VALUE(generateTime_, generateTime) };


    // governanceMetrics Field Functions 
    bool hasGovernanceMetrics() const { return this->governanceMetrics_ != nullptr;};
    void deleteGovernanceMetrics() { this->governanceMetrics_ = nullptr;};
    inline const ListRecentGovernanceMetricsResponseBodyGovernanceMetrics & governanceMetrics() const { DARABONBA_PTR_GET_CONST(governanceMetrics_, ListRecentGovernanceMetricsResponseBodyGovernanceMetrics) };
    inline ListRecentGovernanceMetricsResponseBodyGovernanceMetrics governanceMetrics() { DARABONBA_PTR_GET(governanceMetrics_, ListRecentGovernanceMetricsResponseBodyGovernanceMetrics) };
    inline ListRecentGovernanceMetricsResponseBody& setGovernanceMetrics(const ListRecentGovernanceMetricsResponseBodyGovernanceMetrics & governanceMetrics) { DARABONBA_PTR_SET_VALUE(governanceMetrics_, governanceMetrics) };
    inline ListRecentGovernanceMetricsResponseBody& setGovernanceMetrics(ListRecentGovernanceMetricsResponseBodyGovernanceMetrics && governanceMetrics) { DARABONBA_PTR_SET_RVALUE(governanceMetrics_, governanceMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRecentGovernanceMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time when the report was generated.
    std::shared_ptr<string> generateTime_ = nullptr;
    // The metric values of all governance items. The value of the parameter is an array, and each row in the array contains the metric value of a governance item.
    std::shared_ptr<ListRecentGovernanceMetricsResponseBodyGovernanceMetrics> governanceMetrics_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
