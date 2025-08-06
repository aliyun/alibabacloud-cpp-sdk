// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUESTCONDITIONSCONFIGNETWORKZONES_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUESTCONDITIONSCONFIGNETWORKZONES_HPP_
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
  class UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeNetworkZones, excludeNetworkZones_);
      DARABONBA_PTR_TO_JSON(IncludeNetworkZones, includeNetworkZones_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeNetworkZones, excludeNetworkZones_);
      DARABONBA_PTR_FROM_JSON(IncludeNetworkZones, includeNetworkZones_);
    };
    UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones() = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones(const UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones &) = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones(UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones &&) = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones() = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& operator=(const UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones &) = default ;
    UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& operator=(UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones &&) = default ;
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
    inline UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& setExcludeNetworkZones(const vector<string> & excludeNetworkZones) { DARABONBA_PTR_SET_VALUE(excludeNetworkZones_, excludeNetworkZones) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& setExcludeNetworkZones(vector<string> && excludeNetworkZones) { DARABONBA_PTR_SET_RVALUE(excludeNetworkZones_, excludeNetworkZones) };


    // includeNetworkZones Field Functions 
    bool hasIncludeNetworkZones() const { return this->includeNetworkZones_ != nullptr;};
    void deleteIncludeNetworkZones() { this->includeNetworkZones_ = nullptr;};
    inline const vector<string> & includeNetworkZones() const { DARABONBA_PTR_GET_CONST(includeNetworkZones_, vector<string>) };
    inline vector<string> includeNetworkZones() { DARABONBA_PTR_GET(includeNetworkZones_, vector<string>) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& setIncludeNetworkZones(const vector<string> & includeNetworkZones) { DARABONBA_PTR_SET_VALUE(includeNetworkZones_, includeNetworkZones) };
    inline UpdateConditionalAccessPolicyRequestConditionsConfigNetworkZones& setIncludeNetworkZones(vector<string> && includeNetworkZones) { DARABONBA_PTR_SET_RVALUE(includeNetworkZones_, includeNetworkZones) };


  protected:
    // Excluded network zones
    std::shared_ptr<vector<string>> excludeNetworkZones_ = nullptr;
    // Included network zones
    std::shared_ptr<vector<string>> includeNetworkZones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
