// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDomainsBySourceRequest() = default ;
    DescribeDomainsBySourceRequest(const DescribeDomainsBySourceRequest &) = default ;
    DescribeDomainsBySourceRequest(DescribeDomainsBySourceRequest &&) = default ;
    DescribeDomainsBySourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceRequest() = default ;
    DescribeDomainsBySourceRequest& operator=(const DescribeDomainsBySourceRequest &) = default ;
    DescribeDomainsBySourceRequest& operator=(DescribeDomainsBySourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerId_ != nullptr
        && this->securityToken_ != nullptr && this->sources_ != nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDomainsBySourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeDomainsBySourceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string sources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline DescribeDomainsBySourceRequest& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


  protected:
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The origin servers. Separate multiple origin servers with commas (,). Fuzzy match is not supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> sources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
