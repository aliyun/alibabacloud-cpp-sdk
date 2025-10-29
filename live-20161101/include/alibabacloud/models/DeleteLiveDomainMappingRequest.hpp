// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELIVEDOMAINMAPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELIVEDOMAINMAPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DeleteLiveDomainMappingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLiveDomainMappingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PullDomain, pullDomain_);
      DARABONBA_PTR_TO_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLiveDomainMappingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PullDomain, pullDomain_);
      DARABONBA_PTR_FROM_JSON(PushDomain, pushDomain_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DeleteLiveDomainMappingRequest() = default ;
    DeleteLiveDomainMappingRequest(const DeleteLiveDomainMappingRequest &) = default ;
    DeleteLiveDomainMappingRequest(DeleteLiveDomainMappingRequest &&) = default ;
    DeleteLiveDomainMappingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLiveDomainMappingRequest() = default ;
    DeleteLiveDomainMappingRequest& operator=(const DeleteLiveDomainMappingRequest &) = default ;
    DeleteLiveDomainMappingRequest& operator=(DeleteLiveDomainMappingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && return this->pullDomain_ == nullptr && return this->pushDomain_ == nullptr && return this->securityToken_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DeleteLiveDomainMappingRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pullDomain Field Functions 
    bool hasPullDomain() const { return this->pullDomain_ != nullptr;};
    void deletePullDomain() { this->pullDomain_ = nullptr;};
    inline string pullDomain() const { DARABONBA_PTR_GET_DEFAULT(pullDomain_, "") };
    inline DeleteLiveDomainMappingRequest& setPullDomain(string pullDomain) { DARABONBA_PTR_SET_VALUE(pullDomain_, pullDomain) };


    // pushDomain Field Functions 
    bool hasPushDomain() const { return this->pushDomain_ != nullptr;};
    void deletePushDomain() { this->pushDomain_ = nullptr;};
    inline string pushDomain() const { DARABONBA_PTR_GET_DEFAULT(pushDomain_, "") };
    inline DeleteLiveDomainMappingRequest& setPushDomain(string pushDomain) { DARABONBA_PTR_SET_VALUE(pushDomain_, pushDomain) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteLiveDomainMappingRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The streaming domain. The type of the domain name is **liveVideo**.
    // 
    // This parameter is required.
    std::shared_ptr<string> pullDomain_ = nullptr;
    // The ingest domain. The type of the domain name is **liveEdge**.
    // 
    // This parameter is required.
    std::shared_ptr<string> pushDomain_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
