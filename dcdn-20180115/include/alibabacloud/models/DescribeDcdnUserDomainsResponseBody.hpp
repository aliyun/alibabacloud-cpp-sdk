// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSRESPONSEBODY_HPP_
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
  class DescribeDcdnUserDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDcdnUserDomainsResponseBody() = default ;
    DescribeDcdnUserDomainsResponseBody(const DescribeDcdnUserDomainsResponseBody &) = default ;
    DescribeDcdnUserDomainsResponseBody(DescribeDcdnUserDomainsResponseBody &&) = default ;
    DescribeDcdnUserDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsResponseBody() = default ;
    DescribeDcdnUserDomainsResponseBody& operator=(const DescribeDcdnUserDomainsResponseBody &) = default ;
    DescribeDcdnUserDomainsResponseBody& operator=(DescribeDcdnUserDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(PageData, pageData_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(PageData, pageData_);
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
      class PageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageData& obj) { 
          DARABONBA_PTR_TO_JSON(Cname, cname_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DomainId, domainId_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_TO_JSON(FunctionType, functionType_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SSLProtocol, SSLProtocol_);
          DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
          DARABONBA_PTR_TO_JSON(Scene, scene_);
          DARABONBA_PTR_TO_JSON(Sources, sources_);
        };
        friend void from_json(const Darabonba::Json& j, PageData& obj) { 
          DARABONBA_PTR_FROM_JSON(Cname, cname_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
          DARABONBA_PTR_FROM_JSON(FunctionType, functionType_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SSLProtocol, SSLProtocol_);
          DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
          DARABONBA_PTR_FROM_JSON(Scene, scene_);
          DARABONBA_PTR_FROM_JSON(Sources, sources_);
        };
        PageData() = default ;
        PageData(const PageData &) = default ;
        PageData(PageData &&) = default ;
        PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageData() = default ;
        PageData& operator=(const PageData &) = default ;
        PageData& operator=(PageData &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Port, port_);
              DARABONBA_PTR_TO_JSON(Priority, priority_);
              DARABONBA_PTR_TO_JSON(Type, type_);
              DARABONBA_PTR_TO_JSON(Weight, weight_);
            };
            friend void from_json(const Darabonba::Json& j, Source& obj) { 
              DARABONBA_PTR_FROM_JSON(Content, content_);
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
        && this->port_ == nullptr && this->priority_ == nullptr && this->type_ == nullptr && this->weight_ == nullptr; };
            // content Field Functions 
            bool hasContent() const { return this->content_ != nullptr;};
            void deleteContent() { this->content_ = nullptr;};
            inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
            inline Source& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


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
            // The port of the origin server.
            shared_ptr<int32_t> port_ {};
            // The priority of the origin server.
            shared_ptr<string> priority_ {};
            // The type of the origin server.
            shared_ptr<string> type_ {};
            // The weight of the origin server.
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
        && this->description_ == nullptr && this->domainId_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->functionType_ == nullptr
        && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr && this->resourceGroupId_ == nullptr && this->SSLProtocol_ == nullptr && this->sandbox_ == nullptr
        && this->scene_ == nullptr && this->sources_ == nullptr; };
        // cname Field Functions 
        bool hasCname() const { return this->cname_ != nullptr;};
        void deleteCname() { this->cname_ = nullptr;};
        inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
        inline PageData& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PageData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline int64_t getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, 0L) };
        inline PageData& setDomainId(int64_t domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline PageData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // domainStatus Field Functions 
        bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
        void deleteDomainStatus() { this->domainStatus_ = nullptr;};
        inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
        inline PageData& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


        // functionType Field Functions 
        bool hasFunctionType() const { return this->functionType_ != nullptr;};
        void deleteFunctionType() { this->functionType_ = nullptr;};
        inline string getFunctionType() const { DARABONBA_PTR_GET_DEFAULT(functionType_, "") };
        inline PageData& setFunctionType(string functionType) { DARABONBA_PTR_SET_VALUE(functionType_, functionType) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline PageData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline PageData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline PageData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // SSLProtocol Field Functions 
        bool hasSSLProtocol() const { return this->SSLProtocol_ != nullptr;};
        void deleteSSLProtocol() { this->SSLProtocol_ = nullptr;};
        inline string getSSLProtocol() const { DARABONBA_PTR_GET_DEFAULT(SSLProtocol_, "") };
        inline PageData& setSSLProtocol(string SSLProtocol) { DARABONBA_PTR_SET_VALUE(SSLProtocol_, SSLProtocol) };


        // sandbox Field Functions 
        bool hasSandbox() const { return this->sandbox_ != nullptr;};
        void deleteSandbox() { this->sandbox_ = nullptr;};
        inline string getSandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, "") };
        inline PageData& setSandbox(string sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


        // scene Field Functions 
        bool hasScene() const { return this->scene_ != nullptr;};
        void deleteScene() { this->scene_ = nullptr;};
        inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
        inline PageData& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


        // sources Field Functions 
        bool hasSources() const { return this->sources_ != nullptr;};
        void deleteSources() { this->sources_ = nullptr;};
        inline const PageData::Sources & getSources() const { DARABONBA_PTR_GET_CONST(sources_, PageData::Sources) };
        inline PageData::Sources getSources() { DARABONBA_PTR_GET(sources_, PageData::Sources) };
        inline PageData& setSources(const PageData::Sources & sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };
        inline PageData& setSources(PageData::Sources && sources) { DARABONBA_PTR_SET_RVALUE(sources_, sources) };


      protected:
        // The CNAME of the domain.
        shared_ptr<string> cname_ {};
        // The reason why the domain failed the review.
        shared_ptr<string> description_ {};
        // The domain ID.
        shared_ptr<int64_t> domainId_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The domain status.
        // 
        // *   **online**: The domain is active.
        // *   **offline**: The domain is suspended.
        // *   **configuring**: The domain is being configured.
        // *   **configure_failed**: The domain failed to be configured.
        // *   **checking**: The domain is under review.
        // *   **check_failed**: The domain failed the review.
        shared_ptr<string> domainStatus_ {};
        // The computing service type. Valid values:
        // 
        // *   **routine**
        // *   **image**
        // *   **cloudFunction**
        shared_ptr<string> functionType_ {};
        // The time when the domain was added to DCDN.
        shared_ptr<string> gmtCreated_ {};
        // The time when the domain was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the resource group.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether HTTPS was enabled.
        // 
        // *   **on**: enabled.
        // *   **off**: disabled.
        shared_ptr<string> SSLProtocol_ {};
        // The sandbox status.
        shared_ptr<string> sandbox_ {};
        // The acceleration scenario. Valid values:
        // 
        // *   **apiscene**: accelerates response to API calls.
        // *   **webservicescene**: accelerates content delivery for websites.
        // *   **staticscene**: accelerates the delivery of videos, images, and text.
        // *   **If you leave this parameter empty, no scenarios are supported.
        shared_ptr<string> scene_ {};
        // The information about the origin servers.
        shared_ptr<PageData::Sources> sources_ {};
      };

      virtual bool empty() const override { return this->pageData_ == nullptr; };
      // pageData Field Functions 
      bool hasPageData() const { return this->pageData_ != nullptr;};
      void deletePageData() { this->pageData_ = nullptr;};
      inline const vector<Domains::PageData> & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, vector<Domains::PageData>) };
      inline vector<Domains::PageData> getPageData() { DARABONBA_PTR_GET(pageData_, vector<Domains::PageData>) };
      inline Domains& setPageData(const vector<Domains::PageData> & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
      inline Domains& setPageData(vector<Domains::PageData> && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


    protected:
      shared_ptr<vector<Domains::PageData>> pageData_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const DescribeDcdnUserDomainsResponseBody::Domains & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, DescribeDcdnUserDomainsResponseBody::Domains) };
    inline DescribeDcdnUserDomainsResponseBody::Domains getDomains() { DARABONBA_PTR_GET(domains_, DescribeDcdnUserDomainsResponseBody::Domains) };
    inline DescribeDcdnUserDomainsResponseBody& setDomains(const DescribeDcdnUserDomainsResponseBody::Domains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDcdnUserDomainsResponseBody& setDomains(DescribeDcdnUserDomainsResponseBody::Domains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDcdnUserDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDcdnUserDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnUserDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDcdnUserDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the queried domains.
    shared_ptr<DescribeDcdnUserDomainsResponseBody::Domains> domains_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
