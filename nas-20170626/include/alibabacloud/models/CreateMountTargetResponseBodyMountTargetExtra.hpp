// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOUNTTARGETRESPONSEBODYMOUNTTARGETEXTRA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOUNTTARGETRESPONSEBODYMOUNTTARGETEXTRA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class CreateMountTargetResponseBodyMountTargetExtra : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMountTargetResponseBodyMountTargetExtra& obj) { 
      DARABONBA_PTR_TO_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMountTargetResponseBodyMountTargetExtra& obj) { 
      DARABONBA_PTR_FROM_JSON(DualStackMountTargetDomain, dualStackMountTargetDomain_);
    };
    CreateMountTargetResponseBodyMountTargetExtra() = default ;
    CreateMountTargetResponseBodyMountTargetExtra(const CreateMountTargetResponseBodyMountTargetExtra &) = default ;
    CreateMountTargetResponseBodyMountTargetExtra(CreateMountTargetResponseBodyMountTargetExtra &&) = default ;
    CreateMountTargetResponseBodyMountTargetExtra(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMountTargetResponseBodyMountTargetExtra() = default ;
    CreateMountTargetResponseBodyMountTargetExtra& operator=(const CreateMountTargetResponseBodyMountTargetExtra &) = default ;
    CreateMountTargetResponseBodyMountTargetExtra& operator=(CreateMountTargetResponseBodyMountTargetExtra &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dualStackMountTargetDomain_ == nullptr; };
    // dualStackMountTargetDomain Field Functions 
    bool hasDualStackMountTargetDomain() const { return this->dualStackMountTargetDomain_ != nullptr;};
    void deleteDualStackMountTargetDomain() { this->dualStackMountTargetDomain_ = nullptr;};
    inline string dualStackMountTargetDomain() const { DARABONBA_PTR_GET_DEFAULT(dualStackMountTargetDomain_, "") };
    inline CreateMountTargetResponseBodyMountTargetExtra& setDualStackMountTargetDomain(string dualStackMountTargetDomain) { DARABONBA_PTR_SET_VALUE(dualStackMountTargetDomain_, dualStackMountTargetDomain) };


  protected:
    // The dual-stack (IPv4 and IPv6) domain name of the mount target.
    std::shared_ptr<string> dualStackMountTargetDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
