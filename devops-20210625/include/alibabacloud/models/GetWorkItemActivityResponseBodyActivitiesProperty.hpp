// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODYACTIVITIESPROPERTY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODYACTIVITIESPROPERTY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemActivityResponseBodyActivitiesProperty : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemActivityResponseBodyActivitiesProperty& obj) { 
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(propertyIdentifier, propertyIdentifier_);
      DARABONBA_PTR_TO_JSON(propertyName, propertyName_);
      DARABONBA_PTR_TO_JSON(propertyType, propertyType_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemActivityResponseBodyActivitiesProperty& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(propertyIdentifier, propertyIdentifier_);
      DARABONBA_PTR_FROM_JSON(propertyName, propertyName_);
      DARABONBA_PTR_FROM_JSON(propertyType, propertyType_);
    };
    GetWorkItemActivityResponseBodyActivitiesProperty() = default ;
    GetWorkItemActivityResponseBodyActivitiesProperty(const GetWorkItemActivityResponseBodyActivitiesProperty &) = default ;
    GetWorkItemActivityResponseBodyActivitiesProperty(GetWorkItemActivityResponseBodyActivitiesProperty &&) = default ;
    GetWorkItemActivityResponseBodyActivitiesProperty(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemActivityResponseBodyActivitiesProperty() = default ;
    GetWorkItemActivityResponseBodyActivitiesProperty& operator=(const GetWorkItemActivityResponseBodyActivitiesProperty &) = default ;
    GetWorkItemActivityResponseBodyActivitiesProperty& operator=(GetWorkItemActivityResponseBodyActivitiesProperty &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->propertyIdentifier_ == nullptr && return this->propertyName_ == nullptr && return this->propertyType_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesProperty& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // propertyIdentifier Field Functions 
    bool hasPropertyIdentifier() const { return this->propertyIdentifier_ != nullptr;};
    void deletePropertyIdentifier() { this->propertyIdentifier_ = nullptr;};
    inline string propertyIdentifier() const { DARABONBA_PTR_GET_DEFAULT(propertyIdentifier_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesProperty& setPropertyIdentifier(string propertyIdentifier) { DARABONBA_PTR_SET_VALUE(propertyIdentifier_, propertyIdentifier) };


    // propertyName Field Functions 
    bool hasPropertyName() const { return this->propertyName_ != nullptr;};
    void deletePropertyName() { this->propertyName_ = nullptr;};
    inline string propertyName() const { DARABONBA_PTR_GET_DEFAULT(propertyName_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesProperty& setPropertyName(string propertyName) { DARABONBA_PTR_SET_VALUE(propertyName_, propertyName) };


    // propertyType Field Functions 
    bool hasPropertyType() const { return this->propertyType_ != nullptr;};
    void deletePropertyType() { this->propertyType_ = nullptr;};
    inline string propertyType() const { DARABONBA_PTR_GET_DEFAULT(propertyType_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesProperty& setPropertyType(string propertyType) { DARABONBA_PTR_SET_VALUE(propertyType_, propertyType) };


  protected:
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> propertyIdentifier_ = nullptr;
    std::shared_ptr<string> propertyName_ = nullptr;
    std::shared_ptr<string> propertyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
