// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTMATCHRULE_HPP_
#define ALIBABACLOUD_MODELS_EVENTMATCHRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class EventMatchRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventMatchRule& obj) { 
      DARABONBA_PTR_TO_JSON(MatchState, matchState_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Suffix, suffix_);
    };
    friend void from_json(const Darabonba::Json& j, EventMatchRule& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchState, matchState_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Suffix, suffix_);
    };
    EventMatchRule() = default ;
    EventMatchRule(const EventMatchRule &) = default ;
    EventMatchRule(EventMatchRule &&) = default ;
    EventMatchRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventMatchRule() = default ;
    EventMatchRule& operator=(const EventMatchRule &) = default ;
    EventMatchRule& operator=(EventMatchRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->matchState_ != nullptr
        && this->name_ != nullptr && this->prefix_ != nullptr && this->suffix_ != nullptr; };
    // matchState Field Functions 
    bool hasMatchState() const { return this->matchState_ != nullptr;};
    void deleteMatchState() { this->matchState_ = nullptr;};
    inline bool matchState() const { DARABONBA_PTR_GET_DEFAULT(matchState_, false) };
    inline EventMatchRule& setMatchState(bool matchState) { DARABONBA_PTR_SET_VALUE(matchState_, matchState) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline EventMatchRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline EventMatchRule& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // suffix Field Functions 
    bool hasSuffix() const { return this->suffix_ != nullptr;};
    void deleteSuffix() { this->suffix_ = nullptr;};
    inline string suffix() const { DARABONBA_PTR_GET_DEFAULT(suffix_, "") };
    inline EventMatchRule& setSuffix(string suffix) { DARABONBA_PTR_SET_VALUE(suffix_, suffix) };


  protected:
    std::shared_ptr<bool> matchState_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> prefix_ = nullptr;
    std::shared_ptr<string> suffix_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
