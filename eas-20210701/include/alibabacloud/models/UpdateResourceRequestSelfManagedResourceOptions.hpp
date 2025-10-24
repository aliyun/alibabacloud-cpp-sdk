// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEREQUESTSELFMANAGEDRESOURCEOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEREQUESTSELFMANAGEDRESOURCEOPTIONS_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class UpdateResourceRequestSelfManagedResourceOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceRequestSelfManagedResourceOptions& obj) { 
      DARABONBA_PTR_TO_JSON(NodeMatchLabels, nodeMatchLabels_);
      DARABONBA_PTR_TO_JSON(NodeTolerations, nodeTolerations_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceRequestSelfManagedResourceOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeMatchLabels, nodeMatchLabels_);
      DARABONBA_PTR_FROM_JSON(NodeTolerations, nodeTolerations_);
    };
    UpdateResourceRequestSelfManagedResourceOptions() = default ;
    UpdateResourceRequestSelfManagedResourceOptions(const UpdateResourceRequestSelfManagedResourceOptions &) = default ;
    UpdateResourceRequestSelfManagedResourceOptions(UpdateResourceRequestSelfManagedResourceOptions &&) = default ;
    UpdateResourceRequestSelfManagedResourceOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceRequestSelfManagedResourceOptions() = default ;
    UpdateResourceRequestSelfManagedResourceOptions& operator=(const UpdateResourceRequestSelfManagedResourceOptions &) = default ;
    UpdateResourceRequestSelfManagedResourceOptions& operator=(UpdateResourceRequestSelfManagedResourceOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeMatchLabels_ == nullptr
        && return this->nodeTolerations_ == nullptr; };
    // nodeMatchLabels Field Functions 
    bool hasNodeMatchLabels() const { return this->nodeMatchLabels_ != nullptr;};
    void deleteNodeMatchLabels() { this->nodeMatchLabels_ = nullptr;};
    inline const map<string, string> & nodeMatchLabels() const { DARABONBA_PTR_GET_CONST(nodeMatchLabels_, map<string, string>) };
    inline map<string, string> nodeMatchLabels() { DARABONBA_PTR_GET(nodeMatchLabels_, map<string, string>) };
    inline UpdateResourceRequestSelfManagedResourceOptions& setNodeMatchLabels(const map<string, string> & nodeMatchLabels) { DARABONBA_PTR_SET_VALUE(nodeMatchLabels_, nodeMatchLabels) };
    inline UpdateResourceRequestSelfManagedResourceOptions& setNodeMatchLabels(map<string, string> && nodeMatchLabels) { DARABONBA_PTR_SET_RVALUE(nodeMatchLabels_, nodeMatchLabels) };


    // nodeTolerations Field Functions 
    bool hasNodeTolerations() const { return this->nodeTolerations_ != nullptr;};
    void deleteNodeTolerations() { this->nodeTolerations_ = nullptr;};
    inline const vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations> & nodeTolerations() const { DARABONBA_PTR_GET_CONST(nodeTolerations_, vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations>) };
    inline vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations> nodeTolerations() { DARABONBA_PTR_GET(nodeTolerations_, vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations>) };
    inline UpdateResourceRequestSelfManagedResourceOptions& setNodeTolerations(const vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations> & nodeTolerations) { DARABONBA_PTR_SET_VALUE(nodeTolerations_, nodeTolerations) };
    inline UpdateResourceRequestSelfManagedResourceOptions& setNodeTolerations(vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations> && nodeTolerations) { DARABONBA_PTR_SET_RVALUE(nodeTolerations_, nodeTolerations) };


  protected:
    // Tag tag key-value pairs for nodes.
    std::shared_ptr<map<string, string>> nodeMatchLabels_ = nullptr;
    // Tolerations for nodes.
    std::shared_ptr<vector<Models::UpdateResourceRequestSelfManagedResourceOptionsNodeTolerations>> nodeTolerations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
