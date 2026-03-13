// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TRIPTASKQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TripTaskQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TripTaskQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(module, module_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(traceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, TripTaskQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(module, module_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(traceId, traceId_);
    };
    TripTaskQueryResponseBody() = default ;
    TripTaskQueryResponseBody(const TripTaskQueryResponseBody &) = default ;
    TripTaskQueryResponseBody(TripTaskQueryResponseBody &&) = default ;
    TripTaskQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TripTaskQueryResponseBody() = default ;
    TripTaskQueryResponseBody& operator=(const TripTaskQueryResponseBody &) = default ;
    TripTaskQueryResponseBody& operator=(TripTaskQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(needRefresh, needRefresh_);
        DARABONBA_PTR_TO_JSON(record_tasks, recordTasks_);
        DARABONBA_PTR_TO_JSON(running_tasks, runningTasks_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(needRefresh, needRefresh_);
        DARABONBA_PTR_FROM_JSON(record_tasks, recordTasks_);
        DARABONBA_PTR_FROM_JSON(running_tasks, runningTasks_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RunningTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RunningTasks& obj) { 
          DARABONBA_PTR_TO_JSON(actioner, actioner_);
          DARABONBA_PTR_TO_JSON(attributes, attributes_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_finished, gmtFinished_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(node_id, nodeId_);
          DARABONBA_PTR_TO_JSON(out_result, outResult_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RunningTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(actioner, actioner_);
          DARABONBA_PTR_FROM_JSON(attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_finished, gmtFinished_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(node_id, nodeId_);
          DARABONBA_PTR_FROM_JSON(out_result, outResult_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        RunningTasks() = default ;
        RunningTasks(const RunningTasks &) = default ;
        RunningTasks(RunningTasks &&) = default ;
        RunningTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RunningTasks() = default ;
        RunningTasks& operator=(const RunningTasks &) = default ;
        RunningTasks& operator=(RunningTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actioner_ == nullptr
        && this->attributes_ == nullptr && this->gmtCreate_ == nullptr && this->gmtFinished_ == nullptr && this->id_ == nullptr && this->nodeId_ == nullptr
        && this->outResult_ == nullptr && this->owner_ == nullptr && this->status_ == nullptr; };
        // actioner Field Functions 
        bool hasActioner() const { return this->actioner_ != nullptr;};
        void deleteActioner() { this->actioner_ = nullptr;};
        inline string getActioner() const { DARABONBA_PTR_GET_DEFAULT(actioner_, "") };
        inline RunningTasks& setActioner(string actioner) { DARABONBA_PTR_SET_VALUE(actioner_, actioner) };


        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
        inline RunningTasks& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline RunningTasks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtFinished Field Functions 
        bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
        void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
        inline int64_t getGmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
        inline RunningTasks& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RunningTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline RunningTasks& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // outResult Field Functions 
        bool hasOutResult() const { return this->outResult_ != nullptr;};
        void deleteOutResult() { this->outResult_ = nullptr;};
        inline string getOutResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
        inline RunningTasks& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline RunningTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RunningTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> actioner_ {};
        shared_ptr<string> attributes_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtFinished_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> outResult_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> status_ {};
      };

      class RecordTasks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordTasks& obj) { 
          DARABONBA_PTR_TO_JSON(actioner, actioner_);
          DARABONBA_PTR_TO_JSON(attributes, attributes_);
          DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmt_finished, gmtFinished_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(node_id, nodeId_);
          DARABONBA_PTR_TO_JSON(out_result, outResult_);
          DARABONBA_PTR_TO_JSON(owner, owner_);
          DARABONBA_PTR_TO_JSON(status, status_);
        };
        friend void from_json(const Darabonba::Json& j, RecordTasks& obj) { 
          DARABONBA_PTR_FROM_JSON(actioner, actioner_);
          DARABONBA_PTR_FROM_JSON(attributes, attributes_);
          DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmt_finished, gmtFinished_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(node_id, nodeId_);
          DARABONBA_PTR_FROM_JSON(out_result, outResult_);
          DARABONBA_PTR_FROM_JSON(owner, owner_);
          DARABONBA_PTR_FROM_JSON(status, status_);
        };
        RecordTasks() = default ;
        RecordTasks(const RecordTasks &) = default ;
        RecordTasks(RecordTasks &&) = default ;
        RecordTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordTasks() = default ;
        RecordTasks& operator=(const RecordTasks &) = default ;
        RecordTasks& operator=(RecordTasks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actioner_ == nullptr
        && this->attributes_ == nullptr && this->gmtCreate_ == nullptr && this->gmtFinished_ == nullptr && this->id_ == nullptr && this->nodeId_ == nullptr
        && this->outResult_ == nullptr && this->owner_ == nullptr && this->status_ == nullptr; };
        // actioner Field Functions 
        bool hasActioner() const { return this->actioner_ != nullptr;};
        void deleteActioner() { this->actioner_ = nullptr;};
        inline string getActioner() const { DARABONBA_PTR_GET_DEFAULT(actioner_, "") };
        inline RecordTasks& setActioner(string actioner) { DARABONBA_PTR_SET_VALUE(actioner_, actioner) };


        // attributes Field Functions 
        bool hasAttributes() const { return this->attributes_ != nullptr;};
        void deleteAttributes() { this->attributes_ = nullptr;};
        inline string getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, "") };
        inline RecordTasks& setAttributes(string attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
        inline RecordTasks& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtFinished Field Functions 
        bool hasGmtFinished() const { return this->gmtFinished_ != nullptr;};
        void deleteGmtFinished() { this->gmtFinished_ = nullptr;};
        inline int64_t getGmtFinished() const { DARABONBA_PTR_GET_DEFAULT(gmtFinished_, 0L) };
        inline RecordTasks& setGmtFinished(int64_t gmtFinished) { DARABONBA_PTR_SET_VALUE(gmtFinished_, gmtFinished) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline RecordTasks& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline RecordTasks& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // outResult Field Functions 
        bool hasOutResult() const { return this->outResult_ != nullptr;};
        void deleteOutResult() { this->outResult_ = nullptr;};
        inline string getOutResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
        inline RecordTasks& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline RecordTasks& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RecordTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> actioner_ {};
        shared_ptr<string> attributes_ {};
        shared_ptr<int64_t> gmtCreate_ {};
        shared_ptr<int64_t> gmtFinished_ {};
        shared_ptr<int64_t> id_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> outResult_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->needRefresh_ == nullptr
        && this->recordTasks_ == nullptr && this->runningTasks_ == nullptr; };
      // needRefresh Field Functions 
      bool hasNeedRefresh() const { return this->needRefresh_ != nullptr;};
      void deleteNeedRefresh() { this->needRefresh_ = nullptr;};
      inline bool getNeedRefresh() const { DARABONBA_PTR_GET_DEFAULT(needRefresh_, false) };
      inline Module& setNeedRefresh(bool needRefresh) { DARABONBA_PTR_SET_VALUE(needRefresh_, needRefresh) };


      // recordTasks Field Functions 
      bool hasRecordTasks() const { return this->recordTasks_ != nullptr;};
      void deleteRecordTasks() { this->recordTasks_ = nullptr;};
      inline const vector<Module::RecordTasks> & getRecordTasks() const { DARABONBA_PTR_GET_CONST(recordTasks_, vector<Module::RecordTasks>) };
      inline vector<Module::RecordTasks> getRecordTasks() { DARABONBA_PTR_GET(recordTasks_, vector<Module::RecordTasks>) };
      inline Module& setRecordTasks(const vector<Module::RecordTasks> & recordTasks) { DARABONBA_PTR_SET_VALUE(recordTasks_, recordTasks) };
      inline Module& setRecordTasks(vector<Module::RecordTasks> && recordTasks) { DARABONBA_PTR_SET_RVALUE(recordTasks_, recordTasks) };


      // runningTasks Field Functions 
      bool hasRunningTasks() const { return this->runningTasks_ != nullptr;};
      void deleteRunningTasks() { this->runningTasks_ = nullptr;};
      inline const vector<Module::RunningTasks> & getRunningTasks() const { DARABONBA_PTR_GET_CONST(runningTasks_, vector<Module::RunningTasks>) };
      inline vector<Module::RunningTasks> getRunningTasks() { DARABONBA_PTR_GET(runningTasks_, vector<Module::RunningTasks>) };
      inline Module& setRunningTasks(const vector<Module::RunningTasks> & runningTasks) { DARABONBA_PTR_SET_VALUE(runningTasks_, runningTasks) };
      inline Module& setRunningTasks(vector<Module::RunningTasks> && runningTasks) { DARABONBA_PTR_SET_RVALUE(runningTasks_, runningTasks) };


    protected:
      shared_ptr<bool> needRefresh_ {};
      shared_ptr<vector<Module::RecordTasks>> recordTasks_ {};
      shared_ptr<vector<Module::RunningTasks>> runningTasks_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline TripTaskQueryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline TripTaskQueryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const TripTaskQueryResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, TripTaskQueryResponseBody::Module) };
    inline TripTaskQueryResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, TripTaskQueryResponseBody::Module) };
    inline TripTaskQueryResponseBody& setModule(const TripTaskQueryResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline TripTaskQueryResponseBody& setModule(TripTaskQueryResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TripTaskQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline TripTaskQueryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline TripTaskQueryResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    // module。
    shared_ptr<TripTaskQueryResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    // traceId
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
