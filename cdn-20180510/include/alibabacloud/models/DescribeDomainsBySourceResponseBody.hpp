// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSBYSOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeDomainsBySourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainsList, domainsList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sources, sources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsBySourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainsList, domainsList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sources, sources_);
    };
    DescribeDomainsBySourceResponseBody() = default ;
    DescribeDomainsBySourceResponseBody(const DescribeDomainsBySourceResponseBody &) = default ;
    DescribeDomainsBySourceResponseBody(DescribeDomainsBySourceResponseBody &&) = default ;
    DescribeDomainsBySourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsBySourceResponseBody() = default ;
    DescribeDomainsBySourceResponseBody& operator=(const DescribeDomainsBySourceResponseBody &) = default ;
    DescribeDomainsBySourceResponseBody& operator=(DescribeDomainsBySourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainsList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainsList& obj) { 
        DARABONBA_PTR_TO_JSON(DomainsData, domainsData_);
      };
      friend void from_json(const Darabonba::Json& j, DomainsList& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainsData, domainsData_);
      };
      DomainsList() = default ;
      DomainsList(const DomainsList &) = default ;
      DomainsList(DomainsList &&) = default ;
      DomainsList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainsList() = default ;
      DomainsList& operator=(const DomainsList &) = default ;
      DomainsList& operator=(DomainsList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainsData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainsData& obj) { 
          DARABONBA_PTR_TO_JSON(DomainInfos, domainInfos_);
          DARABONBA_PTR_TO_JSON(Domains, domains_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, DomainsData& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainInfos, domainInfos_);
          DARABONBA_PTR_FROM_JSON(Domains, domains_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        DomainsData() = default ;
        DomainsData(const DomainsData &) = default ;
        DomainsData(DomainsData &&) = default ;
        DomainsData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainsData() = default ;
        DomainsData& operator=(const DomainsData &) = default ;
        DomainsData& operator=(DomainsData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Domains : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Domains& obj) { 
            DARABONBA_PTR_TO_JSON(domainNames, domainNames_);
          };
          friend void from_json(const Darabonba::Json& j, Domains& obj) { 
            DARABONBA_PTR_FROM_JSON(domainNames, domainNames_);
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
          virtual bool empty() const override { return this->domainNames_ == nullptr; };
          // domainNames Field Functions 
          bool hasDomainNames() const { return this->domainNames_ != nullptr;};
          void deleteDomainNames() { this->domainNames_ = nullptr;};
          inline const vector<string> & getDomainNames() const { DARABONBA_PTR_GET_CONST(domainNames_, vector<string>) };
          inline vector<string> getDomainNames() { DARABONBA_PTR_GET(domainNames_, vector<string>) };
          inline Domains& setDomainNames(const vector<string> & domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };
          inline Domains& setDomainNames(vector<string> && domainNames) { DARABONBA_PTR_SET_RVALUE(domainNames_, domainNames) };


        protected:
          shared_ptr<vector<string>> domainNames_ {};
        };

        class DomainInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DomainInfos& obj) { 
            DARABONBA_PTR_TO_JSON(domainInfo, domainInfo_);
          };
          friend void from_json(const Darabonba::Json& j, DomainInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(domainInfo, domainInfo_);
          };
          DomainInfos() = default ;
          DomainInfos(const DomainInfos &) = default ;
          DomainInfos(DomainInfos &&) = default ;
          DomainInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DomainInfos() = default ;
          DomainInfos& operator=(const DomainInfos &) = default ;
          DomainInfos& operator=(DomainInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DomainInfo : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DomainInfo& obj) { 
              DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
              DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
              DARABONBA_PTR_TO_JSON(DomainCname, domainCname_);
              DARABONBA_PTR_TO_JSON(DomainName, domainName_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            };
            friend void from_json(const Darabonba::Json& j, DomainInfo& obj) { 
              DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
              DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
              DARABONBA_PTR_FROM_JSON(DomainCname, domainCname_);
              DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            };
            DomainInfo() = default ;
            DomainInfo(const DomainInfo &) = default ;
            DomainInfo(DomainInfo &&) = default ;
            DomainInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DomainInfo() = default ;
            DomainInfo& operator=(const DomainInfo &) = default ;
            DomainInfo& operator=(DomainInfo &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->cdnType_ == nullptr
        && this->createTime_ == nullptr && this->domainCname_ == nullptr && this->domainName_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
            // cdnType Field Functions 
            bool hasCdnType() const { return this->cdnType_ != nullptr;};
            void deleteCdnType() { this->cdnType_ = nullptr;};
            inline string getCdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
            inline DomainInfo& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


            // createTime Field Functions 
            bool hasCreateTime() const { return this->createTime_ != nullptr;};
            void deleteCreateTime() { this->createTime_ = nullptr;};
            inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
            inline DomainInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


            // domainCname Field Functions 
            bool hasDomainCname() const { return this->domainCname_ != nullptr;};
            void deleteDomainCname() { this->domainCname_ = nullptr;};
            inline string getDomainCname() const { DARABONBA_PTR_GET_DEFAULT(domainCname_, "") };
            inline DomainInfo& setDomainCname(string domainCname) { DARABONBA_PTR_SET_VALUE(domainCname_, domainCname) };


            // domainName Field Functions 
            bool hasDomainName() const { return this->domainName_ != nullptr;};
            void deleteDomainName() { this->domainName_ = nullptr;};
            inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
            inline DomainInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline DomainInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
            inline DomainInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          protected:
            shared_ptr<string> cdnType_ {};
            shared_ptr<string> createTime_ {};
            shared_ptr<string> domainCname_ {};
            shared_ptr<string> domainName_ {};
            shared_ptr<string> status_ {};
            shared_ptr<string> updateTime_ {};
          };

          virtual bool empty() const override { return this->domainInfo_ == nullptr; };
          // domainInfo Field Functions 
          bool hasDomainInfo() const { return this->domainInfo_ != nullptr;};
          void deleteDomainInfo() { this->domainInfo_ = nullptr;};
          inline const vector<DomainInfos::DomainInfo> & getDomainInfo() const { DARABONBA_PTR_GET_CONST(domainInfo_, vector<DomainInfos::DomainInfo>) };
          inline vector<DomainInfos::DomainInfo> getDomainInfo() { DARABONBA_PTR_GET(domainInfo_, vector<DomainInfos::DomainInfo>) };
          inline DomainInfos& setDomainInfo(const vector<DomainInfos::DomainInfo> & domainInfo) { DARABONBA_PTR_SET_VALUE(domainInfo_, domainInfo) };
          inline DomainInfos& setDomainInfo(vector<DomainInfos::DomainInfo> && domainInfo) { DARABONBA_PTR_SET_RVALUE(domainInfo_, domainInfo) };


        protected:
          shared_ptr<vector<DomainInfos::DomainInfo>> domainInfo_ {};
        };

        virtual bool empty() const override { return this->domainInfos_ == nullptr
        && this->domains_ == nullptr && this->source_ == nullptr; };
        // domainInfos Field Functions 
        bool hasDomainInfos() const { return this->domainInfos_ != nullptr;};
        void deleteDomainInfos() { this->domainInfos_ = nullptr;};
        inline const DomainsData::DomainInfos & getDomainInfos() const { DARABONBA_PTR_GET_CONST(domainInfos_, DomainsData::DomainInfos) };
        inline DomainsData::DomainInfos getDomainInfos() { DARABONBA_PTR_GET(domainInfos_, DomainsData::DomainInfos) };
        inline DomainsData& setDomainInfos(const DomainsData::DomainInfos & domainInfos) { DARABONBA_PTR_SET_VALUE(domainInfos_, domainInfos) };
        inline DomainsData& setDomainInfos(DomainsData::DomainInfos && domainInfos) { DARABONBA_PTR_SET_RVALUE(domainInfos_, domainInfos) };


        // domains Field Functions 
        bool hasDomains() const { return this->domains_ != nullptr;};
        void deleteDomains() { this->domains_ = nullptr;};
        inline const DomainsData::Domains & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, DomainsData::Domains) };
        inline DomainsData::Domains getDomains() { DARABONBA_PTR_GET(domains_, DomainsData::Domains) };
        inline DomainsData& setDomains(const DomainsData::Domains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
        inline DomainsData& setDomains(DomainsData::Domains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline DomainsData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        shared_ptr<DomainsData::DomainInfos> domainInfos_ {};
        shared_ptr<DomainsData::Domains> domains_ {};
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->domainsData_ == nullptr; };
      // domainsData Field Functions 
      bool hasDomainsData() const { return this->domainsData_ != nullptr;};
      void deleteDomainsData() { this->domainsData_ = nullptr;};
      inline const vector<DomainsList::DomainsData> & getDomainsData() const { DARABONBA_PTR_GET_CONST(domainsData_, vector<DomainsList::DomainsData>) };
      inline vector<DomainsList::DomainsData> getDomainsData() { DARABONBA_PTR_GET(domainsData_, vector<DomainsList::DomainsData>) };
      inline DomainsList& setDomainsData(const vector<DomainsList::DomainsData> & domainsData) { DARABONBA_PTR_SET_VALUE(domainsData_, domainsData) };
      inline DomainsList& setDomainsData(vector<DomainsList::DomainsData> && domainsData) { DARABONBA_PTR_SET_RVALUE(domainsData_, domainsData) };


    protected:
      shared_ptr<vector<DomainsList::DomainsData>> domainsData_ {};
    };

    virtual bool empty() const override { return this->domainsList_ == nullptr
        && this->requestId_ == nullptr && this->sources_ == nullptr; };
    // domainsList Field Functions 
    bool hasDomainsList() const { return this->domainsList_ != nullptr;};
    void deleteDomainsList() { this->domainsList_ = nullptr;};
    inline const DescribeDomainsBySourceResponseBody::DomainsList & getDomainsList() const { DARABONBA_PTR_GET_CONST(domainsList_, DescribeDomainsBySourceResponseBody::DomainsList) };
    inline DescribeDomainsBySourceResponseBody::DomainsList getDomainsList() { DARABONBA_PTR_GET(domainsList_, DescribeDomainsBySourceResponseBody::DomainsList) };
    inline DescribeDomainsBySourceResponseBody& setDomainsList(const DescribeDomainsBySourceResponseBody::DomainsList & domainsList) { DARABONBA_PTR_SET_VALUE(domainsList_, domainsList) };
    inline DescribeDomainsBySourceResponseBody& setDomainsList(DescribeDomainsBySourceResponseBody::DomainsList && domainsList) { DARABONBA_PTR_SET_RVALUE(domainsList_, domainsList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsBySourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sources Field Functions 
    bool hasSources() const { return this->sources_ != nullptr;};
    void deleteSources() { this->sources_ = nullptr;};
    inline string getSources() const { DARABONBA_PTR_GET_DEFAULT(sources_, "") };
    inline DescribeDomainsBySourceResponseBody& setSources(string sources) { DARABONBA_PTR_SET_VALUE(sources_, sources) };


  protected:
    shared_ptr<DescribeDomainsBySourceResponseBody::DomainsList> domainsList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The origin servers.
    shared_ptr<string> sources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
