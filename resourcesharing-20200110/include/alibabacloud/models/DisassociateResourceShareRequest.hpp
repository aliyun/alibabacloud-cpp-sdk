// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceSharing20200110
{
namespace Models
{
  class DisassociateResourceShareRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateResourceShareRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_TO_JSON(Resources, resources_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateResourceShareRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceArns, resourceArns_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ResourceShareId, resourceShareId_);
      DARABONBA_PTR_FROM_JSON(Resources, resources_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
    };
    DisassociateResourceShareRequest() = default ;
    DisassociateResourceShareRequest(const DisassociateResourceShareRequest &) = default ;
    DisassociateResourceShareRequest(DisassociateResourceShareRequest &&) = default ;
    DisassociateResourceShareRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateResourceShareRequest() = default ;
    DisassociateResourceShareRequest& operator=(const DisassociateResourceShareRequest &) = default ;
    DisassociateResourceShareRequest& operator=(DisassociateResourceShareRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Resources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Resources& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Resources& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      Resources() = default ;
      Resources(const Resources &) = default ;
      Resources(Resources &&) = default ;
      Resources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Resources() = default ;
      Resources& operator=(const Resources &) = default ;
      Resources& operator=(Resources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline Resources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Resources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The ID of the shared resource.
      // 
      // Valid values of N: 1 to 5. This indicates that a maximum of five shared resources can be specified at a time.
      // 
      // >  Resources.N.ResourceId and Resources.N.ResourceType must be used in pairs.
      shared_ptr<string> resourceId_ {};
      // The type of a shared resource.
      // 
      // Valid values of N: 1 to 5. This indicates that a maximum of five shared resources can be specified at a time.
      // 
      // For more information about the types of resources that can be shared, see [Services that work with Resource Sharing](https://help.aliyun.com/document_detail/450526.html).
      // 
      // >  Resources.N.ResourceId and Resources.N.ResourceType must be used in pairs.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->resourceArns_ == nullptr
        && this->resourceOwner_ == nullptr && this->resourceShareId_ == nullptr && this->resources_ == nullptr && this->targets_ == nullptr; };
    // resourceArns Field Functions 
    bool hasResourceArns() const { return this->resourceArns_ != nullptr;};
    void deleteResourceArns() { this->resourceArns_ = nullptr;};
    inline const vector<string> & getResourceArns() const { DARABONBA_PTR_GET_CONST(resourceArns_, vector<string>) };
    inline vector<string> getResourceArns() { DARABONBA_PTR_GET(resourceArns_, vector<string>) };
    inline DisassociateResourceShareRequest& setResourceArns(const vector<string> & resourceArns) { DARABONBA_PTR_SET_VALUE(resourceArns_, resourceArns) };
    inline DisassociateResourceShareRequest& setResourceArns(vector<string> && resourceArns) { DARABONBA_PTR_SET_RVALUE(resourceArns_, resourceArns) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline string getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, "") };
    inline DisassociateResourceShareRequest& setResourceOwner(string resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string getResourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline DisassociateResourceShareRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DisassociateResourceShareRequest::Resources> & getResources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DisassociateResourceShareRequest::Resources>) };
    inline vector<DisassociateResourceShareRequest::Resources> getResources() { DARABONBA_PTR_GET(resources_, vector<DisassociateResourceShareRequest::Resources>) };
    inline DisassociateResourceShareRequest& setResources(const vector<DisassociateResourceShareRequest::Resources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DisassociateResourceShareRequest& setResources(vector<DisassociateResourceShareRequest::Resources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> getTargets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline DisassociateResourceShareRequest& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DisassociateResourceShareRequest& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    shared_ptr<vector<string>> resourceArns_ {};
    // The owner of the resource share. Valid values:
    // 
    // *   Self: The resource share belongs to the current account. This is the default value. For resource sharing within a resource directory, if you are a resource owner and you want to disassociate resources or principals from a resource share, set this parameter to Self.
    // *   OtherAccounts: The resource share belongs to another account. For resource sharing outside a resource directory, if you are a principal and you want to exit a resource share, set this parameter to OtherAccounts.
    shared_ptr<string> resourceOwner_ {};
    // The ID of the resource share.
    // 
    // This parameter is required.
    shared_ptr<string> resourceShareId_ {};
    // The information about the resources.
    shared_ptr<vector<DisassociateResourceShareRequest::Resources>> resources_ {};
    // The information about the principals.
    shared_ptr<vector<string>> targets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
