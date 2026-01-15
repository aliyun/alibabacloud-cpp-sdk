// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEUNCORDONPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_NODEUNCORDONPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeUncordonParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeUncordonParameters& obj) { 
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, NodeUncordonParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    NodeUncordonParameters() = default ;
    NodeUncordonParameters(const NodeUncordonParameters &) = default ;
    NodeUncordonParameters(NodeUncordonParameters &&) = default ;
    NodeUncordonParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeUncordonParameters() = default ;
    NodeUncordonParameters& operator=(const NodeUncordonParameters &) = default ;
    NodeUncordonParameters& operator=(NodeUncordonParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quotaId_ == nullptr
        && this->workspaceId_ == nullptr; };
    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string getQuotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline NodeUncordonParameters& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline NodeUncordonParameters& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> quotaId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
