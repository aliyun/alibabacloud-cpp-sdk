// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRISKLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRISKLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetRiskListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRiskListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRiskListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRiskListResponseBody() = default ;
    GetRiskListResponseBody(const GetRiskListResponseBody &) = default ;
    GetRiskListResponseBody(GetRiskListResponseBody &&) = default ;
    GetRiskListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRiskListResponseBody() = default ;
    GetRiskListResponseBody& operator=(const GetRiskListResponseBody &) = default ;
    GetRiskListResponseBody& operator=(GetRiskListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RiskList, riskList_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
      class RiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(GradeType, gradeType_);
          DARABONBA_PTR_TO_JSON(Health, health_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LastAlarmTime, lastAlarmTime_);
          DARABONBA_PTR_TO_JSON(LevelType, levelType_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(RelationList, relationList_);
          DARABONBA_PTR_TO_JSON(ReportTips, reportTips_);
          DARABONBA_PTR_TO_JSON(ReportType, reportType_);
          DARABONBA_PTR_TO_JSON(ReportValue, reportValue_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(GradeType, gradeType_);
          DARABONBA_PTR_FROM_JSON(Health, health_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LastAlarmTime, lastAlarmTime_);
          DARABONBA_PTR_FROM_JSON(LevelType, levelType_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(RelationList, relationList_);
          DARABONBA_PTR_FROM_JSON(ReportTips, reportTips_);
          DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
          DARABONBA_PTR_FROM_JSON(ReportValue, reportValue_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        RiskList() = default ;
        RiskList(const RiskList &) = default ;
        RiskList(RiskList &&) = default ;
        RiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RiskList() = default ;
        RiskList& operator=(const RiskList &) = default ;
        RiskList& operator=(RiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->gradeType_ == nullptr && this->health_ == nullptr && this->instanceId_ == nullptr && this->lastAlarmTime_ == nullptr && this->levelType_ == nullptr
        && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr && this->relationList_ == nullptr && this->reportTips_ == nullptr
        && this->reportType_ == nullptr && this->reportValue_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline RiskList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // gradeType Field Functions 
        bool hasGradeType() const { return this->gradeType_ != nullptr;};
        void deleteGradeType() { this->gradeType_ = nullptr;};
        inline string getGradeType() const { DARABONBA_PTR_GET_DEFAULT(gradeType_, "") };
        inline RiskList& setGradeType(string gradeType) { DARABONBA_PTR_SET_VALUE(gradeType_, gradeType) };


        // health Field Functions 
        bool hasHealth() const { return this->health_ != nullptr;};
        void deleteHealth() { this->health_ = nullptr;};
        inline bool getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, false) };
        inline RiskList& setHealth(bool health) { DARABONBA_PTR_SET_VALUE(health_, health) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline RiskList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // lastAlarmTime Field Functions 
        bool hasLastAlarmTime() const { return this->lastAlarmTime_ != nullptr;};
        void deleteLastAlarmTime() { this->lastAlarmTime_ = nullptr;};
        inline int64_t getLastAlarmTime() const { DARABONBA_PTR_GET_DEFAULT(lastAlarmTime_, 0L) };
        inline RiskList& setLastAlarmTime(int64_t lastAlarmTime) { DARABONBA_PTR_SET_VALUE(lastAlarmTime_, lastAlarmTime) };


        // levelType Field Functions 
        bool hasLevelType() const { return this->levelType_ != nullptr;};
        void deleteLevelType() { this->levelType_ = nullptr;};
        inline int64_t getLevelType() const { DARABONBA_PTR_GET_DEFAULT(levelType_, 0L) };
        inline RiskList& setLevelType(int64_t levelType) { DARABONBA_PTR_SET_VALUE(levelType_, levelType) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
        inline RiskList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RiskList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline RiskList& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // relationList Field Functions 
        bool hasRelationList() const { return this->relationList_ != nullptr;};
        void deleteRelationList() { this->relationList_ = nullptr;};
        inline const vector<string> & getRelationList() const { DARABONBA_PTR_GET_CONST(relationList_, vector<string>) };
        inline vector<string> getRelationList() { DARABONBA_PTR_GET(relationList_, vector<string>) };
        inline RiskList& setRelationList(const vector<string> & relationList) { DARABONBA_PTR_SET_VALUE(relationList_, relationList) };
        inline RiskList& setRelationList(vector<string> && relationList) { DARABONBA_PTR_SET_RVALUE(relationList_, relationList) };


        // reportTips Field Functions 
        bool hasReportTips() const { return this->reportTips_ != nullptr;};
        void deleteReportTips() { this->reportTips_ = nullptr;};
        inline string getReportTips() const { DARABONBA_PTR_GET_DEFAULT(reportTips_, "") };
        inline RiskList& setReportTips(string reportTips) { DARABONBA_PTR_SET_VALUE(reportTips_, reportTips) };


        // reportType Field Functions 
        bool hasReportType() const { return this->reportType_ != nullptr;};
        void deleteReportType() { this->reportType_ = nullptr;};
        inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
        inline RiskList& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


        // reportValue Field Functions 
        bool hasReportValue() const { return this->reportValue_ != nullptr;};
        void deleteReportValue() { this->reportValue_ = nullptr;};
        inline string getReportValue() const { DARABONBA_PTR_GET_DEFAULT(reportValue_, "") };
        inline RiskList& setReportValue(string reportValue) { DARABONBA_PTR_SET_VALUE(reportValue_, reportValue) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline RiskList& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RiskList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RiskList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<string> gradeType_ {};
        shared_ptr<bool> health_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> lastAlarmTime_ {};
        shared_ptr<int64_t> levelType_ {};
        shared_ptr<int64_t> modifiedTime_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> owner_ {};
        shared_ptr<vector<string>> relationList_ {};
        shared_ptr<string> reportTips_ {};
        shared_ptr<string> reportType_ {};
        shared_ptr<string> reportValue_ {};
        shared_ptr<int64_t> status_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->riskList_ == nullptr
        && this->total_ == nullptr; };
      // riskList Field Functions 
      bool hasRiskList() const { return this->riskList_ != nullptr;};
      void deleteRiskList() { this->riskList_ = nullptr;};
      inline const vector<Data::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<Data::RiskList>) };
      inline vector<Data::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<Data::RiskList>) };
      inline Data& setRiskList(const vector<Data::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
      inline Data& setRiskList(vector<Data::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::RiskList>> riskList_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetRiskListResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRiskListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRiskListResponseBody::Data) };
    inline GetRiskListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRiskListResponseBody::Data) };
    inline GetRiskListResponseBody& setData(const GetRiskListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRiskListResponseBody& setData(GetRiskListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRiskListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRiskListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRiskListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> code_ {};
    shared_ptr<GetRiskListResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
