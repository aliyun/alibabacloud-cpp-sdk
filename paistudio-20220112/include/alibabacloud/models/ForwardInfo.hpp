// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FORWARDINFO_HPP_
#define ALIBABACLOUD_MODELS_FORWARDINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class ForwardInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ForwardInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EipAllocationId, eipAllocationId_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, ForwardInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EipAllocationId, eipAllocationId_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
    };
    ForwardInfo() = default ;
    ForwardInfo(const ForwardInfo &) = default ;
    ForwardInfo(ForwardInfo &&) = default ;
    ForwardInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ForwardInfo() = default ;
    ForwardInfo& operator=(const ForwardInfo &) = default ;
    ForwardInfo& operator=(ForwardInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipAllocationId_ == nullptr
        && return this->natGatewayId_ == nullptr; };
    // eipAllocationId Field Functions 
    bool hasEipAllocationId() const { return this->eipAllocationId_ != nullptr;};
    void deleteEipAllocationId() { this->eipAllocationId_ = nullptr;};
    inline string eipAllocationId() const { DARABONBA_PTR_GET_DEFAULT(eipAllocationId_, "") };
    inline ForwardInfo& setEipAllocationId(string eipAllocationId) { DARABONBA_PTR_SET_VALUE(eipAllocationId_, eipAllocationId) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline ForwardInfo& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


  protected:
    std::shared_ptr<string> eipAllocationId_ = nullptr;
    std::shared_ptr<string> natGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
