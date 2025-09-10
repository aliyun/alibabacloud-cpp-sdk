// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUESTSOURCEOSSEVENTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUESTSOURCEOSSEVENTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateEventSourceRequestSourceOSSEventParametersMatchRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventSourceRequestSourceOSSEventParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSourceRequestSourceOSSEventParameters& obj) { 
      DARABONBA_PTR_TO_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_TO_JSON(MatchRules, matchRules_);
      DARABONBA_PTR_TO_JSON(StsRoleArn, stsRoleArn_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventSourceRequestSourceOSSEventParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(EventTypes, eventTypes_);
      DARABONBA_PTR_FROM_JSON(MatchRules, matchRules_);
      DARABONBA_PTR_FROM_JSON(StsRoleArn, stsRoleArn_);
    };
    UpdateEventSourceRequestSourceOSSEventParameters() = default ;
    UpdateEventSourceRequestSourceOSSEventParameters(const UpdateEventSourceRequestSourceOSSEventParameters &) = default ;
    UpdateEventSourceRequestSourceOSSEventParameters(UpdateEventSourceRequestSourceOSSEventParameters &&) = default ;
    UpdateEventSourceRequestSourceOSSEventParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSourceRequestSourceOSSEventParameters() = default ;
    UpdateEventSourceRequestSourceOSSEventParameters& operator=(const UpdateEventSourceRequestSourceOSSEventParameters &) = default ;
    UpdateEventSourceRequestSourceOSSEventParameters& operator=(UpdateEventSourceRequestSourceOSSEventParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventTypes_ != nullptr
        && this->matchRules_ != nullptr && this->stsRoleArn_ != nullptr; };
    // eventTypes Field Functions 
    bool hasEventTypes() const { return this->eventTypes_ != nullptr;};
    void deleteEventTypes() { this->eventTypes_ = nullptr;};
    inline const vector<string> & eventTypes() const { DARABONBA_PTR_GET_CONST(eventTypes_, vector<string>) };
    inline vector<string> eventTypes() { DARABONBA_PTR_GET(eventTypes_, vector<string>) };
    inline UpdateEventSourceRequestSourceOSSEventParameters& setEventTypes(const vector<string> & eventTypes) { DARABONBA_PTR_SET_VALUE(eventTypes_, eventTypes) };
    inline UpdateEventSourceRequestSourceOSSEventParameters& setEventTypes(vector<string> && eventTypes) { DARABONBA_PTR_SET_RVALUE(eventTypes_, eventTypes) };


    // matchRules Field Functions 
    bool hasMatchRules() const { return this->matchRules_ != nullptr;};
    void deleteMatchRules() { this->matchRules_ = nullptr;};
    inline const vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>> & matchRules() const { DARABONBA_PTR_GET_CONST(matchRules_, vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>>) };
    inline vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>> matchRules() { DARABONBA_PTR_GET(matchRules_, vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>>) };
    inline UpdateEventSourceRequestSourceOSSEventParameters& setMatchRules(const vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>> & matchRules) { DARABONBA_PTR_SET_VALUE(matchRules_, matchRules) };
    inline UpdateEventSourceRequestSourceOSSEventParameters& setMatchRules(vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>> && matchRules) { DARABONBA_PTR_SET_RVALUE(matchRules_, matchRules) };


    // stsRoleArn Field Functions 
    bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
    void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
    inline string stsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
    inline UpdateEventSourceRequestSourceOSSEventParameters& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


  protected:
    std::shared_ptr<vector<string>> eventTypes_ = nullptr;
    std::shared_ptr<vector<vector<Models::UpdateEventSourceRequestSourceOSSEventParametersMatchRules>>> matchRules_ = nullptr;
    std::shared_ptr<string> stsRoleArn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
