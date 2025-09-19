// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWSHRINKREQUESTSCOPES_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWSHRINKREQUESTSCOPES_HPP_
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
  class CreateOpaStrategyNewShrinkRequestScopes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaStrategyNewShrinkRequestScopes& obj) { 
      DARABONBA_PTR_TO_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
      DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaStrategyNewShrinkRequestScopes& obj) { 
      DARABONBA_PTR_FROM_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
      DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
    };
    CreateOpaStrategyNewShrinkRequestScopes() = default ;
    CreateOpaStrategyNewShrinkRequestScopes(const CreateOpaStrategyNewShrinkRequestScopes &) = default ;
    CreateOpaStrategyNewShrinkRequestScopes(CreateOpaStrategyNewShrinkRequestScopes &&) = default ;
    CreateOpaStrategyNewShrinkRequestScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaStrategyNewShrinkRequestScopes() = default ;
    CreateOpaStrategyNewShrinkRequestScopes& operator=(const CreateOpaStrategyNewShrinkRequestScopes &) = default ;
    CreateOpaStrategyNewShrinkRequestScopes& operator=(CreateOpaStrategyNewShrinkRequestScopes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ackPolicyInstanceId_ != nullptr
        && this->allNamespace_ != nullptr && this->clusterId_ != nullptr && this->namespaceList_ != nullptr; };
    // ackPolicyInstanceId Field Functions 
    bool hasAckPolicyInstanceId() const { return this->ackPolicyInstanceId_ != nullptr;};
    void deleteAckPolicyInstanceId() { this->ackPolicyInstanceId_ = nullptr;};
    inline string ackPolicyInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ackPolicyInstanceId_, "") };
    inline CreateOpaStrategyNewShrinkRequestScopes& setAckPolicyInstanceId(string ackPolicyInstanceId) { DARABONBA_PTR_SET_VALUE(ackPolicyInstanceId_, ackPolicyInstanceId) };


    // allNamespace Field Functions 
    bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
    void deleteAllNamespace() { this->allNamespace_ = nullptr;};
    inline int32_t allNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
    inline CreateOpaStrategyNewShrinkRequestScopes& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOpaStrategyNewShrinkRequestScopes& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaceList Field Functions 
    bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
    void deleteNamespaceList() { this->namespaceList_ = nullptr;};
    inline const vector<string> & namespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
    inline vector<string> namespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
    inline CreateOpaStrategyNewShrinkRequestScopes& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
    inline CreateOpaStrategyNewShrinkRequestScopes& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


  protected:
    // The ID of the cluster node to which the rule is applied.
    // 
    // > This parameter is not required when you create the instance.
    std::shared_ptr<string> ackPolicyInstanceId_ = nullptr;
    // Specifies whether to include all namespaces. Valid values:
    // 
    // *   **1**: includes all namespaces.
    // *   **0**: does not include all namespaces.
    std::shared_ptr<int32_t> allNamespace_ = nullptr;
    // The ID of the cluster that is specified in the rule.
    // 
    // >  You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/421736.html) operation to query the cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespaces.
    // 
    // > This parameter is valid only when the AllNamespace parameter is set to 0.
    std::shared_ptr<vector<string>> namespaceList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
