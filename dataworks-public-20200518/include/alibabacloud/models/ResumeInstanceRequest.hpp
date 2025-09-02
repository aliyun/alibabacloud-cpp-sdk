// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ResumeInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectEnv, projectEnv_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectEnv, projectEnv_);
    };
    ResumeInstanceRequest() = default ;
    ResumeInstanceRequest(const ResumeInstanceRequest &) = default ;
    ResumeInstanceRequest(ResumeInstanceRequest &&) = default ;
    ResumeInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeInstanceRequest() = default ;
    ResumeInstanceRequest& operator=(const ResumeInstanceRequest &) = default ;
    ResumeInstanceRequest& operator=(ResumeInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->projectEnv_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ResumeInstanceRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectEnv Field Functions 
    bool hasProjectEnv() const { return this->projectEnv_ != nullptr;};
    void deleteProjectEnv() { this->projectEnv_ = nullptr;};
    inline string projectEnv() const { DARABONBA_PTR_GET_DEFAULT(projectEnv_, "") };
    inline ResumeInstanceRequest& setProjectEnv(string projectEnv) { DARABONBA_PTR_SET_VALUE(projectEnv_, projectEnv) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The environment of the workspace. Valid values: PROD and DEV.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectEnv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
