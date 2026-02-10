// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODY_HPP_
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
  class ListLiveRealtimeLogDeliveryInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListLiveRealtimeLogDeliveryInfosResponseBody() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody(const ListLiveRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody(ListLiveRealtimeLogDeliveryInfosResponseBody &&) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryInfosResponseBody() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody& operator=(const ListLiveRealtimeLogDeliveryInfosResponseBody &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBody& operator=(ListLiveRealtimeLogDeliveryInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(RealtimeLogDeliveryInfos, realtimeLogDeliveryInfos_);
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
      class RealtimeLogDeliveryInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealtimeLogDeliveryInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Logstore, logstore_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, RealtimeLogDeliveryInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        RealtimeLogDeliveryInfos() = default ;
        RealtimeLogDeliveryInfos(const RealtimeLogDeliveryInfos &) = default ;
        RealtimeLogDeliveryInfos(RealtimeLogDeliveryInfos &&) = default ;
        RealtimeLogDeliveryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealtimeLogDeliveryInfos() = default ;
        RealtimeLogDeliveryInfos& operator=(const RealtimeLogDeliveryInfos &) = default ;
        RealtimeLogDeliveryInfos& operator=(RealtimeLogDeliveryInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr && this->region_ == nullptr; };
        // logstore Field Functions 
        bool hasLogstore() const { return this->logstore_ != nullptr;};
        void deleteLogstore() { this->logstore_ = nullptr;};
        inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
        inline RealtimeLogDeliveryInfos& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline RealtimeLogDeliveryInfos& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline RealtimeLogDeliveryInfos& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        shared_ptr<string> logstore_ {};
        shared_ptr<string> project_ {};
        shared_ptr<string> region_ {};
      };

      virtual bool empty() const override { return this->realtimeLogDeliveryInfos_ == nullptr; };
      // realtimeLogDeliveryInfos Field Functions 
      bool hasRealtimeLogDeliveryInfos() const { return this->realtimeLogDeliveryInfos_ != nullptr;};
      void deleteRealtimeLogDeliveryInfos() { this->realtimeLogDeliveryInfos_ = nullptr;};
      inline const vector<Content::RealtimeLogDeliveryInfos> & getRealtimeLogDeliveryInfos() const { DARABONBA_PTR_GET_CONST(realtimeLogDeliveryInfos_, vector<Content::RealtimeLogDeliveryInfos>) };
      inline vector<Content::RealtimeLogDeliveryInfos> getRealtimeLogDeliveryInfos() { DARABONBA_PTR_GET(realtimeLogDeliveryInfos_, vector<Content::RealtimeLogDeliveryInfos>) };
      inline Content& setRealtimeLogDeliveryInfos(const vector<Content::RealtimeLogDeliveryInfos> & realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_VALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };
      inline Content& setRealtimeLogDeliveryInfos(vector<Content::RealtimeLogDeliveryInfos> && realtimeLogDeliveryInfos) { DARABONBA_PTR_SET_RVALUE(realtimeLogDeliveryInfos_, realtimeLogDeliveryInfos) };


    protected:
      shared_ptr<vector<Content::RealtimeLogDeliveryInfos>> realtimeLogDeliveryInfos_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListLiveRealtimeLogDeliveryInfosResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListLiveRealtimeLogDeliveryInfosResponseBody::Content) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListLiveRealtimeLogDeliveryInfosResponseBody::Content) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody& setContent(const ListLiveRealtimeLogDeliveryInfosResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody& setContent(ListLiveRealtimeLogDeliveryInfosResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLiveRealtimeLogDeliveryInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListLiveRealtimeLogDeliveryInfosResponseBody::Content> content_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
