// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRENDERINGPROJECTINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListRenderingProjectInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListRenderingProjectInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderingInstances, renderingInstances_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListRenderingProjectInstancesResponseBody() = default ;
    ListRenderingProjectInstancesResponseBody(const ListRenderingProjectInstancesResponseBody &) = default ;
    ListRenderingProjectInstancesResponseBody(ListRenderingProjectInstancesResponseBody &&) = default ;
    ListRenderingProjectInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRenderingProjectInstancesResponseBody() = default ;
    ListRenderingProjectInstancesResponseBody& operator=(const ListRenderingProjectInstancesResponseBody &) = default ;
    ListRenderingProjectInstancesResponseBody& operator=(ListRenderingProjectInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RenderingInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RenderingInstances& obj) { 
        DARABONBA_PTR_TO_JSON(AssociationTime, associationTime_);
        DARABONBA_PTR_TO_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_TO_JSON(StateInfo, stateInfo_);
      };
      friend void from_json(const Darabonba::Json& j, RenderingInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociationTime, associationTime_);
        DARABONBA_PTR_FROM_JSON(RenderingInstanceId, renderingInstanceId_);
        DARABONBA_PTR_FROM_JSON(StateInfo, stateInfo_);
      };
      RenderingInstances() = default ;
      RenderingInstances(const RenderingInstances &) = default ;
      RenderingInstances(RenderingInstances &&) = default ;
      RenderingInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RenderingInstances() = default ;
      RenderingInstances& operator=(const RenderingInstances &) = default ;
      RenderingInstances& operator=(RenderingInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StateInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StateInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Comment, comment_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, StateInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Comment, comment_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        };
        StateInfo() = default ;
        StateInfo(const StateInfo &) = default ;
        StateInfo(StateInfo &&) = default ;
        StateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StateInfo() = default ;
        StateInfo& operator=(const StateInfo &) = default ;
        StateInfo& operator=(StateInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->comment_ == nullptr
        && this->state_ == nullptr && this->updateTime_ == nullptr; };
        // comment Field Functions 
        bool hasComment() const { return this->comment_ != nullptr;};
        void deleteComment() { this->comment_ = nullptr;};
        inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
        inline StateInfo& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline StateInfo& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline StateInfo& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<string> comment_ {};
        shared_ptr<string> state_ {};
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->associationTime_ == nullptr
        && this->renderingInstanceId_ == nullptr && this->stateInfo_ == nullptr; };
      // associationTime Field Functions 
      bool hasAssociationTime() const { return this->associationTime_ != nullptr;};
      void deleteAssociationTime() { this->associationTime_ = nullptr;};
      inline string getAssociationTime() const { DARABONBA_PTR_GET_DEFAULT(associationTime_, "") };
      inline RenderingInstances& setAssociationTime(string associationTime) { DARABONBA_PTR_SET_VALUE(associationTime_, associationTime) };


      // renderingInstanceId Field Functions 
      bool hasRenderingInstanceId() const { return this->renderingInstanceId_ != nullptr;};
      void deleteRenderingInstanceId() { this->renderingInstanceId_ = nullptr;};
      inline string getRenderingInstanceId() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceId_, "") };
      inline RenderingInstances& setRenderingInstanceId(string renderingInstanceId) { DARABONBA_PTR_SET_VALUE(renderingInstanceId_, renderingInstanceId) };


      // stateInfo Field Functions 
      bool hasStateInfo() const { return this->stateInfo_ != nullptr;};
      void deleteStateInfo() { this->stateInfo_ = nullptr;};
      inline const RenderingInstances::StateInfo & getStateInfo() const { DARABONBA_PTR_GET_CONST(stateInfo_, RenderingInstances::StateInfo) };
      inline RenderingInstances::StateInfo getStateInfo() { DARABONBA_PTR_GET(stateInfo_, RenderingInstances::StateInfo) };
      inline RenderingInstances& setStateInfo(const RenderingInstances::StateInfo & stateInfo) { DARABONBA_PTR_SET_VALUE(stateInfo_, stateInfo) };
      inline RenderingInstances& setStateInfo(RenderingInstances::StateInfo && stateInfo) { DARABONBA_PTR_SET_RVALUE(stateInfo_, stateInfo) };


    protected:
      shared_ptr<string> associationTime_ {};
      shared_ptr<string> renderingInstanceId_ {};
      shared_ptr<RenderingInstances::StateInfo> stateInfo_ {};
    };

    virtual bool empty() const override { return this->renderingInstances_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // renderingInstances Field Functions 
    bool hasRenderingInstances() const { return this->renderingInstances_ != nullptr;};
    void deleteRenderingInstances() { this->renderingInstances_ = nullptr;};
    inline const vector<ListRenderingProjectInstancesResponseBody::RenderingInstances> & getRenderingInstances() const { DARABONBA_PTR_GET_CONST(renderingInstances_, vector<ListRenderingProjectInstancesResponseBody::RenderingInstances>) };
    inline vector<ListRenderingProjectInstancesResponseBody::RenderingInstances> getRenderingInstances() { DARABONBA_PTR_GET(renderingInstances_, vector<ListRenderingProjectInstancesResponseBody::RenderingInstances>) };
    inline ListRenderingProjectInstancesResponseBody& setRenderingInstances(const vector<ListRenderingProjectInstancesResponseBody::RenderingInstances> & renderingInstances) { DARABONBA_PTR_SET_VALUE(renderingInstances_, renderingInstances) };
    inline ListRenderingProjectInstancesResponseBody& setRenderingInstances(vector<ListRenderingProjectInstancesResponseBody::RenderingInstances> && renderingInstances) { DARABONBA_PTR_SET_RVALUE(renderingInstances_, renderingInstances) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRenderingProjectInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListRenderingProjectInstancesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListRenderingProjectInstancesResponseBody::RenderingInstances>> renderingInstances_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
