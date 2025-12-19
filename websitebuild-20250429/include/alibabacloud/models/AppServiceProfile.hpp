// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPSERVICEPROFILE_HPP_
#define ALIBABACLOUD_MODELS_APPSERVICEPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class AppServiceProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AppServiceProfile& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(DesignType, designType_);
      DARABONBA_PTR_TO_JSON(DesignTypeText, designTypeText_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_TO_JSON(ServiceSpecText, serviceSpecText_);
    };
    friend void from_json(const Darabonba::Json& j, AppServiceProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(DesignType, designType_);
      DARABONBA_PTR_FROM_JSON(DesignTypeText, designTypeText_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_FROM_JSON(ServiceSpecText, serviceSpecText_);
    };
    AppServiceProfile() = default ;
    AppServiceProfile(const AppServiceProfile &) = default ;
    AppServiceProfile(AppServiceProfile &&) = default ;
    AppServiceProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AppServiceProfile() = default ;
    AppServiceProfile& operator=(const AppServiceProfile &) = default ;
    AppServiceProfile& operator=(AppServiceProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->designType_ == nullptr && return this->designTypeText_ == nullptr && return this->instanceId_ == nullptr && return this->orderId_ == nullptr && return this->serviceSpec_ == nullptr
        && return this->serviceSpecText_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline AppServiceProfile& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // designType Field Functions 
    bool hasDesignType() const { return this->designType_ != nullptr;};
    void deleteDesignType() { this->designType_ = nullptr;};
    inline string designType() const { DARABONBA_PTR_GET_DEFAULT(designType_, "") };
    inline AppServiceProfile& setDesignType(string designType) { DARABONBA_PTR_SET_VALUE(designType_, designType) };


    // designTypeText Field Functions 
    bool hasDesignTypeText() const { return this->designTypeText_ != nullptr;};
    void deleteDesignTypeText() { this->designTypeText_ = nullptr;};
    inline string designTypeText() const { DARABONBA_PTR_GET_DEFAULT(designTypeText_, "") };
    inline AppServiceProfile& setDesignTypeText(string designTypeText) { DARABONBA_PTR_SET_VALUE(designTypeText_, designTypeText) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AppServiceProfile& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline AppServiceProfile& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline string serviceSpec() const { DARABONBA_PTR_GET_DEFAULT(serviceSpec_, "") };
    inline AppServiceProfile& setServiceSpec(string serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };


    // serviceSpecText Field Functions 
    bool hasServiceSpecText() const { return this->serviceSpecText_ != nullptr;};
    void deleteServiceSpecText() { this->serviceSpecText_ = nullptr;};
    inline string serviceSpecText() const { DARABONBA_PTR_GET_DEFAULT(serviceSpecText_, "") };
    inline AppServiceProfile& setServiceSpecText(string serviceSpecText) { DARABONBA_PTR_SET_VALUE(serviceSpecText_, serviceSpecText) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    std::shared_ptr<string> designType_ = nullptr;
    std::shared_ptr<string> designTypeText_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> serviceSpec_ = nullptr;
    std::shared_ptr<string> serviceSpecText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
