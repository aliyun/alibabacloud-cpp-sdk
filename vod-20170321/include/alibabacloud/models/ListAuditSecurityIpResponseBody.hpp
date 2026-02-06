// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUDITSECURITYIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAuditSecurityIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuditSecurityIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityIpList, securityIpList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuditSecurityIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityIpList, securityIpList_);
    };
    ListAuditSecurityIpResponseBody() = default ;
    ListAuditSecurityIpResponseBody(const ListAuditSecurityIpResponseBody &) = default ;
    ListAuditSecurityIpResponseBody(ListAuditSecurityIpResponseBody &&) = default ;
    ListAuditSecurityIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuditSecurityIpResponseBody() = default ;
    ListAuditSecurityIpResponseBody& operator=(const ListAuditSecurityIpResponseBody &) = default ;
    ListAuditSecurityIpResponseBody& operator=(ListAuditSecurityIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityIpList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityIpList& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Ips, ips_);
        DARABONBA_PTR_TO_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityIpList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Ips, ips_);
        DARABONBA_PTR_FROM_JSON(ModificationTime, modificationTime_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
      };
      SecurityIpList() = default ;
      SecurityIpList(const SecurityIpList &) = default ;
      SecurityIpList(SecurityIpList &&) = default ;
      SecurityIpList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityIpList() = default ;
      SecurityIpList& operator=(const SecurityIpList &) = default ;
      SecurityIpList& operator=(SecurityIpList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->ips_ == nullptr && this->modificationTime_ == nullptr && this->securityGroupName_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SecurityIpList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ips Field Functions 
      bool hasIps() const { return this->ips_ != nullptr;};
      void deleteIps() { this->ips_ = nullptr;};
      inline string getIps() const { DARABONBA_PTR_GET_DEFAULT(ips_, "") };
      inline SecurityIpList& setIps(string ips) { DARABONBA_PTR_SET_VALUE(ips_, ips) };


      // modificationTime Field Functions 
      bool hasModificationTime() const { return this->modificationTime_ != nullptr;};
      void deleteModificationTime() { this->modificationTime_ = nullptr;};
      inline string getModificationTime() const { DARABONBA_PTR_GET_DEFAULT(modificationTime_, "") };
      inline SecurityIpList& setModificationTime(string modificationTime) { DARABONBA_PTR_SET_VALUE(modificationTime_, modificationTime) };


      // securityGroupName Field Functions 
      bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
      void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
      inline string getSecurityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
      inline SecurityIpList& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


    protected:
      // The time when the review security group was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> creationTime_ {};
      // The IP addresses in the review security group.
      shared_ptr<string> ips_ {};
      // The time when the review security group was last modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
      shared_ptr<string> modificationTime_ {};
      // The name of the review security group.
      shared_ptr<string> securityGroupName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityIpList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuditSecurityIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityIpList Field Functions 
    bool hasSecurityIpList() const { return this->securityIpList_ != nullptr;};
    void deleteSecurityIpList() { this->securityIpList_ = nullptr;};
    inline const vector<ListAuditSecurityIpResponseBody::SecurityIpList> & getSecurityIpList() const { DARABONBA_PTR_GET_CONST(securityIpList_, vector<ListAuditSecurityIpResponseBody::SecurityIpList>) };
    inline vector<ListAuditSecurityIpResponseBody::SecurityIpList> getSecurityIpList() { DARABONBA_PTR_GET(securityIpList_, vector<ListAuditSecurityIpResponseBody::SecurityIpList>) };
    inline ListAuditSecurityIpResponseBody& setSecurityIpList(const vector<ListAuditSecurityIpResponseBody::SecurityIpList> & securityIpList) { DARABONBA_PTR_SET_VALUE(securityIpList_, securityIpList) };
    inline ListAuditSecurityIpResponseBody& setSecurityIpList(vector<ListAuditSecurityIpResponseBody::SecurityIpList> && securityIpList) { DARABONBA_PTR_SET_RVALUE(securityIpList_, securityIpList) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the review security group.
    shared_ptr<vector<ListAuditSecurityIpResponseBody::SecurityIpList>> securityIpList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
