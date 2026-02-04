// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNSLSREALTIMELOGDELIVERYRESPONSEBODY_HPP_
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
  class CreateDcdnSLSRealTimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnSLSRealTimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnSLSRealTimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDcdnSLSRealTimeLogDeliveryResponseBody() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody(const CreateDcdnSLSRealTimeLogDeliveryResponseBody &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody(CreateDcdnSLSRealTimeLogDeliveryResponseBody &&) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnSLSRealTimeLogDeliveryResponseBody() = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody& operator=(const CreateDcdnSLSRealTimeLogDeliveryResponseBody &) = default ;
    CreateDcdnSLSRealTimeLogDeliveryResponseBody& operator=(CreateDcdnSLSRealTimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Domains, domains_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Domains, domains_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Domains : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Domains& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Domains& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
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
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->domainName_ == nullptr && this->region_ == nullptr && this->status_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline Domains& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Domains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Domains& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Domains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The description of the returned result.
        shared_ptr<string> desc_ {};
        // The domain name from which real-time logs were collected.
        shared_ptr<string> domainName_ {};
        // The region to which real-time logs were delivered.
        shared_ptr<string> region_ {};
        // The status of real-time logs.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->domains_ == nullptr; };
      // domains Field Functions 
      bool hasDomains() const { return this->domains_ != nullptr;};
      void deleteDomains() { this->domains_ = nullptr;};
      inline const vector<Content::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<Content::Domains>) };
      inline vector<Content::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<Content::Domains>) };
      inline Content& setDomains(const vector<Content::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
      inline Content& setDomains(vector<Content::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    protected:
      shared_ptr<vector<Content::Domains>> domains_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody& setContent(const CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody& setContent(CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDcdnSLSRealTimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The configuration results of the domain name.
    shared_ptr<CreateDcdnSLSRealTimeLogDeliveryResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
