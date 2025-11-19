// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPRESPONSEBODYSECURITYIPLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPRESPONSEBODYSECURITYIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAuditSecurityIpResponseBodySecurityIpList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditSecurityIpResponseBodySecurityIpList& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Ips, ips_);
      DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditSecurityIpResponseBodySecurityIpList& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Ips, ips_);
      DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    ListAuditSecurityIpResponseBodySecurityIpList() = default ;
    ListAuditSecurityIpResponseBodySecurityIpList(const ListAuditSecurityIpResponseBodySecurityIpList &) = default ;
    ListAuditSecurityIpResponseBodySecurityIpList(ListAuditSecurityIpResponseBodySecurityIpList &&) = default ;
    ListAuditSecurityIpResponseBodySecurityIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditSecurityIpResponseBodySecurityIpList() = default ;
    ListAuditSecurityIpResponseBodySecurityIpList& operator=(const ListAuditSecurityIpResponseBodySecurityIpList &) = default ;
    ListAuditSecurityIpResponseBodySecurityIpList& operator=(ListAuditSecurityIpResponseBodySecurityIpList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->ips_ == nullptr && return this->modificationTime_ == nullptr && return this->securityGroupName_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListAuditSecurityIpResponseBodySecurityIpList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ips Field Functions 
    bool hasIps() const { return this->ips_ != nullptr;};
    void deleteIps() { this->ips_ = nullptr;};
    inline string ips() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
    inline ListAuditSecurityIpResponseBodySecurityIpList& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


    // modificationTime Field Functions 
    bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
    void deleteModificationTime() { this->modificationTime_ = nullptr;};
    inline string modificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
    inline ListAuditSecurityIpResponseBodySecurityIpList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline ListAuditSecurityIpResponseBodySecurityIpList& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The time when the review security group was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The IP addresses in the review security group.
    std::shared_ptr<string> ips_ = nullptr;
    // The time when the review security group was last modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modificationTime_ = nullptr;
    // The name of the review security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
