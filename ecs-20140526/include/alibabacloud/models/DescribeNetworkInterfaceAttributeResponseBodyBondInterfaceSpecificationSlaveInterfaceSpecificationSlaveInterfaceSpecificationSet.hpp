// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYBONDINTERFACESPECIFICATIONSLAVEINTERFACESPECIFICATIONSLAVEINTERFACESPECIFICATIONSET_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYBONDINTERFACESPECIFICATIONSLAVEINTERFACESPECIFICATIONSLAVEINTERFACESPECIFICATIONSET_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& obj) { 
      DARABONBA_PTR_TO_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
      DARABONBA_PTR_TO_JSON(WorkState, workState_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& obj) { 
      DARABONBA_PTR_FROM_JSON(BondNetworkInterfaceId, bondNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(SlaveNetworkInterfaceId, slaveNetworkInterfaceId_);
      DARABONBA_PTR_FROM_JSON(WorkState, workState_);
    };
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet(const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet(DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet() = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& operator=(const DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& operator=(DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bondNetworkInterfaceId_ != nullptr
        && this->slaveNetworkInterfaceId_ != nullptr && this->workState_ != nullptr; };
    // bondNetworkInterfaceId Field Functions 
    bool hasBondNetworkInterfaceId() const { return this->bondNetworkInterfaceId_ != nullptr;};
    void deleteBondNetworkInterfaceId() { this->bondNetworkInterfaceId_ = nullptr;};
    inline string bondNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(bondNetworkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& setBondNetworkInterfaceId(string bondNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(bondNetworkInterfaceId_, bondNetworkInterfaceId) };


    // slaveNetworkInterfaceId Field Functions 
    bool hasSlaveNetworkInterfaceId() const { return this->slaveNetworkInterfaceId_ != nullptr;};
    void deleteSlaveNetworkInterfaceId() { this->slaveNetworkInterfaceId_ = nullptr;};
    inline string slaveNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(slaveNetworkInterfaceId_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& setSlaveNetworkInterfaceId(string slaveNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(slaveNetworkInterfaceId_, slaveNetworkInterfaceId) };


    // workState Field Functions 
    bool hasWorkState() const { return this->workState_ != nullptr;};
    void deleteWorkState() { this->workState_ = nullptr;};
    inline string workState() const { DARABONBA_PTR_GET_DEFAULT(workState_, "") };
    inline DescribeNetworkInterfaceAttributeResponseBodyBondInterfaceSpecificationSlaveInterfaceSpecificationSlaveInterfaceSpecificationSet& setWorkState(string workState) { DARABONBA_PTR_SET_VALUE(workState_, workState) };


  protected:
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> bondNetworkInterfaceId_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> slaveNetworkInterfaceId_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<string> workState_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
