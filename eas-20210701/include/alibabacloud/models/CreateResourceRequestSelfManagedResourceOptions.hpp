// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUESTSELFMANAGEDRESOURCEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUESTSELFMANAGEDRESOURCEOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/CreateResourceRequestSelfManagedResourceOptionsNodeTolerations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class CreateResourceRequestSelfManagedResourceOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequestSelfManagedResourceOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalClusterId, externalClusterId_);
      DARABONBA_PTR_TO_JSON(NodeMatchLabels, nodeMatchLabels_);
      DARABONBA_PTR_TO_JSON(NodeTolerations, nodeTolerations_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequestSelfManagedResourceOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalClusterId, externalClusterId_);
      DARABONBA_PTR_FROM_JSON(NodeMatchLabels, nodeMatchLabels_);
      DARABONBA_PTR_FROM_JSON(NodeTolerations, nodeTolerations_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
    };
    CreateResourceRequestSelfManagedResourceOptions() = default ;
    CreateResourceRequestSelfManagedResourceOptions(const CreateResourceRequestSelfManagedResourceOptions &) = default ;
    CreateResourceRequestSelfManagedResourceOptions(CreateResourceRequestSelfManagedResourceOptions &&) = default ;
    CreateResourceRequestSelfManagedResourceOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequestSelfManagedResourceOptions() = default ;
    CreateResourceRequestSelfManagedResourceOptions& operator=(const CreateResourceRequestSelfManagedResourceOptions &) = default ;
    CreateResourceRequestSelfManagedResourceOptions& operator=(CreateResourceRequestSelfManagedResourceOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalClusterId_ != nullptr
        && this->nodeMatchLabels_ != nullptr && this->nodeTolerations_ != nullptr && this->roleName_ != nullptr; };
    // externalClusterId Field Functions 
    bool hasExternalClusterId() const { return this->externalClusterId_ != nullptr;};
    void deleteExternalClusterId() { this->externalClusterId_ = nullptr;};
    inline string externalClusterId() const { DARABONBA_PTR_GET_DEFAULT(externalClusterId_, "") };
    inline CreateResourceRequestSelfManagedResourceOptions& setExternalClusterId(string externalClusterId) { DARABONBA_PTR_SET_VALUE(externalClusterId_, externalClusterId) };


    // nodeMatchLabels Field Functions 
    bool hasNodeMatchLabels() const { return this->nodeMatchLabels_ != nullptr;};
    void deleteNodeMatchLabels() { this->nodeMatchLabels_ = nullptr;};
    inline const map<string, string> & nodeMatchLabels() const { DARABONBA_PTR_GET_CONST(nodeMatchLabels_, map<string, string>) };
    inline map<string, string> nodeMatchLabels() { DARABONBA_PTR_GET(nodeMatchLabels_, map<string, string>) };
    inline CreateResourceRequestSelfManagedResourceOptions& setNodeMatchLabels(const map<string, string> & nodeMatchLabels) { DARABONBA_PTR_SET_VALUE(nodeMatchLabels_, nodeMatchLabels) };
    inline CreateResourceRequestSelfManagedResourceOptions& setNodeMatchLabels(map<string, string> && nodeMatchLabels) { DARABONBA_PTR_SET_RVALUE(nodeMatchLabels_, nodeMatchLabels) };


    // nodeTolerations Field Functions 
    bool hasNodeTolerations() const { return this->nodeTolerations_ != nullptr;};
    void deleteNodeTolerations() { this->nodeTolerations_ = nullptr;};
    inline const vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations> & nodeTolerations() const { DARABONBA_PTR_GET_CONST(nodeTolerations_, vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations>) };
    inline vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations> nodeTolerations() { DARABONBA_PTR_GET(nodeTolerations_, vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations>) };
    inline CreateResourceRequestSelfManagedResourceOptions& setNodeTolerations(const vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations> & nodeTolerations) { DARABONBA_PTR_SET_VALUE(nodeTolerations_, nodeTolerations) };
    inline CreateResourceRequestSelfManagedResourceOptions& setNodeTolerations(vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations> && nodeTolerations) { DARABONBA_PTR_SET_RVALUE(nodeTolerations_, nodeTolerations) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline CreateResourceRequestSelfManagedResourceOptions& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


  protected:
    // The ID of the self-managed cluster.
    std::shared_ptr<string> externalClusterId_ = nullptr;
    // The tag key-value pairs of the node.
    std::shared_ptr<map<string, string>> nodeMatchLabels_ = nullptr;
    // The tolerations for the node taint.
    std::shared_ptr<vector<Models::CreateResourceRequestSelfManagedResourceOptionsNodeTolerations>> nodeTolerations_ = nullptr;
    // The name of the RAM user to which the permissions on Elastic Algorithm Service (EAS) of Platform for AI (PAI) are granted.
    std::shared_ptr<string> roleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
