// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVODDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVODDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateVodDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVodDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
      DARABONBA_PTR_TO_JSON(TopLevelDomain, topLevelDomain_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVodDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
      DARABONBA_PTR_FROM_JSON(TopLevelDomain, topLevelDomain_);
    };
    UpdateVodDomainRequest() = default ;
    UpdateVodDomainRequest(const UpdateVodDomainRequest &) = default ;
    UpdateVodDomainRequest(UpdateVodDomainRequest &&) = default ;
    UpdateVodDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVodDomainRequest() = default ;
    UpdateVodDomainRequest& operator=(const UpdateVodDomainRequest &) = default ;
    UpdateVodDomainRequest& operator=(UpdateVodDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->securityToken_ != nullptr && this->sources_ != nullptr && this->topLevelDomain_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateVodDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateVodDomainRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline UpdateVodDomainRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline UpdateVodDomainRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


    // topLevelDomain Field Functions 
    bool hasTopLevelDomain() const { return this->topLevelDomain_ != nullptr;};
    void deleteTopLevelDomain() { this->topLevelDomain_ = nullptr;};
    inline string topLevelDomain() const { DARABONBA_PTR_GET_DEFAULT(topLevelDomain_, "") };
    inline UpdateVodDomainRequest& setTopLevelDomain(string topLevelDomain) { DARABONBA_PTR_SET_VALUE(topLevelDomain_, topLevelDomain) };


  protected:
    // The domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The information about the addresses of origin servers.
    std::shared_ptr<string> sources_ = nullptr;
    // The top-level domain.
    std::shared_ptr<string> topLevelDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
