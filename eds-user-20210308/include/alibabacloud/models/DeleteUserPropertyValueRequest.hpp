// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERPROPERTYVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERPROPERTYVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class DeleteUserPropertyValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserPropertyValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserPropertyValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DeleteUserPropertyValueRequest() = default ;
    DeleteUserPropertyValueRequest(const DeleteUserPropertyValueRequest &) = default ;
    DeleteUserPropertyValueRequest(DeleteUserPropertyValueRequest &&) = default ;
    DeleteUserPropertyValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserPropertyValueRequest() = default ;
    DeleteUserPropertyValueRequest& operator=(const DeleteUserPropertyValueRequest &) = default ;
    DeleteUserPropertyValueRequest& operator=(DeleteUserPropertyValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertyId_ == nullptr
        && return this->propertyValueId_ == nullptr && return this->userId_ == nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline DeleteUserPropertyValueRequest& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyValueId Field Functions 
    bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
    void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
    inline int64_t propertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
    inline DeleteUserPropertyValueRequest& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DeleteUserPropertyValueRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The property ID. You can call the [ListProperty](~~ListProperty~~) operation to query the property ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The property value ID. You can call the [ListProperty](~~ListProperty~~) operation to query the property value ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> propertyValueId_ = nullptr;
    // The user ID. You can call the [DescribeUsers](~~DescribeUsers~~) operation to query the user ID, which is the return value of the `Id` parameter.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
