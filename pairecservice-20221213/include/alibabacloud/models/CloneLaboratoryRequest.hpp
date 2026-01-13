// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLONELABORATORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLONELABORATORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CloneLaboratoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloneLaboratoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloneExperimentGroup, cloneExperimentGroup_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CloneLaboratoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloneExperimentGroup, cloneExperimentGroup_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CloneLaboratoryRequest() = default ;
    CloneLaboratoryRequest(const CloneLaboratoryRequest &) = default ;
    CloneLaboratoryRequest(CloneLaboratoryRequest &&) = default ;
    CloneLaboratoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloneLaboratoryRequest() = default ;
    CloneLaboratoryRequest& operator=(const CloneLaboratoryRequest &) = default ;
    CloneLaboratoryRequest& operator=(CloneLaboratoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloneExperimentGroup_ == nullptr
        && this->environment_ == nullptr && this->instanceId_ == nullptr; };
    // cloneExperimentGroup Field Functions 
    bool hasCloneExperimentGroup() const { return this->cloneExperimentGroup_ != nullptr;};
    void deleteCloneExperimentGroup() { this->cloneExperimentGroup_ = nullptr;};
    inline bool getCloneExperimentGroup() const { DARABONBA_PTR_GET_DEFAULT(cloneExperimentGroup_, false) };
    inline CloneLaboratoryRequest& setCloneExperimentGroup(bool cloneExperimentGroup) { DARABONBA_PTR_SET_VALUE(cloneExperimentGroup_, cloneExperimentGroup) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string getEnvironment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline CloneLaboratoryRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CloneLaboratoryRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<bool> cloneExperimentGroup_ {};
    // This parameter is required.
    shared_ptr<string> environment_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
