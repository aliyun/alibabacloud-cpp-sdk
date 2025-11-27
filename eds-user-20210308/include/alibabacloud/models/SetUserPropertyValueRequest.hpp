// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETUSERPROPERTYVALUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETUSERPROPERTYVALUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class SetUserPropertyValueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetUserPropertyValueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyValueId, propertyValueId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, SetUserPropertyValueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyValueId, propertyValueId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    SetUserPropertyValueRequest() = default ;
    SetUserPropertyValueRequest(const SetUserPropertyValueRequest &) = default ;
    SetUserPropertyValueRequest(SetUserPropertyValueRequest &&) = default ;
    SetUserPropertyValueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetUserPropertyValueRequest() = default ;
    SetUserPropertyValueRequest& operator=(const SetUserPropertyValueRequest &) = default ;
    SetUserPropertyValueRequest& operator=(SetUserPropertyValueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->propertyId_ == nullptr
        && return this->propertyValueId_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline SetUserPropertyValueRequest& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyValueId Field Functions 
    bool hasPropertyValueId() const { return this->propertyValueId_ != nullptr;};
    void deletePropertyValueId() { this->propertyValueId_ = nullptr;};
    inline int64_t propertyValueId() const { DARABONBA_PTR_GET_DEFAULT(propertyValueId_, 0L) };
    inline SetUserPropertyValueRequest& setPropertyValueId(int64_t propertyValueId) { DARABONBA_PTR_SET_VALUE(propertyValueId_, propertyValueId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline SetUserPropertyValueRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline SetUserPropertyValueRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The property ID. You can call the [ListProperty](~~ListProperty~~) operation to query the property ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The ID of the property value. You can call the [ListProperty](~~ListProperty~~) operation to query the ID of the property value.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> propertyValueId_ = nullptr;
    // The ID of the convenience user. You can call the [DescribeUsers](~~DescribeUsers~~) operation to query the user ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The username of the convenience user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
