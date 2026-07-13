// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class UpdateResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    UpdateResourcesRequest() = default ;
    UpdateResourcesRequest(const UpdateResourcesRequest &) = default ;
    UpdateResourcesRequest(UpdateResourcesRequest &&) = default ;
    UpdateResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourcesRequest() = default ;
    UpdateResourcesRequest& operator=(const UpdateResourcesRequest &) = default ;
    UpdateResourcesRequest& operator=(UpdateResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceType_ == nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline UpdateResourcesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The resource type. If this parameter is not specified, all types of resources are updated.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
