// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASESASINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASESASINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ReleaseSasInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseSasInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseSasInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ReleaseSasInstanceRequest() = default ;
    ReleaseSasInstanceRequest(const ReleaseSasInstanceRequest &) = default ;
    ReleaseSasInstanceRequest(ReleaseSasInstanceRequest &&) = default ;
    ReleaseSasInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseSasInstanceRequest() = default ;
    ReleaseSasInstanceRequest& operator=(const ReleaseSasInstanceRequest &) = default ;
    ReleaseSasInstanceRequest& operator=(ReleaseSasInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->instanceId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ReleaseSasInstanceRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ReleaseSasInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
