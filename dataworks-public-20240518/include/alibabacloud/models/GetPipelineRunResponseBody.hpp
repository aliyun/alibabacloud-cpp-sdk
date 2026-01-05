// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINERUNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetPipelineRunResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineRunResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetPipelineRunResponseBody() = default ;
    GetPipelineRunResponseBody(const GetPipelineRunResponseBody &) = default ;
    GetPipelineRunResponseBody(GetPipelineRunResponseBody &&) = default ;
    GetPipelineRunResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineRunResponseBody() = default ;
    GetPipelineRunResponseBody& operator=(const GetPipelineRunResponseBody &) = default ;
    GetPipelineRunResponseBody& operator=(GetPipelineRunResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Pipeline : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pipeline& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(Stages, stages_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Pipeline& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(Stages, stages_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Pipeline() = default ;
      Pipeline(const Pipeline &) = default ;
      Pipeline(Pipeline &&) = default ;
      Pipeline(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pipeline() = default ;
      Pipeline& operator=(const Pipeline &) = default ;
      Pipeline& operator=(Pipeline &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Stages : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stages& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_ANY_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Step, step_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Stages& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_ANY_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Stages() = default ;
        Stages(const Stages &) = default ;
        Stages(Stages &&) = default ;
        Stages(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stages() = default ;
        Stages& operator=(const Stages &) = default ;
        Stages& operator=(Stages &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->description_ == nullptr && this->detail_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->status_ == nullptr
        && this->step_ == nullptr && this->type_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline Stages& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Stages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline         const Darabonba::Json & getDetail() const { DARABONBA_GET(detail_) };
        Darabonba::Json & getDetail() { DARABONBA_GET(detail_) };
        inline Stages& setDetail(const Darabonba::Json & detail) { DARABONBA_SET_VALUE(detail_, detail) };
        inline Stages& setDetail(Darabonba::Json && detail) { DARABONBA_SET_RVALUE(detail_, detail) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Stages& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Stages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Stages& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline int32_t getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
        inline Stages& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Stages& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The code of the stage.
        shared_ptr<string> code_ {};
        // The description of the stage.
        shared_ptr<string> description_ {};
        // The details of the stage.
        Darabonba::Json detail_ {};
        // The error message returned for the stage.
        shared_ptr<string> message_ {};
        // The name of the stage.
        shared_ptr<string> name_ {};
        // The status of the stage.
        // 
        // Valid values:
        // 
        // *   Init
        // *   Running
        // *   Success
        // *   Fail
        // *   Termination
        // *   Cancel
        shared_ptr<string> status_ {};
        // The step number of the stage.
        shared_ptr<int32_t> step_ {};
        // The type of the stage.
        // 
        // Valid values:
        // 
        // *   Deploy
        // *   Check
        // *   Offline
        // *   Build
        // *   Delete
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->creator_ == nullptr && this->id_ == nullptr && this->message_ == nullptr && this->modifyTime_ == nullptr && this->projectId_ == nullptr
        && this->stages_ == nullptr && this->status_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Pipeline& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Pipeline& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Pipeline& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Pipeline& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
      inline Pipeline& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Pipeline& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // stages Field Functions 
      bool hasStages() const { return this->stages_ != nullptr;};
      void deleteStages() { this->stages_ = nullptr;};
      inline const vector<Pipeline::Stages> & getStages() const { DARABONBA_PTR_GET_CONST(stages_, vector<Pipeline::Stages>) };
      inline vector<Pipeline::Stages> getStages() { DARABONBA_PTR_GET(stages_, vector<Pipeline::Stages>) };
      inline Pipeline& setStages(const vector<Pipeline::Stages> & stages) { DARABONBA_PTR_SET_VALUE(stages_, stages) };
      inline Pipeline& setStages(vector<Pipeline::Stages> && stages) { DARABONBA_PTR_SET_RVALUE(stages_, stages) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Pipeline& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The time when the process was created. This value is a UNIX timestamp.
      shared_ptr<int64_t> createTime_ {};
      // The creator of the process.
      shared_ptr<string> creator_ {};
      // The process ID.
      shared_ptr<string> id_ {};
      // The error message returned when the process fails.
      shared_ptr<string> message_ {};
      // The time when the process was modified. This value is a UNIX timestamp.
      shared_ptr<int64_t> modifyTime_ {};
      // The DataWorks workspace ID.
      shared_ptr<int64_t> projectId_ {};
      // The information about stages in the process.
      shared_ptr<vector<Pipeline::Stages>> stages_ {};
      // The status of the process.
      // 
      // Valid values:
      // 
      // *   Init
      // *   Running
      // *   Success
      // *   Fail
      // *   Termination
      // *   Cancel
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pipeline_ == nullptr
        && this->requestId_ == nullptr; };
    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const GetPipelineRunResponseBody::Pipeline & getPipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, GetPipelineRunResponseBody::Pipeline) };
    inline GetPipelineRunResponseBody::Pipeline getPipeline() { DARABONBA_PTR_GET(pipeline_, GetPipelineRunResponseBody::Pipeline) };
    inline GetPipelineRunResponseBody& setPipeline(const GetPipelineRunResponseBody::Pipeline & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline GetPipelineRunResponseBody& setPipeline(GetPipelineRunResponseBody::Pipeline && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPipelineRunResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the process.
    shared_ptr<GetPipelineRunResponseBody::Pipeline> pipeline_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
