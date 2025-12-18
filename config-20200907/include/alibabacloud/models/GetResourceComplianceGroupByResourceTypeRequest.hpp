// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYRESOURCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByResourceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByResourceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigRuleIds, configRuleIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByResourceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigRuleIds, configRuleIds_);
    };
    GetResourceComplianceGroupByResourceTypeRequest() = default ;
    GetResourceComplianceGroupByResourceTypeRequest(const GetResourceComplianceGroupByResourceTypeRequest &) = default ;
    GetResourceComplianceGroupByResourceTypeRequest(GetResourceComplianceGroupByResourceTypeRequest &&) = default ;
    GetResourceComplianceGroupByResourceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByResourceTypeRequest() = default ;
    GetResourceComplianceGroupByResourceTypeRequest& operator=(const GetResourceComplianceGroupByResourceTypeRequest &) = default ;
    GetResourceComplianceGroupByResourceTypeRequest& operator=(GetResourceComplianceGroupByResourceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configRuleIds_ == nullptr; };
    // configRuleIds Field Functions 
    bool hasConfigRuleIds() const { return this->configRuleIds_ != nullptr;};
    void deleteConfigRuleIds() { this->configRuleIds_ = nullptr;};
    inline string configRuleIds() const { DARABONBA_PTR_GET_DEFAULT(configRuleIds_, "") };
    inline GetResourceComplianceGroupByResourceTypeRequest& setConfigRuleIds(string configRuleIds) { DARABONBA_PTR_SET_VALUE(configRuleIds_, configRuleIds) };


  protected:
    // The rule IDs. Separate multiple rule IDs with commas (,).
    std::shared_ptr<string> configRuleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
