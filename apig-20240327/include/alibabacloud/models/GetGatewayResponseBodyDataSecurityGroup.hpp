// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATASECURITYGROUP_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATASECURITYGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBodyDataSecurityGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataSecurityGroup& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataSecurityGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
    };
    GetGatewayResponseBodyDataSecurityGroup() = default ;
    GetGatewayResponseBodyDataSecurityGroup(const GetGatewayResponseBodyDataSecurityGroup &) = default ;
    GetGatewayResponseBodyDataSecurityGroup(GetGatewayResponseBodyDataSecurityGroup &&) = default ;
    GetGatewayResponseBodyDataSecurityGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataSecurityGroup() = default ;
    GetGatewayResponseBodyDataSecurityGroup& operator=(const GetGatewayResponseBodyDataSecurityGroup &) = default ;
    GetGatewayResponseBodyDataSecurityGroup& operator=(GetGatewayResponseBodyDataSecurityGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->securityGroupId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayResponseBodyDataSecurityGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline GetGatewayResponseBodyDataSecurityGroup& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The security group name.
    std::shared_ptr<string> name_ = nullptr;
    // The security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
