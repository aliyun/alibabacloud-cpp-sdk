// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainsResponseBody() = default ;
    DescribeDomainsResponseBody(const DescribeDomainsResponseBody &) = default ;
    DescribeDomainsResponseBody(DescribeDomainsResponseBody &&) = default ;
    DescribeDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBody() = default ;
    DescribeDomainsResponseBody& operator=(const DescribeDomainsResponseBody &) = default ;
    DescribeDomainsResponseBody& operator=(DescribeDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(Backeds, backeds_);
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(DomainId, domainId_);
        DARABONBA_PTR_TO_JSON(ListenPorts, listenPorts_);
        DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(Backeds, backeds_);
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
        DARABONBA_PTR_FROM_JSON(ListenPorts, listenPorts_);
        DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ListenPorts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ListenPorts& obj) { 
          DARABONBA_PTR_TO_JSON(Http, http_);
          DARABONBA_PTR_TO_JSON(Https, https_);
        };
        friend void from_json(const Darabonba::Json& j, ListenPorts& obj) { 
          DARABONBA_PTR_FROM_JSON(Http, http_);
          DARABONBA_PTR_FROM_JSON(Https, https_);
        };
        ListenPorts() = default ;
        ListenPorts(const ListenPorts &) = default ;
        ListenPorts(ListenPorts &&) = default ;
        ListenPorts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ListenPorts() = default ;
        ListenPorts& operator=(const ListenPorts &) = default ;
        ListenPorts& operator=(ListenPorts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->http_ == nullptr
        && this->https_ == nullptr; };
        // http Field Functions 
        bool hasHttp() const { return this->http_ != nullptr;};
        void deleteHttp() { this->http_ = nullptr;};
        inline const vector<int64_t> & getHttp() const { DARABONBA_PTR_GET_CONST(http_, vector<int64_t>) };
        inline vector<int64_t> getHttp() { DARABONBA_PTR_GET(http_, vector<int64_t>) };
        inline ListenPorts& setHttp(const vector<int64_t> & http) { DARABONBA_PTR_SET_VALUE(http_, http) };
        inline ListenPorts& setHttp(vector<int64_t> && http) { DARABONBA_PTR_SET_RVALUE(http_, http) };


        // https Field Functions 
        bool hasHttps() const { return this->https_ != nullptr;};
        void deleteHttps() { this->https_ = nullptr;};
        inline const vector<int64_t> & getHttps() const { DARABONBA_PTR_GET_CONST(https_, vector<int64_t>) };
        inline vector<int64_t> getHttps() { DARABONBA_PTR_GET(https_, vector<int64_t>) };
        inline ListenPorts& setHttps(const vector<int64_t> & https) { DARABONBA_PTR_SET_VALUE(https_, https) };
        inline ListenPorts& setHttps(vector<int64_t> && https) { DARABONBA_PTR_SET_RVALUE(https_, https) };


      protected:
        // The HTTP listener ports.
        shared_ptr<vector<int64_t>> http_ {};
        // The HTTPS listener ports.
        shared_ptr<vector<int64_t>> https_ {};
      };

      class Backeds : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Backeds& obj) { 
          DARABONBA_PTR_TO_JSON(Http, http_);
          DARABONBA_PTR_TO_JSON(Https, https_);
        };
        friend void from_json(const Darabonba::Json& j, Backeds& obj) { 
          DARABONBA_PTR_FROM_JSON(Http, http_);
          DARABONBA_PTR_FROM_JSON(Https, https_);
        };
        Backeds() = default ;
        Backeds(const Backeds &) = default ;
        Backeds(Backeds &&) = default ;
        Backeds(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Backeds() = default ;
        Backeds& operator=(const Backeds &) = default ;
        Backeds& operator=(Backeds &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Https : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Https& obj) { 
            DARABONBA_PTR_TO_JSON(Backend, backend_);
          };
          friend void from_json(const Darabonba::Json& j, Https& obj) { 
            DARABONBA_PTR_FROM_JSON(Backend, backend_);
          };
          Https() = default ;
          Https(const Https &) = default ;
          Https(Https &&) = default ;
          Https(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Https() = default ;
          Https& operator=(const Https &) = default ;
          Https& operator=(Https &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->backend_ == nullptr; };
          // backend Field Functions 
          bool hasBackend() const { return this->backend_ != nullptr;};
          void deleteBackend() { this->backend_ = nullptr;};
          inline string getBackend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
          inline Https& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


        protected:
          // The HTTPS address of the origin server.
          shared_ptr<string> backend_ {};
        };

        class Http : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Http& obj) { 
            DARABONBA_PTR_TO_JSON(Backend, backend_);
          };
          friend void from_json(const Darabonba::Json& j, Http& obj) { 
            DARABONBA_PTR_FROM_JSON(Backend, backend_);
          };
          Http() = default ;
          Http(const Http &) = default ;
          Http(Http &&) = default ;
          Http(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Http() = default ;
          Http& operator=(const Http &) = default ;
          Http& operator=(Http &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->backend_ == nullptr; };
          // backend Field Functions 
          bool hasBackend() const { return this->backend_ != nullptr;};
          void deleteBackend() { this->backend_ = nullptr;};
          inline string getBackend() const { DARABONBA_PTR_GET_DEFAULT(backend_, "") };
          inline Http& setBackend(string backend) { DARABONBA_PTR_SET_VALUE(backend_, backend) };


        protected:
          // The HTTP address of the origin server.
          shared_ptr<string> backend_ {};
        };

        virtual bool empty() const override { return this->http_ == nullptr
        && this->https_ == nullptr; };
        // http Field Functions 
        bool hasHttp() const { return this->http_ != nullptr;};
        void deleteHttp() { this->http_ = nullptr;};
        inline const vector<Backeds::Http> & getHttp() const { DARABONBA_PTR_GET_CONST(http_, vector<Backeds::Http>) };
        inline vector<Backeds::Http> getHttp() { DARABONBA_PTR_GET(http_, vector<Backeds::Http>) };
        inline Backeds& setHttp(const vector<Backeds::Http> & http) { DARABONBA_PTR_SET_VALUE(http_, http) };
        inline Backeds& setHttp(vector<Backeds::Http> && http) { DARABONBA_PTR_SET_RVALUE(http_, http) };


        // https Field Functions 
        bool hasHttps() const { return this->https_ != nullptr;};
        void deleteHttps() { this->https_ = nullptr;};
        inline const vector<Backeds::Https> & getHttps() const { DARABONBA_PTR_GET_CONST(https_, vector<Backeds::Https>) };
        inline vector<Backeds::Https> getHttps() { DARABONBA_PTR_GET(https_, vector<Backeds::Https>) };
        inline Backeds& setHttps(const vector<Backeds::Https> & https) { DARABONBA_PTR_SET_VALUE(https_, https) };
        inline Backeds& setHttps(vector<Backeds::Https> && https) { DARABONBA_PTR_SET_RVALUE(https_, https) };


      protected:
        // The HTTP addresses of the origin server.
        shared_ptr<vector<Backeds::Http>> http_ {};
        // The HTTPS addresses of the origin server.
        shared_ptr<vector<Backeds::Https>> https_ {};
      };

      virtual bool empty() const override { return this->backeds_ == nullptr
        && this->cname_ == nullptr && this->domain_ == nullptr && this->domainId_ == nullptr && this->listenPorts_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr
        && this->status_ == nullptr; };
      // backeds Field Functions 
      bool hasBackeds() const { return this->backeds_ != nullptr;};
      void deleteBackeds() { this->backeds_ = nullptr;};
      inline const Domains::Backeds & getBackeds() const { DARABONBA_PTR_GET_CONST(backeds_, Domains::Backeds) };
      inline Domains::Backeds getBackeds() { DARABONBA_PTR_GET(backeds_, Domains::Backeds) };
      inline Domains& setBackeds(const Domains::Backeds & backeds) { DARABONBA_PTR_SET_VALUE(backeds_, backeds) };
      inline Domains& setBackeds(Domains::Backeds && backeds) { DARABONBA_PTR_SET_RVALUE(backeds_, backeds) };


      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline Domains& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Domains& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Domains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // listenPorts Field Functions 
      bool hasListenPorts() const { return this->listenPorts_ != nullptr;};
      void deleteListenPorts() { this->listenPorts_ = nullptr;};
      inline const Domains::ListenPorts & getListenPorts() const { DARABONBA_PTR_GET_CONST(listenPorts_, Domains::ListenPorts) };
      inline Domains::ListenPorts getListenPorts() { DARABONBA_PTR_GET(listenPorts_, Domains::ListenPorts) };
      inline Domains& setListenPorts(const Domains::ListenPorts & listenPorts) { DARABONBA_PTR_SET_VALUE(listenPorts_, listenPorts) };
      inline Domains& setListenPorts(Domains::ListenPorts && listenPorts) { DARABONBA_PTR_SET_RVALUE(listenPorts_, listenPorts) };


      // resourceManagerResourceGroupId Field Functions 
      bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
      void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
      inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
      inline Domains& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Domains& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The back-to-origin settings.
      shared_ptr<Domains::Backeds> backeds_ {};
      // The CNAME assigned by WAF to the domain name.
      shared_ptr<string> cname_ {};
      // The domain name that is added to WAF in CNAME record mode.
      shared_ptr<string> domain_ {};
      shared_ptr<string> domainId_ {};
      // The configurations of the listeners.
      shared_ptr<Domains::ListenPorts> listenPorts_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceManagerResourceGroupId_ {};
      // The status of the domain name. Valid values:
      // 
      // *   **1:** The domain name is in a normal state.
      // *   **2:** The domain name is being created.
      // *   **3:** The domain name is being modified.
      // *   **4:** The domain name is being released.
      // *   **5:** WAF no longer forwards traffic that is sent to the domain name.
      shared_ptr<int32_t> status_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<DescribeDomainsResponseBody::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<DescribeDomainsResponseBody::Domains>) };
    inline vector<DescribeDomainsResponseBody::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<DescribeDomainsResponseBody::Domains>) };
    inline DescribeDomainsResponseBody& setDomains(const vector<DescribeDomainsResponseBody::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDomainsResponseBody& setDomains(vector<DescribeDomainsResponseBody::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names that are added to WAF in CNAME record mode.
    shared_ptr<vector<DescribeDomainsResponseBody::Domains>> domains_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of returned entries.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
