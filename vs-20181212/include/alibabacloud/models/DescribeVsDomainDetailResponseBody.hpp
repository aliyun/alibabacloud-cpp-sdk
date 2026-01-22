// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainConfig, domainConfig_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainConfig, domainConfig_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDomainDetailResponseBody() = default ;
    DescribeVsDomainDetailResponseBody(const DescribeVsDomainDetailResponseBody &) = default ;
    DescribeVsDomainDetailResponseBody(DescribeVsDomainDetailResponseBody &&) = default ;
    DescribeVsDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainDetailResponseBody() = default ;
    DescribeVsDomainDetailResponseBody& operator=(const DescribeVsDomainDetailResponseBody &) = default ;
    DescribeVsDomainDetailResponseBody& operator=(DescribeVsDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
        DARABONBA_PTR_TO_JSON(DomainType, domainType_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, DomainConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
        DARABONBA_PTR_FROM_JSON(DomainType, domainType_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
      };
      DomainConfig() = default ;
      DomainConfig(const DomainConfig &) = default ;
      DomainConfig(DomainConfig &&) = default ;
      DomainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainConfig() = default ;
      DomainConfig& operator=(const DomainConfig &) = default ;
      DomainConfig& operator=(DomainConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cname_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->domainType_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->region_ == nullptr && this->SSLProtocol_ == nullptr && this->scope_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline DomainConfig& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DomainConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainConfig& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainStatus Field Functions 
      bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
      void deleteDomainStatus() { this->domainStatus_ = nullptr;};
      inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
      inline DomainConfig& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


      // domainType Field Functions 
      bool hasDomainType() const { return this->domainType_ != nullptr;};
      void deleteDomainType() { this->domainType_ = nullptr;};
      inline string getDomainType() const { DARABONBA_PTR_GET_DEFAULT(domainType_, "") };
      inline DomainConfig& setDomainType(string domainType) { DARABONBA_PTR_SET_VALUE(domainType_, domainType) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline DomainConfig& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline DomainConfig& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline DomainConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // SSLProtocol Field Functions 
      bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
      void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
      inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
      inline DomainConfig& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline DomainConfig& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      shared_ptr<string> cname_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> domainName_ {};
      shared_ptr<string> domainStatus_ {};
      shared_ptr<string> domainType_ {};
      shared_ptr<string> gmtCreated_ {};
      shared_ptr<string> gmtModified_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> SSLProtocol_ {};
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->domainConfig_ == nullptr
        && this->requestId_ == nullptr; };
    // domainConfig Field Functions 
    bool hasDomainConfig() const { return this->domainConfig_ != nullptr;};
    void deleteDomainConfig() { this->domainConfig_ = nullptr;};
    inline const DescribeVsDomainDetailResponseBody::DomainConfig & getDomainConfig() const { DARABONBA_PTR_GET_CONST(domainConfig_, DescribeVsDomainDetailResponseBody::DomainConfig) };
    inline DescribeVsDomainDetailResponseBody::DomainConfig getDomainConfig() { DARABONBA_PTR_GET(domainConfig_, DescribeVsDomainDetailResponseBody::DomainConfig) };
    inline DescribeVsDomainDetailResponseBody& setDomainConfig(const DescribeVsDomainDetailResponseBody::DomainConfig & domainConfig) { DARABONBA_PTR_SET_VALUE(domainConfig_, domainConfig) };
    inline DescribeVsDomainDetailResponseBody& setDomainConfig(DescribeVsDomainDetailResponseBody::DomainConfig && domainConfig) { DARABONBA_PTR_SET_RVALUE(domainConfig_, domainConfig) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeVsDomainDetailResponseBody::DomainConfig> domainConfig_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
