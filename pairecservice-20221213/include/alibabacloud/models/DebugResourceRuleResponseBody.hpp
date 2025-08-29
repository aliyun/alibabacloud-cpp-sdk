// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGRESOURCERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DEBUGRESOURCERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class DebugResourceRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugResourceRuleResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(CurrentValues, currentValues_);
      DARABONBA_ANY_TO_JSON(OutputValues, outputValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DebugResourceRuleResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(CurrentValues, currentValues_);
      DARABONBA_ANY_FROM_JSON(OutputValues, outputValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DebugResourceRuleResponseBody() = default ;
    DebugResourceRuleResponseBody(const DebugResourceRuleResponseBody &) = default ;
    DebugResourceRuleResponseBody(DebugResourceRuleResponseBody &&) = default ;
    DebugResourceRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugResourceRuleResponseBody() = default ;
    DebugResourceRuleResponseBody& operator=(const DebugResourceRuleResponseBody &) = default ;
    DebugResourceRuleResponseBody& operator=(DebugResourceRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentValues_ != nullptr
        && this->outputValues_ != nullptr && this->requestId_ != nullptr; };
    // currentValues Field Functions 
    bool hasCurrentValues() const { return this->currentValues_ != nullptr;};
    void deleteCurrentValues() { this->currentValues_ = nullptr;};
    inline     const Darabonba::Json & currentValues() const { DARABONBA_GET(currentValues_) };
    Darabonba::Json & currentValues() { DARABONBA_GET(currentValues_) };
    inline DebugResourceRuleResponseBody& setCurrentValues(const Darabonba::Json & currentValues) { DARABONBA_SET_VALUE(currentValues_, currentValues) };
    inline DebugResourceRuleResponseBody& setCurrentValues(Darabonba::Json & currentValues) { DARABONBA_SET_RVALUE(currentValues_, currentValues) };


    // outputValues Field Functions 
    bool hasOutputValues() const { return this->outputValues_ != nullptr;};
    void deleteOutputValues() { this->outputValues_ = nullptr;};
    inline     const Darabonba::Json & outputValues() const { DARABONBA_GET(outputValues_) };
    Darabonba::Json & outputValues() { DARABONBA_GET(outputValues_) };
    inline DebugResourceRuleResponseBody& setOutputValues(const Darabonba::Json & outputValues) { DARABONBA_SET_VALUE(outputValues_, outputValues) };
    inline DebugResourceRuleResponseBody& setOutputValues(Darabonba::Json & outputValues) { DARABONBA_SET_RVALUE(outputValues_, outputValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DebugResourceRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    Darabonba::Json currentValues_ = nullptr;
    Darabonba::Json outputValues_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
