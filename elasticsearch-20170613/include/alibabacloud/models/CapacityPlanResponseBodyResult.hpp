// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CAPACITYPLANRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CapacityPlanResponseBodyResultExtendConfigs.hpp>
#include <alibabacloud/models/CapacityPlanResponseBodyResultNodeConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class CapacityPlanResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CapacityPlanResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(ExtendConfigs, extendConfigs_);
      DARABONBA_PTR_TO_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(NodeConfigurations, nodeConfigurations_);
      DARABONBA_PTR_TO_JSON(OversizedCluster, oversizedCluster_);
    };
    friend void from_json(const Darabonba::Json& j, CapacityPlanResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(ExtendConfigs, extendConfigs_);
      DARABONBA_PTR_FROM_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(NodeConfigurations, nodeConfigurations_);
      DARABONBA_PTR_FROM_JSON(OversizedCluster, oversizedCluster_);
    };
    CapacityPlanResponseBodyResult() = default ;
    CapacityPlanResponseBodyResult(const CapacityPlanResponseBodyResult &) = default ;
    CapacityPlanResponseBodyResult(CapacityPlanResponseBodyResult &&) = default ;
    CapacityPlanResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CapacityPlanResponseBodyResult() = default ;
    CapacityPlanResponseBodyResult& operator=(const CapacityPlanResponseBodyResult &) = default ;
    CapacityPlanResponseBodyResult& operator=(CapacityPlanResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extendConfigs_ != nullptr
        && this->instanceCategory_ != nullptr && this->nodeConfigurations_ != nullptr && this->oversizedCluster_ != nullptr; };
    // extendConfigs Field Functions 
    bool hasExtendConfigs() const { return this->extendConfigs_ != nullptr;};
    void deleteExtendConfigs() { this->extendConfigs_ = nullptr;};
    inline const vector<Models::CapacityPlanResponseBodyResultExtendConfigs> & extendConfigs() const { DARABONBA_PTR_GET_CONST(extendConfigs_, vector<Models::CapacityPlanResponseBodyResultExtendConfigs>) };
    inline vector<Models::CapacityPlanResponseBodyResultExtendConfigs> extendConfigs() { DARABONBA_PTR_GET(extendConfigs_, vector<Models::CapacityPlanResponseBodyResultExtendConfigs>) };
    inline CapacityPlanResponseBodyResult& setExtendConfigs(const vector<Models::CapacityPlanResponseBodyResultExtendConfigs> & extendConfigs) { DARABONBA_PTR_SET_VALUE(extendConfigs_, extendConfigs) };
    inline CapacityPlanResponseBodyResult& setExtendConfigs(vector<Models::CapacityPlanResponseBodyResultExtendConfigs> && extendConfigs) { DARABONBA_PTR_SET_RVALUE(extendConfigs_, extendConfigs) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline CapacityPlanResponseBodyResult& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // nodeConfigurations Field Functions 
    bool hasNodeConfigurations() const { return this->nodeConfigurations_ != nullptr;};
    void deleteNodeConfigurations() { this->nodeConfigurations_ = nullptr;};
    inline const vector<Models::CapacityPlanResponseBodyResultNodeConfigurations> & nodeConfigurations() const { DARABONBA_PTR_GET_CONST(nodeConfigurations_, vector<Models::CapacityPlanResponseBodyResultNodeConfigurations>) };
    inline vector<Models::CapacityPlanResponseBodyResultNodeConfigurations> nodeConfigurations() { DARABONBA_PTR_GET(nodeConfigurations_, vector<Models::CapacityPlanResponseBodyResultNodeConfigurations>) };
    inline CapacityPlanResponseBodyResult& setNodeConfigurations(const vector<Models::CapacityPlanResponseBodyResultNodeConfigurations> & nodeConfigurations) { DARABONBA_PTR_SET_VALUE(nodeConfigurations_, nodeConfigurations) };
    inline CapacityPlanResponseBodyResult& setNodeConfigurations(vector<Models::CapacityPlanResponseBodyResultNodeConfigurations> && nodeConfigurations) { DARABONBA_PTR_SET_RVALUE(nodeConfigurations_, nodeConfigurations) };


    // oversizedCluster Field Functions 
    bool hasOversizedCluster() const { return this->oversizedCluster_ != nullptr;};
    void deleteOversizedCluster() { this->oversizedCluster_ = nullptr;};
    inline bool oversizedCluster() const { DARABONBA_PTR_GET_DEFAULT(oversizedCluster_, false) };
    inline CapacityPlanResponseBodyResult& setOversizedCluster(bool oversizedCluster) { DARABONBA_PTR_SET_VALUE(oversizedCluster_, oversizedCluster) };


  protected:
    // Extended configuration information.
    std::shared_ptr<vector<Models::CapacityPlanResponseBodyResultExtendConfigs>> extendConfigs_ = nullptr;
    // Edition type, with values meaning as follows:
    // 
    // - advanced: Enhanced Edition
    // 
    // - x-pack: Commercial Edition
    // 
    // - community: Community Edition
    std::shared_ptr<string> instanceCategory_ = nullptr;
    // Node information.
    std::shared_ptr<vector<Models::CapacityPlanResponseBodyResultNodeConfigurations>> nodeConfigurations_ = nullptr;
    // Based on the capacity planning calculation, there is no default value. The meanings of the values are as follows:
    // 
    // - true: Represents an oversized cluster, indicating that the number of data nodes calculated by the capacity planning exceeds the threshold of 50.
    // 
    // - false: The number of data nodes calculated by the capacity planning is within 50.
    std::shared_ptr<bool> oversizedCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
