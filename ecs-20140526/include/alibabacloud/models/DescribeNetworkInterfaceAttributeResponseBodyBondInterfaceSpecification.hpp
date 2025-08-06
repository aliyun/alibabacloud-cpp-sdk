// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYBONDINTERFACESPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYBONDINTERFACESPECIFICATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(BondMode, bondMode_);
      DARABONBA_PTR_TO_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(BondMode, bondMode_);
      DARABONBA_PTR_FROM_JSON(SlaveInterfaceSpecification, slaveInterfaceSpecification_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification(const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification(DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& operator=(const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& operator=(DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bondMode_ != nullptr
        && this->slaveInterfaceSpecification_ != nullptr; };
    // bondMode Field Functions 
    bool hasBondMode() const { return this->bondMode_ != nullptr;};
    void deleteBondMode() { this->bondMode_ = nullptr;};
    inline string bondMode() const { DARABONBA_PTR_GET_DEFAULT(bondMode_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& setBondMode(string bondMode) { DARABONBA_PTR_SET_VALUE(bondMode_, bondMode) };


    // slaveInterfaceSpecification Field Functions 
    bool hasSlaveInterfaceSpecification() const { return this->slaveInterfaceSpecification_ != nullptr;};
    void deleteSlaveInterfaceSpecification() { this->slaveInterfaceSpecification_ = nullptr;};
    inline const Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification & slaveInterfaceSpecification() const { DARABONBA_PTR_GET_CONST(slaveInterfaceSpecification_, Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification) };
    inline Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification slaveInterfaceSpecification() { DARABONBA_PTR_GET(slaveInterfaceSpecification_, Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& setSlaveInterfaceSpecification(const Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification & slaveInterfaceSpecification) { DARABONBA_PTR_SET_VALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecification& setSlaveInterfaceSpecification(Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification && slaveInterfaceSpecification) { DARABONBA_PTR_SET_RVALUE(slaveInterfaceSpecification_, slaveInterfaceSpecification) };


  protected:
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<string> bondMode_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<Models::DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecification> slaveInterfaceSpecification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
