// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROPERTYREQUEST_HPP_
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
  class CreatePropertyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePropertyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePropertyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessChannel, businessChannel_);
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
    };
    CreatePropertyRequest() = default ;
    CreatePropertyRequest(const CreatePropertyRequest &) = default ;
    CreatePropertyRequest(CreatePropertyRequest &&) = default ;
    CreatePropertyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePropertyRequest() = default ;
    CreatePropertyRequest& operator=(const CreatePropertyRequest &) = default ;
    CreatePropertyRequest& operator=(CreatePropertyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessChannel_ == nullptr
        && this->propertyKey_ == nullptr && this->propertyValues_ == nullptr; };
    // businessChannel Field Functions 
    bool hasBusinessChannel() const { return this->businessChannel_ != nullptr;};
    void deleteBusinessChannel() { this->businessChannel_ = nullptr;};
    inline string getBusinessChannel() const { DARABONBA_PTR_GET_DEFAULT(businessChannel_, "") };
    inline CreatePropertyRequest& setBusinessChannel(string businessChannel) { DARABONBA_PTR_SET_VALUE(businessChannel_, businessChannel) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string getPropertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline CreatePropertyRequest& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline const vector<string> & getPropertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<string>) };
    inline vector<string> getPropertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<string>) };
    inline CreatePropertyRequest& setPropertyValues(const vector<string> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
    inline CreatePropertyRequest& setPropertyValues(vector<string> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


  protected:
    shared_ptr<string> businessChannel_ {};
    // The property name.
    // 
    // This parameter is required.
    shared_ptr<string> propertyKey_ {};
    // The values of the property. You can specify up to 50 values for a property.
    shared_ptr<vector<string>> propertyValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
