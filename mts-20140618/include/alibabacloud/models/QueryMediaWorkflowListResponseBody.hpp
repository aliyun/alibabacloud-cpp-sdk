// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAWORKFLOWLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaWorkflowListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaWorkflowListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MediaWorkflowList, mediaWorkflowList_);
      DARABONBA_PTR_TO_JSON(NonExistMediaWorkflowIds, nonExistMediaWorkflowIds_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaWorkflowListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaWorkflowList, mediaWorkflowList_);
      DARABONBA_PTR_FROM_JSON(NonExistMediaWorkflowIds, nonExistMediaWorkflowIds_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMediaWorkflowListResponseBody() = default ;
    QueryMediaWorkflowListResponseBody(const QueryMediaWorkflowListResponseBody &) = default ;
    QueryMediaWorkflowListResponseBody(QueryMediaWorkflowListResponseBody &&) = default ;
    QueryMediaWorkflowListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaWorkflowListResponseBody() = default ;
    QueryMediaWorkflowListResponseBody& operator=(const QueryMediaWorkflowListResponseBody &) = default ;
    QueryMediaWorkflowListResponseBody& operator=(QueryMediaWorkflowListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NonExistMediaWorkflowIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NonExistMediaWorkflowIds& obj) { 
        DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      };
      friend void from_json(const Darabonba::Json& j, NonExistMediaWorkflowIds& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      };
      NonExistMediaWorkflowIds() = default ;
      NonExistMediaWorkflowIds(const NonExistMediaWorkflowIds &) = default ;
      NonExistMediaWorkflowIds(NonExistMediaWorkflowIds &&) = default ;
      NonExistMediaWorkflowIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NonExistMediaWorkflowIds() = default ;
      NonExistMediaWorkflowIds& operator=(const NonExistMediaWorkflowIds &) = default ;
      NonExistMediaWorkflowIds& operator=(NonExistMediaWorkflowIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->mediaWorkflowId_ == nullptr; };
      // mediaWorkflowId Field Functions 
      bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
      void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
      inline const vector<string> & getMediaWorkflowId() const { DARABONBA_PTR_GET_CONST(mediaWorkflowId_, vector<string>) };
      inline vector<string> getMediaWorkflowId() { DARABONBA_PTR_GET(mediaWorkflowId_, vector<string>) };
      inline NonExistMediaWorkflowIds& setMediaWorkflowId(const vector<string> & mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };
      inline NonExistMediaWorkflowIds& setMediaWorkflowId(vector<string> && mediaWorkflowId) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowId_, mediaWorkflowId) };


    protected:
      shared_ptr<vector<string>> mediaWorkflowId_ {};
    };

    class MediaWorkflowList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MediaWorkflowList& obj) { 
        DARABONBA_PTR_TO_JSON(MediaWorkflow, mediaWorkflow_);
      };
      friend void from_json(const Darabonba::Json& j, MediaWorkflowList& obj) { 
        DARABONBA_PTR_FROM_JSON(MediaWorkflow, mediaWorkflow_);
      };
      MediaWorkflowList() = default ;
      MediaWorkflowList(const MediaWorkflowList &) = default ;
      MediaWorkflowList(MediaWorkflowList &&) = default ;
      MediaWorkflowList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MediaWorkflowList() = default ;
      MediaWorkflowList& operator=(const MediaWorkflowList &) = default ;
      MediaWorkflowList& operator=(MediaWorkflowList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MediaWorkflow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MediaWorkflow& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Topology, topology_);
          DARABONBA_PTR_TO_JSON(TriggerMode, triggerMode_);
        };
        friend void from_json(const Darabonba::Json& j, MediaWorkflow& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Topology, topology_);
          DARABONBA_PTR_FROM_JSON(TriggerMode, triggerMode_);
        };
        MediaWorkflow() = default ;
        MediaWorkflow(const MediaWorkflow &) = default ;
        MediaWorkflow(MediaWorkflow &&) = default ;
        MediaWorkflow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MediaWorkflow() = default ;
        MediaWorkflow& operator=(const MediaWorkflow &) = default ;
        MediaWorkflow& operator=(MediaWorkflow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->mediaWorkflowId_ == nullptr && this->name_ == nullptr && this->state_ == nullptr && this->topology_ == nullptr && this->triggerMode_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline MediaWorkflow& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // mediaWorkflowId Field Functions 
        bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
        void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
        inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
        inline MediaWorkflow& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MediaWorkflow& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline MediaWorkflow& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // topology Field Functions 
        bool hasTopology() const { return this->topology_ != nullptr;};
        void deleteTopology() { this->topology_ = nullptr;};
        inline string getTopology() const { DARABONBA_PTR_GET_DEFAULT(topology_, "") };
        inline MediaWorkflow& setTopology(string topology) { DARABONBA_PTR_SET_VALUE(topology_, topology) };


        // triggerMode Field Functions 
        bool hasTriggerMode() const { return this->triggerMode_ != nullptr;};
        void deleteTriggerMode() { this->triggerMode_ = nullptr;};
        inline string getTriggerMode() const { DARABONBA_PTR_GET_DEFAULT(triggerMode_, "") };
        inline MediaWorkflow& setTriggerMode(string triggerMode) { DARABONBA_PTR_SET_VALUE(triggerMode_, triggerMode) };


      protected:
        shared_ptr<string> creationTime_ {};
        shared_ptr<string> mediaWorkflowId_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> topology_ {};
        shared_ptr<string> triggerMode_ {};
      };

      virtual bool empty() const override { return this->mediaWorkflow_ == nullptr; };
      // mediaWorkflow Field Functions 
      bool hasMediaWorkflow() const { return this->mediaWorkflow_ != nullptr;};
      void deleteMediaWorkflow() { this->mediaWorkflow_ = nullptr;};
      inline const vector<MediaWorkflowList::MediaWorkflow> & getMediaWorkflow() const { DARABONBA_PTR_GET_CONST(mediaWorkflow_, vector<MediaWorkflowList::MediaWorkflow>) };
      inline vector<MediaWorkflowList::MediaWorkflow> getMediaWorkflow() { DARABONBA_PTR_GET(mediaWorkflow_, vector<MediaWorkflowList::MediaWorkflow>) };
      inline MediaWorkflowList& setMediaWorkflow(const vector<MediaWorkflowList::MediaWorkflow> & mediaWorkflow) { DARABONBA_PTR_SET_VALUE(mediaWorkflow_, mediaWorkflow) };
      inline MediaWorkflowList& setMediaWorkflow(vector<MediaWorkflowList::MediaWorkflow> && mediaWorkflow) { DARABONBA_PTR_SET_RVALUE(mediaWorkflow_, mediaWorkflow) };


    protected:
      shared_ptr<vector<MediaWorkflowList::MediaWorkflow>> mediaWorkflow_ {};
    };

    virtual bool empty() const override { return this->mediaWorkflowList_ == nullptr
        && this->nonExistMediaWorkflowIds_ == nullptr && this->requestId_ == nullptr; };
    // mediaWorkflowList Field Functions 
    bool hasMediaWorkflowList() const { return this->mediaWorkflowList_ != nullptr;};
    void deleteMediaWorkflowList() { this->mediaWorkflowList_ = nullptr;};
    inline const QueryMediaWorkflowListResponseBody::MediaWorkflowList & getMediaWorkflowList() const { DARABONBA_PTR_GET_CONST(mediaWorkflowList_, QueryMediaWorkflowListResponseBody::MediaWorkflowList) };
    inline QueryMediaWorkflowListResponseBody::MediaWorkflowList getMediaWorkflowList() { DARABONBA_PTR_GET(mediaWorkflowList_, QueryMediaWorkflowListResponseBody::MediaWorkflowList) };
    inline QueryMediaWorkflowListResponseBody& setMediaWorkflowList(const QueryMediaWorkflowListResponseBody::MediaWorkflowList & mediaWorkflowList) { DARABONBA_PTR_SET_VALUE(mediaWorkflowList_, mediaWorkflowList) };
    inline QueryMediaWorkflowListResponseBody& setMediaWorkflowList(QueryMediaWorkflowListResponseBody::MediaWorkflowList && mediaWorkflowList) { DARABONBA_PTR_SET_RVALUE(mediaWorkflowList_, mediaWorkflowList) };


    // nonExistMediaWorkflowIds Field Functions 
    bool hasNonExistMediaWorkflowIds() const { return this->nonExistMediaWorkflowIds_ != nullptr;};
    void deleteNonExistMediaWorkflowIds() { this->nonExistMediaWorkflowIds_ = nullptr;};
    inline const QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds & getNonExistMediaWorkflowIds() const { DARABONBA_PTR_GET_CONST(nonExistMediaWorkflowIds_, QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds) };
    inline QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds getNonExistMediaWorkflowIds() { DARABONBA_PTR_GET(nonExistMediaWorkflowIds_, QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds) };
    inline QueryMediaWorkflowListResponseBody& setNonExistMediaWorkflowIds(const QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds & nonExistMediaWorkflowIds) { DARABONBA_PTR_SET_VALUE(nonExistMediaWorkflowIds_, nonExistMediaWorkflowIds) };
    inline QueryMediaWorkflowListResponseBody& setNonExistMediaWorkflowIds(QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds && nonExistMediaWorkflowIds) { DARABONBA_PTR_SET_RVALUE(nonExistMediaWorkflowIds_, nonExistMediaWorkflowIds) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMediaWorkflowListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryMediaWorkflowListResponseBody::MediaWorkflowList> mediaWorkflowList_ {};
    shared_ptr<QueryMediaWorkflowListResponseBody::NonExistMediaWorkflowIds> nonExistMediaWorkflowIds_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
