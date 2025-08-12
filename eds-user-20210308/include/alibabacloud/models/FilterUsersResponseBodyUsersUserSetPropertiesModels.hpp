// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSUSERSETPROPERTIESMODELS_HPP_
#define ALIBABACLOUD_MODELS_FILTERUSERSRESPONSEBODYUSERSUSERSETPROPERTIESMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class FilterUsersResponseBodyUsersUserSetPropertiesModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FilterUsersResponseBodyUsersUserSetPropertiesModels& obj) { 
      DARABONBA_PTR_TO_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_TO_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_TO_JSON(PropertyType, propertyType_);
      DARABONBA_PTR_TO_JSON(PropertyValues, propertyValues_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, FilterUsersResponseBodyUsersUserSetPropertiesModels& obj) { 
      DARABONBA_PTR_FROM_JSON(PropertyId, propertyId_);
      DARABONBA_PTR_FROM_JSON(PropertyKey, propertyKey_);
      DARABONBA_PTR_FROM_JSON(PropertyType, propertyType_);
      DARABONBA_PTR_FROM_JSON(PropertyValues, propertyValues_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    FilterUsersResponseBodyUsersUserSetPropertiesModels() = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModels(const FilterUsersResponseBodyUsersUserSetPropertiesModels &) = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModels(FilterUsersResponseBodyUsersUserSetPropertiesModels &&) = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FilterUsersResponseBodyUsersUserSetPropertiesModels() = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModels& operator=(const FilterUsersResponseBodyUsersUserSetPropertiesModels &) = default ;
    FilterUsersResponseBodyUsersUserSetPropertiesModels& operator=(FilterUsersResponseBodyUsersUserSetPropertiesModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->propertyId_ != nullptr
        && this->propertyKey_ != nullptr && this->propertyType_ != nullptr && this->propertyValues_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr; };
    // propertyId Field Functions 
    bool hasPropertyId() const { return this->propertyId_ != nullptr;};
    void deletePropertyId() { this->propertyId_ = nullptr;};
    inline int64_t propertyId() const { DARABONBA_PTR_GET_DEFAULT(propertyId_, 0L) };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setPropertyId(int64_t propertyId) { DARABONBA_PTR_SET_VALUE(propertyId_, propertyId) };


    // propertyKey Field Functions 
    bool hasPropertyKey() const { return this->propertyKey_ != nullptr;};
    void deletePropertyKey() { this->propertyKey_ = nullptr;};
    inline string propertyKey() const { DARABONBA_PTR_GET_DEFAULT(propertyKey_, "") };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setPropertyKey(string propertyKey) { DARABONBA_PTR_SET_VALUE(propertyKey_, propertyKey) };


    // propertyType Field Functions 
    bool hasPropertyType() const { return this->propertyType_ != nullptr;};
    void deletePropertyType() { this->propertyType_ = nullptr;};
    inline int32_t propertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, 0) };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setPropertyType(int32_t propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


    // propertyValues Field Functions 
    bool hasPropertyValues() const { return this->propertyValues_ != nullptr;};
    void deletePropertyValues() { this->propertyValues_ = nullptr;};
    inline const vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues> & propertyValues() const { DARABONBA_PTR_GET_CONST(propertyValues_, vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues>) };
    inline vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues> propertyValues() { DARABONBA_PTR_GET(propertyValues_, vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues>) };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setPropertyValues(const vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues> & propertyValues) { DARABONBA_PTR_SET_VALUE(propertyValues_, propertyValues) };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setPropertyValues(vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues> && propertyValues) { DARABONBA_PTR_SET_RVALUE(propertyValues_, propertyValues) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline FilterUsersResponseBodyUsersUserSetPropertiesModels& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // The property ID.
    std::shared_ptr<int64_t> propertyId_ = nullptr;
    // The property name.
    std::shared_ptr<string> propertyKey_ = nullptr;
    // The property type.
    std::shared_ptr<int32_t> propertyType_ = nullptr;
    // The property values.
    std::shared_ptr<vector<Models::FilterUsersResponseBodyUsersUserSetPropertiesModelsPropertyValues>> propertyValues_ = nullptr;
    // The ID of the convenience user that is bound to the property.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The username of the convenience user that is bound to the property.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
