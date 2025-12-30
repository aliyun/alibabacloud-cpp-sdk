// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPIPELINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListPipelinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListPipelinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PipelineList, pipelineList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody(ListPipelinesResponseBody &&) = default ;
    ListPipelinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPipelinesResponseBody() = default ;
    ListPipelinesResponseBody& operator=(const ListPipelinesResponseBody &) = default ;
    ListPipelinesResponseBody& operator=(ListPipelinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PipelineList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PipelineList& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(Speed, speed_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, PipelineList& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(Speed, speed_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      PipelineList() = default ;
      PipelineList(const PipelineList &) = default ;
      PipelineList(PipelineList &&) = default ;
      PipelineList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PipelineList() = default ;
      PipelineList& operator=(const PipelineList &) = default ;
      PipelineList& operator=(PipelineList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->pipelineId_ == nullptr && this->priority_ == nullptr && this->speed_ == nullptr
        && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PipelineList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline PipelineList& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline PipelineList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline PipelineList& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline PipelineList& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // speed Field Functions 
      bool hasSpeed() const { return this->speed_ != nullptr;};
      void deleteSpeed() { this->speed_ = nullptr;};
      inline string getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, "") };
      inline PipelineList& setSpeed(string speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PipelineList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the template was created.
      shared_ptr<string> createTime_ {};
      // The time when the template was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The name of the MPS queue.
      shared_ptr<string> name_ {};
      // The ID of the MPS queue.
      shared_ptr<string> pipelineId_ {};
      // The priority of the MPS queue.
      shared_ptr<int32_t> priority_ {};
      // The type of the MPS queue.
      shared_ptr<string> speed_ {};
      // The state of the MPS queue.
      // 
      // Valid values:
      // 
      // *   Active
      // *   Paused
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pipelineList_ == nullptr
        && this->requestId_ == nullptr; };
    // pipelineList Field Functions 
    bool hasPipelineList() const { return this->pipelineList_ != nullptr;};
    void deletePipelineList() { this->pipelineList_ = nullptr;};
    inline const vector<ListPipelinesResponseBody::PipelineList> & getPipelineList() const { DARABONBA_PTR_GET_CONST(pipelineList_, vector<ListPipelinesResponseBody::PipelineList>) };
    inline vector<ListPipelinesResponseBody::PipelineList> getPipelineList() { DARABONBA_PTR_GET(pipelineList_, vector<ListPipelinesResponseBody::PipelineList>) };
    inline ListPipelinesResponseBody& setPipelineList(const vector<ListPipelinesResponseBody::PipelineList> & pipelineList) { DARABONBA_PTR_SET_VALUE(pipelineList_, pipelineList) };
    inline ListPipelinesResponseBody& setPipelineList(vector<ListPipelinesResponseBody::PipelineList> && pipelineList) { DARABONBA_PTR_SET_RVALUE(pipelineList_, pipelineList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPipelinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried MPS queues.
    shared_ptr<vector<ListPipelinesResponseBody::PipelineList>> pipelineList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
