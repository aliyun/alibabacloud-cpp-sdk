// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSTOKENSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSTOKENSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class ListAccessTokensRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessTokensRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessTokensRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessTokenId, accessTokenId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAccessTokensRequest() = default ;
    ListAccessTokensRequest(const ListAccessTokensRequest &) = default ;
    ListAccessTokensRequest(ListAccessTokensRequest &&) = default ;
    ListAccessTokensRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessTokensRequest() = default ;
    ListAccessTokensRequest& operator=(const ListAccessTokensRequest &) = default ;
    ListAccessTokensRequest& operator=(ListAccessTokensRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessTokenId_ != nullptr
        && this->name_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->status_ != nullptr; };
    // accessTokenId Field Functions 
    bool hasAccessTokenId() const { return this->accessTokenId_ != nullptr;};
    void deleteAccessTokenId() { this->accessTokenId_ = nullptr;};
    inline const vector<string> & accessTokenId() const { DARABONBA_PTR_GET_CONST(accessTokenId_, vector<string>) };
    inline vector<string> accessTokenId() { DARABONBA_PTR_GET(accessTokenId_, vector<string>) };
    inline ListAccessTokensRequest& setAccessTokenId(const vector<string> & accessTokenId) { DARABONBA_PTR_SET_VALUE(accessTokenId_, accessTokenId) };
    inline ListAccessTokensRequest& setAccessTokenId(vector<string> && accessTokenId) { DARABONBA_PTR_SET_RVALUE(accessTokenId_, accessTokenId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAccessTokensRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListAccessTokensRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListAccessTokensRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAccessTokensRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The information about activation codes.
    std::shared_ptr<vector<string>> accessTokenId_ = nullptr;
    // The name of the activation code.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // The status of the activation code. Valid values:
    // 
    // *   activated
    // *   unactivated
    // *   expired
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
