// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROPERTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROPERTYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdatePropertyRequestPropertyValues.hpp>
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
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePropertyRequest& obj) { 
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
    virtual bool empty() const override { return this->propertyId_ == nullptr
        && return this->propertyKey_ == nullptr && return this->propertyValues_ == nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline UpdatePropertyRequest& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline UpdatePropertyRequest& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline const vector<UpdatePropertyRequestPropertyValues> & propertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<UpdatePropertyRequestPropertyValues>) };
    inline vector<UpdatePropertyRequestPropertyValues> propertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<UpdatePropertyRequestPropertyValues>) };
    inline UpdatePropertyRequest& setPropertyValues(const vector<UpdatePropertyRequestPropertyValues> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
    inline UpdatePropertyRequest& setPropertyValues(vector<UpdatePropertyRequestPropertyValues> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


  protected:
    // The ID of the property that you want to modify. You can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the property ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The new property name.
    // 
    // This parameter is required.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The values of property.
    std::shared_ptr<vector<UpdatePropertyRequestPropertyValues>> propertyValues_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
