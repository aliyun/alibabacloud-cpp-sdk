// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULESHRINKREQUESTSCOPE_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULESHRINKREQUESTSCOPE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerDefenseRuleShrinkRequestScope : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerDefenseRuleShrinkRequestScope& obj) { 
      DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerDefenseRuleShrinkRequestScope& obj) { 
      DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
    };
    ModifyContainerDefenseRuleShrinkRequestScope() = default ;
    ModifyContainerDefenseRuleShrinkRequestScope(const ModifyContainerDefenseRuleShrinkRequestScope &) = default ;
    ModifyContainerDefenseRuleShrinkRequestScope(ModifyContainerDefenseRuleShrinkRequestScope &&) = default ;
    ModifyContainerDefenseRuleShrinkRequestScope(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerDefenseRuleShrinkRequestScope() = default ;
    ModifyContainerDefenseRuleShrinkRequestScope& operator=(const ModifyContainerDefenseRuleShrinkRequestScope &) = default ;
    ModifyContainerDefenseRuleShrinkRequestScope& operator=(ModifyContainerDefenseRuleShrinkRequestScope &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allNamespace_ != nullptr
        && this->clusterId_ != nullptr && this->namespaces_ != nullptr; };
    // allNamespace Field Functions 
    bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
    void deleteAllNamespace() { this->allNamespace_ = nullptr;};
    inline int32_t allNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
    inline ModifyContainerDefenseRuleShrinkRequestScope& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyContainerDefenseRuleShrinkRequestScope& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline ModifyContainerDefenseRuleShrinkRequestScope& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ModifyContainerDefenseRuleShrinkRequestScope& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


  protected:
    // Specifies whether to include all namespaces. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allNamespace_ = nullptr;
    // The ID of the cluster on which the rule takes effect.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespaces.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
