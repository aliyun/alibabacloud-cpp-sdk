// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDISYNCINSTANCEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDISyncInstanceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDISyncInstanceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDISyncInstanceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDISyncInstanceInfoResponseBody() = default ;
    GetDISyncInstanceInfoResponseBody(const GetDISyncInstanceInfoResponseBody &) = default ;
    GetDISyncInstanceInfoResponseBody(GetDISyncInstanceInfoResponseBody &&) = default ;
    GetDISyncInstanceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDISyncInstanceInfoResponseBody() = default ;
    GetDISyncInstanceInfoResponseBody& operator=(const GetDISyncInstanceInfoResponseBody &) = default ;
    GetDISyncInstanceInfoResponseBody& operator=(GetDISyncInstanceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(SolutionInfo, solutionInfo_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(SolutionInfo, solutionInfo_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SolutionInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SolutionInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StepDetail, stepDetail_);
        };
        friend void from_json(const Darabonba::Json& j, SolutionInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CreatorName, creatorName_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StepDetail, stepDetail_);
        };
        SolutionInfo() = default ;
        SolutionInfo(const SolutionInfo &) = default ;
        SolutionInfo(SolutionInfo &&) = default ;
        SolutionInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SolutionInfo() = default ;
        SolutionInfo& operator=(const SolutionInfo &) = default ;
        SolutionInfo& operator=(SolutionInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StepDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StepDetail& obj) { 
            DARABONBA_PTR_TO_JSON(Info, info_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(StepId, stepId_);
            DARABONBA_PTR_TO_JSON(StepName, stepName_);
          };
          friend void from_json(const Darabonba::Json& j, StepDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(Info, info_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(StepId, stepId_);
            DARABONBA_PTR_FROM_JSON(StepName, stepName_);
          };
          StepDetail() = default ;
          StepDetail(const StepDetail &) = default ;
          StepDetail(StepDetail &&) = default ;
          StepDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StepDetail() = default ;
          StepDetail& operator=(const StepDetail &) = default ;
          StepDetail& operator=(StepDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->info_ == nullptr
        && this->status_ == nullptr && this->stepId_ == nullptr && this->stepName_ == nullptr; };
          // info Field Functions 
          bool hasInfo() const { return this->info_ != nullptr;};
          void deleteInfo() { this->info_ = nullptr;};
          inline string getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, "") };
          inline StepDetail& setInfo(string info) { DARABONBA_PTR_SET_VALUE(info_, info) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline StepDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // stepId Field Functions 
          bool hasStepId() const { return this->stepId_ != nullptr;};
          void deleteStepId() { this->stepId_ = nullptr;};
          inline int64_t getStepId() const { DARABONBA_PTR_GET_DEFAULT(stepId_, 0L) };
          inline StepDetail& setStepId(int64_t stepId) { DARABONBA_PTR_SET_VALUE(stepId_, stepId) };


          // stepName Field Functions 
          bool hasStepName() const { return this->stepName_ != nullptr;};
          void deleteStepName() { this->stepName_ = nullptr;};
          inline string getStepName() const { DARABONBA_PTR_GET_DEFAULT(stepName_, "") };
          inline StepDetail& setStepName(string stepName) { DARABONBA_PTR_SET_VALUE(stepName_, stepName) };


        protected:
          // The information of the data synchronization solution.
          shared_ptr<string> info_ {};
          // The status of the step in the data synchronization solution.
          shared_ptr<string> status_ {};
          // The ID of the step in the data synchronization solution.
          shared_ptr<int64_t> stepId_ {};
          // The name of the step in the data synchronization solution.
          shared_ptr<string> stepName_ {};
        };

        virtual bool empty() const override { return this->creatorName_ == nullptr
        && this->id_ == nullptr && this->status_ == nullptr && this->stepDetail_ == nullptr; };
        // creatorName Field Functions 
        bool hasCreatorName() const { return this->creatorName_ != nullptr;};
        void deleteCreatorName() { this->creatorName_ = nullptr;};
        inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
        inline SolutionInfo& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline SolutionInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SolutionInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // stepDetail Field Functions 
        bool hasStepDetail() const { return this->stepDetail_ != nullptr;};
        void deleteStepDetail() { this->stepDetail_ = nullptr;};
        inline const vector<SolutionInfo::StepDetail> & getStepDetail() const { DARABONBA_PTR_GET_CONST(stepDetail_, vector<SolutionInfo::StepDetail>) };
        inline vector<SolutionInfo::StepDetail> getStepDetail() { DARABONBA_PTR_GET(stepDetail_, vector<SolutionInfo::StepDetail>) };
        inline SolutionInfo& setStepDetail(const vector<SolutionInfo::StepDetail> & stepDetail) { DARABONBA_PTR_SET_VALUE(stepDetail_, stepDetail) };
        inline SolutionInfo& setStepDetail(vector<SolutionInfo::StepDetail> && stepDetail) { DARABONBA_PTR_SET_RVALUE(stepDetail_, stepDetail) };


      protected:
        // The creator of the data synchronization solution.
        shared_ptr<string> creatorName_ {};
        // The ID of the data synchronization solution.
        shared_ptr<int64_t> id_ {};
        // The status of the data synchronization solution.
        shared_ptr<string> status_ {};
        // The step details of the data synchronization solution.
        shared_ptr<vector<SolutionInfo::StepDetail>> stepDetail_ {};
      };

      virtual bool empty() const override { return this->message_ == nullptr
        && this->name_ == nullptr && this->solutionInfo_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // solutionInfo Field Functions 
      bool hasSolutionInfo() const { return this->solutionInfo_ != nullptr;};
      void deleteSolutionInfo() { this->solutionInfo_ = nullptr;};
      inline const Data::SolutionInfo & getSolutionInfo() const { DARABONBA_PTR_GET_CONST(solutionInfo_, Data::SolutionInfo) };
      inline Data::SolutionInfo getSolutionInfo() { DARABONBA_PTR_GET(solutionInfo_, Data::SolutionInfo) };
      inline Data& setSolutionInfo(const Data::SolutionInfo & solutionInfo) { DARABONBA_PTR_SET_VALUE(solutionInfo_, solutionInfo) };
      inline Data& setSolutionInfo(Data::SolutionInfo && solutionInfo) { DARABONBA_PTR_SET_RVALUE(solutionInfo_, solutionInfo) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The cause of the failure to obtain the status of the real-time synchronization task or data synchronization solution. If the status of the real-time synchronization task or data synchronization solution is obtained, the value null is returned.
      shared_ptr<string> message_ {};
      // *   If the TaskType parameter is set to DI_REALTIME, the Name parameter indicates the name of the real-time synchronization task.
      // *   If the TaskType parameter is set to DI_SOLUTION, the value null is returned.
      shared_ptr<string> name_ {};
      // *   If the TaskType parameter is set to DI_REALTIME, the value null is returned.
      // *   If the TaskType parameter is set to DI_SOLUTION, the SolutionInfo parameter indicates the details of the data synchronization solution.
      shared_ptr<Data::SolutionInfo> solutionInfo_ {};
      // *   If the TaskType parameter is set to DI_REALTIME, the Status parameter indicates the status of the real-time synchronization task. Valid values: PAUSE, NORUN, RUN, KILLING, and WAIT.
      // *   If the TaskType parameter is set to DI_SOLUTION, the Status parameter indicates the status of the data synchronization solution. Valid values: success and fail.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDISyncInstanceInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDISyncInstanceInfoResponseBody::Data) };
    inline GetDISyncInstanceInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDISyncInstanceInfoResponseBody::Data) };
    inline GetDISyncInstanceInfoResponseBody& setData(const GetDISyncInstanceInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDISyncInstanceInfoResponseBody& setData(GetDISyncInstanceInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDISyncInstanceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDISyncInstanceInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status of the real-time synchronization task or data synchronization solution.
    shared_ptr<GetDISyncInstanceInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
