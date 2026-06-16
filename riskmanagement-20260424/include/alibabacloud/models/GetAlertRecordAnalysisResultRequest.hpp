// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRECORDANALYSISRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRECORDANALYSISRESULTREQUEST_HPP_
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
  class GetAlertRecordAnalysisResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRecordAnalysisResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_TO_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_TO_JSON(UniqueTagList, uniqueTagList_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRecordAnalysisResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
      DARABONBA_PTR_FROM_JSON(AliyunLang, aliyunLang_);
      DARABONBA_PTR_FROM_JSON(UniqueInfo, uniqueInfo_);
      DARABONBA_PTR_FROM_JSON(UniqueTagList, uniqueTagList_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    GetAlertRecordAnalysisResultRequest() = default ;
    GetAlertRecordAnalysisResultRequest(const GetAlertRecordAnalysisResultRequest &) = default ;
    GetAlertRecordAnalysisResultRequest(GetAlertRecordAnalysisResultRequest &&) = default ;
    GetAlertRecordAnalysisResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRecordAnalysisResultRequest() = default ;
    GetAlertRecordAnalysisResultRequest& operator=(const GetAlertRecordAnalysisResultRequest &) = default ;
    GetAlertRecordAnalysisResultRequest& operator=(GetAlertRecordAnalysisResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UniqueTagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UniqueTagList& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_TO_JSON(ChooseLike, chooseLike_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(MachineInstanceId, machineInstanceId_);
        DARABONBA_PTR_TO_JSON(QueryTime, queryTime_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UniqueInfo, uniqueInfo_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, UniqueTagList& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmUniqueInfo, alarmUniqueInfo_);
        DARABONBA_PTR_FROM_JSON(ChooseLike, chooseLike_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(MachineInstanceId, machineInstanceId_);
        DARABONBA_PTR_FROM_JSON(QueryTime, queryTime_);
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
        && this->chooseLike_ == nullptr && this->ip_ == nullptr && this->machineInstanceId_ == nullptr && this->queryTime_ == nullptr && this->type_ == nullptr
        && this->uniqueInfo_ == nullptr && this->uuid_ == nullptr; };
      // alarmUniqueInfo Field Functions 
      bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
      void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
      inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
      inline UniqueTagList& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


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


      // queryTime Field Functions 
      bool hasQueryTime() const { return this->queryTime_ != nullptr;};
      void deleteQueryTime() { this->queryTime_ = nullptr;};
      inline string getQueryTime() const { DARABONBA_PTR_GET_DEFAULT(queryTime_, "") };
      inline UniqueTagList& setQueryTime(string queryTime) { DARABONBA_PTR_SET_VALUE(queryTime_, queryTime) };


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
      shared_ptr<bool> chooseLike_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> machineInstanceId_ {};
      shared_ptr<string> queryTime_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> uniqueInfo_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->alarmUniqueInfo_ == nullptr
        && this->aliyunLang_ == nullptr && this->uniqueInfo_ == nullptr && this->uniqueTagList_ == nullptr && this->uuid_ == nullptr; };
    // alarmUniqueInfo Field Functions 
    bool hasAlarmUniqueInfo() const { return this->alarmUniqueInfo_ != nullptr;};
    void deleteAlarmUniqueInfo() { this->alarmUniqueInfo_ = nullptr;};
    inline string getAlarmUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(alarmUniqueInfo_, "") };
    inline GetAlertRecordAnalysisResultRequest& setAlarmUniqueInfo(string alarmUniqueInfo) { DARABONBA_PTR_SET_VALUE(alarmUniqueInfo_, alarmUniqueInfo) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetAlertRecordAnalysisResultRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


    // uniqueInfo Field Functions 
    bool hasUniqueInfo() const { return this->uniqueInfo_ != nullptr;};
    void deleteUniqueInfo() { this->uniqueInfo_ = nullptr;};
    inline string getUniqueInfo() const { DARABONBA_PTR_GET_DEFAULT(uniqueInfo_, "") };
    inline GetAlertRecordAnalysisResultRequest& setUniqueInfo(string uniqueInfo) { DARABONBA_PTR_SET_VALUE(uniqueInfo_, uniqueInfo) };


    // uniqueTagList Field Functions 
    bool hasUniqueTagList() const { return this->uniqueTagList_ != nullptr;};
    void deleteUniqueTagList() { this->uniqueTagList_ = nullptr;};
    inline const vector<GetAlertRecordAnalysisResultRequest::UniqueTagList> & getUniqueTagList() const { DARABONBA_PTR_GET_CONST(uniqueTagList_, vector<GetAlertRecordAnalysisResultRequest::UniqueTagList>) };
    inline vector<GetAlertRecordAnalysisResultRequest::UniqueTagList> getUniqueTagList() { DARABONBA_PTR_GET(uniqueTagList_, vector<GetAlertRecordAnalysisResultRequest::UniqueTagList>) };
    inline GetAlertRecordAnalysisResultRequest& setUniqueTagList(const vector<GetAlertRecordAnalysisResultRequest::UniqueTagList> & uniqueTagList) { DARABONBA_PTR_SET_VALUE(uniqueTagList_, uniqueTagList) };
    inline GetAlertRecordAnalysisResultRequest& setUniqueTagList(vector<GetAlertRecordAnalysisResultRequest::UniqueTagList> && uniqueTagList) { DARABONBA_PTR_SET_RVALUE(uniqueTagList_, uniqueTagList) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetAlertRecordAnalysisResultRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    shared_ptr<string> alarmUniqueInfo_ {};
    shared_ptr<string> aliyunLang_ {};
    shared_ptr<string> uniqueInfo_ {};
    shared_ptr<vector<GetAlertRecordAnalysisResultRequest::UniqueTagList>> uniqueTagList_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
