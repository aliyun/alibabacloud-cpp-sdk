// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHAREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATERESOURCESHAREREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisassociateResourceShareRequestResources.hpp>
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
    virtual bool empty() const override { this->resourceArns_ != nullptr
        && this->resourceOwner_ != nullptr && this->resourceShareId_ != nullptr && this->resources_ != nullptr && this->targets_ != nullptr; };
    // resourceArns Field Functions 
    bool hasResourceArns() const { return this->resourceArns_ != nullptr;};
    void deleteResourceArns() { this->resourceArns_ = nullptr;};
    inline const vector<string> & resourceArns() const { DARABONBA_PTR_GET_CONST(resourceArns_, vector<string>) };
    inline vector<string> resourceArns() { DARABONBA_PTR_GET(resourceArns_, vector<string>) };
    inline DisassociateResourceShareRequest& setResourceArns(const vector<string> & resourceArns) { DARABONBA_PTR_SET_VALUE(resourceArns_, resourceArns) };
    inline DisassociateResourceShareRequest& setResourceArns(vector<string> && resourceArns) { DARABONBA_PTR_SET_RVALUE(resourceArns_, resourceArns) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline string resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, "") };
    inline DisassociateResourceShareRequest& setResourceOwner(string resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // resourceShareId Field Functions 
    bool hasResourceShareId() const { return this->resourceShareId_ != nullptr;};
    void deleteResourceShareId() { this->resourceShareId_ = nullptr;};
    inline string resourceShareId() const { DARABONBA_PTR_GET_DEFAULT(resourceShareId_, "") };
    inline DisassociateResourceShareRequest& setResourceShareId(string resourceShareId) { DARABONBA_PTR_SET_VALUE(resourceShareId_, resourceShareId) };


    // resources Field Functions 
    bool hasResources() const { return this->resources_ != nullptr;};
    void deleteResources() { this->resources_ = nullptr;};
    inline const vector<DisassociateResourceShareRequestResources> & resources() const { DARABONBA_PTR_GET_CONST(resources_, vector<DisassociateResourceShareRequestResources>) };
    inline vector<DisassociateResourceShareRequestResources> resources() { DARABONBA_PTR_GET(resources_, vector<DisassociateResourceShareRequestResources>) };
    inline DisassociateResourceShareRequest& setResources(const vector<DisassociateResourceShareRequestResources> & resources) { DARABONBA_PTR_SET_VALUE(resources_, resources) };
    inline DisassociateResourceShareRequest& setResources(vector<DisassociateResourceShareRequestResources> && resources) { DARABONBA_PTR_SET_RVALUE(resources_, resources) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<string> & targets() const { DARABONBA_PTR_GET_CONST(targets_, vector<string>) };
    inline vector<string> targets() { DARABONBA_PTR_GET(targets_, vector<string>) };
    inline DisassociateResourceShareRequest& setTargets(const vector<string> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline DisassociateResourceShareRequest& setTargets(vector<string> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


  protected:
    std::shared_ptr<vector<string>> resourceArns_ = nullptr;
    // The owner of the resource share. Valid values:
    // 
    // *   Self: The resource share belongs to the current account. This is the default value. For resource sharing within a resource directory, if you are a resource owner and you want to disassociate resources or principals from a resource share, set this parameter to Self.
    // *   OtherAccounts: The resource share belongs to another account. For resource sharing outside a resource directory, if you are a principal and you want to exit a resource share, set this parameter to OtherAccounts.
    std::shared_ptr<string> resourceOwner_ = nullptr;
    // The ID of the resource share.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceShareId_ = nullptr;
    // The information about the resources.
    std::shared_ptr<vector<DisassociateResourceShareRequestResources>> resources_ = nullptr;
    // The information about the principals.
    std::shared_ptr<vector<string>> targets_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceSharing20200110
#endif
