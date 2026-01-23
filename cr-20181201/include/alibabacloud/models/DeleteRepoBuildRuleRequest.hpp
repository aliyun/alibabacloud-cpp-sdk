// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEREPOBUILDRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEREPOBUILDRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class DeleteRepoBuildRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRepoBuildRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRepoBuildRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    DeleteRepoBuildRuleRequest() = default ;
    DeleteRepoBuildRuleRequest(const DeleteRepoBuildRuleRequest &) = default ;
    DeleteRepoBuildRuleRequest(DeleteRepoBuildRuleRequest &&) = default ;
    DeleteRepoBuildRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRepoBuildRuleRequest() = default ;
    DeleteRepoBuildRuleRequest& operator=(const DeleteRepoBuildRuleRequest &) = default ;
    DeleteRepoBuildRuleRequest& operator=(DeleteRepoBuildRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildRuleId_ == nullptr
        && this->instanceId_ == nullptr && this->repoId_ == nullptr; };
    // buildRuleId Field Functions 
    bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
    void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
    inline string getBuildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
    inline DeleteRepoBuildRuleRequest& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteRepoBuildRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline DeleteRepoBuildRuleRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // The ID of the image building rule.
    // 
    // This parameter is required.
    shared_ptr<string> buildRuleId_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the image repository.
    // 
    // This parameter is required.
    shared_ptr<string> repoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
