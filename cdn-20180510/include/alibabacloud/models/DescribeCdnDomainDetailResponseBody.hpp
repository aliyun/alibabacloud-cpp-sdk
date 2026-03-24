// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODY_HPP_
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
  class DescribeCdnDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GetDomainDetailModel, getDomainDetailModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GetDomainDetailModel, getDomainDetailModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDomainDetailResponseBody() = default ;
    DescribeCdnDomainDetailResponseBody(const DescribeCdnDomainDetailResponseBody &) = default ;
    DescribeCdnDomainDetailResponseBody(DescribeCdnDomainDetailResponseBody &&) = default ;
    DescribeCdnDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainDetailResponseBody() = default ;
    DescribeCdnDomainDetailResponseBody& operator=(const DescribeCdnDomainDetailResponseBody &) = default ;
    DescribeCdnDomainDetailResponseBody& operator=(DescribeCdnDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GetDomainDetailModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GetDomainDetailModel& obj) { 
        DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
        DARABONBA_PTR_TO_JSON(Cname, cname_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(HttpsCname, httpsCname_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(ServerCertificateStatus, serverCertificateStatus_);
        DARABONBA_PTR_TO_JSON(SourceModels, sourceModels_);
      };
      friend void from_json(const Darabonba::Json& j, GetDomainDetailModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
        DARABONBA_PTR_FROM_JSON(Cname, cname_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(HttpsCname, httpsCname_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(ServerCertificateStatus, serverCertificateStatus_);
        DARABONBA_PTR_FROM_JSON(SourceModels, sourceModels_);
      };
      GetDomainDetailModel() = default ;
      GetDomainDetailModel(const GetDomainDetailModel &) = default ;
      GetDomainDetailModel(GetDomainDetailModel &&) = default ;
      GetDomainDetailModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GetDomainDetailModel() = default ;
      GetDomainDetailModel& operator=(const GetDomainDetailModel &) = default ;
      GetDomainDetailModel& operator=(GetDomainDetailModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceModels& obj) { 
          DARABONBA_PTR_TO_JSON(SourceModel, sourceModel_);
        };
        friend void from_json(const Darabonba::Json& j, SourceModels& obj) { 
          DARABONBA_PTR_FROM_JSON(SourceModel, sourceModel_);
        };
        SourceModels() = default ;
        SourceModels(const SourceModels &) = default ;
        SourceModels(SourceModels &&) = default ;
        SourceModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceModels() = default ;
        SourceModels& operator=(const SourceModels &) = default ;
        SourceModels& operator=(SourceModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SourceModel : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SourceModel& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Priority, priority_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Weight, weight_);
          };
          friend void from_json(const Darabonba::Json& j, SourceModel& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Priority, priority_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Weight, weight_);
          };
          SourceModel() = default ;
          SourceModel(const SourceModel &) = default ;
          SourceModel(SourceModel &&) = default ;
          SourceModel(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SourceModel() = default ;
          SourceModel& operator=(const SourceModel &) = default ;
          SourceModel& operator=(SourceModel &&) = default ;
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
          inline SourceModel& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline string getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
          inline SourceModel& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline SourceModel& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // priority Field Functions 
          bool hasPriority() const { return this->priority_ != nullptr;};
          void deletePriority() { this->priority_ = nullptr;};
          inline string getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, "") };
          inline SourceModel& setPriority(string priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline SourceModel& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // weight Field Functions 
          bool hasWeight() const { return this->weight_ != nullptr;};
          void deleteWeight() { this->weight_ = nullptr;};
          inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
          inline SourceModel& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> enabled_ {};
          shared_ptr<int32_t> port_ {};
          shared_ptr<string> priority_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> weight_ {};
        };

        virtual bool empty() const override { return this->sourceModel_ == nullptr; };
        // sourceModel Field Functions 
        bool hasSourceModel() const { return this->sourceModel_ != nullptr;};
        void deleteSourceModel() { this->sourceModel_ = nullptr;};
        inline const vector<SourceModels::SourceModel> & getSourceModel() const { DARABONBA_PTR_GET_CONST(sourceModel_, vector<SourceModels::SourceModel>) };
        inline vector<SourceModels::SourceModel> getSourceModel() { DARABONBA_PTR_GET(sourceModel_, vector<SourceModels::SourceModel>) };
        inline SourceModels& setSourceModel(const vector<SourceModels::SourceModel> & sourceModel) { DARABONBA_PTR_SET_VALUE(sourceModel_, sourceModel) };
        inline SourceModels& setSourceModel(vector<SourceModels::SourceModel> && sourceModel) { DARABONBA_PTR_SET_RVALUE(sourceModel_, sourceModel) };


      protected:
        shared_ptr<vector<SourceModels::SourceModel>> sourceModel_ {};
      };

      virtual bool empty() const override { return this->cdnType_ == nullptr
        && this->cname_ == nullptr && this->description_ == nullptr && this->domainName_ == nullptr && this->domainStatus_ == nullptr && this->gmtCreated_ == nullptr
        && this->gmtModified_ == nullptr && this->httpsCname_ == nullptr && this->resourceGroupId_ == nullptr && this->scope_ == nullptr && this->serverCertificateStatus_ == nullptr
        && this->sourceModels_ == nullptr; };
      // cdnType Field Functions 
      bool hasCdnType() const { return this->cdnType_ != nullptr;};
      void deleteCdnType() { this->cdnType_ = nullptr;};
      inline string getCdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
      inline GetDomainDetailModel& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


      // cname Field Functions 
      bool hasCname() const { return this->cname_ != nullptr;};
      void deleteCname() { this->cname_ = nullptr;};
      inline string getCname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
      inline GetDomainDetailModel& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GetDomainDetailModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline GetDomainDetailModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainStatus Field Functions 
      bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
      void deleteDomainStatus() { this->domainStatus_ = nullptr;};
      inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
      inline GetDomainDetailModel& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline GetDomainDetailModel& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline GetDomainDetailModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // httpsCname Field Functions 
      bool hasHttpsCname() const { return this->httpsCname_ != nullptr;};
      void deleteHttpsCname() { this->httpsCname_ = nullptr;};
      inline string getHttpsCname() const { DARABONBA_PTR_GET_DEFAULT(httpsCname_, "") };
      inline GetDomainDetailModel& setHttpsCname(string httpsCname) { DARABONBA_PTR_SET_VALUE(httpsCname_, httpsCname) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline GetDomainDetailModel& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline GetDomainDetailModel& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // serverCertificateStatus Field Functions 
      bool hasServerCertificateStatus() const { return this->serverCertificateStatus_ != nullptr;};
      void deleteServerCertificateStatus() { this->serverCertificateStatus_ = nullptr;};
      inline string getServerCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateStatus_, "") };
      inline GetDomainDetailModel& setServerCertificateStatus(string serverCertificateStatus) { DARABONBA_PTR_SET_VALUE(serverCertificateStatus_, serverCertificateStatus) };


      // sourceModels Field Functions 
      bool hasSourceModels() const { return this->sourceModels_ != nullptr;};
      void deleteSourceModels() { this->sourceModels_ = nullptr;};
      inline const GetDomainDetailModel::SourceModels & getSourceModels() const { DARABONBA_PTR_GET_CONST(sourceModels_, GetDomainDetailModel::SourceModels) };
      inline GetDomainDetailModel::SourceModels getSourceModels() { DARABONBA_PTR_GET(sourceModels_, GetDomainDetailModel::SourceModels) };
      inline GetDomainDetailModel& setSourceModels(const GetDomainDetailModel::SourceModels & sourceModels) { DARABONBA_PTR_SET_VALUE(sourceModels_, sourceModels) };
      inline GetDomainDetailModel& setSourceModels(GetDomainDetailModel::SourceModels && sourceModels) { DARABONBA_PTR_SET_RVALUE(sourceModels_, sourceModels) };


    protected:
      // The workload type of the accelerated domain name. Valid values:
      // 
      // *   **web**: images and small files
      // *   **download**: large files
      // *   **video**: on-demand video and audio streaming
      shared_ptr<string> cdnType_ {};
      // The CNAME that is assigned to the accelerated domain name. You must add the CNAME record in the system of your DNS service provider to map the accelerated domain name to the CNAME.
      shared_ptr<string> cname_ {};
      // The description of the domain name.
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
      // *   **stopping**
      // *   **deleting**
      shared_ptr<string> domainStatus_ {};
      // The time when the domain name was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the domain name was last modified.
      shared_ptr<string> gmtModified_ {};
      // The CNAME for which HTTPS is enabled.
      shared_ptr<string> httpsCname_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The acceleration region.
      shared_ptr<string> scope_ {};
      // Indicates whether the SSL certificate is enabled. Valid values:
      // 
      // *   **on**
      // *   **off**
      shared_ptr<string> serverCertificateStatus_ {};
      shared_ptr<GetDomainDetailModel::SourceModels> sourceModels_ {};
    };

    virtual bool empty() const override { return this->getDomainDetailModel_ == nullptr
        && this->requestId_ == nullptr; };
    // getDomainDetailModel Field Functions 
    bool hasGetDomainDetailModel() const { return this->getDomainDetailModel_ != nullptr;};
    void deleteGetDomainDetailModel() { this->getDomainDetailModel_ = nullptr;};
    inline const DescribeCdnDomainDetailResponseBody::GetDomainDetailModel & getGetDomainDetailModel() const { DARABONBA_PTR_GET_CONST(getDomainDetailModel_, DescribeCdnDomainDetailResponseBody::GetDomainDetailModel) };
    inline DescribeCdnDomainDetailResponseBody::GetDomainDetailModel getGetDomainDetailModel() { DARABONBA_PTR_GET(getDomainDetailModel_, DescribeCdnDomainDetailResponseBody::GetDomainDetailModel) };
    inline DescribeCdnDomainDetailResponseBody& setGetDomainDetailModel(const DescribeCdnDomainDetailResponseBody::GetDomainDetailModel & getDomainDetailModel) { DARABONBA_PTR_SET_VALUE(getDomainDetailModel_, getDomainDetailModel) };
    inline DescribeCdnDomainDetailResponseBody& setGetDomainDetailModel(DescribeCdnDomainDetailResponseBody::GetDomainDetailModel && getDomainDetailModel) { DARABONBA_PTR_SET_RVALUE(getDomainDetailModel_, getDomainDetailModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the accelerated domain name.
    shared_ptr<DescribeCdnDomainDetailResponseBody::GetDomainDetailModel> getDomainDetailModel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
