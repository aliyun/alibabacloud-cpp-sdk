// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICSCRITERIACRITERIACRITERIA_HPP_
#define ALIBABACLOUD_MODELS_WAFRATELIMITCHARACTERISTICSCRITERIACRITERIACRITERIA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRatelimitCharacteristicsCriteriaCriteriaCriteria : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRatelimitCharacteristicsCriteriaCriteriaCriteria& obj) { 
      DARABONBA_PTR_TO_JSON(MatchType, matchType_);
    };
    friend void from_json(const Darabonba::Json& j, WafRatelimitCharacteristicsCriteriaCriteriaCriteria& obj) { 
      DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
    };
    WafRatelimitCharacteristicsCriteriaCriteriaCriteria() = default ;
    WafRatelimitCharacteristicsCriteriaCriteriaCriteria(const WafRatelimitCharacteristicsCriteriaCriteriaCriteria &) = default ;
    WafRatelimitCharacteristicsCriteriaCriteriaCriteria(WafRatelimitCharacteristicsCriteriaCriteriaCriteria &&) = default ;
    WafRatelimitCharacteristicsCriteriaCriteriaCriteria(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRatelimitCharacteristicsCriteriaCriteriaCriteria() = default ;
    WafRatelimitCharacteristicsCriteriaCriteriaCriteria& operator=(const WafRatelimitCharacteristicsCriteriaCriteriaCriteria &) = default ;
    WafRatelimitCharacteristicsCriteriaCriteriaCriteria& operator=(WafRatelimitCharacteristicsCriteriaCriteriaCriteria &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->matchType_ == nullptr; };
    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string matchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline WafRatelimitCharacteristicsCriteriaCriteriaCriteria& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


  protected:
    std::shared_ptr<string> matchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
