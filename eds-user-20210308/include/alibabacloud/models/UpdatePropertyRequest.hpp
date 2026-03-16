// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UpdatePropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
    };
    UpdatePropertyRequest() = default ;
    UpdatePropertyRequest(const UpdatePropertyRequest &) = default ;
    UpdatePropertyRequest(UpdatePropertyRequest &&) = default ;
    UpdatePropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePropertyRequest() = default ;
    UpdatePropertyRequest& operator=(const UpdatePropertyRequest &) = default ;
    UpdatePropertyRequest& operator=(UpdatePropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PropertyValues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PropertyValues& obj) { 
        DARABONBA_PTR_TO_JSON(PropertyValue, propertyValue_);
        DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
      };
      friend void from_json(const Darabonba::Json& j, PropertyValues& obj) { 
        DARABONBA_PTR_FROM_JSON(PropertyValue, propertyValue_);
        DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
      };
      PropertyValues() = default ;
      PropertyValues(const PropertyValues &) = default ;
      PropertyValues(PropertyValues &&) = default ;
      PropertyValues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PropertyValues() = default ;
      PropertyValues& operator=(const PropertyValues &) = default ;
      PropertyValues& operator=(PropertyValues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->propertyValue_ == nullptr
        && this->propertyValueId_ == nullptr; };
      // propertyValue Field Functions 
      bool hasPropertyValue() const { return this->propertyValue_ != nullptr;};
      void deletePropertyValue() { this->propertyValue_ = nullptr;};
      inline string getPropertyValue() const { DARABONBA_PTR_GET_DEFAULT(propertyValue_, "") };
      inline PropertyValues& setPropertyValue(string propertyValue) { DARABONBA_PTR_SET_VALUE(propertyValue_, propertyValue) };


      // propertyValueId Field Functions 
      bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
      void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
      inline int64_t getPropertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
      inline PropertyValues& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


    protected:
      // The new property value.
      shared_ptr<string> propertyValue_ {};
      // The ID of property value that you want to modify. You can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the property value ID.
      shared_ptr<int64_t> propertyValueId_ {};
    };

    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->propertyId_ == nullptr && this->propertyKey_ == nullptr && this->propertyValues_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline UpdatePropertyRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t getPropertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline UpdatePropertyRequest& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline UpdatePropertyRequest& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline const vector<UpdatePropertyRequest::PropertyValues> & getPropertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<UpdatePropertyRequest::PropertyValues>) };
    inline vector<UpdatePropertyRequest::PropertyValues> getPropertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<UpdatePropertyRequest::PropertyValues>) };
    inline UpdatePropertyRequest& setPropertyValues(const vector<UpdatePropertyRequest::PropertyValues> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
    inline UpdatePropertyRequest& setPropertyValues(vector<UpdatePropertyRequest::PropertyValues> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The ID of the property that you want to modify. You can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the property ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> propertyId_ {};
    // The new property name.
    // 
    // This parameter is required.
    shared_ptr<string> propertyKey_ {};
    // The values of property.
    shared_ptr<vector<UpdatePropertyRequest::PropertyValues>> propertyValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
