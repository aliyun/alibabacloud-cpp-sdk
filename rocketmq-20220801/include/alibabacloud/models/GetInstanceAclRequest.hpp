// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEACLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEACLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetInstanceAclRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceAclRequest& obj) { 
      DARABONBA_PTR_TO_JSON(resourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceAclRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(resourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
    };
    GetInstanceAclRequest() = default ;
    GetInstanceAclRequest(const GetInstanceAclRequest &) = default ;
    GetInstanceAclRequest(GetInstanceAclRequest &&) = default ;
    GetInstanceAclRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceAclRequest() = default ;
    GetInstanceAclRequest& operator=(const GetInstanceAclRequest &) = default ;
    GetInstanceAclRequest& operator=(GetInstanceAclRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceName_ == nullptr
        && this->resourceType_ == nullptr; };
    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline GetInstanceAclRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetInstanceAclRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The name of the resource on which you want to grant permissions.
    // 
    // This parameter is required.
    shared_ptr<string> resourceName_ {};
    // The type of the resource on which you want to grant permissions.
    // 
    // Valid values:
    // 
    // *   Group
    // *   Topic
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
