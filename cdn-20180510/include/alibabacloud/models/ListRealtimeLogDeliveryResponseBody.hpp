// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYRESPONSEBODY_HPP_
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
  class ListRealtimeLogDeliveryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRealtimeLogDeliveryResponseBody() = default ;
    ListRealtimeLogDeliveryResponseBody(const ListRealtimeLogDeliveryResponseBody &) = default ;
    ListRealtimeLogDeliveryResponseBody(ListRealtimeLogDeliveryResponseBody &&) = default ;
    ListRealtimeLogDeliveryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryResponseBody() = default ;
    ListRealtimeLogDeliveryResponseBody& operator=(const ListRealtimeLogDeliveryResponseBody &) = default ;
    ListRealtimeLogDeliveryResponseBody& operator=(ListRealtimeLogDeliveryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfo, realtimeLogDeliveryInfo_);
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
      class RealtimeLogDeliveryInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealtimeLogDeliveryInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DmId, dmId_);
          DARABONBA_PTR_TO_JSON(Domain, domain_);
          DARABONBA_PTR_TO_JSON(Logstore, logstore_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RealtimeLogDeliveryInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DmId, dmId_);
          DARABONBA_PTR_FROM_JSON(Domain, domain_);
          DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        RealtimeLogDeliveryInfo() = default ;
        RealtimeLogDeliveryInfo(const RealtimeLogDeliveryInfo &) = default ;
        RealtimeLogDeliveryInfo(RealtimeLogDeliveryInfo &&) = default ;
        RealtimeLogDeliveryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealtimeLogDeliveryInfo() = default ;
        RealtimeLogDeliveryInfo& operator=(const RealtimeLogDeliveryInfo &) = default ;
        RealtimeLogDeliveryInfo& operator=(RealtimeLogDeliveryInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dmId_ == nullptr
        && this->domain_ == nullptr && this->logstore_ == nullptr && this->project_ == nullptr && this->region_ == nullptr && this->status_ == nullptr; };
        // dmId Field Functions 
        bool hasDmId() const { return this->dmId_ != nullptr;};
        void deleteDmId() { this->dmId_ = nullptr;};
        inline int32_t getDmId() const { DARABONBA_PTR_GET_DEFAULT(dmId_, 0) };
        inline RealtimeLogDeliveryInfo& setDmId(int32_t dmId) { DARABONBA_PTR_SET_VALUE(dmId_, dmId) };


        // domain Field Functions 
        bool hasDomain() const { return this->domain_ != nullptr;};
        void deleteDomain() { this->domain_ = nullptr;};
        inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
        inline RealtimeLogDeliveryInfo& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline RealtimeLogDeliveryInfo& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline RealtimeLogDeliveryInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RealtimeLogDeliveryInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RealtimeLogDeliveryInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<int32_t> dmId_ {};
        shared_ptr<string> domain_ {};
        shared_ptr<string> logstore_ {};
        shared_ptr<string> project_ {};
        shared_ptr<string> region_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->realtimeLogDeliveryInfo_ == nullptr; };
      // realtimeLogDeliveryInfo Field Functions 
      bool hasRealtimeLogDeliveryInfo() const { return this->realtimeLogDeliveryInfo_ != nullptr;};
      void deleteRealtimeLogDeliveryInfo() { this->realtimeLogDeliveryInfo_ = nullptr;};
      inline const vector<Content::RealtimeLogDeliveryInfo> & getRealtimeLogDeliveryInfo() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfo_, vector<Content::RealtimeLogDeliveryInfo>) };
      inline vector<Content::RealtimeLogDeliveryInfo> getRealtimeLogDeliveryInfo() { DARABONBA_PTR_GET(realtimeLogDeliveryInfo_, vector<Content::RealtimeLogDeliveryInfo>) };
      inline Content& setRealtimeLogDeliveryInfo(const vector<Content::RealtimeLogDeliveryInfo> & realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };
      inline Content& setRealtimeLogDeliveryInfo(vector<Content::RealtimeLogDeliveryInfo> && realtimeLogDeliveryInfo) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfo_, realtimeLogDeliveryInfo) };


    protected:
      shared_ptr<vector<Content::RealtimeLogDeliveryInfo>> realtimeLogDeliveryInfo_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListRealtimeLogDeliveryResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListRealtimeLogDeliveryResponseBody::Content) };
    inline ListRealtimeLogDeliveryResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListRealtimeLogDeliveryResponseBody::Content) };
    inline ListRealtimeLogDeliveryResponseBody& setContent(const ListRealtimeLogDeliveryResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListRealtimeLogDeliveryResponseBody& setContent(ListRealtimeLogDeliveryResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRealtimeLogDeliveryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListRealtimeLogDeliveryResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
