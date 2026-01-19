// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEORIGINPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEORIGINPOOLREQUEST_HPP_
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
  class UpdateOriginPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOriginPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Origins, origins_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOriginPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Origins, origins_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateOriginPoolRequest() = default ;
    UpdateOriginPoolRequest(const UpdateOriginPoolRequest &) = default ;
    UpdateOriginPoolRequest(UpdateOriginPoolRequest &&) = default ;
    UpdateOriginPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOriginPoolRequest() = default ;
    UpdateOriginPoolRequest& operator=(const UpdateOriginPoolRequest &) = default ;
    UpdateOriginPoolRequest& operator=(UpdateOriginPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Origins : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Origins& obj) { 
        DARABONBA_PTR_TO_JSON(Address, address_);
        DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_ANY_TO_JSON(Header, header_);
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
        // The type of authentication.
        // 
        // - public: Public read/write, used when the origin is OSS or S3 and is set to public read/write;
        // - private_same_account: Private same account, used when the origin is OSS and the authentication type is private within the same account;
        // - private_cross_account: Private cross-account, used when the origin is OSS and the authentication type is private across accounts;
        // - private: Used when the origin is S3 and the authentication type is private.
        shared_ptr<string> authType_ {};
        // The region of the origin required when the origin is AWS S3.
        shared_ptr<string> region_ {};
        // The SecretKey required for private authentication.
        shared_ptr<string> secretKey_ {};
        // The signature version required when the origin is AWS S3.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->address_ == nullptr
        && this->authConf_ == nullptr && this->enabled_ == nullptr && this->header_ == nullptr && this->ipVersionPolicy_ == nullptr && this->name_ == nullptr
        && this->type_ == nullptr && this->weight_ == nullptr; };
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
      inline       const Darabonba::Json & getHeader() const { DARABONBA_GET(header_) };
      Darabonba::Json & getHeader() { DARABONBA_GET(header_) };
      inline Origins& setHeader(const Darabonba::Json & header) { DARABONBA_SET_VALUE(header_, header) };
      inline Origins& setHeader(Darabonba::Json && header) { DARABONBA_SET_RVALUE(header_, header) };


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
      // The address of the origin, e.g., www.example.com.
      shared_ptr<string> address_ {};
      // Authentication information. When the origin is OSS or S3 and requires authentication, you need to pass the related configuration information for authentication.
      shared_ptr<Origins::AuthConf> authConf_ {};
      // Whether the origin is enabled:
      // 
      // - true: Enabled;
      // - false: Disabled.
      shared_ptr<bool> enabled_ {};
      // The request header to be included when fetching from the origin, supporting only Host.
      Darabonba::Json header_ {};
      shared_ptr<string> ipVersionPolicy_ {};
      // The name of the origin, which must be unique under one origin pool.
      shared_ptr<string> name_ {};
      // The type of the origin:
      // 
      // - ip_domain: IP or domain type origin;
      // - OSS: OSS address origin;
      // - S3: AWS S3 origin.
      shared_ptr<string> type_ {};
      // The weight, an integer between 0 and 100.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->enabled_ == nullptr
        && this->id_ == nullptr && this->origins_ == nullptr && this->siteId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateOriginPoolRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateOriginPoolRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // origins Field Functions 
    bool hasOrigins() const { return this->origins_ != nullptr;};
    void deleteOrigins() { this->origins_ = nullptr;};
    inline const vector<UpdateOriginPoolRequest::Origins> & getOrigins() const { DARABONBA_PTR_GET_CONST(origins_, vector<UpdateOriginPoolRequest::Origins>) };
    inline vector<UpdateOriginPoolRequest::Origins> getOrigins() { DARABONBA_PTR_GET(origins_, vector<UpdateOriginPoolRequest::Origins>) };
    inline UpdateOriginPoolRequest& setOrigins(const vector<UpdateOriginPoolRequest::Origins> & origins) { DARABONBA_PTR_SET_VALUE(origins_, origins) };
    inline UpdateOriginPoolRequest& setOrigins(vector<UpdateOriginPoolRequest::Origins> && origins) { DARABONBA_PTR_SET_RVALUE(origins_, origins) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateOriginPoolRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Whether the origin pool is enabled:
    // 
    // - true: Enabled;
    // - false: Disabled.
    shared_ptr<bool> enabled_ {};
    // The ID of the origin pool, which can be obtained by calling the [ListOriginPools](https://help.aliyun.com/document_detail/2863947.html) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    // Information about the origins added to the origin pool. Multiple origins are passed as an array.
    shared_ptr<vector<UpdateOriginPoolRequest::Origins>> origins_ {};
    // The site ID, which can be obtained by calling the [ListSites](~~ListSites~~) interface.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
