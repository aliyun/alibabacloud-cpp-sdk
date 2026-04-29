// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYRASREVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYRASREVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryRasrEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryRasrEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryRasrEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudQueryRasrEventResponseBody() = default ;
    CloudQueryRasrEventResponseBody(const CloudQueryRasrEventResponseBody &) = default ;
    CloudQueryRasrEventResponseBody(CloudQueryRasrEventResponseBody &&) = default ;
    CloudQueryRasrEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryRasrEventResponseBody() = default ;
    CloudQueryRasrEventResponseBody& operator=(const CloudQueryRasrEventResponseBody &) = default ;
    CloudQueryRasrEventResponseBody& operator=(CloudQueryRasrEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BotText, botText_);
          DARABONBA_PTR_TO_JSON(Cno, cno_);
          DARABONBA_PTR_TO_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Engine, engine_);
          DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_TO_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_TO_JSON(MixRecordFile, mixRecordFile_);
          DARABONBA_PTR_TO_JSON(MonitorSide, monitorSide_);
          DARABONBA_PTR_TO_JSON(OutRecordFile, outRecordFile_);
          DARABONBA_PTR_TO_JSON(RasrDuration, rasrDuration_);
          DARABONBA_PTR_TO_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(UniqueId, uniqueId_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BotText, botText_);
          DARABONBA_PTR_FROM_JSON(Cno, cno_);
          DARABONBA_PTR_FROM_JSON(CustomerNumber, customerNumber_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Engine, engine_);
          DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
          DARABONBA_PTR_FROM_JSON(MainUniqueId, mainUniqueId_);
          DARABONBA_PTR_FROM_JSON(MixRecordFile, mixRecordFile_);
          DARABONBA_PTR_FROM_JSON(MonitorSide, monitorSide_);
          DARABONBA_PTR_FROM_JSON(OutRecordFile, outRecordFile_);
          DARABONBA_PTR_FROM_JSON(RasrDuration, rasrDuration_);
          DARABONBA_PTR_FROM_JSON(RecordFile, recordFile_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(UniqueId, uniqueId_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->botText_ == nullptr
        && this->cno_ == nullptr && this->customerNumber_ == nullptr && this->endTime_ == nullptr && this->engine_ == nullptr && this->enterpriseId_ == nullptr
        && this->mainUniqueId_ == nullptr && this->mixRecordFile_ == nullptr && this->monitorSide_ == nullptr && this->outRecordFile_ == nullptr && this->rasrDuration_ == nullptr
        && this->recordFile_ == nullptr && this->startTime_ == nullptr && this->text_ == nullptr && this->uniqueId_ == nullptr; };
        // botText Field Functions 
        bool hasBotText() const { return this->botText_ != nullptr;};
        void deleteBotText() { this->botText_ = nullptr;};
        inline string getBotText() const { DARABONBA_PTR_GET_DEFAULT(botText_, "") };
        inline List& setBotText(string botText) { DARABONBA_PTR_SET_VALUE(botText_, botText) };


        // cno Field Functions 
        bool hasCno() const { return this->cno_ != nullptr;};
        void deleteCno() { this->cno_ = nullptr;};
        inline string getCno() const { DARABONBA_PTR_GET_DEFAULT(cno_, "") };
        inline List& setCno(string cno) { DARABONBA_PTR_SET_VALUE(cno_, cno) };


        // customerNumber Field Functions 
        bool hasCustomerNumber() const { return this->customerNumber_ != nullptr;};
        void deleteCustomerNumber() { this->customerNumber_ = nullptr;};
        inline string getCustomerNumber() const { DARABONBA_PTR_GET_DEFAULT(customerNumber_, "") };
        inline List& setCustomerNumber(string customerNumber) { DARABONBA_PTR_SET_VALUE(customerNumber_, customerNumber) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline List& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // engine Field Functions 
        bool hasEngine() const { return this->engine_ != nullptr;};
        void deleteEngine() { this->engine_ = nullptr;};
        inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
        inline List& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


        // enterpriseId Field Functions 
        bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
        void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
        inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
        inline List& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


        // mainUniqueId Field Functions 
        bool hasMainUniqueId() const { return this->mainUniqueId_ != nullptr;};
        void deleteMainUniqueId() { this->mainUniqueId_ = nullptr;};
        inline string getMainUniqueId() const { DARABONBA_PTR_GET_DEFAULT(mainUniqueId_, "") };
        inline List& setMainUniqueId(string mainUniqueId) { DARABONBA_PTR_SET_VALUE(mainUniqueId_, mainUniqueId) };


        // mixRecordFile Field Functions 
        bool hasMixRecordFile() const { return this->mixRecordFile_ != nullptr;};
        void deleteMixRecordFile() { this->mixRecordFile_ = nullptr;};
        inline string getMixRecordFile() const { DARABONBA_PTR_GET_DEFAULT(mixRecordFile_, "") };
        inline List& setMixRecordFile(string mixRecordFile) { DARABONBA_PTR_SET_VALUE(mixRecordFile_, mixRecordFile) };


        // monitorSide Field Functions 
        bool hasMonitorSide() const { return this->monitorSide_ != nullptr;};
        void deleteMonitorSide() { this->monitorSide_ = nullptr;};
        inline string getMonitorSide() const { DARABONBA_PTR_GET_DEFAULT(monitorSide_, "") };
        inline List& setMonitorSide(string monitorSide) { DARABONBA_PTR_SET_VALUE(monitorSide_, monitorSide) };


        // outRecordFile Field Functions 
        bool hasOutRecordFile() const { return this->outRecordFile_ != nullptr;};
        void deleteOutRecordFile() { this->outRecordFile_ = nullptr;};
        inline string getOutRecordFile() const { DARABONBA_PTR_GET_DEFAULT(outRecordFile_, "") };
        inline List& setOutRecordFile(string outRecordFile) { DARABONBA_PTR_SET_VALUE(outRecordFile_, outRecordFile) };


        // rasrDuration Field Functions 
        bool hasRasrDuration() const { return this->rasrDuration_ != nullptr;};
        void deleteRasrDuration() { this->rasrDuration_ = nullptr;};
        inline string getRasrDuration() const { DARABONBA_PTR_GET_DEFAULT(rasrDuration_, "") };
        inline List& setRasrDuration(string rasrDuration) { DARABONBA_PTR_SET_VALUE(rasrDuration_, rasrDuration) };


        // recordFile Field Functions 
        bool hasRecordFile() const { return this->recordFile_ != nullptr;};
        void deleteRecordFile() { this->recordFile_ = nullptr;};
        inline string getRecordFile() const { DARABONBA_PTR_GET_DEFAULT(recordFile_, "") };
        inline List& setRecordFile(string recordFile) { DARABONBA_PTR_SET_VALUE(recordFile_, recordFile) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline List& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // uniqueId Field Functions 
        bool hasUniqueId() const { return this->uniqueId_ != nullptr;};
        void deleteUniqueId() { this->uniqueId_ = nullptr;};
        inline string getUniqueId() const { DARABONBA_PTR_GET_DEFAULT(uniqueId_, "") };
        inline List& setUniqueId(string uniqueId) { DARABONBA_PTR_SET_VALUE(uniqueId_, uniqueId) };


      protected:
        // 机器人对话文本信息
        shared_ptr<string> botText_ {};
        // 坐席工号
        shared_ptr<string> cno_ {};
        // 客户号码
        shared_ptr<string> customerNumber_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 引擎
        shared_ptr<string> engine_ {};
        // 呼叫中心 id
        shared_ptr<string> enterpriseId_ {};
        // 通话唯一标识
        shared_ptr<string> mainUniqueId_ {};
        // 混音录音文件名
        shared_ptr<string> mixRecordFile_ {};
        // 1:座席侧（webcall是第二侧），2:客户侧（webcall是第一侧）
        shared_ptr<string> monitorSide_ {};
        // 机器人侧录音文件名
        shared_ptr<string> outRecordFile_ {};
        // 持续时间
        shared_ptr<string> rasrDuration_ {};
        // 客户侧录音文件名
        shared_ptr<string> recordFile_ {};
        // 开始时间
        shared_ptr<int64_t> startTime_ {};
        // 客户对话文本信息
        shared_ptr<string> text_ {};
        // 通话唯一标识
        shared_ptr<string> uniqueId_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    protected:
      // 返回数据
      shared_ptr<vector<Data::List>> list_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudQueryRasrEventResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudQueryRasrEventResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudQueryRasrEventResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudQueryRasrEventResponseBody::Data) };
    inline CloudQueryRasrEventResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudQueryRasrEventResponseBody::Data) };
    inline CloudQueryRasrEventResponseBody& setData(const CloudQueryRasrEventResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudQueryRasrEventResponseBody& setData(CloudQueryRasrEventResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudQueryRasrEventResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudQueryRasrEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudQueryRasrEventResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
