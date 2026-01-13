// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDTCSECURITYIPHOSTSFORSQLSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDTCSecurityIpHostsForSQLServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDTCSecurityIpHostsForSQLServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(IpHostPairNum, ipHostPairNum_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDTCSecurityIpHostsForSQLServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(IpHostPairNum, ipHostPairNum_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDTCSecurityIpHostsForSQLServerResponseBody() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody(const DescribeDTCSecurityIpHostsForSQLServerResponseBody &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody(DescribeDTCSecurityIpHostsForSQLServerResponseBody &&) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDTCSecurityIpHostsForSQLServerResponseBody() = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody& operator=(const DescribeDTCSecurityIpHostsForSQLServerResponseBody &) = default ;
    DescribeDTCSecurityIpHostsForSQLServerResponseBody& operator=(DescribeDTCSecurityIpHostsForSQLServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(WhiteListGroups, whiteListGroups_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(WhiteListGroups, whiteListGroups_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class WhiteListGroups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const WhiteListGroups& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityIpHosts, securityIpHosts_);
          DARABONBA_PTR_TO_JSON(WhitelistGroupName, whitelistGroupName_);
        };
        friend void from_json(const Darabonba::Json& j, WhiteListGroups& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityIpHosts, securityIpHosts_);
          DARABONBA_PTR_FROM_JSON(WhitelistGroupName, whitelistGroupName_);
        };
        WhiteListGroups() = default ;
        WhiteListGroups(const WhiteListGroups &) = default ;
        WhiteListGroups(WhiteListGroups &&) = default ;
        WhiteListGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~WhiteListGroups() = default ;
        WhiteListGroups& operator=(const WhiteListGroups &) = default ;
        WhiteListGroups& operator=(WhiteListGroups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->securityIpHosts_ == nullptr
        && this->whitelistGroupName_ == nullptr; };
        // securityIpHosts Field Functions 
        bool hasSecurityIpHosts() const { return this->securityIpHosts_ != nullptr;};
        void deleteSecurityIpHosts() { this->securityIpHosts_ = nullptr;};
        inline string getSecurityIpHosts() const { DARABONBA_PTR_GET_DEFAULT(securityIpHosts_, "") };
        inline WhiteListGroups& setSecurityIpHosts(string securityIpHosts) { DARABONBA_PTR_SET_VALUE(securityIpHosts_, securityIpHosts) };


        // whitelistGroupName Field Functions 
        bool hasWhitelistGroupName() const { return this->whitelistGroupName_ != nullptr;};
        void deleteWhitelistGroupName() { this->whitelistGroupName_ = nullptr;};
        inline string getWhitelistGroupName() const { DARABONBA_PTR_GET_DEFAULT(whitelistGroupName_, "") };
        inline WhiteListGroups& setWhitelistGroupName(string whitelistGroupName) { DARABONBA_PTR_SET_VALUE(whitelistGroupName_, whitelistGroupName) };


      protected:
        // The IP address of the ECS instance and the hostname of the Windows computer. Format: `IP address,Hostname`. Multiple values are separated with semicolons (;).
        shared_ptr<string> securityIpHosts_ {};
        // The name of the distributed transaction whitelist.
        shared_ptr<string> whitelistGroupName_ {};
      };

      virtual bool empty() const override { return this->whiteListGroups_ == nullptr; };
      // whiteListGroups Field Functions 
      bool hasWhiteListGroups() const { return this->whiteListGroups_ != nullptr;};
      void deleteWhiteListGroups() { this->whiteListGroups_ = nullptr;};
      inline const vector<Items::WhiteListGroups> & getWhiteListGroups() const { DARABONBA_PTR_GET_CONST(whiteListGroups_, vector<Items::WhiteListGroups>) };
      inline vector<Items::WhiteListGroups> getWhiteListGroups() { DARABONBA_PTR_GET(whiteListGroups_, vector<Items::WhiteListGroups>) };
      inline Items& setWhiteListGroups(const vector<Items::WhiteListGroups> & whiteListGroups) { DARABONBA_PTR_SET_VALUE(whiteListGroups_, whiteListGroups) };
      inline Items& setWhiteListGroups(vector<Items::WhiteListGroups> && whiteListGroups) { DARABONBA_PTR_SET_RVALUE(whiteListGroups_, whiteListGroups) };


    protected:
      shared_ptr<vector<Items::WhiteListGroups>> whiteListGroups_ {};
    };

    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->ipHostPairNum_ == nullptr && this->items_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ipHostPairNum Field Functions 
    bool hasIpHostPairNum() const { return this->ipHostPairNum_ != nullptr;};
    void deleteIpHostPairNum() { this->ipHostPairNum_ = nullptr;};
    inline string getIpHostPairNum() const { DARABONBA_PTR_GET_DEFAULT(ipHostPairNum_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setIpHostPairNum(string ipHostPairNum) { DARABONBA_PTR_SET_VALUE(ipHostPairNum_, ipHostPairNum) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setItems(const DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setItems(DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDTCSecurityIpHostsForSQLServerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceId_ {};
    // The number of distributed transaction whitelists.
    shared_ptr<string> ipHostPairNum_ {};
    // Details of distributed transaction whitelists.
    shared_ptr<DescribeDTCSecurityIpHostsForSQLServerResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
