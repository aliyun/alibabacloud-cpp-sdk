// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELARTIFACTBUILDTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELARTIFACTBUILDTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class CancelArtifactBuildTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelArtifactBuildTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelArtifactBuildTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BuildTaskId, buildTaskId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CancelArtifactBuildTaskRequest() = default ;
    CancelArtifactBuildTaskRequest(const CancelArtifactBuildTaskRequest &) = default ;
    CancelArtifactBuildTaskRequest(CancelArtifactBuildTaskRequest &&) = default ;
    CancelArtifactBuildTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelArtifactBuildTaskRequest() = default ;
    CancelArtifactBuildTaskRequest& operator=(const CancelArtifactBuildTaskRequest &) = default ;
    CancelArtifactBuildTaskRequest& operator=(CancelArtifactBuildTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->buildTaskId_ != nullptr
        && this->instanceId_ != nullptr; };
    // buildTaskId Field Functions 
    bool hasBuildTaskId() const { return this->buildTaskId_ != nullptr;};
    void deleteBuildTaskId() { this->buildTaskId_ = nullptr;};
    inline string buildTaskId() const { DARABONBA_PTR_GET_DEFAULT(buildTaskId_, "") };
    inline CancelArtifactBuildTaskRequest& setBuildTaskId(string buildTaskId) { DARABONBA_PTR_SET_VALUE(buildTaskId_, buildTaskId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CancelArtifactBuildTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the artifact building task.
    // 
    // This parameter is required.
    std::shared_ptr<string> buildTaskId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
