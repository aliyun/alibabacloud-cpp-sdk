// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSOCIATEHAVIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSOCIATEHAVIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class UnassociateHaVipRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassociateHaVipRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UnassociateHaVipRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HaVipId, haVipId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UnassociateHaVipRequest() = default ;
    UnassociateHaVipRequest(const UnassociateHaVipRequest &) = default ;
    UnassociateHaVipRequest(UnassociateHaVipRequest &&) = default ;
    UnassociateHaVipRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassociateHaVipRequest() = default ;
    UnassociateHaVipRequest& operator=(const UnassociateHaVipRequest &) = default ;
    UnassociateHaVipRequest& operator=(UnassociateHaVipRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->haVipId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // haVipId Field Functions 
    bool hasHaVipId() const { return this->haVipId_ != nullptr;};
    void deleteHaVipId() { this->haVipId_ = nullptr;};
    inline string haVipId() const { DARABONBA_PTR_GET_DEFAULT(haVipId_, "") };
    inline UnassociateHaVipRequest& setHaVipId(string haVipId) { DARABONBA_PTR_SET_VALUE(haVipId_, haVipId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UnassociateHaVipRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the HAVIP that you want to disassociate.
    // 
    // This parameter is required.
    std::shared_ptr<string> haVipId_ = nullptr;
    // The ID of the ENS instance or ENI that you want to disassociate from the HAVIP.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
