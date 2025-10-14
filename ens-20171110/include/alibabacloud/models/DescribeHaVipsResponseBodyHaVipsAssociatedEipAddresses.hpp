// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSASSOCIATEDEIPADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHAVIPSRESPONSEBODYHAVIPSASSOCIATEDEIPADDRESSES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Eip, eip_);
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Eip, eip_);
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
    };
    DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses() = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses(const DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses &) = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses(DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses &&) = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses() = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses& operator=(const DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses &) = default ;
    DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses& operator=(DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eip_ == nullptr
        && return this->eipId_ == nullptr; };
    // eip Field Functions 
    bool hasEip() const { return this->eip_ != nullptr;};
    void deleteEip() { this->eip_ = nullptr;};
    inline string eip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline DescribeHaVipsResponseBodyHaVipsAssociatedEipAddresses& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


  protected:
    // The EIP.
    std::shared_ptr<string> eip_ = nullptr;
    // The ID of the EIP.
    std::shared_ptr<string> eipId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
