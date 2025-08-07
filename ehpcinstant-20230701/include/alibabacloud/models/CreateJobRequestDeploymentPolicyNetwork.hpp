// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPLOYMENTPOLICYNETWORK_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPLOYMENTPOLICYNETWORK_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestDeploymentPolicyNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestDeploymentPolicyNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestDeploymentPolicyNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
    };
    CreateJobRequestDeploymentPolicyNetwork() = default ;
    CreateJobRequestDeploymentPolicyNetwork(const CreateJobRequestDeploymentPolicyNetwork &) = default ;
    CreateJobRequestDeploymentPolicyNetwork(CreateJobRequestDeploymentPolicyNetwork &&) = default ;
    CreateJobRequestDeploymentPolicyNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestDeploymentPolicyNetwork() = default ;
    CreateJobRequestDeploymentPolicyNetwork& operator=(const CreateJobRequestDeploymentPolicyNetwork &) = default ;
    CreateJobRequestDeploymentPolicyNetwork& operator=(CreateJobRequestDeploymentPolicyNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableExternalIpAddress_ != nullptr
        && this->vswitch_ != nullptr; };
    // enableExternalIpAddress Field Functions 
    bool hasEnableExternalIpAddress() const { return this->enableExternalIpAddress_ != nullptr;};
    void deleteEnableExternalIpAddress() { this->enableExternalIpAddress_ = nullptr;};
    inline bool enableExternalIpAddress() const { DARABONBA_PTR_GET_DEFAULT(enableExternalIpAddress_, false) };
    inline CreateJobRequestDeploymentPolicyNetwork& setEnableExternalIpAddress(bool enableExternalIpAddress) { DARABONBA_PTR_SET_VALUE(enableExternalIpAddress_, enableExternalIpAddress) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline const vector<string> & vswitch() const { DARABONBA_PTR_GET_CONST(vswitch_, vector<string>) };
    inline vector<string> vswitch() { DARABONBA_PTR_GET(vswitch_, vector<string>) };
    inline CreateJobRequestDeploymentPolicyNetwork& setVswitch(const vector<string> & vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };
    inline CreateJobRequestDeploymentPolicyNetwork& setVswitch(vector<string> && vswitch) { DARABONBA_PTR_SET_RVALUE(vswitch_, vswitch) };


  protected:
    std::shared_ptr<bool> enableExternalIpAddress_ = nullptr;
    std::shared_ptr<vector<string>> vswitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
