// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELIVERYINFO_HPP_
#define ALIBABACLOUD_MODELS_DELIVERYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class DeliveryInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeliveryInfo& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(postFee, postFee_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, DeliveryInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(postFee, postFee_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    DeliveryInfo() = default ;
    DeliveryInfo(const DeliveryInfo &) = default ;
    DeliveryInfo(DeliveryInfo &&) = default ;
    DeliveryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeliveryInfo() = default ;
    DeliveryInfo& operator=(const DeliveryInfo &) = default ;
    DeliveryInfo& operator=(DeliveryInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr && this->postFee_ == nullptr && this->serviceType_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline DeliveryInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DeliveryInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // postFee Field Functions 
    bool hasPostFee() const { return this->postFee_ != nullptr;};
    void deletePostFee() { this->postFee_ = nullptr;};
    inline int64_t getPostFee() const { DARABONBA_PTR_GET_DEFAULT(postFee_, 0L) };
    inline DeliveryInfo& setPostFee(int64_t postFee) { DARABONBA_PTR_SET_VALUE(postFee_, postFee) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline int64_t getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, 0L) };
    inline DeliveryInfo& setServiceType(int64_t serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    shared_ptr<string> displayName_ {};
    shared_ptr<string> id_ {};
    shared_ptr<int64_t> postFee_ {};
    // serviceType
    shared_ptr<int64_t> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
