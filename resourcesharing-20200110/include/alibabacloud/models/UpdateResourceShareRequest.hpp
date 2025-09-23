// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class UpdateResourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(ResourceShareName, resourceShareName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowExternalTargets, allowExternalTargets_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(ResourceShareName, resourceShareName_);
    };
    UpdateResourceShareRequest() = default ;
    UpdateResourceShareRequest(const UpdateResourceShareRequest &) = default ;
    UpdateResourceShareRequest(UpdateResourceShareRequest &&) = default ;
    UpdateResourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceShareRequest() = default ;
    UpdateResourceShareRequest& operator=(const UpdateResourceShareRequest &) = default ;
    UpdateResourceShareRequest& operator=(UpdateResourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowExternalTargets_ != nullptr
        && this->resourceShareId_ != nullptr && this->resourceShareName_ != nullptr; };
    // allowExternalTargets Field Functions 
    bool hasAllowExternalTargets() const { return this->allowExternalTargets_ != nullptr;};
    void deleteAllowExternalTargets() { this->allowExternalTargets_ = nullptr;};
    inline bool allowExternalTargets() const { DARABONBA_PTR_GET_DEFAULT(allowExternalTargets_, false) };
    inline UpdateResourceShareRequest& setAllowExternalTargets(bool allowExternalTargets) { DARABONBA_PTR_SET_VALUE(allowExternalTargets_, allowExternalTargets) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline UpdateResourceShareRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resourceShareName Field Functions 
    bool hasResourceShareName() const { return this->resourceShareName_ != nullptr;};
    void deleteResourceShareName() { this->resourceShareName_ = nullptr;};
    inline string resourceShareName() const { DARABONBA_PTR_GET_DEFAULT(resourceShareName_, "") };
    inline UpdateResourceShareRequest& setResourceShareName(string resourceShareName) { DARABONBA_PTR_SET_VALUE(resourceShareName_, resourceShareName) };


  protected:
    // Specifies whether resources in the resource share can be shared with accounts outside the resource directory. Valid values:
    // 
    // *   false: Resources in the resource share can be shared only with accounts in the resource directory.
    // *   true: Resources in the resource share can be shared with both accounts in the resource directory and accounts outside the resource directory.
    std::shared_ptr<bool> allowExternalTargets_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The new name of the resource share.
    // 
    // The name must be 1 to 50 characters in length.
    // 
    // The name can contain letters, digits, periods (.), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
