// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPOOLKUBERNETESCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NODEPOOLKUBERNETESCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Taint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class NodepoolKubernetesConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodepoolKubernetesConfig& obj) { 
      DARABONBA_PTR_TO_JSON(cms_enabled, cmsEnabled_);
      DARABONBA_PTR_TO_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(node_name_mode, nodeNameMode_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
      DARABONBA_PTR_TO_JSON(runtime_version, runtimeVersion_);
      DARABONBA_PTR_TO_JSON(taints, taints_);
      DARABONBA_PTR_TO_JSON(user_data, userData_);
    };
    friend void from_json(const Darabonba::Json& j, NodepoolKubernetesConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(cms_enabled, cmsEnabled_);
      DARABONBA_PTR_FROM_JSON(cpu_policy, cpuPolicy_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(node_name_mode, nodeNameMode_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
      DARABONBA_PTR_FROM_JSON(runtime_version, runtimeVersion_);
      DARABONBA_PTR_FROM_JSON(taints, taints_);
      DARABONBA_PTR_FROM_JSON(user_data, userData_);
    };
    NodepoolKubernetesConfig() = default ;
    NodepoolKubernetesConfig(const NodepoolKubernetesConfig &) = default ;
    NodepoolKubernetesConfig(NodepoolKubernetesConfig &&) = default ;
    NodepoolKubernetesConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodepoolKubernetesConfig() = default ;
    NodepoolKubernetesConfig& operator=(const NodepoolKubernetesConfig &) = default ;
    NodepoolKubernetesConfig& operator=(NodepoolKubernetesConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cmsEnabled_ != nullptr
        && this->cpuPolicy_ != nullptr && this->labels_ != nullptr && this->nodeNameMode_ != nullptr && this->runtime_ != nullptr && this->runtimeVersion_ != nullptr
        && this->taints_ != nullptr && this->userData_ != nullptr; };
    // cmsEnabled Field Functions 
    bool hasCmsEnabled() const { return this->cmsEnabled_ != nullptr;};
    void deleteCmsEnabled() { this->cmsEnabled_ = nullptr;};
    inline bool cmsEnabled() const { DARABONBA_PTR_GET_DEFAULT(cmsEnabled_, false) };
    inline NodepoolKubernetesConfig& setCmsEnabled(bool cmsEnabled) { DARABONBA_PTR_SET_VALUE(cmsEnabled_, cmsEnabled) };


    // cpuPolicy Field Functions 
    bool hasCpuPolicy() const { return this->cpuPolicy_ != nullptr;};
    void deleteCpuPolicy() { this->cpuPolicy_ = nullptr;};
    inline string cpuPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuPolicy_, "") };
    inline NodepoolKubernetesConfig& setCpuPolicy(string cpuPolicy) { DARABONBA_PTR_SET_VALUE(cpuPolicy_, cpuPolicy) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::Tag> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::Tag>) };
    inline vector<Models::Tag> labels() { DARABONBA_PTR_GET(labels_, vector<Models::Tag>) };
    inline NodepoolKubernetesConfig& setLabels(const vector<Models::Tag> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline NodepoolKubernetesConfig& setLabels(vector<Models::Tag> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // nodeNameMode Field Functions 
    bool hasNodeNameMode() const { return this->nodeNameMode_ != nullptr;};
    void deleteNodeNameMode() { this->nodeNameMode_ = nullptr;};
    inline string nodeNameMode() const { DARABONBA_PTR_GET_DEFAULT(nodeNameMode_, "") };
    inline NodepoolKubernetesConfig& setNodeNameMode(string nodeNameMode) { DARABONBA_PTR_SET_VALUE(nodeNameMode_, nodeNameMode) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline NodepoolKubernetesConfig& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


    // runtimeVersion Field Functions 
    bool hasRuntimeVersion() const { return this->runtimeVersion_ != nullptr;};
    void deleteRuntimeVersion() { this->runtimeVersion_ = nullptr;};
    inline string runtimeVersion() const { DARABONBA_PTR_GET_DEFAULT(runtimeVersion_, "") };
    inline NodepoolKubernetesConfig& setRuntimeVersion(string runtimeVersion) { DARABONBA_PTR_SET_VALUE(runtimeVersion_, runtimeVersion) };


    // taints Field Functions 
    bool hasTaints() const { return this->taints_ != nullptr;};
    void deleteTaints() { this->taints_ = nullptr;};
    inline const vector<Models::Taint> & taints() const { DARABONBA_PTR_GET_CONST(taints_, vector<Models::Taint>) };
    inline vector<Models::Taint> taints() { DARABONBA_PTR_GET(taints_, vector<Models::Taint>) };
    inline NodepoolKubernetesConfig& setTaints(const vector<Models::Taint> & taints) { DARABONBA_PTR_SET_VALUE(taints_, taints) };
    inline NodepoolKubernetesConfig& setTaints(vector<Models::Taint> && taints) { DARABONBA_PTR_SET_RVALUE(taints_, taints) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline NodepoolKubernetesConfig& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    std::shared_ptr<bool> cmsEnabled_ = nullptr;
    std::shared_ptr<string> cpuPolicy_ = nullptr;
    std::shared_ptr<vector<Models::Tag>> labels_ = nullptr;
    std::shared_ptr<string> nodeNameMode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> runtime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> runtimeVersion_ = nullptr;
    std::shared_ptr<vector<Models::Taint>> taints_ = nullptr;
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
