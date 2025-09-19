// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILAREVENTSCENARIOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSimilarEventScenariosResponseBodyScenarios.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSimilarEventScenariosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarEventScenariosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarEventScenariosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
    };
    DescribeSimilarEventScenariosResponseBody() = default ;
    DescribeSimilarEventScenariosResponseBody(const DescribeSimilarEventScenariosResponseBody &) = default ;
    DescribeSimilarEventScenariosResponseBody(DescribeSimilarEventScenariosResponseBody &&) = default ;
    DescribeSimilarEventScenariosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarEventScenariosResponseBody() = default ;
    DescribeSimilarEventScenariosResponseBody& operator=(const DescribeSimilarEventScenariosResponseBody &) = default ;
    DescribeSimilarEventScenariosResponseBody& operator=(DescribeSimilarEventScenariosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->scenarios_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimilarEventScenariosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenarios Field Functions 
    bool hasScenarios() const { return this->scenarios_ != nullptr;};
    void deleteScenarios() { this->scenarios_ = nullptr;};
    inline const vector<DescribeSimilarEventScenariosResponseBodyScenarios> & scenarios() const { DARABONBA_PTR_GET_CONST(scenarios_, vector<DescribeSimilarEventScenariosResponseBodyScenarios>) };
    inline vector<DescribeSimilarEventScenariosResponseBodyScenarios> scenarios() { DARABONBA_PTR_GET(scenarios_, vector<DescribeSimilarEventScenariosResponseBodyScenarios>) };
    inline DescribeSimilarEventScenariosResponseBody& setScenarios(const vector<DescribeSimilarEventScenariosResponseBodyScenarios> & scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };
    inline DescribeSimilarEventScenariosResponseBody& setScenarios(vector<DescribeSimilarEventScenariosResponseBodyScenarios> && scenarios) { DARABONBA_PTR_SET_RVALUE(scenarios_, scenarios) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The scenarios in which alerts triggered by the same rule or rules of the same type are handled.
    std::shared_ptr<vector<DescribeSimilarEventScenariosResponseBodyScenarios>> scenarios_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
