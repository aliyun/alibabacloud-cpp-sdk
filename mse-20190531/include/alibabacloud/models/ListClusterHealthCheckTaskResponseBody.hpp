// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERHEALTHCHECKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERHEALTHCHECKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterHealthCheckTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterHealthCheckTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterHealthCheckTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListClusterHealthCheckTaskResponseBody() = default ;
    ListClusterHealthCheckTaskResponseBody(const ListClusterHealthCheckTaskResponseBody &) = default ;
    ListClusterHealthCheckTaskResponseBody(ListClusterHealthCheckTaskResponseBody &&) = default ;
    ListClusterHealthCheckTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterHealthCheckTaskResponseBody() = default ;
    ListClusterHealthCheckTaskResponseBody& operator=(const ListClusterHealthCheckTaskResponseBody &) = default ;
    ListClusterHealthCheckTaskResponseBody& operator=(ListClusterHealthCheckTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
          DARABONBA_PTR_TO_JSON(Replica, replica_);
          DARABONBA_PTR_TO_JSON(RiskList, riskList_);
          DARABONBA_PTR_TO_JSON(Score, score_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
          DARABONBA_PTR_TO_JSON(TotalRisk, totalRisk_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
          DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
          DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
          DARABONBA_PTR_FROM_JSON(Replica, replica_);
          DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
          DARABONBA_PTR_FROM_JSON(Score, score_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
          DARABONBA_PTR_FROM_JSON(TotalRisk, totalRisk_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RiskList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RiskList& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(DescriptionEn, descriptionEn_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Module, module_);
            DARABONBA_PTR_TO_JSON(Mute, mute_);
            DARABONBA_PTR_TO_JSON(NoticeFeature, noticeFeature_);
            DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
            DARABONBA_PTR_TO_JSON(RiskCode, riskCode_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_TO_JSON(RiskName, riskName_);
            DARABONBA_PTR_TO_JSON(RiskNameEn, riskNameEn_);
            DARABONBA_PTR_TO_JSON(RiskType, riskType_);
            DARABONBA_PTR_TO_JSON(Situation, situation_);
            DARABONBA_PTR_TO_JSON(SituationEn, situationEn_);
            DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_TO_JSON(SuggestionEn, suggestionEn_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, RiskList& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(DescriptionEn, descriptionEn_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Module, module_);
            DARABONBA_PTR_FROM_JSON(Mute, mute_);
            DARABONBA_PTR_FROM_JSON(NoticeFeature, noticeFeature_);
            DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
            DARABONBA_PTR_FROM_JSON(RiskCode, riskCode_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
            DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
            DARABONBA_PTR_FROM_JSON(RiskNameEn, riskNameEn_);
            DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
            DARABONBA_PTR_FROM_JSON(Situation, situation_);
            DARABONBA_PTR_FROM_JSON(SituationEn, situationEn_);
            DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
            DARABONBA_PTR_FROM_JSON(SuggestionEn, suggestionEn_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
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
          virtual bool empty() const override { return this->description_ == nullptr
        && this->descriptionEn_ == nullptr && this->id_ == nullptr && this->module_ == nullptr && this->mute_ == nullptr && this->noticeFeature_ == nullptr
        && this->primaryUser_ == nullptr && this->riskCode_ == nullptr && this->riskLevel_ == nullptr && this->riskName_ == nullptr && this->riskNameEn_ == nullptr
        && this->riskType_ == nullptr && this->situation_ == nullptr && this->situationEn_ == nullptr && this->suggestion_ == nullptr && this->suggestionEn_ == nullptr
        && this->taskId_ == nullptr && this->type_ == nullptr && this->values_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline RiskList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // descriptionEn Field Functions 
          bool hasDescriptionEn() const { return this->descriptionEn_ != nullptr;};
          void deleteDescriptionEn() { this->descriptionEn_ = nullptr;};
          inline string getDescriptionEn() const { DARABONBA_PTR_GET_DEFAULT(descriptionEn_, "") };
          inline RiskList& setDescriptionEn(string descriptionEn) { DARABONBA_PTR_SET_VALUE(descriptionEn_, descriptionEn) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
          inline RiskList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // module Field Functions 
          bool hasModule() const { return this->module_ != nullptr;};
          void deleteModule() { this->module_ = nullptr;};
          inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
          inline RiskList& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


          // mute Field Functions 
          bool hasMute() const { return this->mute_ != nullptr;};
          void deleteMute() { this->mute_ = nullptr;};
          inline bool getMute() const { DARABONBA_PTR_GET_DEFAULT(mute_, false) };
          inline RiskList& setMute(bool mute) { DARABONBA_PTR_SET_VALUE(mute_, mute) };


          // noticeFeature Field Functions 
          bool hasNoticeFeature() const { return this->noticeFeature_ != nullptr;};
          void deleteNoticeFeature() { this->noticeFeature_ = nullptr;};
          inline bool getNoticeFeature() const { DARABONBA_PTR_GET_DEFAULT(noticeFeature_, false) };
          inline RiskList& setNoticeFeature(bool noticeFeature) { DARABONBA_PTR_SET_VALUE(noticeFeature_, noticeFeature) };


          // primaryUser Field Functions 
          bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
          void deletePrimaryUser() { this->primaryUser_ = nullptr;};
          inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
          inline RiskList& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


          // riskCode Field Functions 
          bool hasRiskCode() const { return this->riskCode_ != nullptr;};
          void deleteRiskCode() { this->riskCode_ = nullptr;};
          inline string getRiskCode() const { DARABONBA_PTR_GET_DEFAULT(riskCode_, "") };
          inline RiskList& setRiskCode(string riskCode) { DARABONBA_PTR_SET_VALUE(riskCode_, riskCode) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
          inline RiskList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


          // riskName Field Functions 
          bool hasRiskName() const { return this->riskName_ != nullptr;};
          void deleteRiskName() { this->riskName_ = nullptr;};
          inline string getRiskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
          inline RiskList& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


          // riskNameEn Field Functions 
          bool hasRiskNameEn() const { return this->riskNameEn_ != nullptr;};
          void deleteRiskNameEn() { this->riskNameEn_ = nullptr;};
          inline string getRiskNameEn() const { DARABONBA_PTR_GET_DEFAULT(riskNameEn_, "") };
          inline RiskList& setRiskNameEn(string riskNameEn) { DARABONBA_PTR_SET_VALUE(riskNameEn_, riskNameEn) };


          // riskType Field Functions 
          bool hasRiskType() const { return this->riskType_ != nullptr;};
          void deleteRiskType() { this->riskType_ = nullptr;};
          inline string getRiskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
          inline RiskList& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


          // situation Field Functions 
          bool hasSituation() const { return this->situation_ != nullptr;};
          void deleteSituation() { this->situation_ = nullptr;};
          inline string getSituation() const { DARABONBA_PTR_GET_DEFAULT(situation_, "") };
          inline RiskList& setSituation(string situation) { DARABONBA_PTR_SET_VALUE(situation_, situation) };


          // situationEn Field Functions 
          bool hasSituationEn() const { return this->situationEn_ != nullptr;};
          void deleteSituationEn() { this->situationEn_ = nullptr;};
          inline string getSituationEn() const { DARABONBA_PTR_GET_DEFAULT(situationEn_, "") };
          inline RiskList& setSituationEn(string situationEn) { DARABONBA_PTR_SET_VALUE(situationEn_, situationEn) };


          // suggestion Field Functions 
          bool hasSuggestion() const { return this->suggestion_ != nullptr;};
          void deleteSuggestion() { this->suggestion_ = nullptr;};
          inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
          inline RiskList& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


          // suggestionEn Field Functions 
          bool hasSuggestionEn() const { return this->suggestionEn_ != nullptr;};
          void deleteSuggestionEn() { this->suggestionEn_ = nullptr;};
          inline string getSuggestionEn() const { DARABONBA_PTR_GET_DEFAULT(suggestionEn_, "") };
          inline RiskList& setSuggestionEn(string suggestionEn) { DARABONBA_PTR_SET_VALUE(suggestionEn_, suggestionEn) };


          // taskId Field Functions 
          bool hasTaskId() const { return this->taskId_ != nullptr;};
          void deleteTaskId() { this->taskId_ = nullptr;};
          inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
          inline RiskList& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
          inline RiskList& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
          inline RiskList& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


        protected:
          // The description.
          shared_ptr<string> description_ {};
          shared_ptr<string> descriptionEn_ {};
          // The ID.
          shared_ptr<int32_t> id_ {};
          // A redundant parameter.
          shared_ptr<string> module_ {};
          // Indicates whether the risk item notification feature is disabled.
          // 
          // *   true: disabled
          // *   false: enabled
          shared_ptr<bool> mute_ {};
          // A redundant parameter.
          shared_ptr<bool> noticeFeature_ {};
          // The ID of the user to which the cluster belongs.
          shared_ptr<string> primaryUser_ {};
          // The risk code.
          shared_ptr<string> riskCode_ {};
          // The severity of the risk. Valid values:
          // 
          // *   HIGH: high risk
          // *   MID: medium risk
          // *   LOW: low risk
          shared_ptr<string> riskLevel_ {};
          // The name of the risk.
          shared_ptr<string> riskName_ {};
          shared_ptr<string> riskNameEn_ {};
          // The type of the risk.
          shared_ptr<string> riskType_ {};
          // The situation.
          shared_ptr<string> situation_ {};
          shared_ptr<string> situationEn_ {};
          // The suggestion.
          shared_ptr<string> suggestion_ {};
          shared_ptr<string> suggestionEn_ {};
          // The ID of the associated parent task.
          shared_ptr<int64_t> taskId_ {};
          // A redundant parameter.
          shared_ptr<int32_t> type_ {};
          // A redundant parameter.
          shared_ptr<string> values_ {};
        };

        virtual bool empty() const override { return this->appVersion_ == nullptr
        && this->chargeType_ == nullptr && this->clusterType_ == nullptr && this->createTime_ == nullptr && this->id_ == nullptr && this->imageVersion_ == nullptr
        && this->instanceId_ == nullptr && this->primaryUser_ == nullptr && this->replica_ == nullptr && this->riskList_ == nullptr && this->score_ == nullptr
        && this->spec_ == nullptr && this->status_ == nullptr && this->totalItem_ == nullptr && this->totalRisk_ == nullptr && this->type_ == nullptr
        && this->updateTime_ == nullptr && this->versionCode_ == nullptr; };
        // appVersion Field Functions 
        bool hasAppVersion() const { return this->appVersion_ != nullptr;};
        void deleteAppVersion() { this->appVersion_ = nullptr;};
        inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
        inline Result& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


        // chargeType Field Functions 
        bool hasChargeType() const { return this->chargeType_ != nullptr;};
        void deleteChargeType() { this->chargeType_ = nullptr;};
        inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
        inline Result& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


        // clusterType Field Functions 
        bool hasClusterType() const { return this->clusterType_ != nullptr;};
        void deleteClusterType() { this->clusterType_ = nullptr;};
        inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
        inline Result& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline Result& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // imageVersion Field Functions 
        bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
        void deleteImageVersion() { this->imageVersion_ = nullptr;};
        inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
        inline Result& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Result& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // primaryUser Field Functions 
        bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
        void deletePrimaryUser() { this->primaryUser_ = nullptr;};
        inline string getPrimaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
        inline Result& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


        // replica Field Functions 
        bool hasReplica() const { return this->replica_ != nullptr;};
        void deleteReplica() { this->replica_ = nullptr;};
        inline string getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, "") };
        inline Result& setReplica(string replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


        // riskList Field Functions 
        bool hasRiskList() const { return this->riskList_ != nullptr;};
        void deleteRiskList() { this->riskList_ = nullptr;};
        inline const vector<Result::RiskList> & getRiskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<Result::RiskList>) };
        inline vector<Result::RiskList> getRiskList() { DARABONBA_PTR_GET(riskList_, vector<Result::RiskList>) };
        inline Result& setRiskList(const vector<Result::RiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
        inline Result& setRiskList(vector<Result::RiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline Result& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Result& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // totalItem Field Functions 
        bool hasTotalItem() const { return this->totalItem_ != nullptr;};
        void deleteTotalItem() { this->totalItem_ = nullptr;};
        inline int32_t getTotalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
        inline Result& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


        // totalRisk Field Functions 
        bool hasTotalRisk() const { return this->totalRisk_ != nullptr;};
        void deleteTotalRisk() { this->totalRisk_ = nullptr;};
        inline int32_t getTotalRisk() const { DARABONBA_PTR_GET_DEFAULT(totalRisk_, 0) };
        inline Result& setTotalRisk(int32_t totalRisk) { DARABONBA_PTR_SET_VALUE(totalRisk_, totalRisk) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Result& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline Result& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


      protected:
        // The complete version number.
        shared_ptr<string> appVersion_ {};
        // The billing method.
        shared_ptr<string> chargeType_ {};
        // The type of the cluster.
        shared_ptr<string> clusterType_ {};
        // The time when the task was created.
        shared_ptr<string> createTime_ {};
        // The ID.
        shared_ptr<int32_t> id_ {};
        // A redundant parameter.
        shared_ptr<string> imageVersion_ {};
        // The ID of the instance.
        shared_ptr<string> instanceId_ {};
        // The ID of the user to which the instance belongs.
        shared_ptr<string> primaryUser_ {};
        // The number of nodes in the instance.
        shared_ptr<string> replica_ {};
        // The list of risk items.
        shared_ptr<vector<Result::RiskList>> riskList_ {};
        // The total score.
        shared_ptr<int32_t> score_ {};
        // The specifications.
        shared_ptr<string> spec_ {};
        // The status of the task.
        shared_ptr<string> status_ {};
        // The total number of check items.
        shared_ptr<int32_t> totalItem_ {};
        // The total number of risk items.
        shared_ptr<int32_t> totalRisk_ {};
        // A redundant parameter.
        shared_ptr<string> type_ {};
        // The last update time.
        shared_ptr<string> updateTime_ {};
        // The version number.
        shared_ptr<string> versionCode_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The list of health check tasks.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of returned entries.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListClusterHealthCheckTaskResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListClusterHealthCheckTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListClusterHealthCheckTaskResponseBody::Data) };
    inline ListClusterHealthCheckTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListClusterHealthCheckTaskResponseBody::Data) };
    inline ListClusterHealthCheckTaskResponseBody& setData(const ListClusterHealthCheckTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListClusterHealthCheckTaskResponseBody& setData(ListClusterHealthCheckTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline ListClusterHealthCheckTaskResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline ListClusterHealthCheckTaskResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListClusterHealthCheckTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListClusterHealthCheckTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListClusterHealthCheckTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterHealthCheckTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListClusterHealthCheckTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. A value of 200 is returned if the request was successful.
    shared_ptr<int32_t> code_ {};
    // The details of the data.
    shared_ptr<ListClusterHealthCheckTaskResponseBody::Data> data_ {};
    // The dynamic part in the error message.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic part in the error message. This parameter is used to replace the \\*\\*%s\\*\\* variable in the **ErrMessage** parameter.
    // 
    // > If the return value of the **ErrMessage** parameter is **The Value of Input Parameter %s is not valid** and the return value of the **DynamicMessage** parameter is **DtsJobId**, the specified **DtsJobId** parameter is invalid.
    shared_ptr<string> dynamicMessage_ {};
    // The error code returned if the request failed. Take note of the following rules:
    // 
    // *   The **ErrorCode** parameter is not returned if the request is successful.
    // *   The **ErrorCode** parameter is returned if the request fails. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
