// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINSTANCETRIALLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINSTANCETRIALLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateInstanceTrialLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateInstanceTrialLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateInstanceTrialLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateInstanceTrialLicenseRequest() = default ;
    CreateInstanceTrialLicenseRequest(const CreateInstanceTrialLicenseRequest &) = default ;
    CreateInstanceTrialLicenseRequest(CreateInstanceTrialLicenseRequest &&) = default ;
    CreateInstanceTrialLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateInstanceTrialLicenseRequest() = default ;
    CreateInstanceTrialLicenseRequest& operator=(const CreateInstanceTrialLicenseRequest &) = default ;
    CreateInstanceTrialLicenseRequest& operator=(CreateInstanceTrialLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateInstanceTrialLicenseRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
