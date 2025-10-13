// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSTACKINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_APPSTACKINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AppStackInstanceEndpoints.hpp>
#include <alibabacloud/models/AppStackInstanceParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class AppStackInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppStackInstance& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(StackId, stackId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, AppStackInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(StackId, stackId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    AppStackInstance() = default ;
    AppStackInstance(const AppStackInstance &) = default ;
    AppStackInstance(AppStackInstance &&) = default ;
    AppStackInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppStackInstance() = default ;
    AppStackInstance& operator=(const AppStackInstance &) = default ;
    AppStackInstance& operator=(AppStackInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->endpoints_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->parameters_ == nullptr && return this->stackId_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline AppStackInstance& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<AppStackInstanceEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<AppStackInstanceEndpoints>) };
    inline vector<AppStackInstanceEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<AppStackInstanceEndpoints>) };
    inline AppStackInstance& setEndpoints(const vector<AppStackInstanceEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline AppStackInstance& setEndpoints(vector<AppStackInstanceEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppStackInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline AppStackInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<AppStackInstanceParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<AppStackInstanceParameters>) };
    inline vector<AppStackInstanceParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<AppStackInstanceParameters>) };
    inline AppStackInstance& setParameters(const vector<AppStackInstanceParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline AppStackInstance& setParameters(vector<AppStackInstanceParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // stackId Field Functions 
    bool hasStackId() const { return this->stackId_ != nullptr;};
    void deleteStackId() { this->stackId_ = nullptr;};
    inline string stackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
    inline AppStackInstance& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline AppStackInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline AppStackInstance& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<vector<AppStackInstanceEndpoints>> endpoints_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<vector<AppStackInstanceParameters>> parameters_ = nullptr;
    std::shared_ptr<string> stackId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
