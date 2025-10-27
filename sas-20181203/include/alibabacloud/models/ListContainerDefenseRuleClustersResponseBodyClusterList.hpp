// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULECLUSTERSRESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULECLUSTERSRESPONSEBODYCLUSTERLIST_HPP_
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
  class ListContainerDefenseRuleClustersResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContainerDefenseRuleClustersResponseBodyClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, ListContainerDefenseRuleClustersResponseBodyClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    ListContainerDefenseRuleClustersResponseBodyClusterList() = default ;
    ListContainerDefenseRuleClustersResponseBodyClusterList(const ListContainerDefenseRuleClustersResponseBodyClusterList &) = default ;
    ListContainerDefenseRuleClustersResponseBodyClusterList(ListContainerDefenseRuleClustersResponseBodyClusterList &&) = default ;
    ListContainerDefenseRuleClustersResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContainerDefenseRuleClustersResponseBodyClusterList() = default ;
    ListContainerDefenseRuleClustersResponseBodyClusterList& operator=(const ListContainerDefenseRuleClustersResponseBodyClusterList &) = default ;
    ListContainerDefenseRuleClustersResponseBodyClusterList& operator=(ListContainerDefenseRuleClustersResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allNamespace_ == nullptr
        && return this->clusterId_ == nullptr && return this->namespaces_ == nullptr && return this->ruleId_ == nullptr; };
    // allNamespace Field Functions 
    bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
    void deleteAllNamespace() { this->allNamespace_ = nullptr;};
    inline int32_t allNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
    inline ListContainerDefenseRuleClustersResponseBodyClusterList& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListContainerDefenseRuleClustersResponseBodyClusterList& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline ListContainerDefenseRuleClustersResponseBodyClusterList& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline ListContainerDefenseRuleClustersResponseBodyClusterList& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListContainerDefenseRuleClustersResponseBodyClusterList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // Indicates whether all namespaces are included. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<int32_t> allNamespace_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespaces.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
    // The ID of the rule.
    // 
    // >  You can call the [ListInterceptionRulePage](https://help.aliyun.com/document_detail/2590599.html) operation to query the IDs of rules.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
