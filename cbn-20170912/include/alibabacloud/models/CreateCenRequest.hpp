// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECENREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCenRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateCenRequest() = default ;
    CreateCenRequest(const CreateCenRequest &) = default ;
    CreateCenRequest(CreateCenRequest &&) = default ;
    CreateCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenRequest() = default ;
    CreateCenRequest& operator=(const CreateCenRequest &) = default ;
    CreateCenRequest& operator=(CreateCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->protectionLevel_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCenRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCenRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCenRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCenRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCenRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline string protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
    inline CreateCenRequest& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCenRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCenRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCenRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCenRequestTag>) };
    inline vector<CreateCenRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCenRequestTag>) };
    inline CreateCenRequest& setTag(const vector<CreateCenRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCenRequest& setTag(vector<CreateCenRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the CEN instance.
    // 
    // The description can be empty or 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the CEN instance.
    // 
    // The name can be empty or 1 to 128 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The level of CIDR block overlapping.
    // 
    // Set the value to **REDUCED** (default). This value specifies that CIDR blocks can overlap but cannot be the same.
    std::shared_ptr<string> protectionLevel_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    // 
    // You can specify up to 20 tags in each call.
    std::shared_ptr<vector<CreateCenRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
