// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETRESOURCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETRESOURCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class SetResourceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetResourceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultVersionId, defaultVersionId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, SetResourceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultVersionId, defaultVersionId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    SetResourceTypeRequest() = default ;
    SetResourceTypeRequest(const SetResourceTypeRequest &) = default ;
    SetResourceTypeRequest(SetResourceTypeRequest &&) = default ;
    SetResourceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetResourceTypeRequest() = default ;
    SetResourceTypeRequest& operator=(const SetResourceTypeRequest &) = default ;
    SetResourceTypeRequest& operator=(SetResourceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultVersionId_ != nullptr
        && this->description_ != nullptr && this->resourceType_ != nullptr && this->versionId_ != nullptr; };
    // defaultVersionId Field Functions 
    bool hasDefaultVersionId() const { return this->defaultVersionId_ != nullptr;};
    void deleteDefaultVersionId() { this->defaultVersionId_ = nullptr;};
    inline string defaultVersionId() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionId_, "") };
    inline SetResourceTypeRequest& setDefaultVersionId(string defaultVersionId) { DARABONBA_PTR_SET_VALUE(defaultVersionId_, defaultVersionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SetResourceTypeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline SetResourceTypeRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline SetResourceTypeRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The ID of the default version. You can use this parameter to specify the default version of the resource type.
    // 
    // > You can specify only one of the VersionId and DefaultVersionId parameters.
    std::shared_ptr<string> defaultVersionId_ = nullptr;
    // The description of the resource type or resource type version. The description can be up to 512 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The resource type.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The version ID. If you want to modify a version of the resource type, you must specify this parameter. If you do not specify this parameter, only the resource type is modified.
    // 
    // > You can specify only one of the VersionId and DefaultVersionId parameters.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
