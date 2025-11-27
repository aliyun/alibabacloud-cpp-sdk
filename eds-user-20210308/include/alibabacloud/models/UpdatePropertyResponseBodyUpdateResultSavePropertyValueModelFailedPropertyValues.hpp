// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODYUPDATERESULTSAVEPROPERTYVALUEMODELFAILEDPROPERTYVALUES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROPERTYRESPONSEBODYUPDATERESULTSAVEPROPERTYVALUEMODELFAILEDPROPERTYVALUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
    };
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues() = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues(const UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues &) = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues(UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues &&) = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues() = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& operator=(const UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues &) = default ;
    UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& operator=(UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->propertyId_ == nullptr && return this->propertyValue_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyValue Field Functions 
    bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
    void deletePropertyValue() { this->propertyValue_ = nullptr;};
    inline string propertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
    inline UpdatePropertyResponseBodyUpdateResultSavePropertyValueModelFailedPropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the property.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The value of the property.
    std::shared_ptr<string> propertyValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
