// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODYACTIVITIESNEWVALUE_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMACTIVITYRESPONSEBODYACTIVITIESNEWVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkItemActivityResponseBodyActivitiesNewValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkItemActivityResponseBodyActivitiesNewValue& obj) { 
      DARABONBA_PTR_TO_JSON(displayValue, displayValue_);
      DARABONBA_PTR_TO_JSON(plainValue, plainValue_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkItemActivityResponseBodyActivitiesNewValue& obj) { 
      DARABONBA_PTR_FROM_JSON(displayValue, displayValue_);
      DARABONBA_PTR_FROM_JSON(plainValue, plainValue_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    GetWorkItemActivityResponseBodyActivitiesNewValue() = default ;
    GetWorkItemActivityResponseBodyActivitiesNewValue(const GetWorkItemActivityResponseBodyActivitiesNewValue &) = default ;
    GetWorkItemActivityResponseBodyActivitiesNewValue(GetWorkItemActivityResponseBodyActivitiesNewValue &&) = default ;
    GetWorkItemActivityResponseBodyActivitiesNewValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkItemActivityResponseBodyActivitiesNewValue() = default ;
    GetWorkItemActivityResponseBodyActivitiesNewValue& operator=(const GetWorkItemActivityResponseBodyActivitiesNewValue &) = default ;
    GetWorkItemActivityResponseBodyActivitiesNewValue& operator=(GetWorkItemActivityResponseBodyActivitiesNewValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayValue_ == nullptr
        && return this->plainValue_ == nullptr && return this->resourceType_ == nullptr; };
    // displayValue Field Functions 
    bool hasDisplayValue() const { return this->displayValue_ != nullptr;};
    void deleteDisplayValue() { this->displayValue_ = nullptr;};
    inline string displayValue() const { DARABONBA_PTR_GET_DEFAULT(displayValue_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesNewValue& setDisplayValue(string displayValue) { DARABONBA_PTR_SET_VALUE(displayValue_, displayValue) };


    // plainValue Field Functions 
    bool hasPlainValue() const { return this->plainValue_ != nullptr;};
    void deletePlainValue() { this->plainValue_ = nullptr;};
    inline string plainValue() const { DARABONBA_PTR_GET_DEFAULT(plainValue_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesNewValue& setPlainValue(string plainValue) { DARABONBA_PTR_SET_VALUE(plainValue_, plainValue) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetWorkItemActivityResponseBodyActivitiesNewValue& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> displayValue_ = nullptr;
    std::shared_ptr<string> plainValue_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
