// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRECISIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRECISIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetPrecisionTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrecisionTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrecisionTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPrecisionTaskResponseBody() = default ;
    GetPrecisionTaskResponseBody(const GetPrecisionTaskResponseBody &) = default ;
    GetPrecisionTaskResponseBody(GetPrecisionTaskResponseBody &&) = default ;
    GetPrecisionTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrecisionTaskResponseBody() = default ;
    GetPrecisionTaskResponseBody& operator=(const GetPrecisionTaskResponseBody &) = default ;
    GetPrecisionTaskResponseBody& operator=(GetPrecisionTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Precisions, precisions_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VerifiedCount, verifiedCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
        DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Precisions, precisions_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VerifiedCount, verifiedCount_);
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
      class Precisions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Precisions& obj) { 
          DARABONBA_PTR_TO_JSON(Precision, precision_);
        };
        friend void from_json(const Darabonba::Json& j, Precisions& obj) { 
          DARABONBA_PTR_FROM_JSON(Precision, precision_);
        };
        Precisions() = default ;
        Precisions(const Precisions &) = default ;
        Precisions(Precisions &&) = default ;
        Precisions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Precisions() = default ;
        Precisions& operator=(const Precisions &) = default ;
        Precisions& operator=(Precisions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Precision : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Precision& obj) { 
            DARABONBA_PTR_TO_JSON(ModelId, modelId_);
            DARABONBA_PTR_TO_JSON(ModelName, modelName_);
            DARABONBA_PTR_TO_JSON(Precision, precision_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          };
          friend void from_json(const Darabonba::Json& j, Precision& obj) { 
            DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
            DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
            DARABONBA_PTR_FROM_JSON(Precision, precision_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          };
          Precision() = default ;
          Precision(const Precision &) = default ;
          Precision(Precision &&) = default ;
          Precision(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Precision() = default ;
          Precision& operator=(const Precision &) = default ;
          Precision& operator=(Precision &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modelId_ == nullptr
        && this->modelName_ == nullptr && this->precision_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr; };
          // modelId Field Functions 
          bool hasModelId() const { return this->modelId_ != nullptr;};
          void deleteModelId() { this->modelId_ = nullptr;};
          inline int64_t getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, 0L) };
          inline Precision& setModelId(int64_t modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


          // modelName Field Functions 
          bool hasModelName() const { return this->modelName_ != nullptr;};
          void deleteModelName() { this->modelName_ = nullptr;};
          inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
          inline Precision& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


          // precision Field Functions 
          bool hasPrecision() const { return this->precision_ != nullptr;};
          void deletePrecision() { this->precision_ = nullptr;};
          inline float getPrecision() const { DARABONBA_PTR_GET_DEFAULT(precision_, 0.0) };
          inline Precision& setPrecision(float precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline Precision& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
          inline Precision& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        protected:
          shared_ptr<int64_t> modelId_ {};
          shared_ptr<string> modelName_ {};
          shared_ptr<float> precision_ {};
          shared_ptr<int32_t> status_ {};
          shared_ptr<string> taskId_ {};
        };

        virtual bool empty() const override { return this->precision_ == nullptr; };
        // precision Field Functions 
        bool hasPrecision() const { return this->precision_ != nullptr;};
        void deletePrecision() { this->precision_ = nullptr;};
        inline const vector<Precisions::Precision> & getPrecision() const { DARABONBA_PTR_GET_CONST(precision_, vector<Precisions::Precision>) };
        inline vector<Precisions::Precision> getPrecision() { DARABONBA_PTR_GET(precision_, vector<Precisions::Precision>) };
        inline Precisions& setPrecision(const vector<Precisions::Precision> & precision) { DARABONBA_PTR_SET_VALUE(precision_, precision) };
        inline Precisions& setPrecision(vector<Precisions::Precision> && precision) { DARABONBA_PTR_SET_RVALUE(precision_, precision) };


      protected:
        shared_ptr<vector<Precisions::Precision>> precision_ {};
      };

      virtual bool empty() const override { return this->dataSetId_ == nullptr
        && this->dataSetName_ == nullptr && this->duration_ == nullptr && this->incorrectWords_ == nullptr && this->name_ == nullptr && this->precisions_ == nullptr
        && this->source_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->totalCount_ == nullptr && this->updateTime_ == nullptr
        && this->verifiedCount_ == nullptr; };
      // dataSetId Field Functions 
      bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
      void deleteDataSetId() { this->dataSetId_ = nullptr;};
      inline int64_t getDataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, 0L) };
      inline Data& setDataSetId(int64_t dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


      // dataSetName Field Functions 
      bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
      void deleteDataSetName() { this->dataSetName_ = nullptr;};
      inline string getDataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
      inline Data& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Data& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // incorrectWords Field Functions 
      bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
      void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
      inline int32_t getIncorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
      inline Data& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // precisions Field Functions 
      bool hasPrecisions() const { return this->precisions_ != nullptr;};
      void deletePrecisions() { this->precisions_ = nullptr;};
      inline const Data::Precisions & getPrecisions() const { DARABONBA_PTR_GET_CONST(precisions_, Data::Precisions) };
      inline Data::Precisions getPrecisions() { DARABONBA_PTR_GET(precisions_, Data::Precisions) };
      inline Data& setPrecisions(const Data::Precisions & precisions) { DARABONBA_PTR_SET_VALUE(precisions_, precisions) };
      inline Data& setPrecisions(Data::Precisions && precisions) { DARABONBA_PTR_SET_RVALUE(precisions_, precisions) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline int32_t getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
      inline Data& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Data& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // verifiedCount Field Functions 
      bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
      void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
      inline int32_t getVerifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0) };
      inline Data& setVerifiedCount(int32_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


    protected:
      shared_ptr<int64_t> dataSetId_ {};
      shared_ptr<string> dataSetName_ {};
      shared_ptr<int32_t> duration_ {};
      shared_ptr<int32_t> incorrectWords_ {};
      shared_ptr<string> name_ {};
      shared_ptr<Data::Precisions> precisions_ {};
      shared_ptr<int32_t> source_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<int32_t> totalCount_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<int32_t> verifiedCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPrecisionTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPrecisionTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPrecisionTaskResponseBody::Data) };
    inline GetPrecisionTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPrecisionTaskResponseBody::Data) };
    inline GetPrecisionTaskResponseBody& setData(const GetPrecisionTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPrecisionTaskResponseBody& setData(GetPrecisionTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPrecisionTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrecisionTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPrecisionTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetPrecisionTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
