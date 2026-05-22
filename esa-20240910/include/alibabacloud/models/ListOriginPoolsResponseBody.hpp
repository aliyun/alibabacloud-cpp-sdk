// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORIGINPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListOriginPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOriginPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OriginPools, originPools_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListOriginPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OriginPools, originPools_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListOriginPoolsResponseBody() = default ;
    ListOriginPoolsResponseBody(const ListOriginPoolsResponseBody &) = default ;
    ListOriginPoolsResponseBody(ListOriginPoolsResponseBody &&) = default ;
    ListOriginPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOriginPoolsResponseBody() = default ;
    ListOriginPoolsResponseBody& operator=(const ListOriginPoolsResponseBody &) = default ;
    ListOriginPoolsResponseBody& operator=(ListOriginPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OriginPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OriginPools& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Origins, origins_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(ReferenceLBCount, referenceLBCount_);
        DARABONBA_PTR_TO_JSON(References, references_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      };
      friend void from_json(const Darabonba::Json& j, OriginPools& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Origins, origins_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(ReferenceLBCount, referenceLBCount_);
        DARABONBA_PTR_FROM_JSON(References, references_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      };
      OriginPools() = default ;
      OriginPools(const OriginPools &) = default ;
      OriginPools(OriginPools &&) = default ;
      OriginPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OriginPools() = default ;
      OriginPools& operator=(const OriginPools &) = default ;
      OriginPools& operator=(OriginPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class References : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const References& obj) { 
          DARABONBA_PTR_TO_JSON(DnsRecords, dnsRecords_);
          DARABONBA_PTR_TO_JSON(IPARecords, IPARecords_);
          DARABONBA_PTR_TO_JSON(LoadBalancers, loadBalancers_);
        };
        friend void from_json(const Darabonba::Json& j, References& obj) { 
          DARABONBA_PTR_FROM_JSON(DnsRecords, dnsRecords_);
          DARABONBA_PTR_FROM_JSON(IPARecords, IPARecords_);
          DARABONBA_PTR_FROM_JSON(LoadBalancers, loadBalancers_);
        };
        References() = default ;
        References(const References &) = default ;
        References(References &&) = default ;
        References(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~References() = default ;
        References& operator=(const References &) = default ;
        References& operator=(References &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LoadBalancers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LoadBalancers& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, LoadBalancers& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          LoadBalancers() = default ;
          LoadBalancers(const LoadBalancers &) = default ;
          LoadBalancers(LoadBalancers &&) = default ;
          LoadBalancers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LoadBalancers() = default ;
          LoadBalancers& operator=(const LoadBalancers &) = default ;
          LoadBalancers& operator=(LoadBalancers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline LoadBalancers& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline LoadBalancers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // ID of the load balancer.
          shared_ptr<int64_t> id_ {};
          // Name of the load balancer.
          shared_ptr<string> name_ {};
        };

        class IPARecords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IPARecords& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, IPARecords& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          IPARecords() = default ;
          IPARecords(const IPARecords &) = default ;
          IPARecords(IPARecords &&) = default ;
          IPARecords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IPARecords() = default ;
          IPARecords& operator=(const IPARecords &) = default ;
          IPARecords& operator=(IPARecords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline IPARecords& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline IPARecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // Record ID.
          shared_ptr<int64_t> id_ {};
          // Record name.
          shared_ptr<string> name_ {};
        };

        class DnsRecords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DnsRecords& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, DnsRecords& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          DnsRecords() = default ;
          DnsRecords(const DnsRecords &) = default ;
          DnsRecords(DnsRecords &&) = default ;
          DnsRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DnsRecords() = default ;
          DnsRecords& operator=(const DnsRecords &) = default ;
          DnsRecords& operator=(DnsRecords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline DnsRecords& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DnsRecords& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          // Record ID.
          shared_ptr<int64_t> id_ {};
          // Record name.
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->dnsRecords_ == nullptr
        && this->IPARecords_ == nullptr && this->loadBalancers_ == nullptr; };
        // dnsRecords Field Functions 
        bool hasDnsRecords() const { return this->dnsRecords_ != nullptr;};
        void deleteDnsRecords() { this->dnsRecords_ = nullptr;};
        inline const vector<References::DnsRecords> & getDnsRecords() const { DARABONBA_PTR_GET_CONST(dnsRecords_, vector<References::DnsRecords>) };
        inline vector<References::DnsRecords> getDnsRecords() { DARABONBA_PTR_GET(dnsRecords_, vector<References::DnsRecords>) };
        inline References& setDnsRecords(const vector<References::DnsRecords> & dnsRecords) { DARABONBA_PTR_SET_VALUE(dnsRecords_, dnsRecords) };
        inline References& setDnsRecords(vector<References::DnsRecords> && dnsRecords) { DARABONBA_PTR_SET_RVALUE(dnsRecords_, dnsRecords) };


        // IPARecords Field Functions 
        bool hasIPARecords() const { return this->IPARecords_ != nullptr;};
        void deleteIPARecords() { this->IPARecords_ = nullptr;};
        inline const vector<References::IPARecords> & getIPARecords() const { DARABONBA_PTR_GET_CONST(IPARecords_, vector<References::IPARecords>) };
        inline vector<References::IPARecords> getIPARecords() { DARABONBA_PTR_GET(IPARecords_, vector<References::IPARecords>) };
        inline References& setIPARecords(const vector<References::IPARecords> & iPARecords) { DARABONBA_PTR_SET_VALUE(IPARecords_, iPARecords) };
        inline References& setIPARecords(vector<References::IPARecords> && iPARecords) { DARABONBA_PTR_SET_RVALUE(IPARecords_, iPARecords) };


        // loadBalancers Field Functions 
        bool hasLoadBalancers() const { return this->loadBalancers_ != nullptr;};
        void deleteLoadBalancers() { this->loadBalancers_ = nullptr;};
        inline const vector<References::LoadBalancers> & getLoadBalancers() const { DARABONBA_PTR_GET_CONST(loadBalancers_, vector<References::LoadBalancers>) };
        inline vector<References::LoadBalancers> getLoadBalancers() { DARABONBA_PTR_GET(loadBalancers_, vector<References::LoadBalancers>) };
        inline References& setLoadBalancers(const vector<References::LoadBalancers> & loadBalancers) { DARABONBA_PTR_SET_VALUE(loadBalancers_, loadBalancers) };
        inline References& setLoadBalancers(vector<References::LoadBalancers> && loadBalancers) { DARABONBA_PTR_SET_RVALUE(loadBalancers_, loadBalancers) };


      protected:
        // 使用此源地址池为源站的七层记录列表。
        shared_ptr<vector<References::DnsRecords>> dnsRecords_ {};
        // List of layer 4 records that use this origin pool as the origin.
        shared_ptr<vector<References::IPARecords>> IPARecords_ {};
        // List of load balancers using this origin pool.
        shared_ptr<vector<References::LoadBalancers>> loadBalancers_ {};
      };

      class Origins : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Origins& obj) { 
          DARABONBA_PTR_TO_JSON(Address, address_);
          DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_ANY_TO_JSON(Header, header_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IpVersionPolicy, ipVersionPolicy_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Weight, weight_);
        };
        friend void from_json(const Darabonba::Json& j, Origins& obj) { 
          DARABONBA_PTR_FROM_JSON(Address, address_);
          DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_ANY_FROM_JSON(Header, header_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IpVersionPolicy, ipVersionPolicy_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Weight, weight_);
        };
        Origins() = default ;
        Origins(const Origins &) = default ;
        Origins(Origins &&) = default ;
        Origins(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Origins() = default ;
        Origins& operator=(const Origins &) = default ;
        Origins& operator=(Origins &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AuthConf : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthConf& obj) { 
            DARABONBA_PTR_TO_JSON(AccessKey, accessKey_);
            DARABONBA_PTR_TO_JSON(AuthType, authType_);
            DARABONBA_PTR_TO_JSON(Region, region_);
            DARABONBA_PTR_TO_JSON(SecretKey, secretKey_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, AuthConf& obj) { 
            DARABONBA_PTR_FROM_JSON(AccessKey, accessKey_);
            DARABONBA_PTR_FROM_JSON(AuthType, authType_);
            DARABONBA_PTR_FROM_JSON(Region, region_);
            DARABONBA_PTR_FROM_JSON(SecretKey, secretKey_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          AuthConf() = default ;
          AuthConf(const AuthConf &) = default ;
          AuthConf(AuthConf &&) = default ;
          AuthConf(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthConf() = default ;
          AuthConf& operator=(const AuthConf &) = default ;
          AuthConf& operator=(AuthConf &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accessKey_ == nullptr
        && this->authType_ == nullptr && this->region_ == nullptr && this->secretKey_ == nullptr && this->version_ == nullptr; };
          // accessKey Field Functions 
          bool hasAccessKey() const { return this->accessKey_ != nullptr;};
          void deleteAccessKey() { this->accessKey_ = nullptr;};
          inline string getAccessKey() const { DARABONBA_PTR_GET_DEFAULT(accessKey_, "") };
          inline AuthConf& setAccessKey(string accessKey) { DARABONBA_PTR_SET_VALUE(accessKey_, accessKey) };


          // authType Field Functions 
          bool hasAuthType() const { return this->authType_ != nullptr;};
          void deleteAuthType() { this->authType_ = nullptr;};
          inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
          inline AuthConf& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


          // region Field Functions 
          bool hasRegion() const { return this->region_ != nullptr;};
          void deleteRegion() { this->region_ = nullptr;};
          inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
          inline AuthConf& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


          // secretKey Field Functions 
          bool hasSecretKey() const { return this->secretKey_ != nullptr;};
          void deleteSecretKey() { this->secretKey_ = nullptr;};
          inline string getSecretKey() const { DARABONBA_PTR_GET_DEFAULT(secretKey_, "") };
          inline AuthConf& setSecretKey(string secretKey) { DARABONBA_PTR_SET_VALUE(secretKey_, secretKey) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline AuthConf& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The AccessKey required for private authentication.
          shared_ptr<string> accessKey_ {};
          // Authentication type.
          // 
          // - public: Public read/write, used when the origin is OSS or S3 and it is set to public read/write;
          // - private_same_account: Private same account, used when the origin is OSS and the authentication type is private within the same account;
          // - private_cross_account: Private cross-account, used when the origin is OSS and the authentication type is private across accounts;
          // - private: Used when the origin is S3 and the authentication type is private.
          shared_ptr<string> authType_ {};
          // The Region of the origin required when the origin is AWS S3.
          shared_ptr<string> region_ {};
          // The SecretKey required for private authentication.
          shared_ptr<string> secretKey_ {};
          // The signature version required when the origin is AWS S3.
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->address_ == nullptr
        && this->authConf_ == nullptr && this->enabled_ == nullptr && this->header_ == nullptr && this->id_ == nullptr && this->ipVersionPolicy_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
        // address Field Functions 
        bool hasAddress() const { return this->address_ != nullptr;};
        void deleteAddress() { this->address_ = nullptr;};
        inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
        inline Origins& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


        // authConf Field Functions 
        bool hasAuthConf() const { return this->authConf_ != nullptr;};
        void deleteAuthConf() { this->authConf_ = nullptr;};
        inline const Origins::AuthConf & getAuthConf() const { DARABONBA_PTR_GET_CONST(authConf_, Origins::AuthConf) };
        inline Origins::AuthConf getAuthConf() { DARABONBA_PTR_GET(authConf_, Origins::AuthConf) };
        inline Origins& setAuthConf(const Origins::AuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
        inline Origins& setAuthConf(Origins::AuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline Origins& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline         const Darabonba::Json & getHeader() const { DARABONBA_GET(header_) };
        Darabonba::Json & getHeader() { DARABONBA_GET(header_) };
        inline Origins& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
        inline Origins& setHeader(Darabonba::Json && header) { DARABONBA_SET_RVALUE(header_, header) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Origins& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ipVersionPolicy Field Functions 
        bool hasIpVersionPolicy() const { return this->ipVersionPolicy_ != nullptr;};
        void deleteIpVersionPolicy() { this->ipVersionPolicy_ = nullptr;};
        inline string getIpVersionPolicy() const { DARABONBA_PTR_GET_DEFAULT(ipVersionPolicy_, "") };
        inline Origins& setIpVersionPolicy(string ipVersionPolicy) { DARABONBA_PTR_SET_VALUE(ipVersionPolicy_, ipVersionPolicy) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Origins& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Origins& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // weight Field Functions 
        bool hasWeight() const { return this->weight_ != nullptr;};
        void deleteWeight() { this->weight_ = nullptr;};
        inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
        inline Origins& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


      protected:
        // Origin address, e.g., www.example.com.
        shared_ptr<string> address_ {};
        // Authentication information. When the origin is OSS or S3 and requires authentication, you need to provide related configuration information for authentication.
        shared_ptr<Origins::AuthConf> authConf_ {};
        // Whether the origin is enabled:
        // 
        // - true: Enabled;
        // - false: Disabled.
        shared_ptr<bool> enabled_ {};
        // The request header to be carried during back-to-origin, only supports Host.
        Darabonba::Json header_ {};
        // Origin ID.
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> ipVersionPolicy_ {};
        // Origin name.
        shared_ptr<string> name_ {};
        // Origin type:
        // - ip_domain: IP or domain type origin; 
        // - OSS: OSS address origin; 
        // - S3: AWS S3 origin.
        shared_ptr<string> type_ {};
        // Weight, an integer between 0 and 100.
        shared_ptr<int32_t> weight_ {};
      };

      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->id_ == nullptr && this->name_ == nullptr && this->origins_ == nullptr && this->recordName_ == nullptr && this->referenceLBCount_ == nullptr
        && this->references_ == nullptr && this->siteId_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline OriginPools& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline OriginPools& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OriginPools& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // origins Field Functions 
      bool hasOrigins() const { return this->origins_ != nullptr;};
      void deleteOrigins() { this->origins_ = nullptr;};
      inline const vector<OriginPools::Origins> & getOrigins() const { DARABONBA_PTR_GET_CONST(origins_, vector<OriginPools::Origins>) };
      inline vector<OriginPools::Origins> getOrigins() { DARABONBA_PTR_GET(origins_, vector<OriginPools::Origins>) };
      inline OriginPools& setOrigins(const vector<OriginPools::Origins> & origins) { DARABONBA_PTR_SET_VALUE(origins_, origins) };
      inline OriginPools& setOrigins(vector<OriginPools::Origins> && origins) { DARABONBA_PTR_SET_RVALUE(origins_, origins) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline OriginPools& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // referenceLBCount Field Functions 
      bool hasReferenceLBCount() const { return this->referenceLBCount_ != nullptr;};
      void deleteReferenceLBCount() { this->referenceLBCount_ = nullptr;};
      inline int32_t getReferenceLBCount() const { DARABONBA_PTR_GET_DEFAULT(referenceLBCount_, 0) };
      inline OriginPools& setReferenceLBCount(int32_t referenceLBCount) { DARABONBA_PTR_SET_VALUE(referenceLBCount_, referenceLBCount) };


      // references Field Functions 
      bool hasReferences() const { return this->references_ != nullptr;};
      void deleteReferences() { this->references_ = nullptr;};
      inline const OriginPools::References & getReferences() const { DARABONBA_PTR_GET_CONST(references_, OriginPools::References) };
      inline OriginPools::References getReferences() { DARABONBA_PTR_GET(references_, OriginPools::References) };
      inline OriginPools& setReferences(const OriginPools::References & references) { DARABONBA_PTR_SET_VALUE(references_, references) };
      inline OriginPools& setReferences(OriginPools::References && references) { DARABONBA_PTR_SET_RVALUE(references_, references) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline OriginPools& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    protected:
      // Whether the origin pool is enabled:
      // 
      // - true: Enabled;
      // - false: Disabled.
      shared_ptr<bool> enabled_ {};
      // ID of the origin pool.
      shared_ptr<int64_t> id_ {};
      // Name of the origin pool, unique within a site.
      shared_ptr<string> name_ {};
      // Information about the origins added to the origin pool.
      shared_ptr<vector<OriginPools::Origins>> origins_ {};
      // Domain name assigned to the origin pool, which can be used as the origin address for records under the site.
      shared_ptr<string> recordName_ {};
      // Number of load balancers that reference this origin pool.
      shared_ptr<int32_t> referenceLBCount_ {};
      // Reference information for the origin pool. The origin pool is considered referenced when it is configured in a load balancer or set as the origin for a record.
      shared_ptr<OriginPools::References> references_ {};
      // ID of the site to which the origin pool belongs.
      shared_ptr<int64_t> siteId_ {};
    };

    virtual bool empty() const override { return this->originPools_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // originPools Field Functions 
    bool hasOriginPools() const { return this->originPools_ != nullptr;};
    void deleteOriginPools() { this->originPools_ = nullptr;};
    inline const vector<ListOriginPoolsResponseBody::OriginPools> & getOriginPools() const { DARABONBA_PTR_GET_CONST(originPools_, vector<ListOriginPoolsResponseBody::OriginPools>) };
    inline vector<ListOriginPoolsResponseBody::OriginPools> getOriginPools() { DARABONBA_PTR_GET(originPools_, vector<ListOriginPoolsResponseBody::OriginPools>) };
    inline ListOriginPoolsResponseBody& setOriginPools(const vector<ListOriginPoolsResponseBody::OriginPools> & originPools) { DARABONBA_PTR_SET_VALUE(originPools_, originPools) };
    inline ListOriginPoolsResponseBody& setOriginPools(vector<ListOriginPoolsResponseBody::OriginPools> && originPools) { DARABONBA_PTR_SET_RVALUE(originPools_, originPools) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListOriginPoolsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOriginPoolsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOriginPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListOriginPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListOriginPoolsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // List of origin pools.
    shared_ptr<vector<ListOriginPoolsResponseBody::OriginPools>> originPools_ {};
    // Current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // Page size.
    shared_ptr<int32_t> pageSize_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Total count.
    shared_ptr<int32_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
