// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDRECORDINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDRECORDINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class AddRecordingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddRecordingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleYaml, ruleYaml_);
    };
    friend void from_json(const Darabonba::Json& j, AddRecordingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleYaml, ruleYaml_);
    };
    AddRecordingRuleRequest() = default ;
    AddRecordingRuleRequest(const AddRecordingRuleRequest &) = default ;
    AddRecordingRuleRequest(AddRecordingRuleRequest &&) = default ;
    AddRecordingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddRecordingRuleRequest() = default ;
    AddRecordingRuleRequest& operator=(const AddRecordingRuleRequest &) = default ;
    AddRecordingRuleRequest& operator=(AddRecordingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->regionId_ != nullptr && this->ruleYaml_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AddRecordingRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddRecordingRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleYaml Field Functions 
    bool hasRuleYaml() const { return this->ruleYaml_ != nullptr;};
    void deleteRuleYaml() { this->ruleYaml_ = nullptr;};
    inline string ruleYaml() const { DARABONBA_PTR_GET_DEFAULT(ruleYaml_, "") };
    inline AddRecordingRuleRequest& setRuleYaml(string ruleYaml) { DARABONBA_PTR_SET_VALUE(ruleYaml_, ruleYaml) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The custom recording rule. The value is in the YAML format.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleYaml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
