// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVERECORDNOTIFYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRecordNotifyConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRecordNotifyConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    DescribeLiveRecordNotifyConfigRequest() = default ;
    DescribeLiveRecordNotifyConfigRequest(const DescribeLiveRecordNotifyConfigRequest &) = default ;
    DescribeLiveRecordNotifyConfigRequest(DescribeLiveRecordNotifyConfigRequest &&) = default ;
    DescribeLiveRecordNotifyConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRecordNotifyConfigRequest() = default ;
    DescribeLiveRecordNotifyConfigRequest& operator=(const DescribeLiveRecordNotifyConfigRequest &) = default ;
    DescribeLiveRecordNotifyConfigRequest& operator=(DescribeLiveRecordNotifyConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->ownerId_ != nullptr && this->securityToken_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveRecordNotifyConfigRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveRecordNotifyConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeLiveRecordNotifyConfigRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
