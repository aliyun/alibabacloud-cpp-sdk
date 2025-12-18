// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPEPROPERTIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPEPROPERTIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceTypePropertiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypePropertiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypePropertiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetResourceTypePropertiesRequest() = default ;
    GetResourceTypePropertiesRequest(const GetResourceTypePropertiesRequest &) = default ;
    GetResourceTypePropertiesRequest(GetResourceTypePropertiesRequest &&) = default ;
    GetResourceTypePropertiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypePropertiesRequest() = default ;
    GetResourceTypePropertiesRequest& operator=(const GetResourceTypePropertiesRequest &) = default ;
    GetResourceTypePropertiesRequest& operator=(GetResourceTypePropertiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceTypePropertiesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
