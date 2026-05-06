// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBTASKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSUBTASKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class GetSubTaskResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubTaskResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubTaskResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    GetSubTaskResultResponseBody() = default ;
    GetSubTaskResultResponseBody(const GetSubTaskResultResponseBody &) = default ;
    GetSubTaskResultResponseBody(GetSubTaskResultResponseBody &&) = default ;
    GetSubTaskResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubTaskResultResponseBody() = default ;
    GetSubTaskResultResponseBody& operator=(const GetSubTaskResultResponseBody &) = default ;
    GetSubTaskResultResponseBody& operator=(GetSubTaskResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_TO_JSON(File, file_);
        DARABONBA_PTR_TO_JSON(FileName, fileName_);
        DARABONBA_PTR_TO_JSON(FileType, fileType_);
        DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_TO_JSON(IsCharge, isCharge_);
        DARABONBA_PTR_TO_JSON(Log, log_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(ResultUrl, resultUrl_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskName, taskName_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
        DARABONBA_PTR_FROM_JSON(File, file_);
        DARABONBA_PTR_FROM_JSON(FileName, fileName_);
        DARABONBA_PTR_FROM_JSON(FileType, fileType_);
        DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
        DARABONBA_PTR_FROM_JSON(IsCharge, isCharge_);
        DARABONBA_PTR_FROM_JSON(Log, log_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(ResultUrl, resultUrl_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(ServiceCode, serviceCode_);
        DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Log : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Log& obj) { 
          DARABONBA_PTR_TO_JSON(OperateType, operateType_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, Log& obj) { 
          DARABONBA_PTR_FROM_JSON(OperateType, operateType_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        Log() = default ;
        Log(const Log &) = default ;
        Log(Log &&) = default ;
        Log(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Log() = default ;
        Log& operator=(const Log &) = default ;
        Log& operator=(Log &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->operateType_ == nullptr
        && this->reason_ == nullptr && this->time_ == nullptr; };
        // operateType Field Functions 
        bool hasOperateType() const { return this->operateType_ != nullptr;};
        void deleteOperateType() { this->operateType_ = nullptr;};
        inline string getOperateType() const { DARABONBA_PTR_GET_DEFAULT(operateType_, "") };
        inline Log& setOperateType(string operateType) { DARABONBA_PTR_SET_VALUE(operateType_, operateType) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline Log& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline Log& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<string> operateType_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<int64_t> time_ {};
      };

      class File : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const File& obj) { 
          DARABONBA_PTR_TO_JSON(Col, col_);
          DARABONBA_PTR_TO_JSON(Title, title_);
        };
        friend void from_json(const Darabonba::Json& j, File& obj) { 
          DARABONBA_PTR_FROM_JSON(Col, col_);
          DARABONBA_PTR_FROM_JSON(Title, title_);
        };
        File() = default ;
        File(const File &) = default ;
        File(File &&) = default ;
        File(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~File() = default ;
        File& operator=(const File &) = default ;
        File& operator=(File &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Col : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Col& obj) { 
            DARABONBA_PTR_TO_JSON(A0, a0_);
            DARABONBA_PTR_TO_JSON(A1, a1_);
            DARABONBA_PTR_TO_JSON(A10, a10_);
            DARABONBA_PTR_TO_JSON(A11, a11_);
            DARABONBA_PTR_TO_JSON(A2, a2_);
            DARABONBA_PTR_TO_JSON(A3, a3_);
            DARABONBA_PTR_TO_JSON(A4, a4_);
            DARABONBA_PTR_TO_JSON(A5, a5_);
            DARABONBA_PTR_TO_JSON(A6, a6_);
            DARABONBA_PTR_TO_JSON(A7, a7_);
            DARABONBA_PTR_TO_JSON(A8, a8_);
            DARABONBA_PTR_TO_JSON(A9, a9_);
          };
          friend void from_json(const Darabonba::Json& j, Col& obj) { 
            DARABONBA_PTR_FROM_JSON(A0, a0_);
            DARABONBA_PTR_FROM_JSON(A1, a1_);
            DARABONBA_PTR_FROM_JSON(A10, a10_);
            DARABONBA_PTR_FROM_JSON(A11, a11_);
            DARABONBA_PTR_FROM_JSON(A2, a2_);
            DARABONBA_PTR_FROM_JSON(A3, a3_);
            DARABONBA_PTR_FROM_JSON(A4, a4_);
            DARABONBA_PTR_FROM_JSON(A5, a5_);
            DARABONBA_PTR_FROM_JSON(A6, a6_);
            DARABONBA_PTR_FROM_JSON(A7, a7_);
            DARABONBA_PTR_FROM_JSON(A8, a8_);
            DARABONBA_PTR_FROM_JSON(A9, a9_);
          };
          Col() = default ;
          Col(const Col &) = default ;
          Col(Col &&) = default ;
          Col(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Col() = default ;
          Col& operator=(const Col &) = default ;
          Col& operator=(Col &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->a0_ == nullptr
        && this->a1_ == nullptr && this->a10_ == nullptr && this->a11_ == nullptr && this->a2_ == nullptr && this->a3_ == nullptr
        && this->a4_ == nullptr && this->a5_ == nullptr && this->a6_ == nullptr && this->a7_ == nullptr && this->a8_ == nullptr
        && this->a9_ == nullptr; };
          // a0 Field Functions 
          bool hasA0() const { return this->a0_ != nullptr;};
          void deleteA0() { this->a0_ = nullptr;};
          inline string getA0() const { DARABONBA_PTR_GET_DEFAULT(a0_, "") };
          inline Col& setA0(string a0) { DARABONBA_PTR_SET_VALUE(a0_, a0) };


          // a1 Field Functions 
          bool hasA1() const { return this->a1_ != nullptr;};
          void deleteA1() { this->a1_ = nullptr;};
          inline string getA1() const { DARABONBA_PTR_GET_DEFAULT(a1_, "") };
          inline Col& setA1(string a1) { DARABONBA_PTR_SET_VALUE(a1_, a1) };


          // a10 Field Functions 
          bool hasA10() const { return this->a10_ != nullptr;};
          void deleteA10() { this->a10_ = nullptr;};
          inline string getA10() const { DARABONBA_PTR_GET_DEFAULT(a10_, "") };
          inline Col& setA10(string a10) { DARABONBA_PTR_SET_VALUE(a10_, a10) };


          // a11 Field Functions 
          bool hasA11() const { return this->a11_ != nullptr;};
          void deleteA11() { this->a11_ = nullptr;};
          inline string getA11() const { DARABONBA_PTR_GET_DEFAULT(a11_, "") };
          inline Col& setA11(string a11) { DARABONBA_PTR_SET_VALUE(a11_, a11) };


          // a2 Field Functions 
          bool hasA2() const { return this->a2_ != nullptr;};
          void deleteA2() { this->a2_ = nullptr;};
          inline string getA2() const { DARABONBA_PTR_GET_DEFAULT(a2_, "") };
          inline Col& setA2(string a2) { DARABONBA_PTR_SET_VALUE(a2_, a2) };


          // a3 Field Functions 
          bool hasA3() const { return this->a3_ != nullptr;};
          void deleteA3() { this->a3_ = nullptr;};
          inline string getA3() const { DARABONBA_PTR_GET_DEFAULT(a3_, "") };
          inline Col& setA3(string a3) { DARABONBA_PTR_SET_VALUE(a3_, a3) };


          // a4 Field Functions 
          bool hasA4() const { return this->a4_ != nullptr;};
          void deleteA4() { this->a4_ = nullptr;};
          inline string getA4() const { DARABONBA_PTR_GET_DEFAULT(a4_, "") };
          inline Col& setA4(string a4) { DARABONBA_PTR_SET_VALUE(a4_, a4) };


          // a5 Field Functions 
          bool hasA5() const { return this->a5_ != nullptr;};
          void deleteA5() { this->a5_ = nullptr;};
          inline string getA5() const { DARABONBA_PTR_GET_DEFAULT(a5_, "") };
          inline Col& setA5(string a5) { DARABONBA_PTR_SET_VALUE(a5_, a5) };


          // a6 Field Functions 
          bool hasA6() const { return this->a6_ != nullptr;};
          void deleteA6() { this->a6_ = nullptr;};
          inline string getA6() const { DARABONBA_PTR_GET_DEFAULT(a6_, "") };
          inline Col& setA6(string a6) { DARABONBA_PTR_SET_VALUE(a6_, a6) };


          // a7 Field Functions 
          bool hasA7() const { return this->a7_ != nullptr;};
          void deleteA7() { this->a7_ = nullptr;};
          inline string getA7() const { DARABONBA_PTR_GET_DEFAULT(a7_, "") };
          inline Col& setA7(string a7) { DARABONBA_PTR_SET_VALUE(a7_, a7) };


          // a8 Field Functions 
          bool hasA8() const { return this->a8_ != nullptr;};
          void deleteA8() { this->a8_ = nullptr;};
          inline string getA8() const { DARABONBA_PTR_GET_DEFAULT(a8_, "") };
          inline Col& setA8(string a8) { DARABONBA_PTR_SET_VALUE(a8_, a8) };


          // a9 Field Functions 
          bool hasA9() const { return this->a9_ != nullptr;};
          void deleteA9() { this->a9_ = nullptr;};
          inline string getA9() const { DARABONBA_PTR_GET_DEFAULT(a9_, "") };
          inline Col& setA9(string a9) { DARABONBA_PTR_SET_VALUE(a9_, a9) };


        protected:
          // A0。
          shared_ptr<string> a0_ {};
          // A1。
          shared_ptr<string> a1_ {};
          // A10。
          shared_ptr<string> a10_ {};
          // A11。
          shared_ptr<string> a11_ {};
          // A2。
          shared_ptr<string> a2_ {};
          // A3。
          shared_ptr<string> a3_ {};
          // A4。
          shared_ptr<string> a4_ {};
          // A5。
          shared_ptr<string> a5_ {};
          // A6。
          shared_ptr<string> a6_ {};
          // A7。
          shared_ptr<string> a7_ {};
          // A8。
          shared_ptr<string> a8_ {};
          // A9。
          shared_ptr<string> a9_ {};
        };

        virtual bool empty() const override { return this->col_ == nullptr
        && this->title_ == nullptr; };
        // col Field Functions 
        bool hasCol() const { return this->col_ != nullptr;};
        void deleteCol() { this->col_ = nullptr;};
        inline const vector<File::Col> & getCol() const { DARABONBA_PTR_GET_CONST(col_, vector<File::Col>) };
        inline vector<File::Col> getCol() { DARABONBA_PTR_GET(col_, vector<File::Col>) };
        inline File& setCol(const vector<File::Col> & col) { DARABONBA_PTR_SET_VALUE(col_, col) };
        inline File& setCol(vector<File::Col> && col) { DARABONBA_PTR_SET_RVALUE(col_, col) };


        // title Field Functions 
        bool hasTitle() const { return this->title_ != nullptr;};
        void deleteTitle() { this->title_ = nullptr;};
        inline const vector<string> & getTitle() const { DARABONBA_PTR_GET_CONST(title_, vector<string>) };
        inline vector<string> getTitle() { DARABONBA_PTR_GET(title_, vector<string>) };
        inline File& setTitle(const vector<string> & title) { DARABONBA_PTR_SET_VALUE(title_, title) };
        inline File& setTitle(vector<string> && title) { DARABONBA_PTR_SET_RVALUE(title_, title) };


      protected:
        shared_ptr<vector<File::Col>> col_ {};
        shared_ptr<vector<string>> title_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(ItemDesc, itemDesc_);
          DARABONBA_PTR_TO_JSON(SampleItem, sampleItem_);
          DARABONBA_PTR_TO_JSON(SampleItems, sampleItems_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(ItemDesc, itemDesc_);
          DARABONBA_PTR_FROM_JSON(SampleItem, sampleItem_);
          DARABONBA_PTR_FROM_JSON(SampleItems, sampleItems_);
        };
        Config() = default ;
        Config(const Config &) = default ;
        Config(Config &&) = default ;
        Config(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Config() = default ;
        Config& operator=(const Config &) = default ;
        Config& operator=(Config &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->item_ == nullptr
        && this->itemDesc_ == nullptr && this->sampleItem_ == nullptr && this->sampleItems_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline string getItem() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
        inline Config& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


        // itemDesc Field Functions 
        bool hasItemDesc() const { return this->itemDesc_ != nullptr;};
        void deleteItemDesc() { this->itemDesc_ = nullptr;};
        inline string getItemDesc() const { DARABONBA_PTR_GET_DEFAULT(itemDesc_, "") };
        inline Config& setItemDesc(string itemDesc) { DARABONBA_PTR_SET_VALUE(itemDesc_, itemDesc) };


        // sampleItem Field Functions 
        bool hasSampleItem() const { return this->sampleItem_ != nullptr;};
        void deleteSampleItem() { this->sampleItem_ = nullptr;};
        inline string getSampleItem() const { DARABONBA_PTR_GET_DEFAULT(sampleItem_, "") };
        inline Config& setSampleItem(string sampleItem) { DARABONBA_PTR_SET_VALUE(sampleItem_, sampleItem) };


        // sampleItems Field Functions 
        bool hasSampleItems() const { return this->sampleItems_ != nullptr;};
        void deleteSampleItems() { this->sampleItems_ = nullptr;};
        inline const vector<string> & getSampleItems() const { DARABONBA_PTR_GET_CONST(sampleItems_, vector<string>) };
        inline vector<string> getSampleItems() { DARABONBA_PTR_GET(sampleItems_, vector<string>) };
        inline Config& setSampleItems(const vector<string> & sampleItems) { DARABONBA_PTR_SET_VALUE(sampleItems_, sampleItems) };
        inline Config& setSampleItems(vector<string> && sampleItems) { DARABONBA_PTR_SET_RVALUE(sampleItems_, sampleItems) };


      protected:
        shared_ptr<string> item_ {};
        shared_ptr<string> itemDesc_ {};
        shared_ptr<string> sampleItem_ {};
        shared_ptr<vector<string>> sampleItems_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->extraInfo_ == nullptr && this->file_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr && this->fileUrl_ == nullptr
        && this->isCharge_ == nullptr && this->log_ == nullptr && this->reason_ == nullptr && this->resultUrl_ == nullptr && this->scheduleType_ == nullptr
        && this->serviceCode_ == nullptr && this->serviceName_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->taskName_ == nullptr
        && this->userId_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const vector<ResultObject::Config> & getConfig() const { DARABONBA_PTR_GET_CONST(config_, vector<ResultObject::Config>) };
      inline vector<ResultObject::Config> getConfig() { DARABONBA_PTR_GET(config_, vector<ResultObject::Config>) };
      inline ResultObject& setConfig(const vector<ResultObject::Config> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline ResultObject& setConfig(vector<ResultObject::Config> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // extraInfo Field Functions 
      bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
      void deleteExtraInfo() { this->extraInfo_ = nullptr;};
      inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
      inline ResultObject& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline const ResultObject::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, ResultObject::File) };
      inline ResultObject::File getFile() { DARABONBA_PTR_GET(file_, ResultObject::File) };
      inline ResultObject& setFile(const ResultObject::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
      inline ResultObject& setFile(ResultObject::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


      // fileName Field Functions 
      bool hasFileName() const { return this->fileName_ != nullptr;};
      void deleteFileName() { this->fileName_ = nullptr;};
      inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
      inline ResultObject& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


      // fileType Field Functions 
      bool hasFileType() const { return this->fileType_ != nullptr;};
      void deleteFileType() { this->fileType_ = nullptr;};
      inline string getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, "") };
      inline ResultObject& setFileType(string fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


      // fileUrl Field Functions 
      bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
      void deleteFileUrl() { this->fileUrl_ = nullptr;};
      inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
      inline ResultObject& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


      // isCharge Field Functions 
      bool hasIsCharge() const { return this->isCharge_ != nullptr;};
      void deleteIsCharge() { this->isCharge_ = nullptr;};
      inline bool getIsCharge() const { DARABONBA_PTR_GET_DEFAULT(isCharge_, false) };
      inline ResultObject& setIsCharge(bool isCharge) { DARABONBA_PTR_SET_VALUE(isCharge_, isCharge) };


      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const vector<ResultObject::Log> & getLog() const { DARABONBA_PTR_GET_CONST(log_, vector<ResultObject::Log>) };
      inline vector<ResultObject::Log> getLog() { DARABONBA_PTR_GET(log_, vector<ResultObject::Log>) };
      inline ResultObject& setLog(const vector<ResultObject::Log> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline ResultObject& setLog(vector<ResultObject::Log> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline ResultObject& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // resultUrl Field Functions 
      bool hasResultUrl() const { return this->resultUrl_ != nullptr;};
      void deleteResultUrl() { this->resultUrl_ = nullptr;};
      inline string getResultUrl() const { DARABONBA_PTR_GET_DEFAULT(resultUrl_, "") };
      inline ResultObject& setResultUrl(string resultUrl) { DARABONBA_PTR_SET_VALUE(resultUrl_, resultUrl) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
      inline ResultObject& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // serviceCode Field Functions 
      bool hasServiceCode() const { return this->serviceCode_ != nullptr;};
      void deleteServiceCode() { this->serviceCode_ = nullptr;};
      inline string getServiceCode() const { DARABONBA_PTR_GET_DEFAULT(serviceCode_, "") };
      inline ResultObject& setServiceCode(string serviceCode) { DARABONBA_PTR_SET_VALUE(serviceCode_, serviceCode) };


      // serviceName Field Functions 
      bool hasServiceName() const { return this->serviceName_ != nullptr;};
      void deleteServiceName() { this->serviceName_ = nullptr;};
      inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
      inline ResultObject& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResultObject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ResultObject& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskName Field Functions 
      bool hasTaskName() const { return this->taskName_ != nullptr;};
      void deleteTaskName() { this->taskName_ = nullptr;};
      inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
      inline ResultObject& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline ResultObject& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      shared_ptr<vector<ResultObject::Config>> config_ {};
      shared_ptr<string> extraInfo_ {};
      shared_ptr<ResultObject::File> file_ {};
      shared_ptr<string> fileName_ {};
      shared_ptr<string> fileType_ {};
      shared_ptr<string> fileUrl_ {};
      shared_ptr<bool> isCharge_ {};
      shared_ptr<vector<ResultObject::Log>> log_ {};
      shared_ptr<string> reason_ {};
      shared_ptr<string> resultUrl_ {};
      shared_ptr<string> scheduleType_ {};
      shared_ptr<string> serviceCode_ {};
      shared_ptr<string> serviceName_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskName_ {};
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSubTaskResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetSubTaskResultResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSubTaskResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSubTaskResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const GetSubTaskResultResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, GetSubTaskResultResponseBody::ResultObject) };
    inline GetSubTaskResultResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, GetSubTaskResultResponseBody::ResultObject) };
    inline GetSubTaskResultResponseBody& setResultObject(const GetSubTaskResultResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline GetSubTaskResultResponseBody& setResultObject(GetSubTaskResultResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSubTaskResultResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
