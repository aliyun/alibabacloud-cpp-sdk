// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEACLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateACLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateACLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclType, aclType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateACLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclType, aclType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateACLResponseBody() = default ;
    CreateACLResponseBody(const CreateACLResponseBody &) = default ;
    CreateACLResponseBody(CreateACLResponseBody &&) = default ;
    CreateACLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateACLResponseBody() = default ;
    CreateACLResponseBody& operator=(const CreateACLResponseBody &) = default ;
    CreateACLResponseBody& operator=(CreateACLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && this->aclType_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline CreateACLResponseBody& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclType Field Functions 
    bool hasAclType() const { return this->aclType_ != nullptr;};
    void deleteAclType() { this->aclType_ = nullptr;};
    inline string getAclType() const { DARABONBA_PTR_GET_DEFAULT(aclType_, "") };
    inline CreateACLResponseBody& setAclType(string aclType) { DARABONBA_PTR_SET_VALUE(aclType_, aclType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateACLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateACLResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The access control instance ID.
    shared_ptr<string> aclId_ {};
    // The type of the Smart Access Gateway instance associated with the access control instance.
    shared_ptr<string> aclType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource group ID of the access control instance.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
