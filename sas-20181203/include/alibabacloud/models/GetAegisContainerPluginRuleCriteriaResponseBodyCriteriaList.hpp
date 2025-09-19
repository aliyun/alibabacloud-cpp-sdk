// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULECRITERIARESPONSEBODYCRITERIALIST_HPP_
#define ALIBABACLOUD_MODELS_GETAEGISCONTAINERPLUGINRULECRITERIARESPONSEBODYCRITERIALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList() = default ;
    GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList(const GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList &) = default ;
    GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList(GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList &&) = default ;
    GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList() = default ;
    GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& operator=(const GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList &) = default ;
    GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& operator=(GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->type_ != nullptr && this->values_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline string values() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
    inline GetAegisContainerPluginRuleCriteriaResponseBodyCriteriaList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


  protected:
    // The name of the search condition. Valid values:
    // 
    // *   **instanceId**: the ID of the container instance.
    // *   **clusterId**: the cluster ID.
    // *   **regionId**: the ID of the region in which the container resides.
    // *   **clusterName**: the name of the cluster.
    // *   **clusterType**: the type of the cluster.
    // *   **hostIp**: the public IP address.
    // *   **pod**: the pod.
    // *   **podIp**: the IP address of the pod.
    // *   **containerId**: the container ID.
    // *   **containerScope**: the type of the container.
    std::shared_ptr<string> name_ = nullptr;
    // The type of the search condition. Valid values:
    // 
    // *   **input**: The search condition needs to be specified.
    // *   **select**: The search condition is an option that can be selected from the drop-down list.
    std::shared_ptr<string> type_ = nullptr;
    // The values.
    std::shared_ptr<string> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
