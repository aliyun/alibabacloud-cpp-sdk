// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUESTSOURCEOSSEVENTPARAMETERSMATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSOURCEREQUESTSOURCEOSSEVENTPARAMETERSMATCHRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventSourceRequestSourceOSSEventParametersMatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSourceRequestSourceOSSEventParametersMatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
      DARABONBA_PTR_TO_JSON(MatchState, matchState_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventSourceRequestSourceOSSEventParametersMatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
      DARABONBA_PTR_FROM_JSON(MatchState, matchState_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    UpdateEventSourceRequestSourceOSSEventParametersMatchRules() = default ;
    UpdateEventSourceRequestSourceOSSEventParametersMatchRules(const UpdateEventSourceRequestSourceOSSEventParametersMatchRules &) = default ;
    UpdateEventSourceRequestSourceOSSEventParametersMatchRules(UpdateEventSourceRequestSourceOSSEventParametersMatchRules &&) = default ;
    UpdateEventSourceRequestSourceOSSEventParametersMatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSourceRequestSourceOSSEventParametersMatchRules() = default ;
    UpdateEventSourceRequestSourceOSSEventParametersMatchRules& operator=(const UpdateEventSourceRequestSourceOSSEventParametersMatchRules &) = default ;
    UpdateEventSourceRequestSourceOSSEventParametersMatchRules& operator=(UpdateEventSourceRequestSourceOSSEventParametersMatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->suffix_ != nullptr
        && this->matchState_ != nullptr && this->prefix_ != nullptr && this->name_ != nullptr; };
    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline UpdateEventSourceRequestSourceOSSEventParametersMatchRules& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


    // matchState Field Functions 
    bool hasMatchState() const { return this->matchState_ != nullptr;};
    void deleteMatchState() { this->matchState_ = nullptr;};
    inline bool matchState() const { DARABONBA_PTR_GET_DEFAULT(matchState_, false) };
    inline UpdateEventSourceRequestSourceOSSEventParametersMatchRules& setMatchState(bool matchState) { DARABONBA_PTR_SET_VALUE(matchState_, matchState) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline UpdateEventSourceRequestSourceOSSEventParametersMatchRules& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEventSourceRequestSourceOSSEventParametersMatchRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> suffix_ = nullptr;
    std::shared_ptr<bool> matchState_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
