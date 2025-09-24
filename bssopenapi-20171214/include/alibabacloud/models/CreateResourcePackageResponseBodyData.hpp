// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEPACKAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEPACKAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class CreateResourcePackageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourcePackageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourcePackageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
    };
    CreateResourcePackageResponseBodyData() = default ;
    CreateResourcePackageResponseBodyData(const CreateResourcePackageResponseBodyData &) = default ;
    CreateResourcePackageResponseBodyData(CreateResourcePackageResponseBodyData &&) = default ;
    CreateResourcePackageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourcePackageResponseBodyData() = default ;
    CreateResourcePackageResponseBodyData& operator=(const CreateResourcePackageResponseBodyData &) = default ;
    CreateResourcePackageResponseBodyData& operator=(CreateResourcePackageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->orderId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateResourcePackageResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreateResourcePackageResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
