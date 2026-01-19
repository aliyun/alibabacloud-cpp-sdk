// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPORTEDRESOURCERELATIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetSupportedResourceRelationConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupportedResourceRelationConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupportedResourceRelationConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetSupportedResourceRelationConfigRequest() = default ;
    GetSupportedResourceRelationConfigRequest(const GetSupportedResourceRelationConfigRequest &) = default ;
    GetSupportedResourceRelationConfigRequest(GetSupportedResourceRelationConfigRequest &&) = default ;
    GetSupportedResourceRelationConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupportedResourceRelationConfigRequest() = default ;
    GetSupportedResourceRelationConfigRequest& operator=(const GetSupportedResourceRelationConfigRequest &) = default ;
    GetSupportedResourceRelationConfigRequest& operator=(GetSupportedResourceRelationConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetSupportedResourceRelationConfigRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource type.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
