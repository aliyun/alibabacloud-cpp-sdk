// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPLOYMENTPOLICYNETWORK_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPLOYMENTPOLICYNETWORK_HPP_
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
  class GetJobResponseBodyJobInfoDeploymentPolicyNetwork : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoDeploymentPolicyNetwork& obj) { 
      DARABONBA_PTR_TO_JSON(EnableENIMapping, enableENIMapping_);
      DARABONBA_PTR_TO_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
      DARABONBA_PTR_TO_JSON(Vswitch, vswitch_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoDeploymentPolicyNetwork& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableENIMapping, enableENIMapping_);
      DARABONBA_PTR_FROM_JSON(EnableExternalIpAddress, enableExternalIpAddress_);
      DARABONBA_PTR_FROM_JSON(Vswitch, vswitch_);
    };
    GetJobResponseBodyJobInfoDeploymentPolicyNetwork() = default ;
    GetJobResponseBodyJobInfoDeploymentPolicyNetwork(const GetJobResponseBodyJobInfoDeploymentPolicyNetwork &) = default ;
    GetJobResponseBodyJobInfoDeploymentPolicyNetwork(GetJobResponseBodyJobInfoDeploymentPolicyNetwork &&) = default ;
    GetJobResponseBodyJobInfoDeploymentPolicyNetwork(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoDeploymentPolicyNetwork() = default ;
    GetJobResponseBodyJobInfoDeploymentPolicyNetwork& operator=(const GetJobResponseBodyJobInfoDeploymentPolicyNetwork &) = default ;
    GetJobResponseBodyJobInfoDeploymentPolicyNetwork& operator=(GetJobResponseBodyJobInfoDeploymentPolicyNetwork &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableENIMapping_ == nullptr
        && return this->enableExternalIpAddress_ == nullptr && return this->vswitch_ == nullptr; };
    // enableENIMapping Field Functions 
    bool hasEnableENIMapping() const { return this->enableENIMapping_ != nullptr;};
    void deleteEnableENIMapping() { this->enableENIMapping_ = nullptr;};
    inline bool enableENIMapping() const { DARABONBA_PTR_GET_DEFAULT(enableENIMapping_, false) };
    inline GetJobResponseBodyJobInfoDeploymentPolicyNetwork& setEnableENIMapping(bool enableENIMapping) { DARABONBA_PTR_SET_VALUE(enableENIMapping_, enableENIMapping) };


    // enableExternalIpAddress Field Functions 
    bool hasEnableExternalIpAddress() const { return this->enableExternalIpAddress_ != nullptr;};
    void deleteEnableExternalIpAddress() { this->enableExternalIpAddress_ = nullptr;};
    inline bool enableExternalIpAddress() const { DARABONBA_PTR_GET_DEFAULT(enableExternalIpAddress_, false) };
    inline GetJobResponseBodyJobInfoDeploymentPolicyNetwork& setEnableExternalIpAddress(bool enableExternalIpAddress) { DARABONBA_PTR_SET_VALUE(enableExternalIpAddress_, enableExternalIpAddress) };


    // vswitch Field Functions 
    bool hasVswitch() const { return this->vswitch_ != nullptr;};
    void deleteVswitch() { this->vswitch_ = nullptr;};
    inline const vector<string> & vswitch() const { DARABONBA_PTR_GET_CONST(vswitch_, vector<string>) };
    inline vector<string> vswitch() { DARABONBA_PTR_GET(vswitch_, vector<string>) };
    inline GetJobResponseBodyJobInfoDeploymentPolicyNetwork& setVswitch(const vector<string> & vswitch) { DARABONBA_PTR_SET_VALUE(vswitch_, vswitch) };
    inline GetJobResponseBodyJobInfoDeploymentPolicyNetwork& setVswitch(vector<string> && vswitch) { DARABONBA_PTR_SET_RVALUE(vswitch_, vswitch) };


  protected:
    // Whether the resource is created in the zone corresponding to the passed-in VSwitch parameter.
    // 
    // *   true: The resource is created in the zone corresponding to the passed-in VSwitch parameter.
    // *   false: The resource is created in any zone that has resources.
    std::shared_ptr<bool> enableENIMapping_ = nullptr;
    // Whether to create a public IP address.
    // 
    // Valid values:
    // 
    // *   false: false.
    // *   true: true.
    std::shared_ptr<bool> enableExternalIpAddress_ = nullptr;
    // The VSwitch array.
    std::shared_ptr<vector<string>> vswitch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
