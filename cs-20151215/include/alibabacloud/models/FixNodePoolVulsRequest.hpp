// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIXNODEPOOLVULSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FIXNODEPOOLVULSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FixNodePoolVulsRequestRolloutPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class FixNodePoolVulsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FixNodePoolVulsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(auto_restart, autoRestart_);
      DARABONBA_PTR_TO_JSON(nodes, nodes_);
      DARABONBA_PTR_TO_JSON(rollout_policy, rolloutPolicy_);
      DARABONBA_PTR_TO_JSON(vuls, vuls_);
    };
    friend void from_json(const Darabonba::Json& j, FixNodePoolVulsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(auto_restart, autoRestart_);
      DARABONBA_PTR_FROM_JSON(nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(rollout_policy, rolloutPolicy_);
      DARABONBA_PTR_FROM_JSON(vuls, vuls_);
    };
    FixNodePoolVulsRequest() = default ;
    FixNodePoolVulsRequest(const FixNodePoolVulsRequest &) = default ;
    FixNodePoolVulsRequest(FixNodePoolVulsRequest &&) = default ;
    FixNodePoolVulsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FixNodePoolVulsRequest() = default ;
    FixNodePoolVulsRequest& operator=(const FixNodePoolVulsRequest &) = default ;
    FixNodePoolVulsRequest& operator=(FixNodePoolVulsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRestart_ != nullptr
        && this->nodes_ != nullptr && this->rolloutPolicy_ != nullptr && this->vuls_ != nullptr; };
    // autoRestart Field Functions 
    bool hasAutoRestart() const { return this->autoRestart_ != nullptr;};
    void deleteAutoRestart() { this->autoRestart_ = nullptr;};
    inline bool autoRestart() const { DARABONBA_PTR_GET_DEFAULT(autoRestart_, false) };
    inline FixNodePoolVulsRequest& setAutoRestart(bool autoRestart) { DARABONBA_PTR_SET_VALUE(autoRestart_, autoRestart) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<string> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<string>) };
    inline vector<string> nodes() { DARABONBA_PTR_GET(nodes_, vector<string>) };
    inline FixNodePoolVulsRequest& setNodes(const vector<string> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline FixNodePoolVulsRequest& setNodes(vector<string> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // rolloutPolicy Field Functions 
    bool hasRolloutPolicy() const { return this->rolloutPolicy_ != nullptr;};
    void deleteRolloutPolicy() { this->rolloutPolicy_ = nullptr;};
    inline const FixNodePoolVulsRequestRolloutPolicy & rolloutPolicy() const { DARABONBA_PTR_GET_CONST(rolloutPolicy_, FixNodePoolVulsRequestRolloutPolicy) };
    inline FixNodePoolVulsRequestRolloutPolicy rolloutPolicy() { DARABONBA_PTR_GET(rolloutPolicy_, FixNodePoolVulsRequestRolloutPolicy) };
    inline FixNodePoolVulsRequest& setRolloutPolicy(const FixNodePoolVulsRequestRolloutPolicy & rolloutPolicy) { DARABONBA_PTR_SET_VALUE(rolloutPolicy_, rolloutPolicy) };
    inline FixNodePoolVulsRequest& setRolloutPolicy(FixNodePoolVulsRequestRolloutPolicy && rolloutPolicy) { DARABONBA_PTR_SET_RVALUE(rolloutPolicy_, rolloutPolicy) };


    // vuls Field Functions 
    bool hasVuls() const { return this->vuls_ != nullptr;};
    void deleteVuls() { this->vuls_ = nullptr;};
    inline const vector<string> & vuls() const { DARABONBA_PTR_GET_CONST(vuls_, vector<string>) };
    inline vector<string> vuls() { DARABONBA_PTR_GET(vuls_, vector<string>) };
    inline FixNodePoolVulsRequest& setVuls(const vector<string> & vuls) { DARABONBA_PTR_SET_VALUE(vuls_, vuls) };
    inline FixNodePoolVulsRequest& setVuls(vector<string> && vuls) { DARABONBA_PTR_SET_RVALUE(vuls_, vuls) };


  protected:
    // Specifies whether to allow the nodes to restart.
    std::shared_ptr<bool> autoRestart_ = nullptr;
    // The names of the nodes to be patched.
    std::shared_ptr<vector<string>> nodes_ = nullptr;
    // The batch patching policy.
    std::shared_ptr<FixNodePoolVulsRequestRolloutPolicy> rolloutPolicy_ = nullptr;
    // The list of vulnerabilities.
    std::shared_ptr<vector<string>> vuls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
