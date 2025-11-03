// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBUILDRECORDBYRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBUILDRECORDBYRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CreateBuildRecordByRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBuildRecordByRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBuildRecordByRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildRuleId, buildRuleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
    };
    CreateBuildRecordByRuleRequest() = default ;
    CreateBuildRecordByRuleRequest(const CreateBuildRecordByRuleRequest &) = default ;
    CreateBuildRecordByRuleRequest(CreateBuildRecordByRuleRequest &&) = default ;
    CreateBuildRecordByRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBuildRecordByRuleRequest() = default ;
    CreateBuildRecordByRuleRequest& operator=(const CreateBuildRecordByRuleRequest &) = default ;
    CreateBuildRecordByRuleRequest& operator=(CreateBuildRecordByRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buildRuleId_ == nullptr
        && return this->instanceId_ == nullptr && return this->repoId_ == nullptr; };
    // buildRuleId Field Functions 
    bool hasBuildRuleId() const { return this->buildRuleId_ != nullptr;};
    void deleteBuildRuleId() { this->buildRuleId_ = nullptr;};
    inline string buildRuleId() const { DARABONBA_PTR_GET_DEFAULT(buildRuleId_, "") };
    inline CreateBuildRecordByRuleRequest& setBuildRuleId(string buildRuleId) { DARABONBA_PTR_SET_VALUE(buildRuleId_, buildRuleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateBuildRecordByRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateBuildRecordByRuleRequest& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


  protected:
    // The ID of the image building rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> buildRuleId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the image repository.
    // 
    // This parameter is required.
    std::shared_ptr<string> repoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
