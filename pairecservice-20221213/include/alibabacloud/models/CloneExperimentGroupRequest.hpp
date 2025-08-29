// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONEEXPERIMENTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONEEXPERIMENTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CloneExperimentGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneExperimentGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneExperimentGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
    };
    CloneExperimentGroupRequest() = default ;
    CloneExperimentGroupRequest(const CloneExperimentGroupRequest &) = default ;
    CloneExperimentGroupRequest(CloneExperimentGroupRequest &&) = default ;
    CloneExperimentGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneExperimentGroupRequest() = default ;
    CloneExperimentGroupRequest& operator=(const CloneExperimentGroupRequest &) = default ;
    CloneExperimentGroupRequest& operator=(CloneExperimentGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environment_ != nullptr
        && this->instanceId_ != nullptr && this->layerId_ != nullptr; };
    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline CloneExperimentGroupRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CloneExperimentGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string layerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline CloneExperimentGroupRequest& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> environment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> layerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
