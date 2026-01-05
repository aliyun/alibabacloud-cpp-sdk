// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveRealtimeLogDeliveryDomainsResponseBody() = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBody(const ListLiveRealtimeLogDeliveryDomainsResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBody(ListLiveRealtimeLogDeliveryDomainsResponseBody &&) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryDomainsResponseBody() = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBody& operator=(const ListLiveRealtimeLogDeliveryDomainsResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryDomainsResponseBody& operator=(ListLiveRealtimeLogDeliveryDomainsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Domains& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
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
        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->status_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Domains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Domains& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The streaming domain.
        shared_ptr<string> domainName_ {};
        // The status of real-time log delivery. Valid values:
        // 
        // *   **online**: enabled
        // *   **offline**: disabled
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
    inline const ListLiveRealtimeLogDeliveryDomainsResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListLiveRealtimeLogDeliveryDomainsResponseBody::Content) };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListLiveRealtimeLogDeliveryDomainsResponseBody::Content) };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBody& setContent(const ListLiveRealtimeLogDeliveryDomainsResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBody& setContent(ListLiveRealtimeLogDeliveryDomainsResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRealtimeLogDeliveryDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain names.
    shared_ptr<ListLiveRealtimeLogDeliveryDomainsResponseBody::Content> content_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
