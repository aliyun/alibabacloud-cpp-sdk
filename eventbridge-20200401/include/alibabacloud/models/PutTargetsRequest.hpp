// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTTARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutTargetsRequestTargets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class PutTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, PutTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    PutTargetsRequest() = default ;
    PutTargetsRequest(const PutTargetsRequest &) = default ;
    PutTargetsRequest(PutTargetsRequest &&) = default ;
    PutTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutTargetsRequest() = default ;
    PutTargetsRequest& operator=(const PutTargetsRequest &) = default ;
    PutTargetsRequest& operator=(PutTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->ruleName_ != nullptr && this->targets_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline PutTargetsRequest& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline PutTargetsRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<PutTargetsRequestTargets> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<PutTargetsRequestTargets>) };
    inline vector<PutTargetsRequestTargets> targets() { DARABONBA_PTR_GET(targets_, vector<PutTargetsRequestTargets>) };
    inline PutTargetsRequest& setTargets(const vector<PutTargetsRequestTargets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline PutTargetsRequest& setTargets(vector<PutTargetsRequestTargets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    // The name of the event bus.
    // 
    // This parameter is required.
    std::shared_ptr<string> eventBusName_ = nullptr;
    // The name of the event rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The event targets to be created or updated. For more information, see [Limits](https://help.aliyun.com/document_detail/163289.html).
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutTargetsRequestTargets>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
