// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRECORDANALYSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRECORDANALYSISRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetAlertRecordAnalysisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRecordAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRecordAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAlertRecordAnalysisResultResponseBody() = default ;
    GetAlertRecordAnalysisResultResponseBody(const GetAlertRecordAnalysisResultResponseBody &) = default ;
    GetAlertRecordAnalysisResultResponseBody(GetAlertRecordAnalysisResultResponseBody &&) = default ;
    GetAlertRecordAnalysisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRecordAnalysisResultResponseBody() = default ;
    GetAlertRecordAnalysisResultResponseBody& operator=(const GetAlertRecordAnalysisResultResponseBody &) = default ;
    GetAlertRecordAnalysisResultResponseBody& operator=(GetAlertRecordAnalysisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnalysisCode, analysisCode_);
        DARABONBA_PTR_TO_JSON(UniqueTagList, uniqueTagList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnalysisCode, analysisCode_);
        DARABONBA_PTR_FROM_JSON(UniqueTagList, uniqueTagList_);
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
      class UniqueTagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UniqueTagList& obj) { 
          DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
          DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
          DARABONBA_PTR_TO_JSON(AnalysisCode, analysisCode_);
          DARABONBA_PTR_TO_JSON(AnalysisResult, analysisResult_);
          DARABONBA_PTR_TO_JSON(ChooseLike, chooseLike_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(MachineInstanceId, machineInstanceId_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, UniqueTagList& obj) { 
          DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
          DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
          DARABONBA_PTR_FROM_JSON(AnalysisCode, analysisCode_);
          DARABONBA_PTR_FROM_JSON(AnalysisResult, analysisResult_);
          DARABONBA_PTR_FROM_JSON(ChooseLike, chooseLike_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(MachineInstanceId, machineInstanceId_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        UniqueTagList() = default ;
        UniqueTagList(const UniqueTagList &) = default ;
        UniqueTagList(UniqueTagList &&) = default ;
        UniqueTagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UniqueTagList() = default ;
        UniqueTagList& operator=(const UniqueTagList &) = default ;
        UniqueTagList& operator=(UniqueTagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->aliUid_ == nullptr && this->analysisCode_ == nullptr && this->analysisResult_ == nullptr && this->chooseLike_ == nullptr && this->ip_ == nullptr
        && this->machineInstanceId_ == nullptr && this->type_ == nullptr && this->uniqueInfo_ == nullptr && this->uuid_ == nullptr; };
        // alarmUniqueInfo Field Functions 
        bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
        void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
        inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
        inline UniqueTagList& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


        // aliUid Field Functions 
        bool hasAliUid() const { return this->aliUid_ != nullptr;};
        void deleteAliUid() { this->aliUid_ = nullptr;};
        inline string getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, "") };
        inline UniqueTagList& setAliUid(string aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


        // analysisCode Field Functions 
        bool hasAnalysisCode() const { return this->analysisCode_ != nullptr;};
        void deleteAnalysisCode() { this->analysisCode_ = nullptr;};
        inline string getAnalysisCode() const { DARABONBA_PTR_GET_DEFAULT(analysisCode_, "") };
        inline UniqueTagList& setAnalysisCode(string analysisCode) { DARABONBA_PTR_SET_VALUE(analysisCode_, analysisCode) };


        // analysisResult Field Functions 
        bool hasAnalysisResult() const { return this->analysisResult_ != nullptr;};
        void deleteAnalysisResult() { this->analysisResult_ = nullptr;};
        inline string getAnalysisResult() const { DARABONBA_PTR_GET_DEFAULT(analysisResult_, "") };
        inline UniqueTagList& setAnalysisResult(string analysisResult) { DARABONBA_PTR_SET_VALUE(analysisResult_, analysisResult) };


        // chooseLike Field Functions 
        bool hasChooseLike() const { return this->chooseLike_ != nullptr;};
        void deleteChooseLike() { this->chooseLike_ = nullptr;};
        inline bool getChooseLike() const { DARABONBA_PTR_GET_DEFAULT(chooseLike_, false) };
        inline UniqueTagList& setChooseLike(bool chooseLike) { DARABONBA_PTR_SET_VALUE(chooseLike_, chooseLike) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline UniqueTagList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // machineInstanceId Field Functions 
        bool hasMachineInstanceId() const { return this->machineInstanceId_ != nullptr;};
        void deleteMachineInstanceId() { this->machineInstanceId_ = nullptr;};
        inline string getMachineInstanceId() const { DARABONBA_PTR_GET_DEFAULT(machineInstanceId_, "") };
        inline UniqueTagList& setMachineInstanceId(string machineInstanceId) { DARABONBA_PTR_SET_VALUE(machineInstanceId_, machineInstanceId) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline UniqueTagList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uniqueInfo Field Functions 
        bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
        void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
        inline string getUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
        inline UniqueTagList& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline UniqueTagList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<string> alarmUniqueInfo_ {};
        shared_ptr<string> aliUid_ {};
        shared_ptr<string> analysisCode_ {};
        shared_ptr<string> analysisResult_ {};
        shared_ptr<bool> chooseLike_ {};
        shared_ptr<string> ip_ {};
        shared_ptr<string> machineInstanceId_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> uniqueInfo_ {};
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->analysisCode_ == nullptr
        && this->uniqueTagList_ == nullptr; };
      // analysisCode Field Functions 
      bool hasAnalysisCode() const { return this->analysisCode_ != nullptr;};
      void deleteAnalysisCode() { this->analysisCode_ = nullptr;};
      inline string getAnalysisCode() const { DARABONBA_PTR_GET_DEFAULT(analysisCode_, "") };
      inline Data& setAnalysisCode(string analysisCode) { DARABONBA_PTR_SET_VALUE(analysisCode_, analysisCode) };


      // uniqueTagList Field Functions 
      bool hasUniqueTagList() const { return this->uniqueTagList_ != nullptr;};
      void deleteUniqueTagList() { this->uniqueTagList_ = nullptr;};
      inline const vector<Data::UniqueTagList> & getUniqueTagList() const { DARABONBA_PTR_GET_CONST(uniqueTagList_, vector<Data::UniqueTagList>) };
      inline vector<Data::UniqueTagList> getUniqueTagList() { DARABONBA_PTR_GET(uniqueTagList_, vector<Data::UniqueTagList>) };
      inline Data& setUniqueTagList(const vector<Data::UniqueTagList> & uniqueTagList) { DARABONBA_PTR_SET_VALUE(uniqueTagList_, uniqueTagList) };
      inline Data& setUniqueTagList(vector<Data::UniqueTagList> && uniqueTagList) { DARABONBA_PTR_SET_RVALUE(uniqueTagList_, uniqueTagList) };


    protected:
      shared_ptr<string> analysisCode_ {};
      shared_ptr<vector<Data::UniqueTagList>> uniqueTagList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAlertRecordAnalysisResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlertRecordAnalysisResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlertRecordAnalysisResultResponseBody::Data) };
    inline GetAlertRecordAnalysisResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlertRecordAnalysisResultResponseBody::Data) };
    inline GetAlertRecordAnalysisResultResponseBody& setData(const GetAlertRecordAnalysisResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlertRecordAnalysisResultResponseBody& setData(GetAlertRecordAnalysisResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAlertRecordAnalysisResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertRecordAnalysisResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAlertRecordAnalysisResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetAlertRecordAnalysisResultResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
