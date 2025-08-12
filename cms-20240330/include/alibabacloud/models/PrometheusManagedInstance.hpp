// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROMETHEUSMANAGEDINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_PROMETHEUSMANAGEDINSTANCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class PrometheusManagedInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrometheusManagedInstance& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(instanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_TO_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, PrometheusManagedInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(instanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceId, prometheusInstanceId_);
      DARABONBA_PTR_FROM_JSON(prometheusInstanceName, prometheusInstanceName_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    PrometheusManagedInstance() = default ;
    PrometheusManagedInstance(const PrometheusManagedInstance &) = default ;
    PrometheusManagedInstance(PrometheusManagedInstance &&) = default ;
    PrometheusManagedInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrometheusManagedInstance() = default ;
    PrometheusManagedInstance& operator=(const PrometheusManagedInstance &) = default ;
    PrometheusManagedInstance& operator=(PrometheusManagedInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->instanceType_ != nullptr && this->prometheusInstanceId_ != nullptr && this->prometheusInstanceName_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr
        && this->workspace_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PrometheusManagedInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline PrometheusManagedInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // prometheusInstanceId Field Functions 
    bool hasPrometheusInstanceId() const { return this->prometheusInstanceId_ != nullptr;};
    void deletePrometheusInstanceId() { this->prometheusInstanceId_ = nullptr;};
    inline string prometheusInstanceId() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceId_, "") };
    inline PrometheusManagedInstance& setPrometheusInstanceId(string prometheusInstanceId) { DARABONBA_PTR_SET_VALUE(prometheusInstanceId_, prometheusInstanceId) };


    // prometheusInstanceName Field Functions 
    bool hasPrometheusInstanceName() const { return this->prometheusInstanceName_ != nullptr;};
    void deletePrometheusInstanceName() { this->prometheusInstanceName_ = nullptr;};
    inline string prometheusInstanceName() const { DARABONBA_PTR_GET_DEFAULT(prometheusInstanceName_, "") };
    inline PrometheusManagedInstance& setPrometheusInstanceName(string prometheusInstanceName) { DARABONBA_PTR_SET_VALUE(prometheusInstanceName_, prometheusInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PrometheusManagedInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline PrometheusManagedInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline PrometheusManagedInstance& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> prometheusInstanceId_ = nullptr;
    std::shared_ptr<string> prometheusInstanceName_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
