// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGITORGANIZATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitOrganizationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitOrganizationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindType, bindType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitOrganizationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindType, bindType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListGitOrganizationsRequest() = default ;
    ListGitOrganizationsRequest(const ListGitOrganizationsRequest &) = default ;
    ListGitOrganizationsRequest(ListGitOrganizationsRequest &&) = default ;
    ListGitOrganizationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitOrganizationsRequest() = default ;
    ListGitOrganizationsRequest& operator=(const ListGitOrganizationsRequest &) = default ;
    ListGitOrganizationsRequest& operator=(ListGitOrganizationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindType_ == nullptr
        && this->clientToken_ == nullptr && this->owner_ == nullptr && this->platform_ == nullptr && this->regionId_ == nullptr; };
    // bindType Field Functions 
    bool hasBindType() const { return this->bindType_ != nullptr;};
    void deleteBindType() { this->bindType_ = nullptr;};
    inline string getBindType() const { DARABONBA_PTR_GET_DEFAULT(bindType_, "") };
    inline ListGitOrganizationsRequest& setBindType(string bindType) { DARABONBA_PTR_SET_VALUE(bindType_, bindType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListGitOrganizationsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListGitOrganizationsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListGitOrganizationsRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListGitOrganizationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> bindType_ {};
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> owner_ {};
    // This parameter is required.
    shared_ptr<string> platform_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
