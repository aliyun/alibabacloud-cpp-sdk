// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONINSTANCEREQUESTSOURCEENDPOINT_HPP_
#define ALIBABACLOUD_MODELS_CREATESUBSCRIPTIONINSTANCEREQUESTSOURCEENDPOINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateSubscriptionInstanceRequestSourceEndpoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSubscriptionInstanceRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSubscriptionInstanceRequestSourceEndpoint& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
    };
    CreateSubscriptionInstanceRequestSourceEndpoint() = default ;
    CreateSubscriptionInstanceRequestSourceEndpoint(const CreateSubscriptionInstanceRequestSourceEndpoint &) = default ;
    CreateSubscriptionInstanceRequestSourceEndpoint(CreateSubscriptionInstanceRequestSourceEndpoint &&) = default ;
    CreateSubscriptionInstanceRequestSourceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSubscriptionInstanceRequestSourceEndpoint() = default ;
    CreateSubscriptionInstanceRequestSourceEndpoint& operator=(const CreateSubscriptionInstanceRequestSourceEndpoint &) = default ;
    CreateSubscriptionInstanceRequestSourceEndpoint& operator=(CreateSubscriptionInstanceRequestSourceEndpoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateSubscriptionInstanceRequestSourceEndpoint& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


  protected:
    // The type of the source instance. Valid values: **MySQL**, **PolarDB**, **DRDS**, and **Oracle**.
    // 
    // >  Default value: **MySQL**.
    std::shared_ptr<string> instanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
