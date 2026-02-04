// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainDetail, domainDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainDetailResponseBody() = default ;
    DescribeDcdnDomainDetailResponseBody(const DescribeDcdnDomainDetailResponseBody &) = default ;
    DescribeDcdnDomainDetailResponseBody(DescribeDcdnDomainDetailResponseBody &&) = default ;
    DescribeDcdnDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainDetailResponseBody() = default ;
    DescribeDcdnDomainDetailResponseBody& operator=(const DescribeDcdnDomainDetailResponseBody &) = default ;
    DescribeDcdnDomainDetailResponseBody& operator=(DescribeDcdnDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
        DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
        DARABONBA_PTR_TO_JSON(SSLPub, SSLPub_);
        DARABONBA_PTR_TO_JSON(Scene, scene_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(Sources, sources_);
      };
      friend void from_json(const Darabonba::Json& j, DomainDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
        DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
        DARABONBA_PTR_FROM_JSON(SSLPub, SSLPub_);
        DARABONBA_PTR_FROM_JSON(Scene, scene_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(Sources, sources_);
      };
      DomainDetail() = default ;
      DomainDetail(const DomainDetail &) = default ;
      DomainDetail(DomainDetail &&) = default ;
      DomainDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainDetail() = default ;
      DomainDetail& operator=(const DomainDetail &) = default ;
      DomainDetail& operator=(DomainDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sources : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sources& obj) { 
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, Sources& obj) { 
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        Sources() = default ;
        Sources(const Sources &) = default ;
        Sources(Sources &&) = default ;
        Sources(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sources() = default ;
        Sources& operator=(const Sources &) = default ;
        Sources& operator=(Sources &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Source : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Source& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Priority, priority_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, Source& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          Source() = default ;
          Source(const Source &) = default ;
          Source(Source &&) = default ;
          Source(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Source() = default ;
          Source& operator=(const Source &) = default ;
          Source& operator=(Source &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->enabled_ == nullptr && this->port_ == nullptr && this->priority_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Source& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
          inline Source& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline Source& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
          inline Source& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Source& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
          inline Source& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          // The address of the origin server.
          shared_ptr<string> content_ {};
          // The status.
          shared_ptr<string> enabled_ {};
          // The port over which requests are redirected to the origin server. Ports 443 and 80 are supported.
          shared_ptr<int32_t> port_ {};
          // The priority.
          shared_ptr<string> priority_ {};
          // The type of the origin server. Valid values:
          // 
          // *   **ipaddr**: an IP address
          // *   **domain**: an origin domain name
          // *   **oss**: the domain name of an Object Storage Service (OSS) bucket
          shared_ptr<string> type_ {};
          // The weight of the origin server if multiple origin servers are specified.
          shared_ptr<string> weight_ {};
        };

        virtual bool empty() const override { return this->source_ == nullptr; };
        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline const vector<Sources::Source> & getSource() const { DARABONBA_PTR_GET_CONST(source_, vector<Sources::Source>) };
        inline vector<Sources::Source> getSource() { DARABONBA_PTR_GET(source_, vector<Sources::Source>) };
        inline Sources& setSource(const vector<Sources::Source> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
        inline Sources& setSource(vector<Sources::Source> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


      protected:
        shared_ptr<vector<Sources::Source>> source_ {};
      };

      virtual bool empty() const override { return this->cname_ == nullptr
        && this->description_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->functionType_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->resourceGroupId_ == nullptr && this->SSLProtocol_ == nullptr && this->SSLPub_ == nullptr && this->scene_ == nullptr
        && this->scope_ == nullptr && this->sources_ == nullptr; };
      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline DomainDetail& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline DomainDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DomainDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainStatus Field Functions 
      bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
      void deleteDomainStatus() { this->domainStatus_ = nullptr;};
      inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
      inline DomainDetail& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


      // functionType Field Functions 
      bool hasFunctionType() const { return this->functionType_ != nullptr;};
      void deleteFunctionType() { this->functionType_ = nullptr;};
      inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
      inline DomainDetail& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline DomainDetail& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline DomainDetail& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DomainDetail& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // SSLProtocol Field Functions 
      bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
      void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
      inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
      inline DomainDetail& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


      // SSLPub Field Functions 
      bool hasSSLPub() const { return this->SSLPub_ != nullptr;};
      void deleteSSLPub() { this->SSLPub_ = nullptr;};
      inline string getSSLPub() const { DARABONBA_PTR_GET_DEFAULT(SSLPub_, "") };
      inline DomainDetail& setSSLPub(string SSLPub) { DARABONBA_PTR_SET_VALUE(SSLPub_, SSLPub) };


      // scene Field Functions 
      bool hasScene() const { return this->scene_ != nullptr;};
      void deleteScene() { this->scene_ = nullptr;};
      inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
      inline DomainDetail& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline DomainDetail& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // sources Field Functions 
      bool hasSources() const { return this->sources_ != nullptr;};
      void deleteSources() { this->sources_ = nullptr;};
      inline const DomainDetail::Sources & getSources() const { DARABONBA_PTR_GET_CONST(sources_, DomainDetail::Sources) };
      inline DomainDetail::Sources getSources() { DARABONBA_PTR_GET(sources_, DomainDetail::Sources) };
      inline DomainDetail& setSources(const DomainDetail::Sources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
      inline DomainDetail& setSources(DomainDetail::Sources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


    protected:
      // The CNAME that is assigned to the accelerated domain name. You must add the CNAME record to the system of your Domain Name System (DNS) provider to map the accelerated domain name to the CNAME.
      shared_ptr<string> cname_ {};
      // The information about the Internet content provider (ICP) filing of the domain name.
      shared_ptr<string> description_ {};
      // The accelerated domain name.
      shared_ptr<string> domainName_ {};
      // The status of the accelerated domain name. Valid values:
      // 
      // *   **online**
      // *   **offline**
      // *   **configuring**
      // *   **configure_failed**
      // *   **checking**
      // *   **check_failed**
      shared_ptr<string> domainStatus_ {};
      // Computing service type. Valid values:
      // 
      // *   **routine**
      // *   **image**
      // *   **cloudFunction**
      shared_ptr<string> functionType_ {};
      // The time when the domain name was added.
      shared_ptr<string> gmtCreated_ {};
      // The time when the domain name was last modified.
      shared_ptr<string> gmtModified_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the Security Socket Layer (SSL) certificate is enabled. Valid values:
      // 
      // *   **on**: **enabled**
      // *   **off**: **disabled**
      shared_ptr<string> SSLProtocol_ {};
      // The public key of the certificate if HTTPS is enabled.
      shared_ptr<string> SSLPub_ {};
      // Acceleration scenario. Valid values:
      // 
      // *   **apiscene**: API acceleration.
      // *   **webservicescene**: website acceleration.
      // *   **staticscene**: video, image, and text acceleration.
      // *   **an empty string**: no acceleration scenario is used.
      shared_ptr<string> scene_ {};
      // The acceleration region. Default value: domestic. Valid values:
      // 
      // *   **domestic**: Chinese mainland
      // *   **overseas**: global (excluding the Chinese mainland)
      // *   **global**: global
      shared_ptr<string> scope_ {};
      // The information about the origin server.
      shared_ptr<DomainDetail::Sources> sources_ {};
    };

    virtual bool empty() const override { return this->domainDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // domainDetail Field Functions 
    bool hasDomainDetail() const { return this->domainDetail_ != nullptr;};
    void deleteDomainDetail() { this->domainDetail_ = nullptr;};
    inline const DescribeDcdnDomainDetailResponseBody::DomainDetail & getDomainDetail() const { DARABONBA_PTR_GET_CONST(domainDetail_, DescribeDcdnDomainDetailResponseBody::DomainDetail) };
    inline DescribeDcdnDomainDetailResponseBody::DomainDetail getDomainDetail() { DARABONBA_PTR_GET(domainDetail_, DescribeDcdnDomainDetailResponseBody::DomainDetail) };
    inline DescribeDcdnDomainDetailResponseBody& setDomainDetail(const DescribeDcdnDomainDetailResponseBody::DomainDetail & domainDetail) { DARABONBA_PTR_SET_VALUE(domainDetail_, domainDetail) };
    inline DescribeDcdnDomainDetailResponseBody& setDomainDetail(DescribeDcdnDomainDetailResponseBody::DomainDetail && domainDetail) { DARABONBA_PTR_SET_RVALUE(domainDetail_, domainDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the accelerated domain name.
    shared_ptr<DescribeDcdnDomainDetailResponseBody::DomainDetail> domainDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
