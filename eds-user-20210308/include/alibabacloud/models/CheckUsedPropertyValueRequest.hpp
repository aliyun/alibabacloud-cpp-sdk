// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKUSEDPROPERTYVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKUSEDPROPERTYVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CheckUsedPropertyValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckUsedPropertyValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckUsedPropertyValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
    };
    CheckUsedPropertyValueRequest() = default ;
    CheckUsedPropertyValueRequest(const CheckUsedPropertyValueRequest &) = default ;
    CheckUsedPropertyValueRequest(CheckUsedPropertyValueRequest &&) = default ;
    CheckUsedPropertyValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckUsedPropertyValueRequest() = default ;
    CheckUsedPropertyValueRequest& operator=(const CheckUsedPropertyValueRequest &) = default ;
    CheckUsedPropertyValueRequest& operator=(CheckUsedPropertyValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->propertyId_ == nullptr && this->propertyValueId_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CheckUsedPropertyValueRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline CheckUsedPropertyValueRequest& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyValueId Field Functions 
    bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
    void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
    inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
    inline CheckUsedPropertyValueRequest& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The property ID. You can call the [ListProperty](~~ListProperty~~) operation to query property ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> propertyId_ {};
    // The ID of the property value. You can call the [ListProperty](~~ListProperty~~) operation to query the ID of the property value.
    // 
    // This parameter is required.
    shared_ptr<int64_t> propertyValueId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
