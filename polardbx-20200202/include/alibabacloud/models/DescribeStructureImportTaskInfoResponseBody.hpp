// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRUCTUREIMPORTTASKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRUCTUREIMPORTTASKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeStructureImportTaskInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStructureImportTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStructureImportTaskInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeStructureImportTaskInfoResponseBody() = default ;
    DescribeStructureImportTaskInfoResponseBody(const DescribeStructureImportTaskInfoResponseBody &) = default ;
    DescribeStructureImportTaskInfoResponseBody(DescribeStructureImportTaskInfoResponseBody &&) = default ;
    DescribeStructureImportTaskInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStructureImportTaskInfoResponseBody() = default ;
    DescribeStructureImportTaskInfoResponseBody& operator=(const DescribeStructureImportTaskInfoResponseBody &) = default ;
    DescribeStructureImportTaskInfoResponseBody& operator=(DescribeStructureImportTaskInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(SlinkStage, slinkStage_);
        DARABONBA_PTR_TO_JSON(StructureImportResult, structureImportResult_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(SlinkStage, slinkStage_);
        DARABONBA_PTR_FROM_JSON(StructureImportResult, structureImportResult_);
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
      class StructureImportResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StructureImportResult& obj) { 
          DARABONBA_PTR_TO_JSON(ExceptionDetail, exceptionDetail_);
          DARABONBA_PTR_TO_JSON(ExceptionFullTableName, exceptionFullTableName_);
          DARABONBA_PTR_TO_JSON(FinishedNum, finishedNum_);
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalNum, totalNum_);
        };
        friend void from_json(const Darabonba::Json& j, StructureImportResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ExceptionDetail, exceptionDetail_);
          DARABONBA_PTR_FROM_JSON(ExceptionFullTableName, exceptionFullTableName_);
          DARABONBA_PTR_FROM_JSON(FinishedNum, finishedNum_);
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalNum, totalNum_);
        };
        StructureImportResult() = default ;
        StructureImportResult(const StructureImportResult &) = default ;
        StructureImportResult(StructureImportResult &&) = default ;
        StructureImportResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StructureImportResult() = default ;
        StructureImportResult& operator=(const StructureImportResult &) = default ;
        StructureImportResult& operator=(StructureImportResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->exceptionDetail_ == nullptr
        && this->exceptionFullTableName_ == nullptr && this->finishedNum_ == nullptr && this->percentage_ == nullptr && this->status_ == nullptr && this->totalNum_ == nullptr; };
        // exceptionDetail Field Functions 
        bool hasExceptionDetail() const { return this->exceptionDetail_ != nullptr;};
        void deleteExceptionDetail() { this->exceptionDetail_ = nullptr;};
        inline string getExceptionDetail() const { DARABONBA_PTR_GET_DEFAULT(exceptionDetail_, "") };
        inline StructureImportResult& setExceptionDetail(string exceptionDetail) { DARABONBA_PTR_SET_VALUE(exceptionDetail_, exceptionDetail) };


        // exceptionFullTableName Field Functions 
        bool hasExceptionFullTableName() const { return this->exceptionFullTableName_ != nullptr;};
        void deleteExceptionFullTableName() { this->exceptionFullTableName_ = nullptr;};
        inline string getExceptionFullTableName() const { DARABONBA_PTR_GET_DEFAULT(exceptionFullTableName_, "") };
        inline StructureImportResult& setExceptionFullTableName(string exceptionFullTableName) { DARABONBA_PTR_SET_VALUE(exceptionFullTableName_, exceptionFullTableName) };


        // finishedNum Field Functions 
        bool hasFinishedNum() const { return this->finishedNum_ != nullptr;};
        void deleteFinishedNum() { this->finishedNum_ = nullptr;};
        inline int32_t getFinishedNum() const { DARABONBA_PTR_GET_DEFAULT(finishedNum_, 0) };
        inline StructureImportResult& setFinishedNum(int32_t finishedNum) { DARABONBA_PTR_SET_VALUE(finishedNum_, finishedNum) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
        inline StructureImportResult& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline StructureImportResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalNum Field Functions 
        bool hasTotalNum() const { return this->totalNum_ != nullptr;};
        void deleteTotalNum() { this->totalNum_ = nullptr;};
        inline int32_t getTotalNum() const { DARABONBA_PTR_GET_DEFAULT(totalNum_, 0) };
        inline StructureImportResult& setTotalNum(int32_t totalNum) { DARABONBA_PTR_SET_VALUE(totalNum_, totalNum) };


      protected:
        shared_ptr<string> exceptionDetail_ {};
        shared_ptr<string> exceptionFullTableName_ {};
        shared_ptr<int32_t> finishedNum_ {};
        shared_ptr<int32_t> percentage_ {};
        shared_ptr<string> status_ {};
        shared_ptr<int32_t> totalNum_ {};
      };

      virtual bool empty() const override { return this->slinkStage_ == nullptr
        && this->structureImportResult_ == nullptr; };
      // slinkStage Field Functions 
      bool hasSlinkStage() const { return this->slinkStage_ != nullptr;};
      void deleteSlinkStage() { this->slinkStage_ = nullptr;};
      inline string getSlinkStage() const { DARABONBA_PTR_GET_DEFAULT(slinkStage_, "") };
      inline Data& setSlinkStage(string slinkStage) { DARABONBA_PTR_SET_VALUE(slinkStage_, slinkStage) };


      // structureImportResult Field Functions 
      bool hasStructureImportResult() const { return this->structureImportResult_ != nullptr;};
      void deleteStructureImportResult() { this->structureImportResult_ = nullptr;};
      inline const Data::StructureImportResult & getStructureImportResult() const { DARABONBA_PTR_GET_CONST(structureImportResult_, Data::StructureImportResult) };
      inline Data::StructureImportResult getStructureImportResult() { DARABONBA_PTR_GET(structureImportResult_, Data::StructureImportResult) };
      inline Data& setStructureImportResult(const Data::StructureImportResult & structureImportResult) { DARABONBA_PTR_SET_VALUE(structureImportResult_, structureImportResult) };
      inline Data& setStructureImportResult(Data::StructureImportResult && structureImportResult) { DARABONBA_PTR_SET_RVALUE(structureImportResult_, structureImportResult) };


    protected:
      shared_ptr<string> slinkStage_ {};
      shared_ptr<Data::StructureImportResult> structureImportResult_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeStructureImportTaskInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeStructureImportTaskInfoResponseBody::Data) };
    inline DescribeStructureImportTaskInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeStructureImportTaskInfoResponseBody::Data) };
    inline DescribeStructureImportTaskInfoResponseBody& setData(const DescribeStructureImportTaskInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeStructureImportTaskInfoResponseBody& setData(DescribeStructureImportTaskInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeStructureImportTaskInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeStructureImportTaskInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeStructureImportTaskInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeStructureImportTaskInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
