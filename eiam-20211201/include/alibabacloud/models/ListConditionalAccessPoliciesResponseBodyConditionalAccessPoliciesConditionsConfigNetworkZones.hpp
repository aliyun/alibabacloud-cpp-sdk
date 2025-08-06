// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIGNETWORKZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESRESPONSEBODYCONDITIONALACCESSPOLICIESCONDITIONSCONFIGNETWORKZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeNetworkZones, excludeNetworkZones_);
      DARABONBA_PTR_TO_JSON(IncludeNetworkZones, includeNetworkZones_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeNetworkZones, excludeNetworkZones_);
      DARABONBA_PTR_FROM_JSON(IncludeNetworkZones, includeNetworkZones_);
    };
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones() = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones(const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones &) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones(ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones &&) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones() = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& operator=(const ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones &) = default ;
    ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& operator=(ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->excludeNetworkZones_ != nullptr
        && this->includeNetworkZones_ != nullptr; };
    // excludeNetworkZones Field Functions 
    bool hasExcludeNetworkZones() const { return this->excludeNetworkZones_ != nullptr;};
    void deleteExcludeNetworkZones() { this->excludeNetworkZones_ = nullptr;};
    inline const vector<string> & excludeNetworkZones() const { DARABONBA_PTR_GET_CONST(excludeNetworkZones_, vector<string>) };
    inline vector<string> excludeNetworkZones() { DARABONBA_PTR_GET(excludeNetworkZones_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& setExcludeNetworkZones(const vector<string> & excludeNetworkZones) { DARABONBA_PTR_SET_VALUE(excludeNetworkZones_, excludeNetworkZones) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& setExcludeNetworkZones(vector<string> && excludeNetworkZones) { DARABONBA_PTR_SET_RVALUE(excludeNetworkZones_, excludeNetworkZones) };


    // includeNetworkZones Field Functions 
    bool hasIncludeNetworkZones() const { return this->includeNetworkZones_ != nullptr;};
    void deleteIncludeNetworkZones() { this->includeNetworkZones_ = nullptr;};
    inline const vector<string> & includeNetworkZones() const { DARABONBA_PTR_GET_CONST(includeNetworkZones_, vector<string>) };
    inline vector<string> includeNetworkZones() { DARABONBA_PTR_GET(includeNetworkZones_, vector<string>) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& setIncludeNetworkZones(const vector<string> & includeNetworkZones) { DARABONBA_PTR_SET_VALUE(includeNetworkZones_, includeNetworkZones) };
    inline ListConditionalAccessPoliciesResponseBodyConditionalAccessPoliciesConditionsConfigNetworkZones& setIncludeNetworkZones(vector<string> && includeNetworkZones) { DARABONBA_PTR_SET_RVALUE(includeNetworkZones_, includeNetworkZones) };


  protected:
    // Excluded network zones
    std::shared_ptr<vector<string>> excludeNetworkZones_ = nullptr;
    // Included network ranges
    std::shared_ptr<vector<string>> includeNetworkZones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
