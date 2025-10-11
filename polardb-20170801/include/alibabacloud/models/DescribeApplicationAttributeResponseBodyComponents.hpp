// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYCOMPONENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONATTRIBUTERESPONSEBODYCOMPONENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodyComponentsSecurityGroups.hpp>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays.hpp>
#include <alibabacloud/models/DescribeApplicationAttributeResponseBodyComponentsTopology.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationAttributeResponseBodyComponents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationAttributeResponseBodyComponents& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentClass, componentClass_);
      DARABONBA_PTR_TO_JSON(ComponentClassDescription, componentClassDescription_);
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(ComponentMaxReplica, componentMaxReplica_);
      DARABONBA_PTR_TO_JSON(ComponentReplica, componentReplica_);
      DARABONBA_PTR_TO_JSON(ComponentReplicaGroupName, componentReplicaGroupName_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_TO_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Topology, topology_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationAttributeResponseBodyComponents& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentClass, componentClass_);
      DARABONBA_PTR_FROM_JSON(ComponentClassDescription, componentClassDescription_);
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(ComponentMaxReplica, componentMaxReplica_);
      DARABONBA_PTR_FROM_JSON(ComponentReplica, componentReplica_);
      DARABONBA_PTR_FROM_JSON(ComponentReplicaGroupName, componentReplicaGroupName_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroups, securityGroups_);
      DARABONBA_PTR_FROM_JSON(SecurityIPArrays, securityIPArrays_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Topology, topology_);
    };
    DescribeApplicationAttributeResponseBodyComponents() = default ;
    DescribeApplicationAttributeResponseBodyComponents(const DescribeApplicationAttributeResponseBodyComponents &) = default ;
    DescribeApplicationAttributeResponseBodyComponents(DescribeApplicationAttributeResponseBodyComponents &&) = default ;
    DescribeApplicationAttributeResponseBodyComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationAttributeResponseBodyComponents() = default ;
    DescribeApplicationAttributeResponseBodyComponents& operator=(const DescribeApplicationAttributeResponseBodyComponents &) = default ;
    DescribeApplicationAttributeResponseBodyComponents& operator=(DescribeApplicationAttributeResponseBodyComponents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentClass_ != nullptr
        && this->componentClassDescription_ != nullptr && this->componentId_ != nullptr && this->componentMaxReplica_ != nullptr && this->componentReplica_ != nullptr && this->componentReplicaGroupName_ != nullptr
        && this->componentType_ != nullptr && this->securityGroups_ != nullptr && this->securityIPArrays_ != nullptr && this->status_ != nullptr && this->topology_ != nullptr; };
    // componentClass Field Functions 
    bool hasComponentClass() const { return this->componentClass_ != nullptr;};
    void deleteComponentClass() { this->componentClass_ = nullptr;};
    inline string componentClass() const { DARABONBA_PTR_GET_DEFAULT(componentClass_, "") };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentClass(string componentClass) { DARABONBA_PTR_SET_VALUE(componentClass_, componentClass) };


    // componentClassDescription Field Functions 
    bool hasComponentClassDescription() const { return this->componentClassDescription_ != nullptr;};
    void deleteComponentClassDescription() { this->componentClassDescription_ = nullptr;};
    inline string componentClassDescription() const { DARABONBA_PTR_GET_DEFAULT(componentClassDescription_, "") };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentClassDescription(string componentClassDescription) { DARABONBA_PTR_SET_VALUE(componentClassDescription_, componentClassDescription) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline string componentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, "") };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentId(string componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // componentMaxReplica Field Functions 
    bool hasComponentMaxReplica() const { return this->componentMaxReplica_ != nullptr;};
    void deleteComponentMaxReplica() { this->componentMaxReplica_ = nullptr;};
    inline int64_t componentMaxReplica() const { DARABONBA_PTR_GET_DEFAULT(componentMaxReplica_, 0L) };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentMaxReplica(int64_t componentMaxReplica) { DARABONBA_PTR_SET_VALUE(componentMaxReplica_, componentMaxReplica) };


    // componentReplica Field Functions 
    bool hasComponentReplica() const { return this->componentReplica_ != nullptr;};
    void deleteComponentReplica() { this->componentReplica_ = nullptr;};
    inline int64_t componentReplica() const { DARABONBA_PTR_GET_DEFAULT(componentReplica_, 0L) };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentReplica(int64_t componentReplica) { DARABONBA_PTR_SET_VALUE(componentReplica_, componentReplica) };


    // componentReplicaGroupName Field Functions 
    bool hasComponentReplicaGroupName() const { return this->componentReplicaGroupName_ != nullptr;};
    void deleteComponentReplicaGroupName() { this->componentReplicaGroupName_ = nullptr;};
    inline string componentReplicaGroupName() const { DARABONBA_PTR_GET_DEFAULT(componentReplicaGroupName_, "") };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentReplicaGroupName(string componentReplicaGroupName) { DARABONBA_PTR_SET_VALUE(componentReplicaGroupName_, componentReplicaGroupName) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline DescribeApplicationAttributeResponseBodyComponents& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // securityGroups Field Functions 
    bool hasSecurityGroups() const { return this->securityGroups_ != nullptr;};
    void deleteSecurityGroups() { this->securityGroups_ = nullptr;};
    inline const vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups> & securityGroups() const { DARABONBA_PTR_GET_CONST(securityGroups_, vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups>) };
    inline vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups> securityGroups() { DARABONBA_PTR_GET(securityGroups_, vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups>) };
    inline DescribeApplicationAttributeResponseBodyComponents& setSecurityGroups(const vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups> & securityGroups) { DARABONBA_PTR_SET_VALUE(securityGroups_, securityGroups) };
    inline DescribeApplicationAttributeResponseBodyComponents& setSecurityGroups(vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups> && securityGroups) { DARABONBA_PTR_SET_RVALUE(securityGroups_, securityGroups) };


    // securityIPArrays Field Functions 
    bool hasSecurityIPArrays() const { return this->securityIPArrays_ != nullptr;};
    void deleteSecurityIPArrays() { this->securityIPArrays_ = nullptr;};
    inline const vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays> & securityIPArrays() const { DARABONBA_PTR_GET_CONST(securityIPArrays_, vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays>) };
    inline vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays> securityIPArrays() { DARABONBA_PTR_GET(securityIPArrays_, vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays>) };
    inline DescribeApplicationAttributeResponseBodyComponents& setSecurityIPArrays(const vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays> & securityIPArrays) { DARABONBA_PTR_SET_VALUE(securityIPArrays_, securityIPArrays) };
    inline DescribeApplicationAttributeResponseBodyComponents& setSecurityIPArrays(vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays> && securityIPArrays) { DARABONBA_PTR_SET_RVALUE(securityIPArrays_, securityIPArrays) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationAttributeResponseBodyComponents& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // topology Field Functions 
    bool hasTopology() const { return this->topology_ != nullptr;};
    void deleteTopology() { this->topology_ = nullptr;};
    inline const Models::DescribeApplicationAttributeResponseBodyComponentsTopology & topology() const { DARABONBA_PTR_GET_CONST(topology_, Models::DescribeApplicationAttributeResponseBodyComponentsTopology) };
    inline Models::DescribeApplicationAttributeResponseBodyComponentsTopology topology() { DARABONBA_PTR_GET(topology_, Models::DescribeApplicationAttributeResponseBodyComponentsTopology) };
    inline DescribeApplicationAttributeResponseBodyComponents& setTopology(const Models::DescribeApplicationAttributeResponseBodyComponentsTopology & topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };
    inline DescribeApplicationAttributeResponseBodyComponents& setTopology(Models::DescribeApplicationAttributeResponseBodyComponentsTopology && topology) { DARABONBA_PTR_SET_RVALUE(topology_, topology) };


  protected:
    std::shared_ptr<string> componentClass_ = nullptr;
    std::shared_ptr<string> componentClassDescription_ = nullptr;
    std::shared_ptr<string> componentId_ = nullptr;
    std::shared_ptr<int64_t> componentMaxReplica_ = nullptr;
    std::shared_ptr<int64_t> componentReplica_ = nullptr;
    std::shared_ptr<string> componentReplicaGroupName_ = nullptr;
    std::shared_ptr<string> componentType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityGroups>> securityGroups_ = nullptr;
    std::shared_ptr<vector<Models::DescribeApplicationAttributeResponseBodyComponentsSecurityIPArrays>> securityIPArrays_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<Models::DescribeApplicationAttributeResponseBodyComponentsTopology> topology_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
