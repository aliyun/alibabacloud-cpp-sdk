// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYSLAVEINTERFACESPECIFICATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYSLAVEINTERFACESPECIFICATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& obj) { 
      DARABONBA_PTR_TO_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(WorkState, workState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& obj) { 
      DARABONBA_PTR_FROM_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(WorkState, workState_);
    };
    DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification() = default ;
    DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification(const DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification(DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification() = default ;
    DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& operator=(const DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& operator=(DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bondNetworkInterfaceId_ == nullptr
        && return this->slaveNetworkInterfaceId_ == nullptr && return this->workState_ == nullptr; };
    // bondNetworkInterfaceId Field Functions 
    bool hasBondNetworkInterfaceId() const { return this->bondNetworkInterfaceId_ != nullptr;};
    void deleteBondNetworkInterfaceId() { this->bondNetworkInterfaceId_ = nullptr;};
    inline string bondNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(bondNetworkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& setBondNetworkInterfaceId(string bondNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(bondNetworkInterfaceId_, bondNetworkInterfaceId) };


    // slaveNetworkInterfaceId Field Functions 
    bool hasSlaveNetworkInterfaceId() const { return this->slaveNetworkInterfaceId_ != nullptr;};
    void deleteSlaveNetworkInterfaceId() { this->slaveNetworkInterfaceId_ = nullptr;};
    inline string slaveNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(slaveNetworkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& setSlaveNetworkInterfaceId(string slaveNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(slaveNetworkInterfaceId_, slaveNetworkInterfaceId) };


    // workState Field Functions 
    bool hasWorkState() const { return this->workState_ != nullptr;};
    void deleteWorkState() { this->workState_ = nullptr;};
    inline string workState() const { DARABONBA_PTR_GET_DEFAULT(workState_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodySlaveInterfaceSpecification& setWorkState(string workState) { DARABONBA_PTR_SET_VALUE(workState_, workState) };


  protected:
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<string> bondNetworkInterfaceId_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<string> slaveNetworkInterfaceId_ = nullptr;
    // >  This parameter is in invitational preview and unavailable for general users.
    std::shared_ptr<string> workState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
