// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEEVENTOPERATIONCONDITIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeImageEventOperationConditionResponseBodyDataOperations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageEventOperationConditionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageEventOperationConditionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Operations, operations_);
      DARABONBA_PTR_TO_JSON(Scenarios, scenarios_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageEventOperationConditionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Operations, operations_);
      DARABONBA_PTR_FROM_JSON(Scenarios, scenarios_);
    };
    DescribeImageEventOperationConditionResponseBodyData() = default ;
    DescribeImageEventOperationConditionResponseBodyData(const DescribeImageEventOperationConditionResponseBodyData &) = default ;
    DescribeImageEventOperationConditionResponseBodyData(DescribeImageEventOperationConditionResponseBodyData &&) = default ;
    DescribeImageEventOperationConditionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageEventOperationConditionResponseBodyData() = default ;
    DescribeImageEventOperationConditionResponseBodyData& operator=(const DescribeImageEventOperationConditionResponseBodyData &) = default ;
    DescribeImageEventOperationConditionResponseBodyData& operator=(DescribeImageEventOperationConditionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventType_ != nullptr
        && this->operations_ != nullptr && this->scenarios_ != nullptr; };
    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeImageEventOperationConditionResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // operations Field Functions 
    bool hasOperations() const { return this->operations_ != nullptr;};
    void deleteOperations() { this->operations_ = nullptr;};
    inline const vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations> & operations() const { DARABONBA_PTR_GET_CONST(operations_, vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations>) };
    inline vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations> operations() { DARABONBA_PTR_GET(operations_, vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations>) };
    inline DescribeImageEventOperationConditionResponseBodyData& setOperations(const vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations> & operations) { DARABONBA_PTR_SET_VALUE(operations_, operations) };
    inline DescribeImageEventOperationConditionResponseBodyData& setOperations(vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations> && operations) { DARABONBA_PTR_SET_RVALUE(operations_, operations) };


    // scenarios Field Functions 
    bool hasScenarios() const { return this->scenarios_ != nullptr;};
    void deleteScenarios() { this->scenarios_ = nullptr;};
    inline const vector<string> & scenarios() const { DARABONBA_PTR_GET_CONST(scenarios_, vector<string>) };
    inline vector<string> scenarios() { DARABONBA_PTR_GET(scenarios_, vector<string>) };
    inline DescribeImageEventOperationConditionResponseBodyData& setScenarios(const vector<string> & scenarios) { DARABONBA_PTR_SET_VALUE(scenarios_, scenarios) };
    inline DescribeImageEventOperationConditionResponseBodyData& setScenarios(vector<string> && scenarios) { DARABONBA_PTR_SET_RVALUE(scenarios_, scenarios) };


  protected:
    // The alert type.
    // 
    // *   Only **sensitiveFile** may be returned.
    std::shared_ptr<string> eventType_ = nullptr;
    // The operations.
    std::shared_ptr<vector<Models::DescribeImageEventOperationConditionResponseBodyDataOperations>> operations_ = nullptr;
    // The application scopes of the rules.
    std::shared_ptr<vector<string>> scenarios_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
