// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PERMISSION_HPP_
#define ALIBABACLOUD_MODELS_PERMISSION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class Permission : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Permission& obj) { 
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, Permission& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    Permission() = default ;
    Permission(const Permission &) = default ;
    Permission(Permission &&) = default ;
    Permission(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Permission() = default ;
    Permission& operator=(const Permission &) = default ;
    Permission& operator=(Permission &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isEnabled_ == nullptr
        && this->resourceType_ == nullptr; };
    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline bool getIsEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, false) };
    inline Permission& setIsEnabled(bool isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline Permission& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    shared_ptr<bool> isEnabled_ {};
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
